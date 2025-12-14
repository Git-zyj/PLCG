/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116967
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, (((-(var_14 == var_15))))));

    for (int i_0 = 1; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_18 += ((-var_14 ? ((5877259077180334405 ? ((((arr_1 [0] [i_0 - 1]) - 89))) : (max(12569484996529217210, 1)))) : var_0));
        var_19 ^= (min(((max(var_10, (!var_15)))), (((max(12569484996529217207, var_16)) - (12569484996529217210 >= var_6)))));
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_20 = (min(var_20, var_5));
        arr_6 [2] = 5877259077180334405;
    }
    for (int i_2 = 1; i_2 < 1;i_2 += 1) /* same iter space */
    {
        arr_9 [i_2] = 10;
        var_21 = ((!((((arr_7 [i_2] [i_2 - 1]) ? (arr_1 [i_2 - 1] [i_2 - 1]) : ((24 & (arr_8 [i_2] [i_2]))))))));
    }
    #pragma endscop
}
