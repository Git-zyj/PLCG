/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11968
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_20 = (0 || 6802653978124982945);
                var_21 = (min(var_21, (arr_2 [1] [12] [12])));
                arr_6 [1] [1] = -536394033;
                var_22 &= (((1 || -17186) << ((min((arr_0 [i_0]), (arr_0 [i_1]))))));
                arr_7 [i_0] [i_1] [i_1] = 1;
            }
        }
    }
    var_23 = (max(var_23, (((((((var_5 * var_11) ? var_9 : (((1148605233 ? var_0 : var_2)))))) || var_3)))));
    var_24 = var_11;
    #pragma endscop
}
