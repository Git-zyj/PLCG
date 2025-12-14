/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159220
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((-(max(-5, 72))));
    var_17 = (max(var_17, var_2));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                {
                    var_18 *= ((!((min(((18446744073709551610 ? 45476 : -1958340162)), (~-11))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_19 = (min((~-1448939500), (max((min(1, 8649458339869259577)), ((min(-23643, 1)))))));
                                var_20 = (((-4 ? -22182 : 7650)));
                                var_21 ^= (((((18 ? 0 : 9))) ? 25490 : 1376193162));
                                arr_14 [i_0] [i_1 + 2] [i_0] [i_3] [i_3] [1] &= (min(((-((48 ? 1790263900 : 255)))), ((((18446744073709551610 ? -10 : 104))))));
                                arr_15 [i_0] [i_0] [i_2] [i_0] [i_4 - 1] [i_4 - 1] = (min((((~((-109 ? 143552238122434560 : 3824143710))))), (min((max(16996006751570942294, 64)), ((max(0, 1)))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            {
                                arr_22 [3] [3] [i_6] [i_5] [3] = (min((max(1081801870, 8128)), (min((min(3, 216)), ((min(1, 1376193178)))))));
                                arr_23 [i_0] [i_1] [i_2 - 1] [i_1] [i_6] [i_6] = (max((max(13982603708476862698, (((9 ? -25491 : 1))))), 1));
                                arr_24 [i_6] = (min(0, (min(1, 0))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 &= ((var_3 ? (!-1) : (((((29 ? 1 : 216))) ? ((min(-2048, 1115880734))) : ((25487 ? 65471 : (-9223372036854775807 - 1)))))));
    #pragma endscop
}
