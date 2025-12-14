/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181835
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181835 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181835
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_4;
    var_15 = (min(var_15, var_9));
    var_16 = (!((var_2 >= (var_11 <= 125420002))));

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_17 &= ((var_6 + (!var_3)));
        arr_2 [i_0] = var_11;
        var_18 = (min(((((min((arr_1 [i_0]), var_4))) ? var_10 : (arr_1 [i_0 - 1]))), ((-0 + ((3330988060727534086 ? 1 : 28589))))));
        var_19 = ((((((((!(arr_1 [i_0])))) * ((((arr_1 [i_0]) > 18446744073709551615)))))) ? (((max(11, var_3)) + (((var_12 * (arr_1 [0])))))) : var_1));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_20 = var_5;
        var_21 = (((arr_1 [i_1]) ? var_13 : (((arr_1 [i_1]) + var_11))));
    }
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 18;i_4 += 1)
            {
                {
                    var_22 = arr_6 [i_2] [i_3];

                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        arr_18 [i_2] [i_3] [9] [i_5] = var_1;
                        var_23 = ((((~3615806780628273170) ? var_0 : 3615806780628273191)));
                        var_24 = (((arr_3 [i_2]) && (arr_12 [1] [i_3] [i_3])));
                        var_25 -= ((var_9 ? (((arr_1 [i_3]) * var_12)) : (min(((~(arr_16 [i_2] [i_3] [i_4] [i_5]))), ((var_7 >> (var_8 - 1957286711)))))));
                    }
                    var_26 = ((((-(arr_4 [i_2]))) | (arr_6 [i_2] [i_3])));
                    var_27 *= var_2;
                }
            }
        }
        var_28 = (16673192379578030185 <= 17783);

        for (int i_6 = 1; i_6 < 16;i_6 += 1)
        {

            /* vectorizable */
            for (int i_7 = 3; i_7 < 16;i_7 += 1)
            {

                for (int i_8 = 0; i_8 < 0;i_8 += 1)
                {
                    arr_27 [i_7] [i_6] [i_6] [i_7] [i_6] [i_6 + 2] = (arr_5 [i_6 - 1] [i_6 + 2]);
                    var_29 = (((arr_23 [i_8 + 1] [i_8 + 1] [i_8 + 1] [i_8 + 1] [i_8] [i_8]) == (~var_3)));
                }

                for (int i_9 = 0; i_9 < 18;i_9 += 1)
                {
                    var_30 ^= ((!(arr_24 [1] [i_9] [i_6 + 1] [i_9] [i_2] [i_7 - 3])));
                    var_31 = ((-(arr_3 [i_6 + 2])));
                    var_32 = (min(var_32, ((((((arr_1 [i_2]) ? var_1 : 0)) | (~var_8))))));
                }
                var_33 = (min(var_33, (arr_21 [i_6 - 1] [i_2] [i_7])));
            }
            /* vectorizable */
            for (int i_10 = 0; i_10 < 18;i_10 += 1)
            {
                var_34 = arr_14 [i_2] [i_2];
                var_35 = ((((arr_4 [i_6]) ? (arr_5 [i_2] [i_6]) : (arr_5 [i_2] [i_10]))));
                arr_33 [i_10] [i_6 + 1] [17] [i_10] = var_1;
            }
            var_36 = 1;
        }
        var_37 = (min(var_37, var_10));
        arr_34 [i_2] = (((((!(((arr_28 [17] [i_2] [i_2]) != var_0))))) | (((!(~var_11))))));
    }
    #pragma endscop
}
