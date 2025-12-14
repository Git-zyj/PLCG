/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13865
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13865 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13865
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max((!var_1), var_12));
    var_18 = ((max((max(var_13, 12390)), (max(var_6, var_12)))) != var_4);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                arr_6 [i_1] = (((((var_14 != 14336) ? (((arr_4 [i_1 - 1] [1]) ? var_6 : (arr_0 [i_0]))) : (arr_5 [i_0] [7] [i_1]))) ^ ((((min((arr_0 [i_0]), var_14))) ? (((arr_2 [i_0] [1]) ? var_14 : (arr_0 [i_0]))) : var_5))));
                var_19 = (!(((var_10 ? ((~(arr_3 [i_0] [i_1 + 1]))) : (((-(arr_1 [i_0]))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            arr_13 [1] [i_1] [i_1] [i_0] = var_1;
                            arr_14 [i_1 - 1] [13] [3] [6] [i_1] [i_1 - 1] = var_11;
                        }
                    }
                }
                var_20 *= (((arr_11 [i_0] [i_1] [i_0] [i_1]) ? ((-(arr_3 [i_1 + 2] [i_0 + 1]))) : (arr_2 [i_1] [10])));
            }
        }
    }
    #pragma endscop
}
