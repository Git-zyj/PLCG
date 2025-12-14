/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143161
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max((max(93, ((4333190166709508607 ? 234803156141093495 : var_12)))), (-111 / var_6)));

    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        var_15 = ((((min(((-1 ? (arr_1 [i_0] [i_0]) : var_3)), (max(-754113020657623348, -110))))) ? (((((arr_1 [9] [i_0]) && 112)))) : ((((min(var_11, 70))) ? (((110 ? -85 : 4139))) : ((-26773 ? -4139 : 2703572294439134251))))));
        var_16 = ((((((((~(arr_3 [i_0])))) < (min(-2976791443529391150, (arr_3 [i_0 - 3])))))) >= (!11193177)));
    }
    #pragma endscop
}
