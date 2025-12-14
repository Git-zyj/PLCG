/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171474
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0] = ((-(arr_1 [i_0 + 1] [i_0])));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_12 = 33;
            var_13 = -1;
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 22;i_3 += 1)
                {
                    {
                        var_14 = -19499;
                        var_15 = (arr_2 [i_0 + 3]);
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_4 = 4; i_4 < 21;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 24;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 23;i_6 += 1)
                {
                    {
                        var_16 = ((((-(((arr_9 [i_0] [14] [14]) ? 32702 : 15))))) ? (((arr_16 [i_0 + 3] [i_0]) ? (arr_16 [i_0 - 2] [0]) : (arr_16 [i_0 + 2] [i_0 - 3]))) : -33);
                        var_17 = (arr_10 [i_6 + 1] [i_4 + 1] [i_5] [i_0 - 3] [21]);
                    }
                }
            }
        }
        arr_21 [18] = ((-19499 * ((-(arr_18 [i_0 + 1] [i_0 + 2] [1] [i_0 + 2] [i_0 + 1])))));

        /* vectorizable */
        for (int i_7 = 3; i_7 < 20;i_7 += 1) /* same iter space */
        {

            for (int i_8 = 3; i_8 < 21;i_8 += 1) /* same iter space */
            {
                arr_26 [i_0] [i_7] [i_8] [1] = (((!856638839683988906) - (arr_9 [i_0 - 1] [i_8] [i_0])));
                var_18 = (((arr_9 [i_8] [i_8] [i_0 + 3]) ? (arr_23 [i_0 + 3] [i_7 + 4]) : (arr_12 [i_0] [i_7 - 3] [i_7 - 3])));
                var_19 = (arr_14 [i_7 + 1] [i_7 + 2] [i_7 - 2]);
            }
            for (int i_9 = 3; i_9 < 21;i_9 += 1) /* same iter space */
            {
                arr_31 [i_0] [i_0] [i_0] [i_0] = ((~(arr_18 [i_0 + 2] [i_7 - 2] [i_7 - 2] [i_7 - 1] [i_7 - 2])));
                var_20 = ((!(arr_6 [i_0 - 1] [i_9 + 2] [i_7 + 4])));
            }
            arr_32 [i_0] [i_0] = (((arr_18 [i_0 + 1] [i_0] [i_0] [i_0] [i_0]) * (arr_18 [i_0] [i_7 - 2] [i_7] [i_7 - 2] [i_0 + 3])));
            var_21 = (((arr_7 [i_7 + 1]) + (arr_27 [i_7 + 2] [i_7] [i_0 - 2])));
        }
        for (int i_10 = 3; i_10 < 20;i_10 += 1) /* same iter space */
        {
            arr_35 [14] &= (arr_17 [i_0] [i_10]);

            for (int i_11 = 0; i_11 < 24;i_11 += 1)
            {
                var_22 = (min(var_22, ((((arr_13 [i_11] [i_0]) ? (arr_36 [i_0]) : 0)))));
                arr_38 [i_10] [i_11] [i_10 - 1] [i_10] = ((-(((arr_7 [i_0 - 1]) ? (((arr_30 [i_11] [i_10 + 1] [i_10] [i_0]) ? (arr_17 [i_11] [i_10]) : (arr_11 [i_0] [i_10] [i_11] [1]))) : ((~(arr_33 [i_0] [i_10] [i_11])))))));
                var_23 = ((((((~(arr_20 [i_0 + 1] [i_10]))))) && (((+(((arr_13 [i_0] [i_10]) * (arr_13 [i_0] [i_11]))))))));
                var_24 = (arr_7 [i_0]);
                var_25 = ((~((8422272657389483821 ? (arr_16 [i_0 - 2] [i_0 - 2]) : (arr_19 [i_0] [i_0 + 3] [i_0 - 2] [i_0] [i_0 + 1] [i_0 - 3])))));
            }
            for (int i_12 = 3; i_12 < 22;i_12 += 1)
            {
                var_26 &= 65535;
                var_27 = 109;
            }
            var_28 ^= ((!(arr_20 [i_0 + 1] [i_10 + 4])));
        }
    }
    var_29 = (min(var_29, -var_11));
    /* LoopNest 2 */
    for (int i_13 = 0; i_13 < 12;i_13 += 1)
    {
        for (int i_14 = 0; i_14 < 12;i_14 += 1)
        {
            {
                var_30 = ((31 % (((!(~4294967295))))));
                var_31 = (min(var_31, (((((~((~(arr_14 [i_13] [i_14] [0])))))) ? (((arr_28 [i_13]) << (((arr_39 [i_13] [i_14] [i_14]) + 30992)))) : ((((arr_15 [i_14]) / (arr_27 [i_13] [i_13] [i_14]))))))));
            }
        }
    }
    #pragma endscop
}
