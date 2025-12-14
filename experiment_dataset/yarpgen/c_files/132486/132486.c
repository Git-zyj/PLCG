/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132486
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132486 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132486
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {
                            var_15 |= (9051831948410621257 ? 51272 : 686387317);
                            arr_13 [i_0] [i_0] [i_1] [i_2] [i_3] = (((((((min(63, (arr_5 [7])))) || (var_5 | 9394912125298930358)))) >> (max(((1 ? var_14 : var_11)), ((0 ? (-127 - 1) : 1))))));
                            arr_14 [i_3] [i_0] [i_1] [i_1] [i_0] = ((9394912125298930344 ? 65535 : 127));
                            var_16 = ((var_0 ? 1 : (arr_10 [i_3] [i_2] [i_0])));
                        }
                    }
                }
                var_17 |= (((39 ? var_5 : var_6)));
                var_18 |= (!0);
            }
        }
    }
    var_19 = (max(var_19, ((min((17 != 0), ((var_2 ? (var_13 > var_8) : var_8)))))));
    #pragma endscop
}
