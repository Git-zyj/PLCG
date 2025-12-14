/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186743
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((~var_7) % (((var_6 ? var_13 : (1 ^ 58853))))));
    var_20 = (max(var_20, ((((((max(var_9, var_8)))) ^ ((-13811 * (min(50527, 53625339)))))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_5 [i_0] = -11430221855269155204;
                arr_6 [i_0] [i_0] [i_0] = (((max((arr_2 [i_0] [i_0 + 1]), ((var_9 ? var_13 : (arr_4 [11] [11] [i_1]))))) > ((((arr_4 [i_0] [i_1] [i_0]) < (~7153494298194161966))))));
                var_21 = (arr_0 [i_0]);
            }
        }
    }
    var_22 = (min(var_22, ((((((min(var_6, (-9223372036854775807 - 1))))) && (max((!var_0), (var_13 || var_3))))))));
    #pragma endscop
}
