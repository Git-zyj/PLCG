/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158984
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158984 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158984
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, (((((((13 % 3) / var_4))) ? ((((min(12853050891165736213, 12853050891165736213)) == (var_13 | 102)))) : ((min(8191, -108))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_16 *= (((arr_3 [i_0]) ? ((((18446744073709551593 >= (arr_0 [i_0]))))) : ((-118 + (max((arr_8 [i_0] [i_2]), 7126681794163567197))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_3] [i_2] [i_3] [i_4] = (arr_9 [i_0] [i_1] [i_2] [i_3] [i_3] [i_4]);
                                var_17 = (min(var_17, ((4235652731490608335 | ((-8943627310138135144 ? -32752 : 12853050891165736229))))));
                            }
                        }
                    }
                    arr_16 [i_0] = (min((((((min(7126681794163567197, -2094319760))) != (max(8388607, 17692353271945333803))))), (min((arr_4 [i_0] [i_1] [i_2]), 0))));
                }
            }
        }
    }
    var_18 = (max(var_0, (min(-8204, 2))));
    #pragma endscop
}
