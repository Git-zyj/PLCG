/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146752
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146752 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146752
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] = (arr_0 [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_15 -= var_10;
                    var_16 = (((!9223372036854775807) ? 0 : ((var_7 >> (7823 - 7820)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_17 = ((arr_14 [15] [i_1 - 1] [i_1] [i_1] [i_1] [i_1 + 1]) >= var_3);
                                var_18 *= (((arr_15 [4] [i_1 + 1] [i_4] [i_1 + 1] [i_1]) ? (arr_6 [i_0] [i_0] [i_2] [i_3]) : -1583580584));
                            }
                        }
                    }
                }
            }
        }
        var_19 *= (((0 ? -7575509337220216684 : var_14)));
        var_20 = (-6511413897854350493 >= var_0);
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 23;i_5 += 1)
    {
        arr_19 [1] [i_5] = 0;
        arr_20 [i_5] [i_5] = (((arr_4 [i_5] [i_5] [i_5]) ? 72 : -16072));
    }
    for (int i_6 = 3; i_6 < 16;i_6 += 1)
    {
        arr_23 [i_6] = (((((arr_22 [i_6]) < -2744000825132013415))));

        for (int i_7 = 0; i_7 < 20;i_7 += 1)
        {
            arr_27 [i_6] = ((!(((2744000825132013414 ? 0 : ((4294967295 ? -1496420567 : 1496420567)))))));
            var_21 = -16072;
        }
        var_22 = ((-102 ? ((((((32767 ? 1006632960 : 0))) ^ (min(-2744000825132013415, 38272684))))) : (arr_10 [i_6] [i_6] [i_6] [15])));
        arr_28 [i_6 + 4] [i_6] = ((-(max(1034159618, (arr_24 [i_6 + 1] [i_6 + 1])))));
    }
    var_23 ^= var_12;
    var_24 = (max(((var_3 ? var_4 : 185)), (27579184 / 1496420567)));
    #pragma endscop
}
