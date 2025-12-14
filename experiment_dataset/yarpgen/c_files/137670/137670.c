/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137670
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_6;
    var_13 |= 4153945127;
    var_14 = ((((((((var_1 + 2147483647) >> (((-32767 - 1) + 32791))))) && 141022169)) ? (var_6 != -13412) : var_11));
    var_15 = var_6;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_16 = (max(var_16, (((((243 && 0) * (((-32767 - 1) ? 0 : var_1))))))));
                    var_17 = (min(var_17, var_3));

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        var_18 = var_9;
                        var_19 |= ((46 ^ ((-123 ? -105 : 3194287480))));
                        arr_11 [i_3 - 1] [i_2] [i_2] [i_0] = ((var_5 != ((((arr_2 [i_0]) ? 5 : var_1)))));
                    }
                    for (int i_4 = 4; i_4 < 21;i_4 += 1)
                    {

                        for (int i_5 = 3; i_5 < 20;i_5 += 1)
                        {
                            var_20 = (max(var_20, ((((((((4153945127 == (arr_14 [i_0] [0] [i_2] [i_4 - 1] [i_4] [i_5 - 1]))) ? (65535 ^ 9) : ((43 ? 1 : 0))))) ? var_0 : var_7)))));
                            var_21 = (max(var_21, 3788074661980545403));
                            var_22 = 110;
                        }
                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            var_23 = (max(var_23, (((4153945127 >> (18446744073709551615 - 18446744073709551573))))));
                            var_24 = (((((3194287490 ? var_8 : (arr_13 [i_4 + 1] [i_2] [i_4] [i_4 - 4])))) ? ((41848 ? 0 : (((max(254, 0)))))) : ((-((0 ? (arr_3 [i_0] [i_2]) : 17175054944625537433))))));
                            arr_18 [i_0] [i_2] = ((((((arr_1 [13] [i_2]) + var_2))) ? (((arr_5 [8] [i_4] [4]) ? 8 : (((225 ? var_7 : var_9))))) : (((15 | ((var_3 ? var_6 : var_7)))))));
                        }
                        var_25 = ((var_11 ? (((var_0 & 536870911) ? (((-35 ? 1 : 20460))) : ((21 ? 11 : 0)))) : 3194287490));
                        arr_19 [10] [13] [i_2] [i_2] [i_0] = ((10188 ? (((min(1024, 127)))) : (((((30618 >= (arr_13 [i_0] [i_2] [i_2] [18])))) & (!16829)))));
                        var_26 = 1;
                    }
                }
            }
        }
    }
    #pragma endscop
}
