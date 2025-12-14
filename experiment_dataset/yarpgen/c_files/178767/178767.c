/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178767
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178767 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178767
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 19;i_2 += 1)
            {
                {
                    arr_6 [i_2] = ((((max(var_15, var_4))) > (min((~var_12), -var_5))));
                    arr_7 [i_0] [i_1] [i_2] [i_2] = (min((min(var_9, var_14)), ((max(var_15, var_7)))));
                    arr_8 [i_2] = (((var_9 * var_11) != ((min(var_0, var_15)))));
                }
            }
        }
    }
    var_16 = ((((((min(var_15, var_13))) * ((max(var_3, var_11))))) - (min(((min(var_12, var_7))), (var_0 + var_9)))));
    var_17 = ((~((((var_5 << (((var_11 + 118) - 11)))) / ((max(var_15, var_5)))))));
    #pragma endscop
}
