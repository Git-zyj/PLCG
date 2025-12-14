/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184472
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184472 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184472
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 *= min((var_5 % -var_8), (min(1, var_9)));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = -18446744073709551614;
        var_15 = min(((-19661 ? var_8 : (arr_1 [i_0]))), (((-(~var_2)))));
        arr_3 [i_0] = ((~((max((min(-29601, var_8)), var_13)))));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        var_16 = (arr_4 [i_1]);
        var_17 = (max(var_17, (((!(arr_1 [13]))))));
    }
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        arr_10 [i_2] = (arr_8 [4]);

        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            var_18 = (((!(arr_9 [i_2]))));
            arr_13 [i_3] = (max((!-var_11), (((~(arr_11 [i_2]))))));
            arr_14 [i_2] [i_3] [i_2] = (arr_12 [i_2] [i_2] [i_2]);
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 21;i_4 += 1)
        {
            arr_18 [i_4] = ((((var_0 % (arr_9 [i_2]))) <= (arr_17 [i_2] [i_2])));
            var_19 = (-(arr_12 [i_2] [i_2] [i_2]));
        }
    }
    for (int i_5 = 0; i_5 < 18;i_5 += 1)
    {

        for (int i_6 = 0; i_6 < 18;i_6 += 1)
        {
            arr_24 [i_5] [i_6] [i_6] = (((var_3 << (((max(-29611, 10789670991018715563)) - 18446744073709521994)))));
            var_20 = (max(((1945212115 ? (arr_19 [i_5]) : (arr_19 [i_5]))), (arr_19 [i_6])));
        }
        var_21 ^= ((-((~(arr_7 [i_5])))));
    }
    var_22 = var_6;
    var_23 = var_7;
    #pragma endscop
}
