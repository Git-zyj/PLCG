/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125599
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125599 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125599
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                arr_5 [i_0] [0] [10] = (arr_3 [i_0] [i_0]);
                var_12 *= (!var_8);
                var_13 = (min(var_13, (((((((((-479362237 / (arr_3 [10] [4])))) ? -479362237 : (((arr_0 [i_0]) * var_8))))) ? ((var_3 ? (arr_4 [i_0] [10]) : (arr_3 [i_0] [6]))) : (((-(arr_0 [i_1 + 1])))))))));
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 8;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {
                            var_14 = (min(var_14, ((((((((((1 - (arr_0 [i_2])))) || ((!(arr_1 [i_3]))))))) != (((var_10 - 8774783815852338888) ? (arr_3 [1] [1]) : (max((arr_3 [i_1] [8]), (arr_2 [10] [10]))))))))));
                            var_15 = (max((max(var_11, (max((arr_8 [1]), (arr_6 [1]))))), (((0 == ((var_2 ? var_9 : var_4)))))));
                            arr_10 [i_0] [i_3] [i_3] [i_2] [i_1] [i_0] = ((!(arr_6 [i_0])));
                            var_16 -= (((((var_5 ^ var_11) ^ ((-124140181 ? (arr_3 [i_0] [10]) : 825159571)))) / (((~(max((arr_7 [i_2 - 3]), 116)))))));
                        }
                    }
                }
            }
        }
    }
    var_17 = var_1;
    #pragma endscop
}
