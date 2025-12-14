/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185663
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185663 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185663
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((((((min(19595, 54307))) ? var_4 : (min(var_4, -699820255662369610))))) ? var_5 : 165));

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        var_18 = (((((4194176 ? var_2 : (arr_1 [i_0])))) ? (17639 + -17274) : (arr_1 [i_0])));
        var_19 = (((arr_0 [i_0] [i_0 + 1]) >= (((arr_1 [i_0]) ? (arr_0 [i_0] [i_0 + 1]) : var_9))));
        arr_2 [i_0] = ((+(((arr_0 [i_0] [i_0]) - (arr_0 [i_0] [i_0])))));
        arr_3 [i_0] = (arr_0 [i_0] [i_0 + 1]);
    }
    var_20 = (max(var_20, (((var_2 ? -1967595368159145986 : (((((~var_9) && ((min(-22714, var_7))))))))))));
    var_21 = var_6;
    var_22 = -231986874;
    #pragma endscop
}
