/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150393
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_12 = (max(var_12, (((!(((((((arr_9 [i_1] [i_1] [i_2 - 2] [i_3] [i_3] [i_3]) ? var_8 : (arr_3 [i_1] [9])))) ? (arr_4 [i_0] [i_3]) : ((var_3 ? (arr_3 [i_0] [i_0]) : (arr_6 [i_0])))))))))));
                            var_13 = (min((arr_7 [i_1] [i_1] [i_2]), ((var_9 ? ((-(arr_3 [i_0] [i_1]))) : (((!(arr_1 [i_2] [i_1]))))))));
                            var_14 = (max(var_14, ((max(((((((arr_8 [i_3]) ? (arr_6 [i_0]) : var_0))) ? ((((arr_3 [i_1] [i_3]) ? (arr_0 [i_0]) : var_10))) : var_4)), var_2)))));
                            arr_12 [i_1] = (min((max((~3240032107), (!var_9))), ((((((3240032107 ? 3 : (-2147483647 - 1)))) ? ((var_0 ? var_7 : (arr_2 [i_0]))) : (((arr_4 [i_0] [i_3]) ? var_8 : (arr_4 [i_0] [i_0]))))))));
                        }
                    }
                }
                var_15 -= (arr_0 [i_0]);
                var_16 = (min(((((((arr_10 [i_0] [i_1] [i_1] [0]) ? (arr_7 [i_1] [i_1] [i_1]) : var_6))) ? ((var_4 ? (arr_6 [i_0]) : (arr_9 [i_0] [i_0] [i_0] [i_1] [i_1] [i_0]))) : (arr_8 [i_1]))), var_8));
                var_17 |= ((~((-(~2147483625)))));
                var_18 = ((((((~var_8) ? ((209 ? -7650 : 65533)) : ((-(arr_11 [i_0] [i_0] [i_0])))))) ? ((((!((min((arr_11 [i_0] [i_1] [i_1]), (arr_5 [i_0] [i_0] [i_1])))))))) : (((arr_4 [i_0] [i_0]) ? ((((arr_6 [i_0]) ? var_8 : (arr_3 [i_1] [i_0])))) : ((var_0 ? (arr_8 [i_1]) : (arr_5 [i_0] [17] [i_0])))))));
            }
        }
    }
    #pragma endscop
}
