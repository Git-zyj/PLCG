/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156533
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156533 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156533
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 &= ((+(((-9223372036854775807 - 1) | 124))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = (arr_1 [i_0] [i_0]);
        arr_4 [i_0] = (arr_1 [1] [i_0]);
        arr_5 [13] = 1;
        arr_6 [i_0] = -var_3;
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
    {
        arr_10 [i_1] = ((-(((var_1 || (((var_4 ? (arr_2 [i_1]) : (arr_9 [i_1])))))))));
        arr_11 [3] [i_1] = (((((-2109752540 ? 255 : 960666198))) ? (((((arr_1 [i_1] [i_1]) ? 1 : -84)))) : 2109752547));
        arr_12 [i_1] &= ((((arr_9 [i_1]) ^ -32760)));
        arr_13 [i_1] = (((((1 << (((((arr_2 [14]) ? var_8 : var_1)) - 1048))))) ? (((arr_2 [i_1]) ^ ((52214 ? -2768069179316144756 : 65535)))) : (arr_7 [i_1] [i_1])));
        arr_14 [i_1] = -7914;
    }
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        arr_18 [i_2] &= ((~(((arr_1 [i_2] [13]) - ((((arr_16 [10]) ? var_1 : var_4)))))));
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 11;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {
                    {
                        arr_27 [10] [i_3] [i_5] = (((arr_25 [i_2]) & ((((65535 % var_6) ? (arr_0 [i_2]) : ((-31182 ? (arr_20 [i_2] [i_2]) : (arr_7 [i_3] [3]))))))));
                        arr_28 [i_2] [i_3] [i_4] [i_5] = ((-9 ? (((arr_9 [i_2]) ? var_4 : (arr_22 [i_2] [i_5]))) : (!1235270231)));
                    }
                }
            }
        }
    }
    var_11 = (+((((((-5438126825769166084 + 9223372036854775807) >> 0))) ? var_9 : ((-7914 ? 103 : 1)))));
    var_12 = (+-8651260059417377832);
    var_13 = var_1;
    #pragma endscop
}
