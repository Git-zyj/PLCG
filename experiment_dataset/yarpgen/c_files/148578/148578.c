/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148578
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_20 = (min((((-(arr_10 [i_0] [i_0] [i_2] [i_2])))), (((16981178826240144298 + -8947) ? 12288 : 4997789167472544989))));
                            var_21 |= 946042334;
                            arr_12 [i_0] [6] [i_3] [i_3] = (max((min((arr_0 [i_0]), (arr_0 [i_1]))), (((var_0 || (arr_0 [i_0]))))));
                        }
                    }
                }
                arr_13 [i_0] [i_0] [i_0] |= ((~((max((arr_7 [i_0] [i_1] [i_1] [3]), (arr_3 [i_0]))))));
                var_22 = (max(var_22, ((min((arr_2 [i_0]), (!var_12))))));
            }
        }
    }
    var_23 = (max(var_23, ((((min(0, var_6)) % (((max(var_1, 6489)))))))));
    var_24 &= (min(((var_2 ? ((max(var_0, var_4))) : (min(var_2, 67553994410557440)))), 18));
    #pragma endscop
}
