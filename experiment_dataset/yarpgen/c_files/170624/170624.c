/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170624
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170624 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170624
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (!32);

    for (int i_0 = 0; i_0 < 18;i_0 += 1) /* same iter space */
    {
        var_18 = (min(var_18, (((((((max(var_13, (arr_2 [i_0])))) || (((arr_1 [i_0]) >= var_5)))) ? (max(12164, ((6840 ? 5350268197704981631 : (arr_3 [i_0] [2]))))) : (((~(arr_3 [i_0] [8])))))))));
        var_19 *= ((!(-var_4 && -var_5)));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
                    {
                        var_20 = (max(var_20, (((((((4 == (arr_7 [i_0] [i_2] [i_3]))) ? (var_8 | var_9) : (arr_0 [i_2]))) * ((-9300 ? -8393 : (arr_10 [i_2] [i_1] [i_2] [i_3] [i_2]))))))));
                        var_21 ^= (((((((var_6 ? 18416 : (arr_11 [i_2] [2])))) ? ((var_11 ? -3501 : 2584)) : (arr_5 [i_0]))) >= var_2));
                        var_22 = (max(var_22, (((((((arr_6 [i_0] [i_1]) ? var_4 : (arr_9 [i_3] [i_0] [i_1] [i_0])))) ? (((((var_13 ? (arr_5 [i_0]) : var_0))) ? ((~(arr_2 [i_3]))) : (((var_15 >= (arr_9 [i_0] [i_0] [i_2] [i_3])))))) : var_13)))));
                    }
                    for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
                    {
                        var_23 = (min(var_23, (max((arr_8 [i_0] [i_1] [i_1] [i_0]), ((((((-20850741 * (arr_12 [0] [0])))) ? var_3 : ((var_7 ? 2147483647 : (arr_13 [i_2] [i_2] [i_2] [i_2]))))))))));
                        arr_16 [14] [i_1] |= ((((var_6 ? ((4291729759152898084 ? var_5 : (arr_7 [i_4] [i_2] [i_1]))) : 12535)) * (((var_14 ? (arr_1 [i_1]) : var_10)))));
                        var_24 = (arr_15 [16] [i_1] [i_2] [i_4]);
                        var_25 = (max(var_25, (((-(((arr_4 [i_1]) ? var_15 : var_8)))))));
                    }
                    var_26 = (min(var_26, (((((!(arr_4 [i_0]))) ? (arr_4 [i_0]) : (((arr_4 [i_0]) ? (arr_4 [i_1]) : (arr_4 [i_0]))))))));
                    arr_17 [i_0] [i_0] [i_0] [i_2] = ((~(max(((-1387449835 ? var_5 : (arr_3 [i_0] [i_0]))), (((var_0 == (arr_1 [i_0]))))))));
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 18;i_5 += 1) /* same iter space */
    {
        arr_21 [i_5] [i_5] |= (arr_8 [i_5] [i_5] [i_5] [i_5]);
        arr_22 [i_5] = (((((arr_12 [i_5] [6]) ? var_10 : (arr_9 [i_5] [13] [i_5] [i_5]))) != var_1));
    }
    for (int i_6 = 2; i_6 < 15;i_6 += 1)
    {
        var_27 = (!-var_12);
        var_28 = 262143;
    }
    #pragma endscop
}
