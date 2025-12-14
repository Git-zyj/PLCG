/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178953
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            var_11 = (min((min(var_2, (arr_3 [i_0]))), (arr_2 [i_1 - 1] [i_1 - 1] [i_1 - 1])));
            arr_6 [i_1] [i_1] = ((!((min(((var_3 ? (arr_2 [i_0] [i_1] [i_1]) : (arr_5 [i_0] [i_0] [i_0]))), 230)))));
            var_12 = (max(var_12, ((min((((~(arr_0 [i_0])))), (((((max(0, var_7)))) & (arr_2 [i_1] [i_1 + 1] [i_1 + 1]))))))));
        }
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            var_13 &= 48894;
            var_14 -= (max(0, 0));
        }

        for (int i_3 = 1; i_3 < 14;i_3 += 1)
        {
            var_15 = (min((((~var_7) ? ((min(228, var_7))) : (arr_0 [i_3 + 4]))), ((((373 ? (arr_0 [i_0]) : var_4)) ^ var_0))));
            arr_13 [i_0] [i_0] [i_3] = ((((-(arr_7 [i_0] [i_3 + 2] [i_3 + 2]))) >> 33));
            arr_14 [i_0] [i_0] [i_3] = (max((arr_4 [i_3]), (((arr_0 [i_3 + 1]) + (arr_0 [i_3 + 4])))));
            arr_15 [i_3] = max(((-(max(18446744073709551615, 10925432786499074180)))), (((((min(var_4, (arr_12 [i_0] [i_3])))) + ((var_0 ? var_4 : (arr_8 [i_3 + 2] [i_0])))))));
        }
        for (int i_4 = 1; i_4 < 16;i_4 += 1)
        {
            arr_18 [i_4 + 2] = ((-(min((arr_10 [i_4 - 1] [i_4 + 1] [i_4 - 1]), ((var_2 ? (arr_2 [i_0] [9] [0]) : (arr_0 [i_4])))))));
            arr_19 [i_4 + 1] [i_0] [i_4] = ((var_8 ? (((((var_3 ? 16200069723348646175 : var_5))) ? (max((arr_17 [i_4]), (arr_3 [i_0]))) : var_6)) : var_7));
            var_16 = ((((((min((arr_2 [i_0] [i_4 + 1] [i_4 + 2]), 48))) ? (((min((arr_5 [1] [i_4 + 2] [i_4]), (arr_12 [i_0] [6]))))) : (max(68, (arr_10 [i_4 + 1] [i_4 + 1] [i_4 + 1])))))) ? ((((min(var_7, (arr_3 [i_4 + 1])))) ? (((arr_8 [i_0] [i_0]) / 2363888925672021990)) : (255 - 9004895774168362313))) : var_1);
        }
    }
    var_17 = (((((((0 ? var_8 : var_0))) ? (var_1 + var_0) : var_6))) ? (((var_7 + (var_1 - 116)))) : ((var_8 ? 245 : -8077429542488772632)));
    #pragma endscop
}
