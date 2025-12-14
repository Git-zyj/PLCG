/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164580
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164580 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164580
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 += (max(var_11, ((63 ? 3627950960740604794 : 77))));

    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
        {

            /* vectorizable */
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                var_18 += arr_6 [i_0] [i_0] [i_0] [i_0];
                var_19 |= ((var_11 ? (arr_2 [i_2 + 2]) : (arr_2 [i_2 - 1])));
                var_20 = ((arr_6 [i_1] [i_1] [i_1] [i_0]) ? (arr_8 [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_0 + 1]) : var_2);
                var_21 = var_6;
            }
            var_22 |= ((((arr_5 [i_0] [i_0]) ? (arr_5 [i_0] [i_0]) : (arr_5 [i_0 + 1] [i_0]))) / ((max(var_10, ((1 ? 23 : 150))))));
            arr_9 [i_1] [i_1] [i_1] = (((((min(var_14, var_14))) || ((((arr_0 [i_0 + 1] [i_1]) ? 1 : 1))))) ? -5258851591613835134 : (((min(0, var_2)))));
        }
        for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
        {
            var_23 *= (min(((937224039 ? var_8 : -5258851591613835134)), ((5258851591613835111 / (arr_6 [i_0 - 2] [i_0] [i_0] [i_0 - 1])))));

            /* vectorizable */
            for (int i_4 = 0; i_4 < 17;i_4 += 1)
            {
                var_24 = (((arr_1 [i_4]) ? (arr_11 [i_0 - 1] [i_0 - 1]) : (arr_11 [16] [i_4])));
                var_25 ^= (((arr_10 [i_0] [i_3]) || (~1)));
                var_26 *= ((9 ? (arr_5 [i_0 + 1] [i_0]) : (arr_5 [i_0 + 1] [i_0])));
            }
            /* vectorizable */
            for (int i_5 = 0; i_5 < 17;i_5 += 1)
            {
                var_27 = ((var_4 != (arr_10 [i_0] [i_0 + 1])));
                var_28 = (max(var_28, (((arr_6 [i_0] [i_0] [i_0] [i_3]) ? var_11 : (arr_6 [i_0 - 2] [i_0] [i_5] [i_0 - 1])))));
            }
            /* vectorizable */
            for (int i_6 = 0; i_6 < 17;i_6 += 1)
            {
                var_29 = ((-(arr_18 [i_0] [i_0] [15])));
                arr_21 [i_0] [i_3] [i_6] [i_0 - 1] = (((-1800022423 / var_15) >= var_16));
            }
        }
        var_30 *= min(((((1 ? var_10 : -1330245749)))), ((((max(var_9, 210257166))) ? (((var_1 ? var_14 : var_14))) : (((arr_5 [i_0] [i_0]) ? var_12 : (arr_11 [i_0] [i_0]))))));
        var_31 = (((((var_14 / (max(210257166, (arr_13 [i_0])))))) ? -90 : (min((((arr_7 [i_0] [i_0] [i_0]) ? (arr_15 [i_0] [i_0] [1]) : 8073677514907661234)), (arr_19 [i_0 - 2] [i_0])))));
    }
    var_32 = (min(var_32, ((min((((((243 ? 5258851591613835133 : 1))) ? (var_5 * var_5) : var_2)), (var_1 ^ var_7))))));
    var_33 = ((((min(var_12, ((var_9 ? var_5 : -5258851591613835121))))) ? var_6 : (var_0 > var_15)));
    #pragma endscop
}
