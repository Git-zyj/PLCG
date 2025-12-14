/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108358
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108358 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108358
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_20 &= ((!((((arr_0 [15] [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_0 [13] [13]))))));
        var_21 -= ((((((arr_0 [i_0] [i_0]) < ((var_5 ? var_12 : var_12))))) / ((-(((arr_1 [i_0] [2]) ? (arr_0 [i_0] [6]) : var_13))))));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_22 = (((!var_13) / (min(var_15, (arr_4 [i_1] [i_1])))));
        var_23 = (min(var_14, ((var_0 / (arr_3 [i_1])))));
    }
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        var_24 = (min(var_24, 144115188075855871));
        var_25 += (((((((min((arr_6 [5] [i_2]), (arr_1 [i_2] [i_2])))) ? (((arr_4 [i_2] [i_2]) ? (arr_4 [i_2] [i_2]) : (arr_2 [i_2] [i_2]))) : (arr_6 [i_2] [i_2])))) ? (min((arr_5 [i_2]), (arr_5 [i_2]))) : (arr_4 [i_2] [i_2])));
        var_26 = (min(var_26, ((((-(((arr_5 [i_2]) / (arr_0 [i_2] [i_2])))))))));
    }
    for (int i_3 = 0; i_3 < 14;i_3 += 1)
    {
        var_27 = (arr_8 [i_3] [i_3]);
        arr_11 [i_3] = (min(((((((arr_4 [i_3] [13]) / (arr_3 [i_3])))) ? var_3 : (((min((arr_7 [i_3]), (arr_1 [i_3] [i_3]))))))), (((((arr_3 [i_3]) ? var_0 : var_15))))));
        arr_12 [i_3] = ((((((144115188075855871 / (arr_7 [i_3]))) < ((((((arr_2 [1] [i_3]) + 2147483647)) << (var_14 - 136343211)))))) ? (((arr_4 [i_3] [i_3]) / (((min((arr_10 [10]), var_9)))))) : ((~(arr_9 [i_3])))));
    }
    var_28 &= var_14;
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 24;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 23;i_5 += 1)
        {
            {
                var_29 *= (((((~(arr_15 [i_4] [i_4] [i_4])))) ? (((((arr_16 [i_4] [i_5 + 1] [i_4]) ? (arr_14 [i_4]) : (arr_16 [i_4] [5] [22]))) ^ (((arr_16 [i_4] [i_5] [i_5]) ? (arr_16 [i_4] [i_5] [i_4]) : (arr_13 [i_4]))))) : (((((arr_16 [i_4] [i_4] [i_5]) ? (arr_14 [i_4]) : (arr_14 [i_4]))) >> (var_14 - 136343190)))));
                var_30 = ((((var_1 ^ var_11) ? var_10 : var_0)));
                var_31 = (max(var_31, (((~((var_3 / (((arr_15 [i_4] [20] [i_5]) / (arr_13 [i_4]))))))))));
                var_32 = (max(var_32, var_14));
            }
        }
    }
    #pragma endscop
}
