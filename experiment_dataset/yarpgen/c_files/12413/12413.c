/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12413
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((max(((15 ? 10 : 1)), ((max(12, 70)))))) ? (max(var_14, (2 - 53))) : ((max(var_1, (((2 ? 204 : 2928)))))));
    var_21 = (max(var_21, (var_19 == 7313636058139450158)));

    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        var_22 = 112;
        var_23 = (max(var_23, ((max(-5463624742857981106, var_6)))));
    }
    /* LoopNest 3 */
    for (int i_1 = 2; i_1 < 9;i_1 += 1)
    {
        for (int i_2 = 2; i_2 < 6;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                {
                    arr_12 [i_1 + 1] [i_1] [i_1] [i_1 - 2] = (min((max(-5, 237)), (((-19 / (arr_0 [i_3] [i_3]))))));
                    var_24 = (((min(((-27 ? (arr_9 [4] [3]) : 18055544717426986371)), (((4035734141 ? 3644116135 : var_3))))) != 9223372036854775807));
                }
            }
        }
    }
    #pragma endscop
}
