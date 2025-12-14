/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181507
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_15 = var_3;
                var_16 = 1;
                /* LoopNest 3 */
                for (int i_2 = 4; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_2] = (max(var_10, ((6419813037234004942 ? 2147483647 : 1))));
                                var_17 = (1 * -1);
                                var_18 = ((~(var_7 / -37)));
                            }
                        }
                    }
                }
                var_19 = ((((6419813037234004942 ? 1 : 1)) - (arr_9 [i_0] [i_0] [i_1] [i_1] [i_1] [i_1])));
            }
        }
    }
    var_20 = 6419813037234004942;
    var_21 = (!(((var_14 ? 6419813037234004942 : 9223372036854775807))));
    var_22 += (min((~241), ((988524016 ^ (-21 & var_10)))));
    #pragma endscop
}
