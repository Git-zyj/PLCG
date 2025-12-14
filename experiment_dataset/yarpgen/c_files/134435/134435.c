/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134435
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 &= ((((max((min(var_9, 9699423012192083628)), (((77 ? var_3 : var_5)))))) ? ((max((max(var_2, var_8)), var_1))) : (((var_1 < var_11) ^ (~-7421972446824613110)))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                var_16 = (((!(arr_1 [i_1]))));
                var_17 = ((~(((arr_3 [i_0 - 3] [i_1 - 1]) & (arr_3 [i_0 + 1] [i_0 - 3])))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {
                            var_18 = ((~((127 ? (146 + 3247690140) : 1681))));
                            var_19 = (max((arr_2 [i_3] [1] [i_0]), var_5));
                            var_20 = ((max((arr_6 [9] [i_2] [i_2] [i_3]), ((max((arr_4 [i_0] [i_1] [i_2] [i_2]), 152))))));
                        }
                    }
                }
                arr_9 [i_1] [i_1] [1] = (((((((arr_3 [i_0 - 3] [i_0 - 3]) && (arr_7 [i_1] [i_1 - 1]))))) < (min((max((arr_4 [i_0] [i_0] [4] [i_0]), 6)), (arr_7 [i_0] [i_0])))));
                var_21 = var_14;
            }
        }
    }
    var_22 = (max(1, ((((124 ? var_0 : -13)) % ((max(3, var_0)))))));
    var_23 = var_7;
    #pragma endscop
}
