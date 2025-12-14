/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185064
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185064 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185064
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((max(1, (113 || 31))) ? 1109656996 : (max((~var_11), (((var_5 ? var_14 : var_7)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_17 = (((((var_4 ? var_0 : (arr_3 [i_1] [i_2] [i_3])))) || (((var_4 ? -54 : ((3439563530 >> (4053015854 - 4053015847))))))));
                            var_18 = (~(((((arr_4 [i_0]) || 2855527724)) ? var_8 : ((83 ? (arr_4 [11]) : -4175822840205403310)))));
                        }
                    }
                }
                arr_9 [i_0] = var_3;
            }
        }
    }
    #pragma endscop
}
