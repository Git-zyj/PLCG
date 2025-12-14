/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137349
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 ^= (((max(((var_2 ? 9223372036854775807 : var_13)), (max(var_6, -612264182675352759)))) + 1));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                var_20 = (min(0, (((arr_1 [i_0] [i_0]) ? (26289 - 13413074214717102904) : 35660))));
                var_21 ^= ((-(((5033669858992448704 > 0) - ((511 ? (arr_1 [i_0] [i_0]) : var_6))))));
                var_22 = (min(104, 13413074214717102904));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_23 = (((3164609122 ? var_9 : (arr_10 [i_2]))));
                                var_24 = (min(((max(var_12, var_7))), var_3));
                                var_25 ^= (((arr_1 [i_3] [i_4]) ? ((1 ? var_3 : ((min(511, 88))))) : (arr_5 [i_1] [i_1] [i_1])));
                                var_26 *= 65024;
                            }
                        }
                    }
                }
            }
        }
    }
    var_27 = ((0 || (((max(var_10, 5033669858992448713))))));
    #pragma endscop
}
