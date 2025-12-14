/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183508
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183508 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183508
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_4;
    var_14 = ((((((var_0 ? 432688189003650699 : var_7)) > (var_8 < var_3))) ? ((var_0 ? -var_2 : ((var_4 ? var_11 : 3266829080)))) : var_4));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_15 = (min(var_15, ((((min((-17135 & var_2), var_4)) > var_8)))));
                            arr_11 [i_0] [i_1] [i_1] [i_0] = (min((((((arr_0 [i_3]) ? 1028138216 : (arr_3 [i_0 - 3] [i_3]))) & (~1028138216))), ((((min(-155159045, 9223372036854775807)) < (!var_8))))));
                            arr_12 [i_1] [i_1] = ((!((min(4294967295, var_1)))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        {
                            var_16 |= var_1;
                            var_17 = (((((var_2 > (((-29298 ? -155159045 : var_1)))))) < (((((-1 ? 32767 : 0)) > (((arr_16 [i_0] [i_1] [i_1] [i_4] [i_5]) - 52120)))))));
                            var_18 = (((((max(var_8, (arr_1 [i_1] [i_5]))) ? 3 : 0))));
                            arr_18 [i_1] [i_4] [13] [i_1] [i_0] [i_1] = -var_4;
                        }
                    }
                }
                arr_19 [i_1] = (min((arr_0 [i_1]), (((2214624587 > var_11) ? -10 : 21028))));
            }
        }
    }
    #pragma endscop
}
