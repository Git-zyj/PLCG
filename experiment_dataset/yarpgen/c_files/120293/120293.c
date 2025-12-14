/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120293
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120293 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120293
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_9 [i_2] [i_1] [i_2] = ((~(((!var_6) ? (min(15382520761151071117, 15382520761151071117)) : (arr_1 [i_1 - 1] [i_1 - 2])))));
                    var_11 = ((((~((-209236140 ? -209236119 : 3))))) ? (((!(~var_1)))) : var_1);
                    var_12 = ((((((arr_1 [i_0] [i_1]) ? var_8 : var_4)) - (((((arr_0 [i_0]) <= (arr_4 [14] [i_1] [i_2]))))))));
                    arr_10 [i_0] [i_1] [i_2] = ((((((arr_2 [i_1 + 2]) ? var_0 : var_2))) - (arr_3 [i_0] [i_1 + 2])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_1] [i_2] [i_2] [i_3] [i_4] = ((~((((((var_9 ? (arr_8 [14] [i_1]) : (arr_12 [i_0] [i_0] [i_2] [i_3])))) && ((((arr_0 [i_0]) ? (arr_8 [i_0] [i_2]) : (arr_8 [i_0] [12])))))))));
                                var_13 ^= (((~var_1) ? (((arr_12 [i_0] [i_0] [i_1 - 1] [i_3]) ? var_4 : var_2)) : ((~(arr_12 [i_0] [i_1 - 2] [i_1 - 2] [i_3])))));
                                var_14 = (max(var_14, (arr_11 [i_0] [i_1] [i_0] [i_0] [i_3] [i_3])));
                                var_15 = (max(var_15, var_0));
                            }
                        }
                    }
                }
            }
        }
    }
    var_16 &= var_5;
    var_17 = ((~((~(min(var_1, var_4))))));
    #pragma endscop
}
