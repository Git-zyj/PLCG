/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146781
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_2] = (((max((!3694585978083165077), var_5)) > (~var_9)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_12 = (min(((((((var_11 ? -18040 : (arr_5 [i_0] [i_0])))) | (~var_8)))), ((((arr_6 [i_4] [i_3] [i_2] [i_1 - 2]) ? 14752158095626386538 : var_11)))));
                                var_13 ^= var_10;
                                arr_12 [i_1 + 2] [i_1 + 2] [i_1 + 2] = 288230307432235008;
                            }
                        }
                    }
                }
            }
        }
    }
    var_14 *= ((var_0 ? (min(((11183470399744021101 ? var_4 : -1683502722920926219)), 1)) : ((var_7 ? var_8 : (((6453120197240947405 ? var_3 : var_2)))))));
    /* LoopNest 3 */
    for (int i_5 = 1; i_5 < 17;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 17;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 20;i_7 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 19;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 20;i_9 += 1)
                        {
                            {
                                var_15 = -15197;
                                arr_26 [5] [i_8 + 1] [i_8 - 1] [i_8 - 1] [i_8 + 1] = 1041484271;
                            }
                        }
                    }
                    arr_27 [i_6] [i_6] [i_7] [i_5 - 1] &= var_10;
                }
            }
        }
    }
    #pragma endscop
}
