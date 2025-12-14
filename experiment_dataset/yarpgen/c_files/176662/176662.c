/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176662
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176662 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176662
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((~(arr_0 [i_0])));
        var_20 *= (-1668624219 || 9223372036854775807);
    }
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                {
                    var_21 = (max(((-(arr_6 [i_1]))), (arr_3 [i_1] [i_2])));
                    arr_11 [i_1] [i_1] [i_1] = ((var_18 != ((min((min((arr_3 [i_1] [1]), var_7)), ((((arr_5 [i_1]) == (arr_5 [i_1])))))))));
                }
            }
        }
    }
    #pragma endscop
}
