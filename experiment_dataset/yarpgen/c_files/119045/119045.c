/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119045
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119045 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119045
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_1;

    for (int i_0 = 2; i_0 < 22;i_0 += 1) /* same iter space */
    {
        var_16 = 30871;
        var_17 = ((((arr_2 [i_0]) > (min(var_2, var_7)))));
        var_18 = (min(var_18, ((min(((((arr_1 [i_0] [i_0]) ^ (((!(arr_0 [i_0]))))))), ((((var_8 ? var_13 : (arr_0 [i_0]))) + (var_10 & var_13))))))));
        var_19 = ((-30871 + ((((arr_2 [i_0]) == var_4)))));
    }
    for (int i_1 = 2; i_1 < 22;i_1 += 1) /* same iter space */
    {
        var_20 = (max(((!(arr_1 [i_1 + 3] [i_1 + 3]))), (((arr_2 [i_1]) == (max(var_9, (arr_5 [i_1])))))));
        var_21 = (((min(var_0, (arr_6 [i_1 + 1]))) >= (!13203)));
    }
    var_22 += ((var_13 ? (((830924621 ? 30870 : var_7))) : var_14));
    #pragma endscop
}
