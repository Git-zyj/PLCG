/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144572
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144572 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144572
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 *= (var_3 ? ((((var_0 >= (((65528 ? var_5 : var_6))))))) : ((var_10 ? (-9112 % var_9) : -1406017704)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_12 = var_8;
                var_13 -= ((var_5 ? (-9115 != -9114) : (min(9104, ((var_3 ? var_5 : var_5))))));
                var_14 = (max(((80214410 ? 4214752912 : (~var_2))), ((max(-9123, 1913984314)))));
            }
        }
    }
    var_15 = (-1913984338 / var_9);
    var_16 = var_1;
    var_17 = (min(var_17, var_6));
    #pragma endscop
}
