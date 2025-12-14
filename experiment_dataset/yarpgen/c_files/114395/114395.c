/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114395
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_16 *= ((+(((arr_6 [i_0]) >> (arr_6 [i_2])))));
                    var_17 *= min(var_6, ((((arr_3 [i_0]) <= var_3))));
                    arr_9 [i_0] [i_1] [i_0] [i_2] = ((((((var_3 != (arr_8 [i_2] [i_2]))))) > (min((arr_8 [i_2] [4]), (arr_5 [i_0] [i_2])))));
                }
            }
        }
    }
    var_18 ^= (max((min(var_9, var_14), (!10445726333581398439))));
    var_19 = (min(var_5, (((var_12 != (((var_2 ? 0 : var_7))))))));
    #pragma endscop
}
