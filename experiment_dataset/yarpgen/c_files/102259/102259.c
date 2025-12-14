/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102259
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102259 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102259
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 |= var_4;
    var_18 ^= ((-(!var_8)));
    var_19 ^= (((!var_11) || (!var_3)));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {

                    for (int i_3 = 3; i_3 < 16;i_3 += 1)
                    {
                        var_20 = ((-(((!(((arr_0 [i_3]) && var_3)))))));
                        var_21 ^= ((+(((arr_7 [i_0 + 2]) - var_4))));
                        arr_10 [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_0 + 2] = (((var_10 >= 37940) >= 56252));
                        var_22 = -51228;
                        arr_11 [9] [i_1] [i_2] [i_3 - 1] = ((-(((4586 < ((65526 ? 40253 : 6808)))))));
                    }
                    var_23 = (max(var_23, var_1));
                    var_24 ^= max(60113, 9277);
                    var_25 *= ((!(((~((max(22354, (arr_1 [15] [i_0 + 2])))))))));
                }
            }
        }
    }
    var_26 = (var_13 && var_13);
    #pragma endscop
}
