/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134054
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134054 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134054
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 65535;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_20 ^= (((((((141 ? 0 : 1)) - (((arr_2 [14] [1]) + 207))))) ? (max((2105 > 0), ((1 ? 9223372036854775795 : (arr_0 [i_0 - 2]))))) : (((48 ? 2097151 : (((max(207, 48)))))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_10 [i_4] [i_3] [2] [i_4] [2] [2] = ((!(((~(arr_6 [i_1] [i_1 - 1] [i_1 - 1] [i_3 - 1] [i_3 + 2] [i_3]))))));
                                var_21 = (((((~(arr_3 [i_0 - 2] [i_0 + 3])))) ? (((arr_3 [i_0 + 1] [i_0 + 3]) ? (arr_3 [i_0 - 2] [i_0 - 2]) : (arr_3 [i_0 + 1] [i_0 + 1]))) : (!50)));
                                arr_11 [i_0] [i_4] [i_2] [i_4] [i_4] |= (((arr_7 [i_4] [i_1] [i_0]) | (arr_0 [1])));
                            }
                        }
                    }
                }
                var_22 = ((-((((arr_7 [i_0] [i_1 - 1] [i_1 - 1]) > 0)))));
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 17;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            {
                                arr_18 [1] [i_1 - 1] [i_1 - 1] [i_6 + 1] [i_7] = (arr_17 [i_5] [i_6]);
                                arr_19 [i_0] [i_7] [i_5] [i_6] [i_1] [i_5] |= (((min((((17341 <= (arr_1 [i_0])))), (max(43146, 1500981198)))) != 0));
                            }
                        }
                    }
                }
                var_23 = (max(var_23, var_18));
            }
        }
    }
    #pragma endscop
}
