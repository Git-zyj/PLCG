/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177854
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((((max((((-(arr_1 [i_0])))), ((4160749568 ? 0 : 0))))) ? (min(10837028392291427361, (arr_1 [i_0]))) : (((arr_0 [i_0]) << 0))));
        arr_3 [i_0] [i_0] = (((((~(!7609715681418124237)))) ? (min(0, ((min(var_13, var_5))))) : (arr_0 [i_0])));
        arr_4 [i_0] = (((arr_0 [i_0]) ? (max((arr_0 [i_0]), (arr_0 [i_0]))) : (arr_0 [i_0])));
    }
    var_19 *= ((-(max(1589591896332754057, ((min(var_0, 66)))))));
    var_20 = 13962895158665819265;
    #pragma endscop
}
