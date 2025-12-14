/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176980
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176980 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176980
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 ^= (((min((((var_11 + 2147483647) >> (var_8 - 1943019346368937573))), 193)) >> (var_1 - 99)));
    var_15 = var_2;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_16 += -var_0;
        var_17 = (min(var_17, (((-((((!-4556001950708357299) == 32767))))))));
        var_18 = var_3;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_19 = (((-32767 + var_12) % ((max(((max(-910644269, 910644269))), ((var_11 - (arr_5 [i_1] [i_0]))))))));
                    var_20 = min(((var_9 ? (~5105325472770176706) : 394088760)), (-32767 - 1));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_21 |= ((101 << (((max(-8298491232794333590, (arr_12 [2] [i_4 - 1] [i_4] [i_4] [i_4 - 1] [i_3] [2]))) + 150))));
                                arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] = ((var_6 & (((arr_12 [i_0] [i_4 + 1] [i_4 + 1] [i_4] [i_4 + 2] [i_4 - 1] [i_4 + 2]) + (arr_12 [i_0] [i_4 - 2] [i_4 - 2] [i_4 + 2] [i_4 + 2] [i_4] [i_4])))));
                            }
                        }
                    }
                }
            }
        }
        arr_15 [i_0] = ((((min(var_8, var_6))) ? ((+(((arr_1 [i_0]) ? var_12 : var_10)))) : var_11));
    }
    #pragma endscop
}
