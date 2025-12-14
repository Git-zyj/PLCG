/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10434
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 &= var_5;

    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        var_15 = (max(var_15, ((((min((arr_1 [i_0] [i_0]), 3)) - (((((-(arr_0 [i_0] [i_0])))))))))));
        var_16 = (arr_1 [11] [11]);
        arr_2 [i_0 - 1] = ((~((194 | (arr_1 [i_0] [i_0])))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_17 = (((((!(arr_4 [i_1])))) ^ ((((arr_6 [i_1]) == (arr_6 [i_1]))))));
        arr_7 [i_1] = (arr_5 [i_1]);
        var_18 = 644225591;
        arr_8 [i_1] = ((~(arr_4 [11])));
        var_19 = ((((1 ? var_2 : (arr_3 [i_1]))) + (!-2063269442664848521)));
    }

    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        arr_12 [i_2] = (((arr_10 [i_2] [i_2]) - 0));
        arr_13 [i_2] = (min(((var_2 ? (arr_11 [i_2]) : ((-(arr_9 [i_2]))))), (((arr_11 [i_2]) + (arr_9 [i_2])))));
        var_20 = (((max((min((arr_10 [i_2] [i_2]), (arr_11 [i_2]))), (arr_10 [i_2] [i_2]))) % 305705320));
    }

    /* vectorizable */
    for (int i_3 = 2; i_3 < 20;i_3 += 1)
    {
        var_21 = (!(arr_14 [i_3] [i_3 + 2]));
        var_22 = ((-(arr_15 [i_3])));
        arr_16 [i_3] = (((arr_14 [i_3] [i_3 - 2]) % (arr_14 [i_3] [i_3 - 2])));
        var_23 = ((!((((arr_14 [i_3] [i_3]) << (-2063269442664848521 + 2063269442664848529))))));
    }
    var_24 = (max(var_24, ((!((((min(var_0, var_7)) ^ ((max(137436856320, var_9))))))))));
    #pragma endscop
}
