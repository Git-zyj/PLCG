/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101651
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101651 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101651
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, ((min(-1, (((((61514 ? 1 : 1))) ? (1 - 1) : 1)))))));
    var_13 = ((((((1 ? -478158353 : 780744719)))) ? -247722643 : ((min(3299447310056954564, 1)))));
    var_14 &= ((((16610078122655782952 ? 1 : 1))));
    var_15 *= var_6;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [i_1] = 246;
                var_16 *= (((((min(246, 58690)))) ? (((!((min(51636, 478158369)))))) : 6822));
                var_17 ^= (((-101 ? 16610078122655782957 : 33359)));
                var_18 ^= (~54432);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_19 = (min(((((7823 ^ 55825) * (!29301)))), (max(((246 ? 1 : 7985843728207949126)), -1474642947))));
                            var_20 = ((((!(((478158378 ? -30 : 1))))) ? (max(((-5267450860063954783 ? 16610078122655782951 : 16011)), 13894)) : (((((-2591 ? 6845 : 1802849393))) ? -32174 : (1 * 1836665951053768685)))));
                            var_21 = (min(38976, (((!699267) ? ((-5267450860063954797 ? 4487171839941618420 : 15232083748083506613)) : (max(1836665951053768663, 31644))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
