/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182728
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182728 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182728
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_10 |= (7750 ? 0 : ((6694781781279380693 ? (min(4214624612, 11751962292430170923)) : 6694781781279380689)));
                                var_11 *= ((1 / (((0 >> 0) ? 887784767 : 6694781781279380697))));
                                var_12 -= ((1 ? -1 : 12627008466288753395));
                            }
                        }
                    }
                }
                var_13 = (max(var_13, (arr_1 [i_0])));
                var_14 = 61;
                var_15 *= 240;
                var_16 = (~-1);
            }
        }
    }
    var_17 = (max(var_17, (((((-1 - ((var_1 ? -2138693594 : 12627008466288753395)))) >= ((52227 ? var_0 : 6694781781279380689)))))));
    #pragma endscop
}
