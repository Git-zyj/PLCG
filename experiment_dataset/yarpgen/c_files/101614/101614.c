/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101614
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 += ((46033 ? var_15 : (max(var_3, var_15))));
    var_18 = (min(var_3, (((-32767 - 1) ? ((var_4 ? var_11 : var_7)) : var_16))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 9;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_1] [i_0] [i_0] = (arr_1 [i_0]);
                    arr_11 [i_1] [1] = (arr_8 [i_0]);
                    arr_12 [1] [i_1] [i_2] = max(((-(arr_5 [i_0] [1]))), ((((arr_2 [i_2 - 3]) != (arr_2 [i_2 - 3])))));
                    var_19 = (((min(((max((arr_8 [i_1]), (arr_9 [i_0] [i_0] [2] [i_0])))), (((arr_5 [i_1] [8]) ? 17126343103098546196 : (arr_7 [i_1] [i_2]))))) % (((((arr_8 [i_1]) && ((max(0, (arr_8 [i_0]))))))))));
                }
            }
        }
    }
    var_20 = ((((max(var_11, (min(var_10, var_4))))) ? (((~((var_12 ? var_6 : var_13))))) : 4570925268725317237));
    #pragma endscop
}
