/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18746
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18746 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18746
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_19 &= ((-(arr_1 [i_1])));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [15] [i_2] [i_2] [i_4] = 483191306;
                                arr_17 [i_0] [i_1] [i_0] [i_2] [i_4] = ((-483191306 ? (((((max(40, 0))) == (-2153 & 0)))) : (arr_10 [i_0] [16] [i_2] [i_0])));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 16;i_5 += 1)
    {
        for (int i_6 = 3; i_6 < 14;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 15;i_7 += 1)
            {
                {
                    var_20 = (((((-((6785691042542639709 ? 483191306 : 42))))) ? 7 : -483191306));
                    var_21 = ((var_12 / (((var_15 + 2147418112) + 32762))));
                    var_22 = ((((max((min(var_18, var_16)), ((((arr_13 [4]) < 5221338149347093732)))))) ? 483191305 : (max(483191305, 483191288))));
                }
            }
        }
    }
    #pragma endscop
}
