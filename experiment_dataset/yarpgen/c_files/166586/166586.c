/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166586
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166586 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166586
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 ^= (var_6 || -358236487);
    var_13 &= ((var_3 ? -358236487 : ((3848 ? ((var_6 << (var_1 - 5196))) : ((min(var_2, var_3)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    arr_6 [i_0] = min((arr_1 [i_2]), (arr_1 [i_1]));
                    arr_7 [i_0] [i_0] [i_2] [i_1] = (((!0) < ((((59751 ? (arr_3 [i_0] [i_0]) : 358236487))))));
                    arr_8 [i_0] [i_1] [1] [i_1] = -1225197552;

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        var_14 = (((arr_4 [i_0] [i_1] [3] [i_3]) ? (arr_4 [i_0] [i_1] [i_2] [i_3]) : -3344459952871755416));
                        var_15 = ((116 ? 21879 : 1048176728));
                        var_16 = (25649 % 32767);
                        var_17 = ((-358236487 > ((3840 ? 51450 : (arr_10 [i_0])))));
                    }
                }
                var_18 = var_1;
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 11;i_5 += 1)
                    {
                        {
                            arr_16 [i_0] [i_4] [i_1] [i_0] [i_0] = (((((12678 ? 1225197541 : (arr_9 [i_0] [i_0] [i_4] [i_1] [i_5 + 3])))) ? ((min((-32767 || -94), 0))) : 865566608));
                            var_19 = (16725058486730482710 - -1298679053);
                            arr_17 [i_5] [i_0] [i_4] [i_1] [i_0] [i_0] = 1;
                        }
                    }
                }
                arr_18 [i_0] [i_0] = ((!(((arr_2 [i_0] [i_1] [i_0]) >= (arr_1 [i_0])))));
            }
        }
    }
    var_20 = var_1;
    #pragma endscop
}
