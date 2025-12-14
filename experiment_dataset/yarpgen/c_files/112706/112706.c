/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112706
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((max(var_1, (min(-112, -17497)))));
    var_21 = (min((((((var_11 << (14961194781440150666 - 14961194781440150660)))) ? ((var_2 ? var_14 : var_15)) : var_15)), ((((((var_5 ? var_15 : var_7))) ? var_5 : var_9)))));
    var_22 = var_3;

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        arr_3 [i_0] = ((~(var_7 != var_10)));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_10 [i_2] [i_1] [i_0] = 17471;
                    arr_11 [i_2] [i_1] [i_1] [i_0 + 1] = ((17497 != ((((arr_0 [i_0]) && -1)))));
                    var_23 &= (~(((min((arr_8 [i_0 + 1] [i_1]), var_12)))));
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 22;i_3 += 1) /* same iter space */
    {
        arr_14 [i_3] = (min(((var_17 ? ((4294967295 ? 111 : (arr_2 [i_3] [i_3]))) : ((((arr_7 [i_3] [i_3] [i_3] [i_3]) && (arr_4 [i_3] [7] [i_3])))))), (((((min((arr_4 [i_3] [i_3] [i_3]), var_5))) || (arr_12 [i_3]))))));
        arr_15 [i_3] [i_3] = (arr_12 [i_3]);
        var_24 = (max(var_24, (((517820330566698322 ? 1727252398 : 8123208359944101938)))));
        arr_16 [i_3] = ((((max(((var_4 ? (arr_12 [i_3]) : (arr_2 [i_3] [i_3]))), ((4294967295 ? 3498 : (arr_0 [i_3])))))) ? -1 : var_10));
    }
    for (int i_4 = 0; i_4 < 22;i_4 += 1) /* same iter space */
    {
        arr_21 [i_4] = var_7;
        arr_22 [i_4] [i_4] = 63;
        arr_23 [1] &= (!(((((((arr_4 [2] [i_4] [i_4]) ? var_18 : var_13))) ? var_9 : ((max((arr_7 [i_4] [i_4] [i_4] [11]), 1)))))));
        var_25 += (((-(arr_8 [i_4] [i_4]))));
        arr_24 [10] &= ((var_3 & (min((((1969774808 ? -17508 : (arr_8 [i_4] [i_4])))), ((var_16 ? var_4 : var_8))))));
    }
    for (int i_5 = 0; i_5 < 22;i_5 += 1) /* same iter space */
    {
        var_26 += ((((((((min(1, var_11)))) & (arr_1 [i_5])))) ? (arr_18 [i_5] [1]) : ((81 ? (17520 < var_6) : var_10))));
        arr_28 [i_5] = (((511 | (~-69))));
    }
    #pragma endscop
}
