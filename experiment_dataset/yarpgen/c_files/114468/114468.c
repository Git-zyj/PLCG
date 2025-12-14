/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114468
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114468 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114468
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_8;
    var_11 = ((((((((-6448361777397158747 ? var_7 : var_5))) ? 38816 : (min(var_3, 1))))) ? var_6 : (max(((var_8 ? 1 : var_0)), ((var_2 ? var_7 : var_5))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_12 += ((-var_5 ? (min(9, (((var_8 ? 52294 : var_5))))) : var_5));
                                var_13 = (min(var_9, (max((-2147483647 - 1), var_8))));
                                var_14 |= ((-35 && (((var_6 ? var_4 : 127)))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 13;i_6 += 1)
                        {
                            {
                                var_15 = (max(var_15, var_5));
                                var_16 = var_2;
                            }
                        }
                    }
                    arr_20 [i_0] [i_0] [i_0] = 1;
                    var_17 = (var_6 << (var_0 - 788092024));
                }
            }
        }
    }
    #pragma endscop
}
