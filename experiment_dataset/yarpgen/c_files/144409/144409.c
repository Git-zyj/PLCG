/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144409
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_5;
    var_14 = (min(var_14, (((min(var_0, (var_11 & var_8)))))));
    var_15 = var_9;

    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        var_16 = (max(var_16, (arr_1 [i_0])));
        var_17 = (max(var_17, (((((((arr_1 [i_0 - 3]) ? (((min(var_1, 41)))) : (arr_1 [i_0 - 3])))) ? (min((min((arr_0 [4]), (arr_0 [i_0]))), ((min((arr_2 [2]), var_5))))) : ((((!(arr_2 [2]))))))))));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            var_18 += ((((((((arr_6 [i_1]) % var_6)) == (arr_3 [i_1])))) - ((((~var_10) < ((8542859594566110032 ? (arr_4 [i_1]) : (arr_6 [16]))))))));
            arr_9 [i_2] [i_2] = ((var_5 ? ((((((var_1 - (arr_5 [i_1])))) ? 167 : (arr_8 [i_1])))) : ((~(min((arr_6 [i_2]), (arr_5 [i_2])))))));
            var_19 = (max(var_19, ((((!2727506767) ? (min(0, (min(var_7, 12261670591534011656)))) : ((((!(arr_8 [i_1]))))))))));
        }
        var_20 = (min(var_20, 154151025));
        var_21 = (arr_7 [5]);
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        var_22 = ((!(arr_11 [15] [15])));
        var_23 = var_6;
    }
    for (int i_4 = 2; i_4 < 18;i_4 += 1)
    {
        var_24 = (min(((9859805538078813991 ? (arr_11 [i_4] [i_4]) : var_6)), ((((arr_10 [i_4 + 3]) >> (((arr_11 [i_4 + 1] [i_4 - 2]) - 782908822)))))));

        for (int i_5 = 0; i_5 < 21;i_5 += 1)
        {
            var_25 = (arr_14 [10]);
            var_26 = ((~(min((min(8191, 234)), (arr_12 [i_4 - 1])))));
        }
    }
    #pragma endscop
}
