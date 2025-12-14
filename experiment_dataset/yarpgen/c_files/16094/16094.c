/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16094
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((((var_2 ? 1291 : (1 <= -4818621079102351206)))) - (max(229, -4818621079102351206))));
    var_16 = var_10;
    var_17 = 0;
    var_18 = ((4818621079102351203 ? ((-((-4818621079102351182 ? 1255785802 : var_8)))) : (4502880948686683277 == 4502880948686683277)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            arr_4 [i_0] [i_0] = var_1;
            arr_5 [i_0] [i_1] = ((~(arr_0 [i_1])));
        }
        arr_6 [i_0] [i_0] = ((((-4818621079102351203 ? 4818621079102351203 : 4818621079102351201)) < 432345564227567616));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                {
                    arr_11 [i_0] [i_0] [i_3] = 1;
                    arr_12 [i_0] [i_0] [i_0] [i_0] = ((9053960800779356609 ? (4818621079102351213 <= 6481030257413933827) : (((arr_8 [i_0] [i_2] [i_3]) ? (arr_1 [i_0]) : (arr_1 [i_0])))));
                    arr_13 [i_0] [i_2] [i_3] [i_0] = (((1 & var_6) < (arr_3 [i_2] [i_0])));
                    arr_14 [i_0] [i_0] [1] = (((var_2 ? var_9 : (arr_3 [1] [1]))) > (((6941 ? var_1 : (arr_7 [i_0] [i_0] [i_0])))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 20;i_5 += 1)
                        {
                            {
                                arr_20 [i_0] [12] [12] [i_4] [i_5] [i_0] [i_0] = var_12;
                                arr_21 [i_0] [i_0] [i_3] [i_0] [i_3] = ((-var_12 ? 16819 : ((var_5 ? (arr_3 [i_0] [i_0]) : var_5))));
                                arr_22 [i_0] [i_0] [i_0] [16] [i_0] = (~-1910);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
