/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15580
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15580 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15580
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 12258607117544454277;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_3 [i_0] = (max((min((((!(arr_0 [i_0])))), (arr_2 [i_0]))), ((-(arr_2 [i_0])))));
        var_16 ^= (min(((((arr_1 [i_0]) ? (arr_0 [i_0]) : (arr_1 [8])))), (arr_2 [10])));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        var_17 = (min(var_17, (((((min(((max((arr_6 [i_1]), (arr_6 [i_1])))), (((arr_5 [i_1]) ? (arr_6 [i_1]) : (arr_5 [i_1])))))) ? (arr_6 [i_1]) : (min((arr_6 [i_1]), (arr_4 [i_1] [i_1]))))))));
        arr_7 [i_1] = (arr_6 [i_1]);
        var_18 = ((0 ? 127 : 1879048192));
        arr_8 [i_1] = (((((~(arr_6 [i_1])))) ? ((min((arr_6 [i_1]), (arr_6 [i_1])))) : (arr_6 [i_1])));
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_19 = (((((((arr_5 [i_2]) ? (arr_2 [i_2]) : (arr_1 [i_2]))) - (arr_2 [i_2]))) * (((arr_2 [18]) % (arr_9 [i_2])))));
        arr_12 [i_2] [i_2] = ((+(((arr_2 [i_2]) << (arr_0 [i_2])))));
    }

    /* vectorizable */
    for (int i_3 = 2; i_3 < 17;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            arr_18 [i_4] = (((arr_13 [i_3 + 1]) ? (arr_4 [i_3 + 1] [i_4]) : (arr_4 [i_4] [i_3 - 1])));
            arr_19 [i_4] = ((((!(arr_2 [14]))) ? (arr_5 [i_3]) : (((arr_2 [i_4]) ? (arr_5 [i_3]) : (arr_0 [i_3])))));
            var_20 = (min(var_20, ((((arr_1 [i_3 - 2]) ? (arr_1 [i_3 + 1]) : (arr_17 [i_3 + 1] [i_3 - 2] [i_3 + 1]))))));
        }
        for (int i_5 = 4; i_5 < 16;i_5 += 1)
        {
            var_21 = ((-(arr_5 [i_3 + 1])));
            arr_22 [i_5] = (((arr_17 [i_5] [i_5 - 3] [i_5 + 2]) ? (arr_17 [i_5] [i_5 - 2] [i_5]) : (arr_4 [i_3] [i_5 - 3])));

            for (int i_6 = 2; i_6 < 16;i_6 += 1)
            {
                var_22 = (min(var_22, ((((arr_15 [i_3] [i_3] [i_3]) ? (((arr_20 [i_3]) ? (arr_4 [i_3] [9]) : (arr_23 [i_3] [i_5]))) : (((arr_20 [i_3 - 2]) ? (arr_16 [i_3]) : (arr_20 [i_3 + 1]))))))));
                var_23 = ((!(arr_17 [i_3 - 1] [i_5] [i_5 + 1])));
            }
        }
        for (int i_7 = 0; i_7 < 18;i_7 += 1)
        {
            var_24 = (((arr_16 [i_3 + 1]) << (arr_6 [i_3 - 1])));
            var_25 = (arr_24 [i_7] [17] [i_7] [i_3 + 1]);
            arr_28 [i_3] = ((arr_1 [i_3]) ? (arr_1 [i_3 - 1]) : (((arr_5 [i_3]) ? (arr_14 [i_3]) : (arr_0 [i_3 + 1]))));
            var_26 ^= (arr_23 [i_3 - 2] [i_3 - 1]);
            var_27 = ((((!(arr_21 [i_3]))) || (arr_2 [i_3 - 2])));
        }
        var_28 = (arr_20 [i_3 + 1]);
    }
    var_29 += var_11;
    var_30 = ((((((var_5 ? var_3 : var_5)))) || ((((~var_7) ? (!var_13) : var_1)))));
    #pragma endscop
}
