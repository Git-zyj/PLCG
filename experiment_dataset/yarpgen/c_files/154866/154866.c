/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154866
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154866 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154866
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_17 = ((((((!(arr_3 [i_0] [i_1]))))) | ((1 ? (arr_4 [i_0]) : ((var_16 ? 1 : (arr_3 [i_0] [18])))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {
                            var_18 = (max(var_18, ((((((((max(var_11, (arr_3 [i_0] [i_1])))) ? (!201) : (233 || var_16)))) ? (((max((arr_6 [i_0] [i_0] [i_0] [i_0]), (arr_6 [i_0] [24] [i_2] [i_3]))))) : var_4)))));
                            var_19 = (max(((max(((-5177908161698998695 != (arr_0 [i_0] [i_0]))), (var_12 == 1)))), ((-var_12 ? 1 : (var_12 > 1)))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 18;i_4 += 1)
    {
        for (int i_5 = 2; i_5 < 16;i_5 += 1)
        {
            {
                var_20 = ((((var_11 ? (arr_2 [i_5 + 1] [i_5 - 1] [i_5 + 2]) : var_8))) ? var_13 : ((((!(arr_15 [i_4]))))));
                var_21 ^= (((((((19572 ? (-127 - 1) : var_13))) ? (((min(118, (arr_8 [i_4] [i_4] [i_4] [i_4]))))) : (min((arr_2 [i_4] [i_4] [i_5]), var_6)))) | 1));
            }
        }
    }
    #pragma endscop
}
