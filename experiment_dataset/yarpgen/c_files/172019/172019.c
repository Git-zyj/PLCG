/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172019
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_8;
    var_14 = (min(var_14, var_10));
    var_15 = ((max(var_2, ((min(var_4, var_1))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_16 = (((((8935243688140270492 ? 2983713103486514872 : 4294967284))) ? var_1 : 8935243688140270494));
                arr_4 [i_0] = ((var_10 ? ((var_6 ? (min(-10103, 9511500385569281123)) : var_10)) : var_1));
                var_17 = max((~var_12), var_1);
                var_18 = (min(3926036849, var_5));
                var_19 = 893041928;
            }
        }
    }
    #pragma endscop
}
