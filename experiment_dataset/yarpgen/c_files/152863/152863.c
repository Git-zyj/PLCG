/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152863
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1) /* same iter space */
    {
        var_16 = ((((((arr_1 [i_0] [i_0]) ^ 1012593952))) ? ((((var_8 != (arr_0 [i_0] [i_0]))))) : (~var_2)));
        var_17 = ((((min((arr_0 [14] [i_0]), ((-(arr_1 [i_0] [i_0])))))) ? ((max(var_13, (min(var_6, var_11))))) : (arr_1 [i_0] [16])));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1) /* same iter space */
    {
        var_18 = (min(((max((((!(arr_0 [i_1] [16])))), ((var_12 ? var_10 : var_4))))), (arr_2 [i_1])));
        var_19 |= 36855;

        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            var_20 = ((((((!(((var_13 ? (arr_5 [i_1] [i_1] [i_1]) : (arr_0 [i_1] [i_2])))))))) + (~var_4)));
            var_21 = (min(var_21, (((((~(arr_3 [i_1]))) + 4294967295)))));
        }
        for (int i_3 = 2; i_3 < 21;i_3 += 1)
        {
            var_22 = ((((max(((min(var_13, (arr_4 [i_3] [1])))), (var_10 % var_11)))) ? var_13 : ((((!(arr_2 [i_1])))))));
            var_23 = (min((max((((var_12 ? (arr_7 [i_3] [i_3]) : var_9))), (max((arr_6 [i_3]), (arr_3 [i_1]))))), (((max(var_5, (arr_6 [i_3])))))));
            var_24 |= var_12;
        }
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 23;i_4 += 1) /* same iter space */
    {
        var_25 = (var_2 >= var_13);
        var_26 = (~(((!(arr_11 [i_4])))));
    }
    var_27 = (min(var_11, ((((var_13 ? var_15 : var_8)) | var_14))));
    #pragma endscop
}
