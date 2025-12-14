/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168828
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            {
                var_18 |= (max(1, (((!(~-2147483644))))));
                arr_7 [i_1] [i_1] [i_1] = 5616475334633606892;
                var_19 = -12288;
                var_20 = (min((((!(arr_5 [i_1 + 1] [i_1 - 1])))), var_5));
            }
        }
    }
    var_21 = (91 <= var_7);
    var_22 = (max(var_22, var_2));
    var_23 = (((((var_17 / (-9223372036854775807 - 1)))) ? -268435456 : var_12));
    #pragma endscop
}
