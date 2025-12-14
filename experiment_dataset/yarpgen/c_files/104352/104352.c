/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104352
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104352 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104352
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_14 = (min(var_14, (min(0, (max((!134216704), ((36393 ? 0 : 840335707))))))));
                arr_5 [i_0] [i_0] = (((max((max(-134216693, -134216679)), -134216704)) - 134216706));
                arr_6 [10] [i_1] [2] |= ((((((((((-2147483647 - 1) + 2147483647)) + 2147483647)) << (19160 - 19160)))) ? (max(((9552 ? 1345521773 : -541914563)), 664463622)) : (((max(1048560, 34676)) + -491835450))));
                arr_7 [i_0] [i_0] = (max((((((4064 ? -491835450 : -664463625)) >= -2386))), (((((39535 ? 491835449 : 268160524))) ? (max(1048573, 35048)) : ((-1048574 ? 60834 : 16456))))));
            }
        }
    }
    var_15 = ((((min((~-134216704), ((2 ? 664463621 : 1048560))))) ? (!34779) : ((((max(0, 65521))) ? 0 : (1792005632 | 1048575)))));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 6;i_3 += 1)
        {
            {
                var_16 |= (min(((max(2047, 2147483647))), (((60836 + (-2147483647 - 1))))));
                var_17 = (((((11088 ? (-1 | 49421) : 1048575))) && (((-(max(2147483647, 491835450)))))));
                arr_12 [i_2] [4] = 22240;
            }
        }
    }
    #pragma endscop
}
