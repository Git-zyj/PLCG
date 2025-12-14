/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122249
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_2, ((!(((var_1 ? 14324955937977097417 : 14324955937977097397)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_15 = (min((min((((arr_0 [i_0]) & (arr_3 [i_0]))), 4121788135732454233)), (max((arr_0 [i_0]), (arr_0 [i_1])))));
                var_16 = ((min(((14324955937977097397 ? 4121788135732454196 : var_3)), (~14324955937977097417))));
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_17 = (((((max((!14324955937977097397), (arr_1 [i_0] [i_1]))))) & (min(14324955937977097448, ((4121788135732454201 * (arr_1 [i_0] [i_3])))))));
                            var_18 = ((~(min((max(4121788135732454208, (arr_8 [i_3] [i_1] [i_0] [5] [i_3]))), (max(4121788135732454207, 4121788135732454213))))));
                            var_19 = ((((14324955937977097424 ? 14324955937977097419 : (arr_7 [i_0] [i_1] [i_2 - 3] [i_3]))) - (((arr_7 [i_0] [i_1] [i_2 - 2] [i_3]) ^ 4121788135732454218))));
                            var_20 = ((~(arr_1 [i_0] [i_0])));
                            var_21 = (max((arr_7 [i_2 - 2] [i_2 + 3] [i_2 + 1] [i_2 - 1]), (min((arr_7 [i_2 - 2] [i_2 + 3] [i_2 + 1] [i_2 - 1]), 4121788135732454187))));
                        }
                    }
                }
                var_22 = 4121788135732454219;
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        {
                            var_23 = ((!(((4121788135732454218 ? (arr_11 [i_0]) : (arr_2 [i_1]))))));
                            var_24 = (min((((min(4121788135732454207, (arr_7 [i_0] [i_0] [i_0] [i_5]))))), (((~14324955937977097397) ? ((14324955937977097436 ? 14324955937977097420 : (arr_10 [i_0] [i_1] [i_4] [14]))) : (~4121788135732454201)))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
