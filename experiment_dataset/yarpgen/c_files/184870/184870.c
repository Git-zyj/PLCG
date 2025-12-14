/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184870
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184870 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184870
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_15;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_18 += ((((max(var_5, (((!(arr_2 [i_0]))))))) ? ((((var_6 != (arr_0 [i_0]))) ? ((192 ? var_6 : 31)) : ((var_10 ? var_0 : (arr_1 [i_1]))))) : ((max(((((arr_3 [i_0] [i_1] [6]) < var_9))), var_4)))));
                arr_4 [12] [i_1] [i_1] = ((224 ? 254 : 36));
            }
        }
    }
    var_19 = min(243, (((var_12 == ((209 ? var_4 : 255))))));
    var_20 = min(176, var_4);
    #pragma endscop
}
