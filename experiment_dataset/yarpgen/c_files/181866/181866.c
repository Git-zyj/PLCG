/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181866
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181866 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181866
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 &= (min(((-var_1 ? 12505461815044977732 : (((var_4 ? var_9 : var_0))))), var_12));

    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    {
                        var_16 = ((~(((arr_4 [i_0 - 2]) ? var_4 : (arr_4 [i_0 - 2])))));
                        var_17 = arr_10 [i_3] [i_1];
                        arr_12 [i_2] [i_2] [6] [i_3] = (arr_4 [3]);
                        var_18 = (((arr_10 [i_0 - 1] [i_2 - 2]) ? var_3 : var_8));
                    }
                }
            }
        }
        var_19 = (max((((min(var_5, (arr_2 [i_0 - 1]))) << ((~(arr_5 [i_0] [i_0]))))), ((((((~(arr_8 [i_0])))) ? var_0 : ((((arr_11 [i_0] [i_0] [i_0] [i_0]) ? (arr_5 [i_0] [i_0]) : (arr_11 [i_0] [i_0] [9] [i_0 + 1])))))))));
        arr_13 [i_0] &= -1165;
    }
    /* vectorizable */
    for (int i_4 = 4; i_4 < 14;i_4 += 1)
    {
        var_20 = (arr_15 [i_4]);
        var_21 = (max(var_21, (arr_15 [8])));
    }
    #pragma endscop
}
