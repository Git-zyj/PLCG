/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131363
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131363 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131363
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 12;i_3 += 1)
                    {
                        var_10 = (((((arr_4 [i_0]) ? var_6 : var_2)) >= ((((arr_9 [4] [i_1] [4] [i_3 + 1]) / var_1)))));
                        var_11 = (((20 ^ 20) ? var_4 : ((var_1 >> (37 - 8)))));
                    }
                    var_12 = (min(((((((8666613108703998559 ? (arr_3 [i_2] [i_1]) : 20))) || var_0))), 4435345228969114841));
                }
            }
        }
    }
    var_13 = (min(var_13, (((var_0 ? ((((((var_8 ? var_4 : var_5))) ? ((-344497525 ? 200 : 61766)) : (var_7 < 1)))) : ((max(var_1, var_5))))))));
    var_14 = ((-var_5 - (((((var_4 ? 61771 : -1712659361))) ? var_2 : var_8))));
    #pragma endscop
}
