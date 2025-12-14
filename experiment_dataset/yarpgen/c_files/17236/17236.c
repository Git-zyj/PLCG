/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17236
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_3;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 22;i_1 += 1) /* same iter space */
        {
            var_20 = ((((!(arr_1 [i_1 - 1]))) ? var_10 : ((min(var_5, var_12)))));
            arr_4 [i_0] = (arr_3 [i_1 + 1] [i_1 - 1]);
            var_21 += ((-(((((arr_1 [i_0]) ? (arr_1 [i_0]) : var_4)) | ((min(var_15, var_18)))))));
            var_22 = (min((((arr_3 [i_0] [i_0]) ? (((arr_3 [i_1] [i_0]) ? (arr_3 [i_0] [i_0]) : var_3)) : (min(var_1, (arr_2 [i_1]))))), ((min(1393977093, var_12)))));
        }
        /* vectorizable */
        for (int i_2 = 1; i_2 < 22;i_2 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        {
                            var_23 *= var_1;
                            var_24 ^= (((arr_11 [i_2 - 1] [i_2] [i_4] [i_2] [i_2 - 1]) ? ((var_16 ? var_6 : 13917)) : (arr_3 [i_2 + 1] [i_2 - 1])));
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 0;i_7 += 1)
                {
                    {
                        var_25 = (min(var_25, ((((var_4 ? var_5 : var_8))))));
                        var_26 = (((arr_15 [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_2]) ? var_0 : var_12));
                    }
                }
            }
        }
        for (int i_8 = 1; i_8 < 22;i_8 += 1) /* same iter space */
        {
            arr_24 [i_0] [i_8] = var_3;

            for (int i_9 = 0; i_9 < 23;i_9 += 1)
            {
                var_27 = ((((((min(var_4, (arr_7 [i_0] [i_8] [i_9] [i_0])))) ? (min(1393977093, (arr_2 [i_0]))) : (var_6 >= var_15))) != -43));
                arr_28 [i_0] [1] [i_8] [i_8] = min(((var_15 - (var_12 + var_17))), (((var_17 + var_17) + (arr_3 [i_9] [i_0]))));
                var_28 = (max((arr_8 [i_0] [i_0]), (((var_1 << (arr_17 [2] [i_8 + 1] [i_8 - 1] [i_8] [i_8 + 1]))))));
                var_29 = (max(var_29, (((!(min((arr_27 [i_0] [0] [i_8 - 1] [i_0]), (arr_27 [2] [16] [i_8 + 1] [i_9]))))))));
            }
            arr_29 [i_0] [i_8] [i_8 + 1] = min((min(((((arr_10 [14]) <= (arr_22 [i_0] [21] [i_0])))), (((arr_26 [i_0] [i_8] [i_8]) ? var_10 : (arr_12 [6] [16] [i_8]))))), ((min(var_3, var_13))));
        }
        /* vectorizable */
        for (int i_10 = 1; i_10 < 22;i_10 += 1) /* same iter space */
        {
            var_30 = -43;
            var_31 = ((var_16 < (arr_2 [i_0])));
            var_32 ^= (((arr_26 [i_10 - 1] [i_10] [i_0]) ? ((~(arr_31 [1] [i_10] [i_10]))) : ((-(arr_17 [i_0] [i_10] [i_10] [i_10] [i_10])))));
        }
        var_33 = (((((var_0 ? (arr_31 [i_0] [i_0] [i_0]) : 0))) ? (~var_10) : 43));
        var_34 = (((((~(((arr_12 [i_0] [i_0] [i_0]) ? (arr_25 [i_0] [i_0] [i_0] [8]) : (arr_27 [i_0] [i_0] [i_0] [i_0])))))) == (((arr_8 [i_0] [i_0]) ? (((var_5 ? (arr_14 [i_0] [i_0] [i_0] [i_0]) : 42))) : var_16))));
        var_35 = ((-(!-43)));
        var_36 = (min((min((((arr_17 [i_0] [i_0] [i_0] [i_0] [i_0]) ? var_13 : var_8)), (arr_31 [3] [i_0] [3]))), (arr_31 [i_0] [i_0] [i_0])));
    }
    #pragma endscop
}
