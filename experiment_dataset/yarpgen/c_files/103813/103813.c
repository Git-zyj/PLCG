/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103813
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = max((((1 && 842161469) && ((min(3452805826, var_9))))), (((4294967295 && var_6) || (32 && 7))));

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        arr_2 [1] = (min((arr_1 [i_0]), (min((arr_0 [i_0]), (arr_1 [i_0 - 1])))));
        arr_3 [i_0] = 11820;
        arr_4 [1] = ((((((((arr_0 [i_0]) - 1))) - 14907115609898527192)) | ((max(60034, (((arr_0 [i_0]) | 4294967295)))))));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        arr_9 [i_1] [i_1] = (arr_5 [10]);
        arr_10 [i_1] [i_1] = 2545;
        arr_11 [3] [i_1] = max((((min(3939966678240671517, -602508341)) / 15789)), ((min((arr_5 [i_1]), (arr_6 [i_1] [20])))));
        arr_12 [i_1] = (max((max((((231 < (arr_5 [i_1])))), (min(-26, (arr_8 [i_1]))))), (arr_6 [i_1] [i_1])));
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        arr_15 [i_2] = (min(((((max((arr_5 [i_2]), -1021522597)) * ((32767 | (arr_5 [i_2])))))), (((max(3939966678240671502, (arr_6 [i_2] [1]))) & (max((arr_1 [i_2]), 178))))));
        arr_16 [i_2] [i_2] = (arr_6 [i_2] [i_2]);
    }

    for (int i_3 = 3; i_3 < 21;i_3 += 1)
    {
        arr_20 [i_3 - 2] = -15742;
        arr_21 [i_3] = (((((28092 * 4294967295) % (max((arr_19 [i_3] [i_3]), 0)))) | (arr_18 [i_3])));
        arr_22 [i_3] &= (arr_17 [i_3]);
    }
    var_15 = (max(9064738102851498246, (max((max(3939966678240671517, -1021522606)), (var_2 & var_12)))));
    #pragma endscop
}
