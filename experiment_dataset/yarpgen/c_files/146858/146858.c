/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146858
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_14;
    var_20 = var_15;

    for (int i_0 = 0; i_0 < 19;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            arr_6 [i_0] [i_1] = ((((((arr_1 [i_0] [i_1]) ? (arr_1 [i_0] [i_1]) : (arr_1 [i_1] [i_0])))) ? (((arr_5 [i_0] [i_1] [i_1]) ? 127 : (arr_5 [i_0] [i_1] [i_1]))) : (arr_1 [i_0] [12])));
            arr_7 [i_0] = arr_5 [i_1] [i_1] [i_0];
            arr_8 [i_0] [i_0] = arr_2 [i_0];
            arr_9 [i_0] = -43;
        }
        arr_10 [i_0] |= (~var_15);
    }
    for (int i_2 = 0; i_2 < 19;i_2 += 1) /* same iter space */
    {
        arr_15 [6] = var_6;
        arr_16 [i_2] = ((((((((min(58918, var_4))) == ((min(var_7, var_4))))))) >= ((var_4 ? (((arr_5 [i_2] [16] [i_2]) ? (arr_14 [i_2] [i_2]) : (arr_0 [i_2] [i_2]))) : (arr_1 [i_2] [i_2])))));

        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            arr_20 [i_3] = var_4;
            arr_21 [i_2] = min(((-(arr_4 [i_2] [i_3]))), (min((arr_18 [i_3] [i_2]), var_1)));
            arr_22 [i_2] [i_3] = ((1 ? 10021805844416894440 : 58934));
        }
    }
    for (int i_4 = 0; i_4 < 19;i_4 += 1) /* same iter space */
    {

        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            arr_29 [i_5] = (min(((1260980201070646435 ? ((-1 ? var_5 : -53)) : 113)), ((max(0, ((127 ? 1 : 29)))))));
            arr_30 [i_5] = ((((min(5, ((var_17 ? 48108 : var_4))))) ? ((var_12 ? var_15 : var_5)) : var_4));
        }
        arr_31 [i_4] = var_1;
    }
    #pragma endscop
}
