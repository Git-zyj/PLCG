/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12980
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12980 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12980
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 10;i_2 += 1)
            {
                {
                    var_16 = min(((11992874815782868431 ? 18446744073709551615 : 11992874815782868431)), (((18446744073709551615 ? 2147483647 : 47590))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_4] [0] [4] [i_4] |= max((max(0, 6453869257926683184)), (((6254727347596245799 ? -1024 : 2147483647))));
                                var_17 = (((!0) ? ((~((241 ? 12030753041088600238 : (-2147483647 - 1))))) : (max(18446744073709551615, -1023))));
                                arr_15 [i_1] [i_1] [i_2 + 1] [i_1] [i_2 + 2] [i_2] = (min((min(1, 2147483643)), ((min(194, 55940)))));
                                var_18 -= ((((min(((min(1, -1020))), 14867))) ? (((min(30828, 13)))) : ((min(0, 77)))));
                            }
                        }
                    }
                    var_19 = (max(var_19, ((max(((min(38084, 25539))), ((14 ? 39702 : 4)))))));
                    var_20 = (min(var_20, ((112 ? ((1370171150 ? -1024 : ((1 ? 18446744073709551609 : 11992874815782868431)))) : ((18 ? 13 : 1932405082872475094))))));
                    var_21 |= (min(((min(11, 29561))), 18446744073709551615));
                }
            }
        }
    }
    var_22 *= var_1;
    #pragma endscop
}
