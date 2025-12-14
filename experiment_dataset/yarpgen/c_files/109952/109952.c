/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109952
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, (((var_13 ? var_13 : (~4490130447115088698))))));

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = var_14;
        arr_5 [i_0] = var_12;
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_20 = (min(var_20, (((30 ? (((arr_1 [i_1]) % -1723449317)) : ((-1725833165 % (arr_0 [i_1] [i_1]))))))));
        arr_8 [i_1] [i_1] = (arr_7 [i_1] [i_1]);
    }
    for (int i_2 = 1; i_2 < 21;i_2 += 1)
    {
        arr_12 [i_2] = ((-(-111 - -1723449293)));
        arr_13 [i_2 - 1] = (((((((!(arr_9 [i_2])))) ^ var_4)) >= (min(var_2, -1723449317))));
        var_21 = (min(var_21, ((((arr_9 [i_2 - 1]) > (((arr_11 [i_2 - 1]) ? var_2 : (arr_11 [i_2 - 1]))))))));
    }
    var_22 = var_17;
    var_23 = (var_15 ? var_10 : 7487149157099616431);

    /* vectorizable */
    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        arr_16 [i_3] [i_3] = 32880;
        var_24 = 0;
    }
    #pragma endscop
}
