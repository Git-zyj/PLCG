/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175110
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175110 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175110
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_17 ^= (~1528129261);
                    var_18 = ((~(((1 && (((168 ? 0 : 50523))))))));
                }
            }
        }
    }
    var_19 = (max(var_19, var_3));
    var_20 = ((((var_5 ? var_15 : (var_7 && var_10))) != var_14));
    var_21 = -var_8;
    var_22 |= (max(((-1 ? (-1 < 4095) : 56934316)), (((-61 < var_11) ? -56934317 : (max(-11, var_0))))));
    #pragma endscop
}
