/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max((max((1 > 1), 55399)), ((124 + ((max(10133, 0)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_16 = (max(var_16, ((((((max(10136, 55395))) - ((max(-40, 10136)))))))));
                                arr_12 [i_0] [i_1] [8] [13] [i_1] = 21365;
                                var_17 = (max((-3671839552340337007 / 55390), (max(49413, 54))));
                                var_18 = ((max(((min(-14, 51))), (-2120859730 & 1))));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 22;i_7 += 1)
                        {
                            {
                                var_19 |= (max(((max((1 / 10133), ((max(55373, 90)))))), (max((max(8368331213398345738, 21348)), ((max(0, 11122)))))));
                                var_20 = 45;
                            }
                        }
                    }
                }
                arr_21 [i_1] [i_0] = (max((((((min(-21379, 1))) < (-5 || 55390)))), (10114 + 55430)));
            }
        }
    }
    var_21 = ((((max((-9223372036854775807 - 1), 8476012771162297294)) - var_0)));
    #pragma endscop
}
