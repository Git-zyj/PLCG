/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158733
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158733 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158733
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {
            {
                var_19 = (((((-(max(var_12, var_15))))) ? ((((((arr_2 [i_0]) << 1))) + (max(var_0, (arr_3 [2] [i_1] [i_1]))))) : ((((min(1, 1010649529)) * -1010649527)))));
                arr_6 [14] [i_1] [i_0] = ((-(max(var_18, (((arr_1 [i_0]) ? var_3 : var_8))))));
                var_20 *= -1;
            }
        }
    }
    var_21 *= max((min(((1 ? -1698547525 : var_0)), ((min(var_1, var_17))))), ((max(1, 32761))));

    for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
    {
        arr_10 [i_2] = ((-1057607157 ? ((min(var_2, var_1))) : (min(1, var_11))));
        arr_11 [2] &= (min(var_4, (max(1, (arr_7 [i_2])))));
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
    {
        arr_15 [i_3] = min((arr_0 [i_3]), -28685);
        arr_16 [i_3] = (((((-(arr_14 [i_3])))) * (0 & 695358270)));
    }
    for (int i_4 = 0; i_4 < 20;i_4 += 1) /* same iter space */
    {
        arr_20 [i_4] = (max((((arr_19 [i_4] [i_4]) ^ (arr_19 [i_4] [i_4]))), (((arr_19 [i_4] [i_4]) ? (arr_19 [i_4] [i_4]) : var_9))));
        var_22 *= (((((arr_19 [i_4] [i_4]) ? -var_6 : (9223372036854775807 / var_9))) < ((min(var_17, 4294967286)))));
    }
    for (int i_5 = 0; i_5 < 20;i_5 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 20;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 20;i_7 += 1)
            {
                {
                    var_23 = ((!(1 != var_15)));
                    var_24 = max((min(94121621, (arr_27 [i_7]))), 1);

                    for (int i_8 = 2; i_8 < 19;i_8 += 1)
                    {
                        arr_32 [i_6] [i_6] [i_7] [i_8 - 2] = 1015666758933762881;

                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            arr_35 [i_5] [i_8] [i_7] [i_6] [i_5] &= ((-(min(-var_16, 4294967295))));
                            var_25 *= (min((min(-22634, (max(var_8, var_16)))), ((min(1, (arr_31 [i_8 + 1] [i_8] [1] [i_8 - 2]))))));
                        }
                        for (int i_10 = 0; i_10 < 20;i_10 += 1)
                        {
                            var_26 = (max(var_26, -var_6));
                            arr_38 [i_5] [i_6] = ((-((((arr_31 [i_8 + 1] [i_8 + 1] [i_8] [i_8 + 1]) < ((4294967292 ? var_12 : -7042)))))));
                        }
                        var_27 = var_18;
                        arr_39 [i_6] [i_7] [i_7] [i_6] [i_6] = ((((((((var_1 ? var_12 : (arr_25 [i_6] [i_8])))) ^ (((arr_37 [i_5] [i_6] [i_6] [i_7] [i_6]) & var_2))))) ? (((min(var_10, 1)))) : (((var_17 & var_0) & (((1 ? 4200845653 : 94121643)))))));
                    }
                    var_28 -= ((((((4294967295 % 3353673811882552362) << (((max(2147483647, 18446744073709551612)) - 18446744073709551605))))) ? (((var_11 ? 94121604 : 4294967294))) : (arr_24 [i_6])));
                }
            }
        }
        var_29 = ((((((var_12 && 1) ? (!1681094521) : (max(var_3, var_5))))) && (((((arr_24 [15]) || var_7)) && 1))));
    }
    #pragma endscop
}
