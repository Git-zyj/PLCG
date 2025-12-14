/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106964
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106964 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106964
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_11 = (max(var_11, (((-10890 <= ((((arr_8 [i_0] [i_2] [i_2] [i_3] [i_2] [i_2]) && (((var_4 ? (arr_3 [i_0]) : -21853)))))))))));

                            for (int i_4 = 4; i_4 < 19;i_4 += 1)
                            {
                                var_12 *= min(14978, (((5603600203596130899 || (((var_3 ? var_6 : var_4)))))));
                                arr_12 [i_0] [i_1] [i_2 + 1] [i_1] [i_4] [8] = (arr_4 [i_0] [i_1]);
                            }
                            var_13 = (((((((((((arr_2 [i_0]) + 2147483647)) >> (((arr_9 [i_0] [i_1] [i_2] [i_3]) - 10153))))) ? -8421454864456725623 : (!24916)))) != -4200850347415418413));
                        }
                    }
                }
                var_14 |= (((min(7624, var_1)) != (((arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) >> (((((arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) >> (var_3 - 2594173564531801667))) - 10512))))));
            }
        }
    }
    var_15 = (((var_7 ? var_5 : ((var_5 ? -9223372036854775805 : var_3)))) ^ var_4);
    #pragma endscop
}
