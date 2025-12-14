/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159163
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((var_3 && var_9) ? var_1 : var_5));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_11 = (min(var_11, ((((((var_5 + 9223372036854775807) >> (var_6 + 14))) | (~var_2))))));
                arr_5 [i_0 - 1] [i_0] [i_1] = (min((((((max((arr_3 [i_1]), (arr_2 [i_0])))) ? (arr_4 [i_1]) : var_4))), (((arr_0 [i_0 - 1] [7]) ? (arr_1 [i_0 - 1]) : (arr_2 [i_0 - 1])))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_12 ^= (min((max(((var_8 >> (var_1 - 49752))), ((1 ? 1 : var_1)))), (((arr_6 [i_2] [i_1] [i_0 + 1]) ? (!var_2) : ((((arr_3 [i_1]) || (arr_4 [i_0]))))))));
                            var_13 = ((((((max((arr_2 [i_3]), (arr_9 [i_0] [i_1] [i_1] [i_1] [i_2] [i_0])))) ? (((arr_2 [i_0]) ? var_1 : var_8)) : (((arr_3 [i_1]) / -49)))) | ((min(((max(1, var_7))), (arr_8 [i_0] [i_1] [i_1] [i_2] [i_3] [i_3]))))));
                        }
                    }
                }
                var_14 = (max(((min((arr_4 [i_0 + 2]), (arr_7 [i_0 + 1] [i_0] [i_0 + 2])))), (arr_7 [i_0 + 2] [i_0] [i_0 + 2])));
            }
        }
    }
    #pragma endscop
}
