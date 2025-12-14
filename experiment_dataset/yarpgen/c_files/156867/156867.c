/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156867
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156867 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156867
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_10;
    var_13 = ((((var_6 ? var_2 : var_3))) ? (min(((max(var_2, var_5))), (max(var_1, var_0)))) : var_3);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_14 ^= (arr_1 [i_1] [i_0]);
                var_15 = (arr_2 [5] [5]);
                var_16 -= var_8;
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_17 = (min(((((arr_0 [i_2 + 2] [11]) == (((min((arr_2 [i_0] [i_0]), (arr_0 [i_0] [i_1])))))))), (arr_4 [i_2 - 1] [i_2 + 2])));
                            var_18 = (max(((((arr_0 [i_2 + 1] [i_2 + 1]) != 1))), ((((max(var_9, (arr_2 [i_2 + 1] [i_2 + 1])))) ? ((max((arr_2 [i_3] [i_0]), (arr_3 [i_0])))) : (arr_2 [i_2 + 1] [i_2 + 2])))));
                            var_19 = ((((max((~var_0), -63))) <= (max((arr_6 [i_2 + 1] [i_2 + 1]), var_3))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
