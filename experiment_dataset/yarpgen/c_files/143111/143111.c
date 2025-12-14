/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143111
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143111 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143111
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_4;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_11 |= ((23426 ? (((arr_3 [i_0] [i_1]) >> (42109 - 42089))) : 2275));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 9;i_4 += 1)
                        {
                            {
                                arr_14 [i_1] [6] [i_3] = 25485;
                                var_12 = (-127 - 1);
                            }
                        }
                    }
                }
            }
        }
    }
    var_13 = var_3;
    #pragma endscop
}
