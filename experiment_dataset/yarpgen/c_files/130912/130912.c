/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130912
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((!((((32 ? var_12 : 100))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_17 = (max(((var_6 ? (arr_1 [i_0] [i_1]) : var_14)), ((min((var_10 <= var_2), (min((arr_4 [i_0]), var_15)))))));
                var_18 = -1;
            }
        }
    }
    var_19 = var_3;
    var_20 = (max(var_1, (max(1, 5519277564529861664))));
    var_21 = var_7;
    #pragma endscop
}
