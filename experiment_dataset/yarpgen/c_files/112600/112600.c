/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112600
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min((var_7 && var_4), var_0));
    var_11 = (((min(((var_0 ? 0 : 79)), ((var_4 ? 128 : var_2))))) < 3828507212);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_3] = (((((max(186, (-127 - 1))))) | var_8));
                                var_12 = 2147483647;
                                var_13 = (min(var_13, ((min((min((((arr_11 [i_0] [i_1] [i_2] [i_3] [i_4]) ? var_2 : 1282767888)), ((max(93, (arr_7 [i_0])))))), (!-28056))))));
                            }
                        }
                    }
                }
                arr_14 [i_0] [i_0] [i_1] = (max((-4887807818531781091 / 3805022247925574577), ((max(-var_6, (var_2 & 27248))))));
                var_14 = ((((((31812 ? -53 : var_5)) < (var_8 <= 93))) ? (((((((arr_9 [i_1] [i_1] [i_1] [i_0] [i_1] [i_0]) ? 2147483647 : 2017612633061982208))) ? var_5 : var_9))) : ((var_4 >> (((min(var_2, var_4)) - 91))))));
                arr_15 [i_0] = min((((arr_6 [i_1 + 1] [i_1] [i_1 + 2] [i_1] [i_1] [i_1 + 1]) / (arr_6 [i_1 + 2] [i_1] [i_1 - 2] [i_1 - 2] [i_1] [i_1]))), (((arr_6 [i_1 + 2] [i_1] [i_1 - 1] [i_1] [i_1] [i_1]) * var_1)));
            }
        }
    }
    var_15 = ((1 == (((3968367087398443572 - var_0) ? ((831 ? -849228479 : 1)) : ((max(var_9, var_6)))))));
    #pragma endscop
}
