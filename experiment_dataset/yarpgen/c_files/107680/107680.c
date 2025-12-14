/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107680
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107680 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107680
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 |= (min(((379113913093100188 ? (-5406873324911407300 - 0) : var_4)), (-1 / 14)));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_14 = (min(0, (((arr_0 [i_1 + 1] [i_1 + 1]) ? 0 : (arr_0 [i_2] [i_1 + 1])))));
                    arr_9 [i_0 - 1] [i_1 - 2] = ((-9223372036854775807 - 1) ? 0 : var_5);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_16 [i_0 + 1] [i_0 + 1] [i_4] = ((((((min(var_10, var_5))) || ((max(570956785530520327, 4711575212864941214))))) || (((-(((arr_7 [2] [i_1] [i_2] [i_4]) / 570956785530520327)))))));
                                var_15 = var_3;
                            }
                        }
                    }
                }
            }
        }
    }
    var_16 = (min(var_16, ((var_3 ? var_5 : ((((max(var_6, var_1))) ? var_5 : var_11))))));
    #pragma endscop
}
