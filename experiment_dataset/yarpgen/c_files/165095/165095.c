/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165095
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165095 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165095
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((min(-var_5, var_16)) / 2147483647));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_7 [i_1] = ((((max((((arr_6 [i_0] [i_0] [i_1]) | 1717666307)), (arr_6 [i_0] [i_1] [i_1])))) ? (min((max(5530566701060735220, 89)), (!-89))) : ((((((-127 - 1) + 2147483647)) >> (71035567 - 71035542))))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_20 = ((~((-5530566701060735220 ? 2798773966 : -1717666336))));
                                var_21 = ((4223931735 % ((((max(1717666307, -9021451276772912346))) ? (((var_1 ? var_5 : 0))) : (arr_4 [i_1] [i_1 - 1] [i_1])))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 16;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            {
                                var_22 = (((!((max((arr_5 [i_2] [i_2] [11] [i_2]), 255))))) ? (((arr_3 [i_1 - 1] [i_5] [i_1]) ? (((max(34906, var_15)))) : (max(4223931729, var_9)))) : (((~178) ^ (min(var_7, var_2)))));
                                var_23 = ((4 ? (max((65535 + -118), (!var_9))) : var_15));
                            }
                        }
                    }
                }
            }
        }
    }
    var_24 = ((~((var_6 ? (~-5573) : var_2))));
    var_25 = var_4;
    var_26 = 65535;
    #pragma endscop
}
