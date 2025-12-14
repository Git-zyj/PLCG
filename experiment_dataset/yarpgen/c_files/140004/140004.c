/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140004
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, (((((max((var_7 % 1), var_5))) ? (min(var_9, 3856265635)) : var_6)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_14 = ((-(arr_5 [i_4 - 1] [i_1] [i_2 - 1])));
                                var_15 = var_2;
                                var_16 &= (var_9 != var_1);
                                var_17 = (((min(var_10, (max(var_5, var_10))))) || (arr_9 [i_2 - 1] [i_4] [i_1] [1] [i_4] [i_0]));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            {
                                var_18 -= ((-(arr_15 [12] [1] [1] [11] [1])));
                                var_19 ^= 1;
                                var_20 *= ((((1 || (!-11210))) || ((!(max(1, var_11))))));
                                var_21 = (arr_1 [2]);
                            }
                        }
                    }
                    var_22 = (((arr_16 [5] [i_1] [2] [5]) ? var_10 : (arr_5 [i_2 - 1] [i_2 - 1] [i_2 + 1])));
                    var_23 = (~var_12);
                }
            }
        }
    }
    #pragma endscop
}
