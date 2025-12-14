/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144387
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            var_12 = (max(var_12, (((var_5 ? ((((7788822894927149743 / var_1) ? (arr_0 [i_0]) : ((var_9 ^ (arr_0 [i_0])))))) : (var_0 % 7788822894927149721))))));
            var_13 = ((((((6144 >> (((arr_3 [i_0]) + 9955))))) || ((((arr_3 [i_1 + 2]) + (arr_2 [i_0] [i_1 + 2])))))) ? ((-((225396153244947329 ? (arr_0 [i_1]) : var_7)))) : ((((var_7 ? 59388 : var_1)))));
        }
        var_14 = (min(var_14, (arr_0 [1])));
        arr_4 [6] = (((((arr_2 [i_0] [i_0]) ? 4894 : (arr_1 [i_0]))) & var_5));
    }
    for (int i_2 = 0; i_2 < 12;i_2 += 1) /* same iter space */
    {
        var_15 = (arr_0 [i_2]);
        var_16 ^= ((225396153244947354 | (((arr_6 [i_2]) ? var_10 : (arr_6 [i_2])))));

        for (int i_3 = 4; i_3 < 11;i_3 += 1)
        {
            var_17 = ((!(arr_2 [1] [i_2])));

            for (int i_4 = 1; i_4 < 11;i_4 += 1)
            {
                var_18 = (max(var_18, (arr_8 [2] [i_3])));
                var_19 = (((((var_3 / (arr_1 [i_3 - 3])))) ? 548993978 : -4163556309028376706));
            }
            arr_12 [i_2] [i_3 + 1] = (arr_5 [i_2] [i_3]);
            var_20 = (((((-7802456975908997990 + (arr_5 [i_3 - 4] [i_3 - 2])))) ? ((((((arr_10 [10] [10] [i_3 - 2]) - (arr_0 [2])))) - (arr_1 [i_2]))) : (arr_10 [i_2] [i_2] [i_3])));
            arr_13 [i_2] [i_2] [5] = ((-6869366599416333129 * ((((((arr_10 [i_2] [i_2] [i_2]) * (arr_3 [i_3])))) ? (8126464 / var_10) : 511))));
        }
        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            var_21 = ((56 + (((var_7 == (arr_2 [i_2] [i_2]))))));

            for (int i_6 = 1; i_6 < 11;i_6 += 1)
            {
                var_22 += (arr_2 [i_2] [i_2]);
                arr_19 [i_6] [i_5] [i_5] [i_5] = (((((arr_18 [i_2]) ? 65531 : (246 / var_7)))) ? ((-var_9 ? ((var_6 ? var_11 : (arr_17 [i_5] [i_5] [i_5] [i_5]))) : (504 - 6219))) : var_9);
                arr_20 [7] [i_6] [i_5] [i_5] = (arr_16 [i_6 - 1]);
                var_23 &= (((((-763859865465994652 != (((~(arr_5 [i_2] [i_5]))))))) ^ (((-5194 && var_3) ^ (((var_11 <= (arr_5 [i_6 + 1] [i_2]))))))));
                var_24 = var_0;
            }
            for (int i_7 = 4; i_7 < 11;i_7 += 1)
            {
                arr_24 [i_7] [i_5] [i_7] = (+-0);
                var_25 |= -1;
            }
            var_26 += var_8;
        }
    }
    for (int i_8 = 0; i_8 < 12;i_8 += 1) /* same iter space */
    {
        var_27 = (min(var_27, var_8));
        var_28 = (max(var_28, ((((((-(arr_5 [i_8] [i_8])))) ? (((var_7 >= var_0) ? -18996 : ((1 ? (arr_27 [i_8]) : (arr_23 [i_8]))))) : (((((((arr_7 [3] [i_8]) ? (arr_3 [12]) : 18446744073709551615)) != ((((arr_16 [i_8]) & var_6))))))))))));
        arr_28 [i_8] [i_8] = var_8;
    }
    var_29 = (max(var_29, var_9));
    #pragma endscop
}
