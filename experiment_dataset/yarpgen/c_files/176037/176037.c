/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176037
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_5;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_13 = (min(-2237068020200586327, ((((max(var_3, -1)))))));
                                var_14 = (((arr_5 [i_0] [i_2]) ? ((((!(arr_1 [2]))))) : (max((((!(arr_7 [i_4])))), (((arr_6 [i_0] [i_3]) ? var_0 : (arr_1 [16])))))));
                                arr_16 [i_0 - 2] [i_0 - 2] [11] [i_3] [i_4] [i_1] [i_1] = (arr_9 [i_1] [i_1] [i_2]);
                                arr_17 [i_0] [i_1] [1] [i_1] [i_1] = (((((((((arr_12 [i_1]) ? -107 : (arr_4 [i_1] [i_3])))) ? (arr_0 [i_0 + 1]) : (arr_5 [i_0 - 2] [i_0 + 2])))) / (((((max(var_5, var_10)))) + ((1 % (arr_7 [i_0])))))));
                            }
                        }
                    }
                    var_15 = ((((((-1 <= 2133052196) && (!var_7)))) / ((((((max(var_3, -4)))) != var_0)))));
                }
            }
        }
    }
    #pragma endscop
}
