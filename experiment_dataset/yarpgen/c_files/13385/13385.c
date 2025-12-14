/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13385
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_0] [i_0] = (max((arr_3 [i_0]), ((5665770711080884289 ? (max(3406727777, (arr_0 [i_1] [i_1]))) : (arr_2 [i_1])))));
                arr_8 [i_0] [i_0] = (((arr_3 [i_0]) ? (((arr_0 [i_0] [i_1]) ? 5665770711080884296 : (arr_0 [i_0] [i_1]))) : (((var_3 % var_10) ? (max((arr_5 [i_0] [i_0] [i_0]), (arr_3 [i_1]))) : (arr_4 [i_1])))));
                var_18 = (min(var_18, (((((max((~var_9), var_13))) ? (((!(arr_6 [i_0] [i_0])))) : (((max(var_6, var_3)))))))));
            }
        }
    }
    var_19 |= var_1;

    for (int i_2 = 0; i_2 < 13;i_2 += 1) /* same iter space */
    {
        arr_12 [1] [1] = (arr_0 [i_2] [i_2]);
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 13;i_4 += 1)
            {
                for (int i_5 = 2; i_5 < 12;i_5 += 1)
                {
                    {
                        var_20 = ((((max(((max(var_0, 124))), (((arr_20 [3] [3] [i_2] [3] [i_3] [i_5]) / var_7))))) ? ((max((arr_22 [4] [i_5 + 1] [i_5] [i_5] [i_5 - 1] [i_4]), (((arr_16 [i_2]) ? var_9 : (arr_17 [i_2] [i_2] [i_2])))))) : ((-32765 ? 9223372036854775807 : 524287))));
                        arr_24 [11] [i_5] = 112;
                    }
                }
            }
        }
        var_21 = (min(var_21, ((((((arr_21 [i_2] [i_2] [i_2] [i_2] [7] [i_2]) ? ((((arr_14 [i_2]) * (arr_13 [i_2] [i_2] [i_2])))) : (max((arr_13 [10] [i_2] [i_2]), 16007100571533638734)))) / (arr_16 [i_2]))))));
        arr_25 [i_2] [3] = (max((((arr_13 [i_2] [i_2] [i_2]) ? ((((var_9 != (arr_11 [i_2] [i_2]))))) : (var_9 & var_6))), (max((max(var_9, (arr_22 [i_2] [i_2] [10] [i_2] [8] [i_2]))), (max(var_12, var_2))))));
        var_22 -= var_10;
    }
    for (int i_6 = 0; i_6 < 13;i_6 += 1) /* same iter space */
    {
        var_23 = ((var_11 << ((((((max(18758, 8397286729127678321))) ? (max(2215726090, 754970549)) : -2)) - 2215726078))));
        arr_28 [i_6] = (14254 == 214);
        var_24 = 2147483647;
        var_25 *= (arr_17 [i_6] [i_6] [i_6]);
        arr_29 [9] [9] = var_12;
    }
    #pragma endscop
}
