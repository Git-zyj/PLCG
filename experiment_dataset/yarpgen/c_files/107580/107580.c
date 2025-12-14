/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107580
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107580 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107580
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            var_18 = (min(var_18, ((((~var_13) || (arr_4 [i_0] [i_0] [i_0]))))));
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    {
                        arr_12 [10] [i_2] [i_1] [i_0] [i_0] [i_0] = (arr_7 [i_0] [1] [i_2] [i_3]);
                        var_19 = (((arr_0 [i_2 + 1]) == (arr_0 [i_2 + 1])));
                        arr_13 [i_0] [i_0] [i_2 + 1] [i_2 + 1] = ((arr_0 [i_2 + 2]) ? ((12 ? 5396 : 1)) : var_14);
                    }
                }
            }
            arr_14 [i_0] = ((~((4051978909380942193 ? 1150010521533472755 : 58))));
        }

        /* vectorizable */
        for (int i_4 = 3; i_4 < 21;i_4 += 1) /* same iter space */
        {
            arr_18 [i_0] = ((!(((-9223372036854775807 - 1) || 1))));
            arr_19 [i_0] = (arr_9 [i_4 - 1] [i_0]);
            arr_20 [i_0] [7] [i_0] = var_17;
        }
        for (int i_5 = 3; i_5 < 21;i_5 += 1) /* same iter space */
        {
            var_20 ^= (-(arr_4 [i_5] [17] [i_0]));
            arr_24 [i_0] [i_5] = var_8;
            arr_25 [i_5] [i_5 + 4] = ((((((~var_2) ? (!var_14) : var_3))) ? (arr_16 [i_5 - 1]) : (max(131071, -28468057920337724))));
        }
        /* vectorizable */
        for (int i_6 = 3; i_6 < 21;i_6 += 1) /* same iter space */
        {
            var_21 |= 13090026084519442881;

            for (int i_7 = 3; i_7 < 23;i_7 += 1) /* same iter space */
            {
                var_22 = ((!(arr_10 [i_6 - 2])));
                var_23 += ((((arr_23 [i_0]) ? 4 : (arr_22 [i_0] [i_0] [i_0]))));
                var_24 = (max(var_24, (arr_11 [i_0] [i_6] [i_7 - 3] [i_7 - 1] [i_6 + 3] [5])));

                for (int i_8 = 0; i_8 < 25;i_8 += 1)
                {
                    var_25 = ((!((((arr_16 [i_8]) ^ (arr_10 [16]))))));
                    var_26 = arr_9 [i_0] [i_6];
                }
            }
            for (int i_9 = 3; i_9 < 23;i_9 += 1) /* same iter space */
            {
                arr_35 [i_0] [i_0] [i_0] &= 59715;
                arr_36 [i_0] [i_6] [i_9] [i_6 - 3] = (!7);
            }
            var_27 |= ((var_0 ? ((-(arr_32 [i_0] [i_0] [i_0] [i_0] [i_0]))) : (((arr_3 [i_0] [i_6 + 2]) - var_6))));
            arr_37 [i_0] [i_0] [i_0] = ((!((!(arr_5 [i_0] [12])))));
        }
        /* vectorizable */
        for (int i_10 = 3; i_10 < 21;i_10 += 1) /* same iter space */
        {
            var_28 = (115 % var_13);
            var_29 = (((arr_9 [11] [i_10 + 3]) - var_10));
            var_30 = (11864591533409184002 / 2147483647);
        }
    }
    var_31 = ((((((!(((var_9 ? var_14 : var_12))))))) | var_7));
    var_32 = -11911;
    #pragma endscop
}
