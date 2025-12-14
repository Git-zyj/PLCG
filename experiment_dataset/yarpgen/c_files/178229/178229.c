/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178229
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {
                var_20 ^= (arr_3 [i_0]);
                var_21 = (min(var_21, ((((((!(((var_18 ? (arr_5 [i_0] [12] [1]) : (arr_6 [i_0]))))))) / 29)))));
                var_22 -= ((-(((((1 ? 148 : 110))) - ((108 ? -7410695943181756839 : 12506))))));
                var_23 ^= ((40855 ? 21361 : 834757850719828077));
            }
        }
    }
    #pragma endscop
}
