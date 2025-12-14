/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127025
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127025 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127025
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_2] = (44638 + 42166);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_13 [i_1] [i_2] [i_3] [i_4 - 1] = -27063;
                                var_14 = (arr_3 [i_0] [i_0] [i_0]);
                                var_15 ^= 44637;
                            }
                        }
                    }
                }
            }
        }
    }
    var_16 *= ((var_10 ? (((24926 ? 4294967295 : -1379379935))) : ((24206 ? 0 : 17914385476318451984))));
    var_17 = 0;
    var_18 = (-2147483647 - 1);
    #pragma endscop
}
