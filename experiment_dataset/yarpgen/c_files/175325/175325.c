/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175325
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_8 [i_2] = 2862160248;
                    arr_9 [i_0] [i_0] [0] [i_0] = (var_3 % 2040);
                    arr_10 [i_0] [i_1] [i_1] [i_2] = 65535;
                    var_15 = ((116 ? 6 : ((0 ? 8126416551045318984 : 0))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 8;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [i_0] [9] [i_0] [i_4] [i_4] &= ((14044032128124282815 ? ((-7376433732361375664 ? 3506437765406344345 : -13446)) : (((((((arr_6 [i_0] [i_0] [i_2] [i_3]) ? 90 : (arr_14 [9] [i_1 + 1] [8])))) ? (((arr_0 [i_0]) & 255)) : (~255))))));
                                var_16 = (max(var_16, (((~(max(((1 ? var_10 : 0)), -2147483635)))))));
                                arr_17 [0] [5] [i_2] &= var_1;
                                arr_18 [i_4] [i_4] [i_3] [i_1] [i_1] [i_0] = (((arr_13 [i_4 - 1] [i_3] [i_1 - 1]) ? (arr_2 [0]) : (((((((arr_0 [i_2]) ? 33 : 0))) > (max(251, var_5)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_17 = ((((max((max(var_2, var_1)), var_11))) ? ((((var_5 - var_7) ? ((min(17, 90))) : ((10811 ? 65535 : var_13))))) : var_7));
    #pragma endscop
}
