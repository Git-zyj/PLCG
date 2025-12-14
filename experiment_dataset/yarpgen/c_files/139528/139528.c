/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139528
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139528 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139528
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 ^= var_8;
    var_18 = ((var_14 + ((var_8 ? (((var_10 ? var_3 : 638416991))) : var_0))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            {
                var_19 = (max(var_19, ((((~253304084571711938) ? (-127 - 1) : (arr_3 [i_0]))))));
                arr_6 [i_0] [i_1 - 1] = max(var_1, (arr_2 [1]));
                arr_7 [i_0] [i_1 - 1] [i_1] = (((arr_5 [i_1 - 2] [i_1 - 2] [i_1 - 1]) & (min((arr_0 [i_1 + 1]), (min(var_14, 16993688130409954330))))));
                var_20 = (((var_1 ? 1202985153 : (var_6 % 5202684200032843911))));
            }
        }
    }
    #pragma endscop
}
