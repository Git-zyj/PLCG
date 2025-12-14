/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153935
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153935 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153935
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        var_20 = (((((arr_1 [i_0]) / (arr_1 [i_0]))) <= ((((arr_0 [i_0]) && (arr_0 [i_0]))))));
        var_21 += ((!(arr_1 [10])));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
    {
        arr_4 [i_1] [i_1] = ((((max((arr_1 [i_1]), (((arr_0 [i_1]) ? -66192403 : (arr_0 [i_1])))))) ? ((-(arr_0 [i_1]))) : ((((arr_2 [i_1]) == ((66192398 ? (arr_2 [i_1]) : 7841447799351750316)))))));
        arr_5 [i_1] = (max((((arr_3 [i_1]) && (3794992953 | 66192396))), (arr_0 [i_1])));
    }
    for (int i_2 = 0; i_2 < 13;i_2 += 1) /* same iter space */
    {
        var_22 = (min(var_22, (arr_2 [i_2])));
        var_23 = (1 + -1557126347);
        arr_8 [i_2] [i_2] = ((((arr_3 [i_2]) + (arr_3 [i_2]))));
    }
    var_24 = ((((((var_14 <= 0) ? ((var_13 ? var_7 : var_3)) : ((var_11 ? var_13 : 1))))) ? var_7 : var_0));
    #pragma endscop
}
