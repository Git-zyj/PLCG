/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128403
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128403 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128403
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 17;i_2 += 1)
            {
                {
                    var_18 = ((((((min(var_15, 1)) * ((((arr_4 [i_1] [i_1]) == (arr_3 [i_0] [i_0]))))))) ? (((((min((arr_3 [i_1] [i_0]), (arr_5 [i_2])))) ? ((var_5 / (arr_3 [i_2 - 1] [1]))) : 1))) : (max((arr_5 [i_2 - 4]), ((-(arr_6 [i_0] [i_2] [i_2])))))));
                    arr_9 [i_1] [i_1] [i_1] [i_0] = (((((((1 / (arr_6 [17] [17] [i_2]))) ^ -var_10))) ? ((~(max((arr_3 [i_0] [i_0]), (arr_4 [i_0] [i_1]))))) : (min((arr_1 [i_0]), ((255 ? 1 : var_0))))));
                    var_19 = -var_10;
                    var_20 = (arr_7 [i_0] [i_0] [i_0]);
                }
            }
        }
    }
    var_21 = (((((~((-78 ? var_1 : var_3))))) ? var_12 : (((max((!var_13), var_10))))));
    #pragma endscop
}
