/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168619
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_12;
    var_17 = (min(var_17, ((min(((((3503 ? 1 : var_9)) << (((min(var_13, var_5)) + 78)))), ((max((-90 > var_11), var_15))))))));

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        var_18 = ((!(!var_2)));
        var_19 = ((~(((arr_0 [i_0 + 1] [i_0]) ? ((9100261903168505649 + (arr_0 [i_0 + 1] [i_0]))) : 22844))));
        arr_2 [i_0] = 3503;
        arr_3 [i_0] = (((1 + (-9223372036854775807 - 1))));
    }
    #pragma endscop
}
