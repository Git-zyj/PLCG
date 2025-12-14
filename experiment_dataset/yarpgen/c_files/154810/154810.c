/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154810
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = max(15791, (((!((max(0, 0)))))));
    var_17 += var_14;
    var_18 = ((-((4371384962413282649 ? (max(1, -1770595719)) : var_6))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_19 = (min(var_19, 20140));
                                var_20 = (min(var_20, (((((min(0, -20131))) ? 20140 : ((max(20135, 20145))))))));
                            }
                        }
                    }
                    arr_13 [i_1] [i_1] [i_1] [i_1] = (max(1, 1));
                    var_21 = (max(var_21, 1));
                }
            }
        }
    }
    var_22 -= -32744;
    #pragma endscop
}
