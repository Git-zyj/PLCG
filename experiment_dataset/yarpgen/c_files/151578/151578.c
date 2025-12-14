/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151578
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1) /* same iter space */
    {
        var_11 |= max((((-(arr_2 [i_0])))), 0);
        var_12 = (max(var_12, 8845));

        for (int i_1 = 0; i_1 < 18;i_1 += 1) /* same iter space */
        {
            var_13 |= ((((arr_1 [i_1]) ? ((var_5 >> (((arr_3 [i_0] [i_1]) + 5036526574956487843)))) : (arr_0 [i_0] [i_0]))));
            var_14 = 0;
        }
        for (int i_2 = 0; i_2 < 18;i_2 += 1) /* same iter space */
        {
            var_15 = ((((0 ? 255 : ((var_3 ? 17669993313984641269 : var_3)))) % (min((~var_10), 17575006175232))));
            var_16 = (!0);
            var_17 += ((1 ? 0 : 2305515231));
        }
        for (int i_3 = 0; i_3 < 18;i_3 += 1) /* same iter space */
        {
            arr_12 [i_0] = -17575006175242;
            var_18 = (min(var_18, ((((arr_6 [i_0] [i_3] [6]) || (arr_2 [i_3]))))));
            arr_13 [i_0] [i_0] [i_3] = (((((((max(0, var_3))) ? (arr_7 [i_0]) : 6453265037858030422))) ? (arr_3 [i_0] [i_3]) : var_8));
        }
        var_19 = (min(var_19, ((max((arr_7 [i_0]), 2147483643)))));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 18;i_4 += 1) /* same iter space */
    {
        var_20 = ((9223372036854775793 / (arr_0 [i_4] [i_4])));
        arr_17 [i_4] [i_4] = (((arr_8 [i_4]) >> ((((arr_16 [i_4]) <= 17774180159026660889)))));
    }
    /* vectorizable */
    for (int i_5 = 1; i_5 < 23;i_5 += 1)
    {
        var_21 = ((arr_18 [i_5 + 2]) ? (arr_18 [i_5 - 1]) : (arr_18 [i_5 - 1]));
        var_22 = (arr_19 [i_5]);
    }
    var_23 = var_10;
    var_24 = 12772723346543630958;
    var_25 = var_4;
    #pragma endscop
}
