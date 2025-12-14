/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156810
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_5;
    var_16 = ((min(var_0, (~9223372036854775807))) + ((((((56509 ? var_12 : var_14)) == var_8)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_17 = (min(var_17, ((((((arr_10 [i_3] [i_1] [i_1] [i_1] [15]) != (arr_10 [i_3] [i_3] [i_2] [i_1] [i_0]))) ? (((!((var_5 == (arr_5 [i_0])))))) : (((!((((arr_4 [i_3] [i_0] [i_0]) ? 4089776690 : 4089776690)))))))))));
                            arr_12 [i_0] |= (~3941202065450620010);
                            var_18 = (arr_2 [i_0]);
                            arr_13 [i_3] [i_2] [i_3] = ((arr_3 [12]) == (((((arr_7 [i_1] [1] [i_1]) != 1)) ? (arr_11 [i_0] [i_0]) : var_3)));
                        }
                    }
                }
                arr_14 [i_1] [1] = ((!((((arr_10 [i_0] [i_1] [i_1] [10] [i_1]) + (min(5886177124240489644, 4079534960)))))));
                var_19 = 1059881410;
                arr_15 [1] [i_1] [i_0] = ((((((arr_2 [i_1]) << (((arr_2 [i_0]) - 137))))) ? ((~(arr_2 [i_0]))) : ((min((arr_2 [i_0]), (arr_2 [i_0]))))));
            }
        }
    }
    #pragma endscop
}
