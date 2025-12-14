/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180657
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = (max((arr_0 [i_0] [i_0]), (((((var_5 | (arr_1 [i_0]))) >> (((var_5 && (arr_0 [i_0] [i_0])))))))));
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 21;i_3 += 1)
                {
                    {
                        var_12 = ((((((((arr_6 [i_1] [i_1]) ? (arr_0 [i_3] [i_2]) : (arr_1 [i_2])))) ? (min(var_0, var_11)) : (arr_8 [i_2 - 2] [i_1] [8] [i_2 - 2] [i_3 + 1] [i_3 + 1]))) | (~var_0)));
                        var_13 = (((arr_6 [i_1] [i_1]) ? (((max((((arr_5 [i_1] [i_1]) > var_6)), (arr_8 [i_2 - 1] [i_1] [i_3 - 1] [i_3] [i_3] [21]))))) : ((((((arr_3 [i_1] [i_1 + 1]) ? (arr_9 [i_0] [i_1] [i_2] [i_2] [i_2] [10]) : (arr_0 [i_0] [i_2])))) ? ((((arr_5 [i_2] [i_1]) ? var_8 : (arr_8 [i_0] [i_1] [i_0] [i_0] [i_0] [i_0])))) : ((var_1 ? var_10 : var_0))))));
                        arr_10 [i_0] [i_0] [i_2 - 1] [i_3 - 1] [i_1] = (((((arr_5 [i_0] [i_1]) ? (min(0, -12516)) : (arr_8 [i_3] [i_1] [i_0] [i_0] [i_1] [i_0]))) - ((min((min((arr_3 [i_1] [i_3]), (arr_0 [i_1] [i_2]))), (((var_10 >> (((arr_3 [i_1] [i_1]) - 83))))))))));
                    }
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 22;i_4 += 1) /* same iter space */
    {
        var_14 -= var_5;
        var_15 = (max(((max((arr_1 [i_4]), (arr_1 [i_4])))), (((arr_1 [i_4]) ^ (arr_1 [i_4])))));
        var_16 = var_10;
    }
    var_17 = ((((((((var_4 ? var_1 : var_0))) ? var_7 : ((var_0 >> (var_11 + 8324277163073633249)))))) ? (((((min(var_9, var_0))) ? (((var_4 ? var_1 : var_10))) : var_8))) : (max((max(var_2, var_4)), (((var_4 ? var_3 : var_1)))))));
    var_18 = ((((((((var_2 ? var_7 : var_2))) ? (((var_6 ? var_3 : var_2))) : ((var_4 ? var_1 : var_0))))) ? (((((max(var_3, var_2))) << (var_10 ^ var_10)))) : (min((max(var_6, var_9)), ((var_3 ? var_10 : var_11))))));
    #pragma endscop
}
