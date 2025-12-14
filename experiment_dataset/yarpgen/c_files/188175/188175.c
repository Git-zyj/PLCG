/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188175
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_10;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            var_14 = 0;
            arr_5 [i_0] [i_0] = ((~(((!(arr_1 [i_0]))))));
        }
        for (int i_2 = 0; i_2 < 18;i_2 += 1) /* same iter space */
        {
            var_15 -= (((((arr_4 [i_0] [i_2] [i_2]) * ((-(arr_7 [15]))))) >= ((((arr_3 [i_0] [i_0] [i_2]) == (arr_3 [i_2] [i_2] [i_0]))))));
            var_16 = ((+(((arr_3 [i_0] [i_0] [i_2]) ^ (arr_3 [i_0] [i_0] [i_2])))));
        }
        for (int i_3 = 0; i_3 < 18;i_3 += 1) /* same iter space */
        {
            var_17 ^= ((!(-32512 > -47)));
            var_18 ^= (min(((((arr_6 [8]) || (arr_7 [i_3])))), (arr_3 [i_0] [i_3] [i_3])));
            var_19 = (!17470);
            arr_10 [i_0] = (((arr_1 [i_0]) >= (((!(arr_1 [i_0]))))));
            var_20 *= ((165953594 >> (6802544146235205670 - 6802544146235205649)));
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 18;i_4 += 1) /* same iter space */
        {

            for (int i_5 = 0; i_5 < 18;i_5 += 1)
            {
                var_21 = (((arr_2 [i_0] [i_4] [i_5]) > ((10 << (-7279242196834660885 + 7279242196834660907)))));
                var_22 = (13153160648962680496 == (((((-2147483647 - 1) && (arr_8 [i_5]))))));
                arr_17 [i_0] = ((-(arr_16 [i_0] [i_4] [i_5])));
                var_23 = ((!(((arr_7 [i_0]) <= (arr_2 [i_0] [i_4] [i_5])))));
            }
            for (int i_6 = 0; i_6 < 18;i_6 += 1)
            {
                var_24 = (max(var_24, (((((((arr_9 [i_6] [i_6]) ^ (arr_3 [i_0] [i_4] [i_0])))) || (arr_8 [i_0]))))));
                arr_20 [i_6] [i_4] [i_4] [i_4] |= ((arr_16 [i_0] [i_4] [i_0]) | (arr_16 [i_0] [i_0] [i_0]));
            }
            arr_21 [1] [i_0] = (2423380897930632490 % 18446744073709551615);
        }
        var_25 = (max(var_25, ((max(((max((arr_9 [14] [i_0]), ((-(arr_7 [i_0])))))), (-9223372036854775807 - 1))))));
        arr_22 [i_0] = (((min(((!(arr_12 [i_0] [i_0] [i_0]))), (((arr_19 [i_0] [i_0] [i_0]) == (arr_14 [i_0] [i_0] [i_0]))))) && (((((min(9807, -1280899308))) / (~21))))));
        arr_23 [i_0] = ((!((min(((~(arr_9 [i_0] [i_0]))), (~1656252766))))));
        arr_24 [i_0] = (min(((max((347934821 - 2147483647), (16 % 7037)))), (((max((arr_16 [i_0] [i_0] [i_0]), (arr_4 [i_0] [i_0] [i_0]))) | (2116558429 == 600585337)))));
    }
    for (int i_7 = 0; i_7 < 20;i_7 += 1)
    {
        var_26 ^= (((arr_26 [i_7]) == ((-(arr_25 [i_7])))));
        arr_28 [i_7] = (((min((((arr_27 [i_7] [i_7]) / (arr_27 [i_7] [i_7]))), (arr_26 [i_7]))) != (min(((-(arr_25 [i_7]))), (arr_26 [i_7])))));
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 20;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 20;i_9 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 20;i_10 += 1)
                    {
                        arr_39 [i_9] = ((((((arr_31 [i_7] [14]) > (arr_29 [i_10] [i_7])))) * (arr_31 [i_7] [i_8])));
                        var_27 = (~-496174692);
                    }
                    var_28 ^= ((((max((arr_36 [i_7] [i_8] [i_7] [i_8] [i_7]), (arr_36 [11] [i_9] [i_8] [i_7] [i_7])))) > (arr_36 [i_9] [i_8] [14] [i_9] [i_8])));
                    arr_40 [i_9] [i_8] = ((~((max((arr_32 [17] [i_8] [0]), (arr_32 [i_7] [i_7] [i_7]))))));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 1;i_11 += 1)
    {
        arr_43 [i_11] [i_11] = ((((-(arr_42 [i_11]))) <= (arr_41 [i_11] [i_11])));
        arr_44 [i_11] = ((-(arr_41 [i_11] [i_11])));
    }
    for (int i_12 = 0; i_12 < 12;i_12 += 1)
    {
        var_29 = (min((arr_7 [i_12]), (arr_19 [i_12] [i_12] [i_12])));
        var_30 = (arr_13 [2] [i_12] [i_12]);
    }
    var_31 = var_7;
    var_32 ^= (min(((~(var_12 + var_3))), ((((var_8 & var_3) > var_10)))));
    #pragma endscop
}
