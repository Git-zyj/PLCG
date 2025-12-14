/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147910
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 &= (((min(671805241, 794683439))) == var_16);

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = var_12;

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            var_20 = (max(var_20, ((((((!(((var_1 ? (arr_0 [i_1]) : var_8)))))) >= (arr_1 [i_1] [i_0]))))));
            var_21 = 32640;
        }
        for (int i_2 = 1; i_2 < 18;i_2 += 1)
        {
            var_22 -= ((!(((-((2246016256714853584 ? (arr_3 [i_0] [i_2]) : var_2)))))));
            var_23 = ((((~(((var_12 >= (arr_6 [i_0] [i_0])))))) >= (arr_8 [i_0] [i_2])));
            var_24 = (min(var_24, (((((-(arr_8 [i_2 - 1] [i_2 + 1]))) | ((((arr_7 [i_0] [i_2 + 1]) > var_12))))))));
            var_25 = (min(var_25, (((-(((((max(2130706432, (arr_1 [i_2] [i_2 + 2])))) < 18446744073709551615))))))));
        }

        /* vectorizable */
        for (int i_3 = 2; i_3 < 17;i_3 += 1)
        {
            var_26 = (((arr_3 [i_3 + 3] [i_3 - 1]) ? (arr_0 [i_3 + 1]) : var_1));
            var_27 = var_14;
            arr_12 [i_0] [4] [i_3] = (((16200727816994698033 ? 16200727816994698032 : 215)));
            var_28 = var_2;
        }
        arr_13 [i_0] [i_0] = (arr_10 [i_0]);
        var_29 = 11621;
    }
    var_30 = (min(var_30, (((-(~var_2))))));
    #pragma endscop
}
