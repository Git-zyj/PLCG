/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183117
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_2;
    var_16 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_17 *= ((min((arr_1 [i_0] [i_1]), (-2147483647 - 1))));
                arr_4 [i_0] [i_0] [i_1] = var_11;
                var_18 = (((((arr_0 [i_0]) || 0)) ? ((var_5 ? var_0 : (arr_2 [i_0]))) : (((arr_0 [i_1]) - 1))));

                for (int i_2 = 2; i_2 < 18;i_2 += 1)
                {
                    arr_7 [i_2 + 1] [i_2] [i_2] [i_0] = ((-((((((arr_2 [i_1]) >> 1))) ? 1 : (min(0, 18446744073709551615))))));
                    var_19 = -var_1;
                    var_20 = ((var_4 ? (((((1 >> (((arr_1 [i_1] [i_2]) - 776896178352704360))))) ? ((max((arr_0 [4]), var_7))) : (min(11249136882034644891, var_4)))) : (((-(arr_6 [i_2] [i_2]))))));
                }
                for (int i_3 = 4; i_3 < 18;i_3 += 1)
                {
                    var_21 = (1 ? ((1 ? -1844782562439537444 : 1)) : 18446744073709551615);
                    arr_11 [i_3] = (((min(var_2, (arr_9 [i_3 - 2] [i_3 - 2] [i_0]))) >> (((min(30079, -5135323788259103906)) + 5135323788259103910))));
                    arr_12 [i_3] [i_1] [i_1] [i_1] = (((max(17355928433513304661, 1)) >> ((((var_2 ? (arr_9 [i_3 + 1] [i_3 - 3] [i_3 - 3]) : var_1)) - 11747369683424062427))));
                }

                for (int i_4 = 2; i_4 < 15;i_4 += 1)
                {
                    arr_15 [i_0] [i_1] = var_8;
                    arr_16 [i_4] [i_1] [i_0] = (((1 < 1) % ((-5 ? -29810 : 16601961511270014171))));
                    var_22 = (((-4980759173790857954 || 20) ? ((max(var_2, ((1797879518 ? var_11 : (arr_2 [i_1])))))) : (4294967295 % 1)));
                    arr_17 [i_0] [i_1] [i_4] = var_12;
                }
                /* vectorizable */
                for (int i_5 = 1; i_5 < 1;i_5 += 1) /* same iter space */
                {
                    arr_22 [i_0] [i_0] [i_1] [i_0] = (1844782562439537444 >= -117);
                    var_23 = (((arr_21 [i_5] [i_5 - 1] [i_5 - 1]) || (arr_21 [i_5 - 1] [i_5 - 1] [i_5 - 1])));
                }
                for (int i_6 = 1; i_6 < 1;i_6 += 1) /* same iter space */
                {
                    var_24 = var_14;
                    var_25 = (max(var_25, 1));
                    arr_25 [i_0] [i_1] [i_6 - 1] [i_6] = (((~var_1) == (arr_20 [i_1])));
                }
            }
        }
    }
    var_26 += var_2;
    #pragma endscop
}
