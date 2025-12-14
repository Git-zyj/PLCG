/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118416
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_14 *= 4107611453;
                var_15 = ((6 ? 187355843 : 4107611474));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_16 -= ((+(((arr_4 [i_0] [i_0] [i_0]) ? 1549661765 : (arr_4 [i_2] [i_1] [i_0])))));
                                var_17 *= var_0;
                                var_18 = (max((((arr_10 [i_0] [i_3] [i_2] [i_3] [0]) * 0)), (arr_10 [i_0] [i_3] [i_0] [i_3] [19])));
                                arr_12 [i_3] [i_3] [i_2] [5] [i_3] [i_3] = ((var_4 >> (((arr_3 [i_1] [i_3]) ? (arr_3 [i_0] [i_0]) : (arr_3 [i_0] [i_1])))));
                                var_19 ^= (max(((var_0 ? 4107611453 : 1)), (((((((arr_10 [i_4] [i_2] [i_2] [i_2] [i_0]) ? var_1 : -18805))) ? (var_4 || var_13) : (~192))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 = (((((49 ? 590411692 : -71))) ? 77 : ((var_4 - (min(var_13, var_3))))));
    #pragma endscop
}
