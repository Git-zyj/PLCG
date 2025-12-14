/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157792
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_7;
    var_12 = ((min(var_5, var_3)));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] = ((((max((max((arr_0 [6] [6]), (arr_1 [i_0] [i_0]))), ((var_0 ? (arr_0 [i_0] [i_0]) : 1))))) ? 4322338762149789997 : ((((var_5 ? 3272868061 : var_8))))));
        var_13 = ((((((var_3 ^ 90) << ((((var_3 + (arr_0 [i_0] [i_0]))) - 2622967099498022309))))) ? ((max((var_4 || var_2), (arr_1 [i_0] [i_0])))) : -1427482424));
        arr_3 [i_0] [i_0] = (arr_0 [i_0] [i_0]);
    }
    #pragma endscop
}
