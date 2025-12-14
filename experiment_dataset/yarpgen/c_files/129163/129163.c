/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129163
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((((45038 * 224) * (-590158409 / 18446744073709551602))) * ((((var_14 * var_2) * (124 / var_9))))));
    var_16 = ((((((-124 > 1) || (var_11 & var_14)))) * ((((28195 > var_11) < (134 ^ 0))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    var_17 = (((((((16344461969208368726 == (arr_8 [i_0] [0])))) & ((0 ^ (arr_0 [i_2 - 1] [i_0]))))) ^ (((((arr_5 [i_2] [i_1] [i_0]) | var_12)) - ((((arr_6 [i_0]) >= var_11)))))));
                    arr_9 [i_1] [i_1] [3] [i_1] = (((2102282104501182880 / 3968) * (((((arr_1 [i_1] [i_2]) / var_9)) * (122 * var_9)))));
                }
            }
        }
    }
    var_18 = (((((var_11 <= 14492846497971615593) ^ (var_13 & 536866816))) - (((((var_1 + var_10) && (-4794765781016780502 + 10)))))));
    #pragma endscop
}
