/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161349
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_15 = (((!554510372707180584) ? (((arr_5 [i_4] [i_1] [i_2 + 1] [i_3 + 1]) ? (arr_5 [i_0] [i_1] [i_2 + 1] [i_3 + 1]) : var_5)) : (((min((arr_5 [i_4] [i_4] [i_2 + 1] [i_3 - 1]), (arr_5 [i_0] [i_1] [i_2 + 1] [i_3 + 2])))))));
                                var_16 = -31295;
                                var_17 = (max(((((255 == (arr_3 [i_2 + 1]))) ? (max(67108863, 57846)) : (((54 <= (arr_10 [i_3 + 1] [i_4] [i_3 - 1] [i_3])))))), ((max((arr_4 [i_1 + 2] [i_3 + 2] [i_1 + 2]), 57848)))));
                            }
                        }
                    }
                    var_18 = max(1, 31295);
                }
            }
        }
    }
    var_19 = ((((min(((186 ? var_6 : 173)), (var_10 && var_14)))) ? (var_6 / 73) : var_11));
    var_20 = var_13;
    #pragma endscop
}
