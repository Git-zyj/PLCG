/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170648
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (var_12 <= var_2);

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_14 += (((((arr_0 [i_0] [i_0]) ? -9223372036854775807 : (((arr_1 [i_0]) ? (arr_0 [i_0] [i_0]) : var_10))))) | (arr_0 [i_0] [i_0]));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    {
                        var_15 = ((!((((((var_6 ? (arr_6 [i_0] [i_3] [i_2]) : (arr_0 [i_0] [i_1])))) ? ((var_3 ? var_12 : var_8)) : (((1156442222263981090 ? var_8 : (arr_9 [i_0] [i_1] [i_2] [i_2])))))))));
                        arr_13 [i_0] [i_0] [i_0] [i_0] = ((((((arr_3 [i_2 + 2] [i_2 + 2] [i_2]) ? var_12 : -1156442222263981090))) ? (((-2126778700233754539 && (arr_3 [i_2 + 2] [i_1] [i_2])))) : (arr_3 [i_2 - 3] [i_1] [i_1])));
                    }
                }
            }
        }
    }
    #pragma endscop
}
