/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14278
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14278 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14278
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_4;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_9 [i_0] [5] [i_2] [i_2] = (((((-11368 ? (((~(arr_3 [6] [i_0])))) : (((arr_2 [i_1 + 1]) % (arr_4 [i_0] [i_1] [i_1])))))) % (max(((((arr_3 [i_0] [i_1]) ? 58 : var_10))), (arr_1 [i_2])))));

                    /* vectorizable */
                    for (int i_3 = 2; i_3 < 7;i_3 += 1)
                    {
                        var_12 = (-16 ? -1 : 46765);
                        var_13 = -var_9;
                    }
                }
            }
        }
    }
    #pragma endscop
}
