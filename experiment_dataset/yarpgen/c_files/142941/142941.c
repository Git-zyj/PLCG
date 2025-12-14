/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142941
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 -= (min(753808704, ((var_7 ? (4 != var_6) : (max(753808704, var_5))))));
    var_17 = (max(var_17, (min(var_6, var_3))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 17;i_2 += 1)
            {
                {
                    var_18 *= ((min((arr_1 [i_0] [i_2]), 753808684)));
                    var_19 = (min(var_19, ((((arr_5 [16] [i_2 - 3] [i_2 - 3]) || (((arr_5 [i_0] [i_2 + 2] [i_2 - 1]) < var_2)))))));
                    var_20 = (max(var_20, ((min(((((((arr_1 [i_0] [i_0]) ? (arr_4 [i_0] [i_0] [i_0] [1]) : var_15))) ? (((((arr_4 [i_0 - 1] [i_0 - 1] [i_0] [i_0]) && (arr_3 [i_0 - 1]))))) : (arr_0 [i_0]))), (((min((arr_0 [7]), (arr_5 [15] [i_2] [15]))))))))));
                    arr_6 [5] [i_0] = ((((((var_6 < (arr_3 [0]))))) | (min((arr_0 [i_2 - 2]), 753808700))));
                }
            }
        }
    }
    #pragma endscop
}
