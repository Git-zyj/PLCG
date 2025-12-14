/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159680
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159680 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159680
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((var_8 ? 137 : ((min(var_10, var_2))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 11;i_2 += 1)
            {
                {
                    arr_9 [i_2] [i_1] [i_0] = ((max((arr_3 [9] [i_2 - 1]), var_2)));
                    var_16 = (min(var_16, ((max(((((min((arr_3 [i_0] [i_1]), 137))) + (max((arr_2 [i_0] [i_1]), 1106594009971098864)))), ((max(65524, 1))))))));
                    arr_10 [i_0] [11] = ((11 || (-9223372036854775807 - 1)));
                    arr_11 [i_0] [i_1] |= ((~((((-9223372036854775807 - 1) == 242)))));
                }
            }
        }
    }
    var_17 = (~var_5);
    #pragma endscop
}
