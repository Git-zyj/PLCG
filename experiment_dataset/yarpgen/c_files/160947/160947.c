/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160947
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((min(var_8, var_9)) > (((min(var_4, (var_5 >= var_9)))))));
    var_12 = var_7;
    var_13 = 1;
    var_14 = (((((max(var_1, var_6)))) && ((max(-4417, var_0)))));

    for (int i_0 = 2; i_0 < 10;i_0 += 1) /* same iter space */
    {
        var_15 = var_10;
        arr_3 [i_0] [i_0] = (max(7040113782332473721, 0));
        var_16 = min((min(((var_6 ? var_9 : (arr_2 [i_0]))), (((var_1 ? 1 : 43874))))), (var_4 / -4434));
        arr_4 [i_0 - 2] = ((-(min(((max(231, 1))), 1392439283))));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 10;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] = ((+((((arr_6 [i_1]) == (arr_0 [i_1]))))));
        var_17 = ((((arr_5 [i_1] [i_1]) ? 6522737544647291098 : var_4)) != ((((var_9 < (arr_2 [i_1]))))));
        arr_8 [i_1] [i_1] = (arr_6 [10]);
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
    {
        var_18 ^= 37769;
        var_19 = var_1;
        arr_12 [i_2] = var_4;
        arr_13 [i_2] = var_10;
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
    {
        arr_17 [i_3] = ((((((min(0, var_10))) ? var_2 : ((min((arr_10 [i_3]), 51107))))) % (arr_16 [i_3])));
        var_20 = (((arr_15 [i_3]) ? ((~(arr_10 [i_3]))) : (((!((!(arr_16 [i_3]))))))));
        arr_18 [i_3] = 1;
        arr_19 [i_3] [i_3] = ((~(arr_16 [i_3])));
    }
    #pragma endscop
}
