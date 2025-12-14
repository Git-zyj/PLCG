/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177882
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, ((min(var_2, (((-1 > (max(-30796, 419665738))))))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] = -74;
                arr_5 [i_1] = ((max(263279049, 1)));
                var_18 = min(((min(30641, (min(1008, 128))))), (min(-8982205757758170236, ((max(-2090404846, 1))))));
                var_19 |= (min((min(((max(181, 170))), 281474976710655)), ((max(52756, (max(255, 100450386)))))));
                arr_6 [i_0] [i_1] = (min((min(1, 1)), ((!(96 - -32117)))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 1; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 18;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                {
                    var_20 = 54857;
                    arr_18 [i_2] [i_3 + 1] [i_2] = ((!((((!65535) | -18446744073709551596)))));
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 17;i_6 += 1)
                        {
                            {
                                var_21 -= ((((min(12814223495117872556, 4294967284))) * (((-((min(1, 0))))))));
                                arr_24 [i_6 - 3] [i_6] [i_4] [i_6] [i_2 - 1] = 0;
                                var_22 = (max((min((min(281474976710655, 1)), (max(16380, 7997278634272416198)))), (~1)));
                            }
                        }
                    }
                    var_23 += (((max((min(1, 0)), 63759))) || (((0 << (((max(60, -100450400)) - 55))))));
                }
            }
        }
    }
    var_24 = (min((max(((max(-5165, 63759))), (6 & 73))), ((min((min(29137, 100450386)), ((min(7, 63753))))))));
    var_25 = ((-(max((!74), 1))));
    #pragma endscop
}
