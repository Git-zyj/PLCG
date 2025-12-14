/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155083
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = -2949955484;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_21 = (((arr_3 [i_0]) ? ((2992023583 ? -21 : 32399)) : 17796));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 21;i_4 += 1)
                            {
                                var_22 *= (~((((3698124702 ? 596842578 : -93)) * -3698124718)));
                                arr_13 [i_0] [i_1] [16] [i_0] [i_3] [i_3] [i_3] = ((-((28638 ? (((((arr_5 [i_0] [i_1] [i_3] [i_1]) > 27296)))) : (max(var_14, 3057773469))))));
                            }
                            var_23 = (max(var_23, (((var_10 ^ var_12) ^ (min(-381, 401626216))))));
                        }
                    }
                }
                var_24 *= max((1927769485 & 3698124701), (1616927926 * 1345011779));
            }
        }
    }
    var_25 = (max(var_25, ((((2659075224 - 1068888099) > var_5)))));
    #pragma endscop
}
