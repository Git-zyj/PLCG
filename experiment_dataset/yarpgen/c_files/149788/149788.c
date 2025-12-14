/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149788
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(-38, -35));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_18 = ((((((min((arr_4 [i_0] [i_0] [i_0]), (arr_2 [i_0])))) ^ (((arr_0 [i_0] [i_1]) ? 469232870 : (arr_3 [i_0] [i_1] [i_0]))))) ^ ((min((84 ^ 469232872), 469232870)))));
                var_19 -= (~469232872);
                var_20 = (~108);
            }
        }
    }
    #pragma endscop
}
