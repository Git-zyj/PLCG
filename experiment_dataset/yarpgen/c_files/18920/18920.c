/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18920
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_20 = ((((-var_8 ? (arr_0 [18] [i_0]) : ((max(var_2, var_15))))) | (((var_2 || var_19) << (((var_9 != (arr_1 [i_0]))))))));
        var_21 = (!1);
        arr_4 [i_0] = (((max(((5431138199781375340 ? (arr_1 [i_0]) : 17919)), 63))) ? ((((((arr_2 [i_0]) - -32762))) ? 4503599358935040 : 21575)) : ((min(((2084883165 ? 2084883183 : -1)), var_6))));
    }
    var_22 = (min((min((var_14 != var_9), -var_16)), (3963149405867280499 || 1)));
    var_23 = -21575;
    #pragma endscop
}
