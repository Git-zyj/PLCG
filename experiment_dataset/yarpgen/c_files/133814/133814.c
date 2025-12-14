/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133814
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {
                            var_18 = -501775288;
                            arr_10 [1] [1] [i_2 - 3] [i_3] = 22876;
                            var_19 = 924584249;
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            {
                                var_20 ^= (arr_17 [8] [8] [8] [i_6]);
                                var_21 -= 4294967270;
                                var_22 = 4294967278;
                                var_23 = (min(var_23, 1083654709));
                            }
                        }
                    }
                }
            }
        }
    }
    var_24 ^= 63;
    #pragma endscop
}
