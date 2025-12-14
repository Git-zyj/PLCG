/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16739
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16739 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16739
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_13 = (((((1 || 169) + (((272678883688448 >= (arr_0 [i_0])))))) / ((((((arr_0 [i_0]) / var_4)) >= (29 - 82))))));
        arr_2 [i_0] = ((((((((arr_1 [i_0]) + 47)) < (((((arr_1 [i_0]) == 8126464))))))) <= (((((((arr_0 [i_0]) - 24))) || (var_5 * var_7))))));
    }
    var_14 = (((((1426683699 - 4294967286) | (var_11 | var_1))) >= (((1 & var_0) << (-12 || 980456772)))));
    var_15 = ((((1426683688 << (14183971729637543095 - 14183971729637543095))) << (((((1 - 3743467834) - (-1179218965 + 1))) - 1730718427))));
    #pragma endscop
}
