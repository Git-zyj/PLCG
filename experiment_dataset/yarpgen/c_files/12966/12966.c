/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12966
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_3 ? var_11 : var_1));
    var_20 = var_15;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_21 = ((((!(arr_1 [i_0] [i_0])))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 8;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    {
                        var_22 = (-(((arr_5 [i_1] [i_2 + 2] [i_3]) ? (var_16 | var_18) : 170)));
                        arr_10 [i_0] [i_1] [i_0] [7] = 92;
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 10;i_5 += 1)
            {
                {

                    for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
                    {
                        var_23 = (((((+(((arr_13 [i_0] [i_0]) ? (arr_19 [i_0] [i_6] [i_0]) : -49941960))))) == (min((((~(arr_1 [i_0] [9])))), (((arr_19 [i_4] [i_6] [i_6]) % var_8))))));
                        arr_21 [i_6] [i_4] [i_4] [i_4] = (min((arr_9 [i_5] [i_4] [i_5] [i_6] [i_5] [i_5]), ((((9399206883954127456 <= (arr_16 [i_4]))) ? (max((arr_1 [i_0] [i_0]), -1325902879)) : (((1918310408 != (arr_5 [i_6] [i_0] [i_0]))))))));
                    }
                    for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
                    {
                        arr_26 [i_4] = ((((((((arr_6 [i_0] [i_0] [i_0]) + 2147483647)) >> (((arr_13 [i_0] [i_4]) ? (arr_20 [i_0] [i_5]) : (arr_25 [i_7])))))) <= (max(((((arr_1 [i_4] [i_4]) | (arr_8 [i_0] [i_4])))), var_8))));

                        for (int i_8 = 0; i_8 < 10;i_8 += 1)
                        {
                            var_24 = ((!(arr_4 [i_0] [i_4])));
                            var_25 = (((623998173 * 9399206883954127436) % (((108 ? (((arr_23 [i_0] [i_7] [i_5] [i_7]) ? (arr_7 [i_0] [i_0] [i_0]) : (arr_25 [i_0]))) : (!425400769))))));
                        }
                        for (int i_9 = 0; i_9 < 10;i_9 += 1)
                        {
                            var_26 ^= (max((((((arr_0 [i_7] [4]) | (arr_24 [i_4] [i_7]))) << 1)), ((((((6489468151935053353 ? (arr_30 [i_0] [i_4] [i_5] [i_0] [i_9] [i_9]) : (arr_5 [i_4] [i_5] [i_9])))) ? (((!(arr_8 [i_9] [i_7])))) : 1325902878)))));
                            var_27 = ((((~(arr_19 [i_0] [i_9] [i_0]))) * (((!(arr_14 [i_0] [i_5] [i_9]))))));
                        }
                        for (int i_10 = 0; i_10 < 10;i_10 += 1)
                        {
                            var_28 -= arr_3 [i_4];
                            arr_33 [i_0] [i_0] [i_0] [i_0] [i_10] = (51 - 127);
                        }
                    }
                    arr_34 [4] [4] [i_5] = ((((((!(arr_28 [i_0] [i_0] [i_0] [i_0] [i_0] [i_5]))))) | ((4294967293 / (arr_11 [i_4])))));
                    var_29 ^= (arr_14 [i_0] [i_0] [i_5]);
                }
            }
        }
    }
    var_30 = (min(((((~27487) ^ ((min(var_2, var_13)))))), ((-var_13 ? ((var_2 ? 71 : var_1)) : 63))));
    #pragma endscop
}
