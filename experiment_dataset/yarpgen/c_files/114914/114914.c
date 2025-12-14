/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114914
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_12;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        var_15 = 1756274915;
                        var_16 = (max(var_16, (((!((min((((arr_9 [i_3] [i_2] [i_1] [i_0]) + (arr_5 [16]))), (!var_10)))))))));
                    }
                    var_17 = (min(((~(arr_1 [i_2]))), 3313361445));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 20;i_5 += 1)
                        {
                            {
                                var_18 = 3313361445;
                                arr_15 [5] [i_1] [i_4] [11] [i_5] = ((-12718 & var_13) | (((min((arr_2 [i_1]), 981605846)) & (((631817505430939646 ? (arr_11 [i_0] [7] [i_4] [i_5]) : (arr_7 [i_0 - 2])))))));
                                var_19 = ((10866 ? (min((arr_2 [i_0]), 5936121173171038909)) : (arr_5 [i_5])));
                                var_20 = (min((min((((arr_13 [i_0] [i_1] [i_1] [i_5] [19]) ? 8 : 29796)), var_3)), ((min((arr_7 [10]), ((min(-25522, (arr_14 [i_0 - 1] [i_1] [14] [1] [i_5])))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
