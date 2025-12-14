/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127476
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127476 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127476
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                var_15 = (arr_2 [i_1]);
                var_16 = (max(var_16, (((((max((!1), (min(var_3, 55646))))) ? -var_14 : ((((-15 + var_5) ? ((-7022573148917326242 + (arr_2 [i_0]))) : 3962452591))))))));
                arr_7 [i_0] [i_0] [i_0] = (arr_2 [i_0 - 1]);
                arr_8 [10] [i_0] [i_0] = (((arr_5 [i_0 + 1] [i_1]) && var_2));
                arr_9 [i_0] [1] = (((var_11 - (arr_3 [i_0] [i_0] [i_0]))));
            }
        }
    }
    var_17 = (max(var_17, var_9));
    var_18 = ((16769024 ? ((((var_11 - var_0) % (7022573148917326242 % var_9)))) : ((-(min(var_1, var_11))))));
    #pragma endscop
}
