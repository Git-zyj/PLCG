/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100075
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100075 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100075
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                var_21 = (min(var_21, (((((((arr_3 [i_0] [10]) ? -16 : 520093696))) ? (-1 > 1229) : (arr_3 [1] [8]))))));
                arr_6 [12] [i_0] [12] |= 3;
                var_22 ^= ((((((!(!50958))))) | ((15 ? 2198956146688 : (max(469762048, 7431395135577597941))))));
                arr_7 [10] [i_1] [i_0] &= (((~8970477634788734412) ? var_9 : 49152));
            }
        }
    }
    #pragma endscop
}
