/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104000
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_0;
    var_15 = var_11;

    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        var_16 = (!817);
        var_17 = 23;
        arr_2 [i_0] = (255 < 1);
        var_18 ^= (arr_0 [12]);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 13;i_2 += 1)
            {
                {
                    var_19 = (min((~13), (arr_4 [i_2] [i_0] [i_0])));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_11 [i_0] = (((var_0 ? (~var_1) : 235)));
                                arr_12 [i_0] = ((+(((min((arr_6 [i_0 - 2]), (arr_4 [i_1] [0] [6])))))));
                                arr_13 [i_0] [i_3] [i_3] [i_2] [1] [i_0] = var_0;
                                var_20 = (((~((max(20, 20))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
