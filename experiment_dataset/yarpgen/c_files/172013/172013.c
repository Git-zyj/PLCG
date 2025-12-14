/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172013
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_9;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_8 [i_0 + 1] [i_1] [i_0] = (((!var_4) ? ((min((arr_3 [i_0] [i_0] [i_0]), (arr_5 [i_0])))) : (((124775588 < (((((arr_3 [1] [1] [i_0]) <= 7857198030470110517)))))))));
                    arr_9 [i_1] [i_1] [i_2] [i_2] &= (arr_6 [i_0] [i_1] [i_2]);
                    arr_10 [i_2] [i_0] [i_0] [i_0] = (((((min((arr_7 [i_0 + 1] [i_0 + 1] [i_1] [i_0 + 1]), 2001)))) ? (((((arr_1 [1]) ? 9223372036854775807 : 227)) + (!var_8))) : (arr_6 [i_0 + 2] [i_0 + 3] [1])));
                }
            }
        }
    }
    var_18 = (min(((var_8 ? var_12 : (!var_16))), var_12));
    #pragma endscop
}
