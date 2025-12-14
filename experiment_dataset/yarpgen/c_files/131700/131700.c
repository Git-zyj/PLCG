/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131700
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, -713564893785488519));
    var_18 = var_3;
    var_19 &= ((((((max(var_5, -615757822))) ? ((min(-615757845, var_10))) : (5315714487255709876 * var_6))) >= var_1));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_20 = (((((var_15 - (7388487690512372082 - 1586262044)))) ? -14 : (min((min(1197897673, 2708705257)), var_2))));
                var_21 = (min((((var_6 * (arr_1 [i_0])))), (5715528524001553873 ^ 1)));
            }
        }
    }
    #pragma endscop
}
