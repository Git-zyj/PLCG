/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165517
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165517 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165517
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((!((max(var_12, var_12))))));

    for (int i_0 = 0; i_0 < 21;i_0 += 1) /* same iter space */
    {
        var_16 = ((((((arr_2 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_2 [i_0] [i_0])))) ? ((((max((arr_2 [i_0] [0]), (arr_0 [i_0] [i_0])))) ? (min((arr_1 [i_0] [i_0]), (arr_0 [i_0] [i_0]))) : (((arr_2 [i_0] [18]) ? (arr_1 [i_0] [i_0]) : (arr_2 [i_0] [i_0]))))) : ((((min(1285801625, (arr_2 [i_0] [i_0])))) ? (arr_1 [i_0] [i_0]) : (min((arr_1 [i_0] [i_0]), (arr_0 [3] [i_0])))))));
        var_17 *= (((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0])));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1) /* same iter space */
    {
        var_18 = (max((((arr_3 [i_1]) ? ((max((arr_4 [i_1]), (arr_1 [10] [6])))) : (max((arr_0 [i_1] [11]), (arr_3 [i_1]))))), (min(((10831394675038417114 ? (arr_1 [i_1] [i_1]) : (arr_3 [i_1]))), (arr_2 [i_1] [i_1])))));
        arr_5 [i_1] [i_1] = (((arr_1 [i_1] [i_1]) == ((-(arr_1 [i_1] [i_1])))));
        var_19 = (min(var_19, (((min((arr_0 [i_1] [12]), (arr_0 [i_1] [1])))))));
        var_20 = (min(((((((-(arr_2 [i_1] [i_1])))) || (arr_1 [i_1] [15])))), (((arr_1 [3] [i_1]) ? (arr_1 [i_1] [i_1]) : (arr_4 [i_1])))));
        arr_6 [i_1] = min((((arr_4 [i_1]) ? (max(5469580833497881901, (arr_1 [i_1] [i_1]))) : (((arr_2 [i_1] [i_1]) ? (arr_1 [i_1] [i_1]) : (arr_2 [i_1] [i_1]))))), (max(((((arr_1 [i_1] [i_1]) && (arr_1 [i_1] [19])))), ((~(arr_2 [i_1] [i_1]))))));
    }
    var_21 |= var_13;
    var_22 = (!var_8);
    var_23 = var_10;
    #pragma endscop
}
