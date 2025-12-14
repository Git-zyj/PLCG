/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18811
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18811 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18811
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 ^= 134217216;
    var_11 = (12 == 134217214);
    var_12 = (min(4160750082, -5283148663558725606));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_6 [8] = (max(168, 4160750079));
                var_13 = (min((min(((134217214 << (1206051984 - 1206051960))), 4294967295)), ((((max(4160750081, 2147467264)) > 0)))));
            }
        }
    }
    var_14 = (min((((104 || 104) - -2147467249)), 2));
    #pragma endscop
}
