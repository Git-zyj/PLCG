/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17684
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_13;
    var_17 = (max(var_17, ((((~25) > var_6)))));
    var_18 = ((((var_10 ? 1 : (39 < var_15))) + (~var_13)));
    var_19 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = (((min((~216), (((216 && (arr_0 [i_0])))))) >= ((var_5 & (arr_4 [i_1 - 1] [i_1 - 1])))));
                var_20 |= 65535;

                for (int i_2 = 1; i_2 < 21;i_2 += 1)
                {
                    var_21 = 65528;
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_22 |= 40;
                                arr_15 [i_0] [i_1] [16] [16] [i_3] [i_2] [13] = (~(arr_8 [i_0] [i_1] [i_2] [7] [i_4] [i_2 + 1]));
                            }
                        }
                    }
                    var_23 ^= max((max((!var_13), (~169972736))), 216);
                }
                arr_16 [i_0] [i_1 - 2] = ((((min((max((arr_3 [i_0]), 215)), var_13))) - ((((arr_0 [i_0]) == -var_4)))));
            }
        }
    }
    #pragma endscop
}
