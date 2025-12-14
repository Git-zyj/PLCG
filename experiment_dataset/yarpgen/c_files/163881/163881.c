/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163881
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163881 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163881
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (~(((((1 ? -1420250546 : 21))) ? (~20) : (~20))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                var_15 = (min(var_15, (+-1295947588187070233)));
                var_16 ^= (((((-((-2147483631 ? 143 : 112))))) ? ((227 ? (!6915881630829287120) : 32703)) : 0));
                arr_5 [i_1] [i_0] = ((41 ? (((~18446744073709551610) ? (~-84) : 18446744073709551615)) : -25070));
                var_17 = ((22261 ? 25096 : 0));
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 23;i_3 += 1)
                    {
                        {
                            var_18 = (~-26769);
                            arr_11 [i_1] = ((~-26772) ? 18446744073709551605 : 1);
                            var_19 = ((~(((1 ? 227 : 217)))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
