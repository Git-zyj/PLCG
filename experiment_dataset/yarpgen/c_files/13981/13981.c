/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13981
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13981 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13981
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = -var_12;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            {

                for (int i_2 = 3; i_2 < 20;i_2 += 1)
                {
                    var_20 = (min(1610612736, (max(var_1, (min((arr_0 [i_1]), var_11))))));
                    var_21 = 5927;
                }
                /* LoopNest 3 */
                for (int i_3 = 4; i_3 < 17;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 18;i_5 += 1)
                        {
                            {
                                var_22 = (((30 + 0) ? (((65523 + var_10) + var_18)) : ((max(0, 11687)))));
                                var_23 = 25;
                                var_24 += (min(((((arr_1 [i_0 + 1]) ? 127 : 226))), 3));
                                var_25 = var_6;
                                var_26 = var_14;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
