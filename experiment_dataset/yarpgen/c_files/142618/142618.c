/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142618
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142618 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142618
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((-((-6168332296791465118 ? var_7 : -8))));
    var_12 = 0;
    var_13 = (var_2 != (min(((max(var_2, -1))), ((var_3 ? var_1 : var_6)))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            var_14 ^= (((((((-(arr_5 [i_0] [i_0] [i_0])))) / ((1813972198 ? 24 : 1856944602983198129)))) | (((~((-6168332296791465118 ? var_0 : -108)))))));
            var_15 = ((!(((var_3 ? var_2 : ((((arr_2 [i_0] [i_1]) ? var_5 : 0))))))));

            for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
            {
                var_16 = ((((min(-9223372036854775807, ((((arr_1 [i_0] [i_0]) ? var_10 : 1)))))) ? (((-6168332296791465118 ? ((-22822 ? var_10 : var_5)) : var_7))) : ((227 * (((min(var_9, 22822))))))));
                arr_8 [0] [i_0] [i_1] [i_0] = (((((22831 || 10685596266397864869) - (arr_3 [i_0] [i_0])))) ? var_7 : 1);
                var_17 &= ((((max((var_7 + var_1), ((var_9 ? -1236 : 1))))) ? ((((9223372036854775807 ? var_3 : var_6)))) : ((-1665 ? ((var_10 / (arr_6 [i_0] [8] [i_0] [8]))) : ((-1738213107 ? var_5 : 9223372036854775807))))));
            }
            for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
            {
                var_18 = ((+((var_1 ? (arr_0 [i_0]) : var_7))));

                for (int i_4 = 1; i_4 < 1;i_4 += 1)
                {
                    var_19 = (min(var_19, (((var_9 >> ((((((max(11152474842673829162, (arr_6 [4] [i_1] [i_1] [i_1])))) ? ((max(1, 52))) : (arr_13 [i_4] [i_4] [i_4 - 1] [i_4 - 1] [i_4 - 1]))) - 40)))))));
                    var_20 = (((((var_7 ? var_9 : var_7))) > (arr_1 [i_0] [i_1])));
                    arr_15 [1] [i_0] = 4226314327576756098;
                }
            }
            var_21 ^= (129305729 / 1);
        }
        var_22 = (min((min(var_0, ((-(arr_13 [i_0] [i_0] [i_0] [i_0] [i_0]))))), (min((var_2 || 1), ((var_1 >> (((arr_11 [i_0] [i_0] [i_0] [i_0]) - 26909))))))));
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 13;i_6 += 1)
            {
                for (int i_7 = 3; i_7 < 10;i_7 += 1)
                {
                    {
                        arr_26 [i_0] [1] [i_0] [i_0] = 19516;

                        for (int i_8 = 0; i_8 < 13;i_8 += 1)
                        {
                            var_23 = (((765287140748250578 || var_0) ? (((1 ? 22 : 0))) : (min(var_6, var_1))));
                            var_24 = (min(var_24, (((983342315 ? ((max(var_1, (1 ^ var_4)))) : (((arr_25 [9] [i_7 - 2] [i_7 - 1] [i_7 - 1]) - 240035948)))))));
                            var_25 = (max(var_25, ((((((((var_8 ? 403898249 : 1)) | (((var_1 / (arr_25 [i_5] [i_5] [i_5] [6]))))))) <= (max(((max(var_3, -19516))), -1594485135618882878)))))));
                        }
                        var_26 = (arr_28 [i_7] [i_7] [i_7] [i_0] [i_7 - 3] [i_7]);
                    }
                }
            }
        }
        var_27 = (~(((arr_2 [i_0] [0]) ? ((min(var_9, 1))) : (arr_5 [4] [i_0] [i_0]))));
    }
    #pragma endscop
}
