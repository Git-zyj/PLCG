/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177145
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_13 = (min((min(-123, ((177 ? 118 : (arr_2 [i_0] [i_0]))))), (((!255) ? (49152 > 49123) : (((arr_5 [i_0]) ? 1 : 56524))))));
                arr_6 [i_0] [i_1] [i_1] = (min(((113 - (((arr_5 [i_1]) ? 250 : 254)))), (arr_3 [i_0] [i_1])));
                var_14 = -11850;
                var_15 = -126;
            }
        }
    }
    var_16 = ((56649 ? ((3194 << (111 - 105))) : 172));
    var_17 = (max((min((min(2370256206510815835, 255)), (min(var_3, var_9)))), 35446));
    var_18 = ((((((var_12 ? (16 - 30084) : ((var_3 ? 233 : var_7)))) + 2147483647)) << ((((var_11 ? 45606 : (165 | 204))) - 45606))));
    #pragma endscop
}
