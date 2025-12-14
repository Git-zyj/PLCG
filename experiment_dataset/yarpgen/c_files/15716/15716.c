/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15716
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15716 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15716
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((!((min(var_17, 2147483647))))) ? ((((max(var_1, 4121099068))) ? var_1 : var_9)) : ((((((max(var_12, var_11)))) % 662261467)))));
    var_20 = (max((((~var_2) ? ((703724782 ? var_4 : var_13)) : (((var_15 ? 3632705828 : var_5))))), (max((0 % 18446744073709551615), 28))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_21 = (max(var_21, (arr_0 [i_0] [i_0])));
        arr_2 [i_0] [i_0] = (min((5137659 % 44578), (((arr_0 [i_0] [i_0]) ? 65535 : (((!(arr_1 [i_0] [i_0]))))))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_22 = (max(var_22, (((~(((((-(arr_1 [i_1] [i_1])))) ? (arr_1 [i_1] [17]) : 164)))))));
        arr_5 [i_1] = (arr_3 [0]);
    }
    var_23 = (-var_8 ? var_16 : 20531);
    #pragma endscop
}
