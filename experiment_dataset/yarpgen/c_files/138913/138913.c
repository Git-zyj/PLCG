/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138913
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138913 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138913
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, var_12));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 14;i_2 += 1)
            {
                {
                    var_14 = (min((3 > var_9), var_10));
                    var_15 = (min(var_15, ((((814817566 + (216 + var_3)))))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_16 = (4 / var_7);
                                var_17 = (min(var_17, (var_10 || -3)));
                                var_18 = (((((!-2030906557) ? 255 : var_1)) > (((!2030906554) % (-2030906541 + 12)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = ((!((max(var_12, var_4)))));
    #pragma endscop
}
