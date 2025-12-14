/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136996
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_12;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        arr_8 [i_3] = (~(((arr_6 [i_3] [i_1] [i_1] [i_0]) + (((arr_0 [i_0]) % -32760)))));
                        arr_9 [i_0] [i_0] [i_1] [i_2] [i_3] = (~-32760);
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        var_19 = (arr_4 [i_1] [i_2] [i_1]);
                        arr_13 [i_0] [i_1] [9] = ((((-32755 >= (arr_12 [i_0] [1] [i_0])))) & (~var_7));
                    }
                    arr_14 [i_0] [i_1] = (max(((((max(var_12, -32764))) | -32755)), (((((arr_4 [i_0] [i_1] [i_2]) < (arr_12 [i_0] [i_1] [9]))) ? 7844252017732868374 : (arr_2 [i_2] [i_0])))));
                    var_20 -= (min((((max(var_16, 7844252017732868374)))), (min((arr_0 [i_0]), 27968))));
                }
            }
        }
    }
    var_21 = var_1;
    #pragma endscop
}
