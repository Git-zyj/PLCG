/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187078
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_9;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            var_11 = ((min(var_9, (max(-22940, -8150689281870728892)))));
            var_12 = (arr_3 [i_0] [i_1 + 1] [i_0]);
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {

            for (int i_3 = 2; i_3 < 19;i_3 += 1)
            {
                var_13 = (max(var_13, (((-4604750663307875337 | (arr_4 [i_3]))))));
                var_14 -= (arr_2 [i_2] [i_3 + 1] [i_3 - 2]);
            }

            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                var_15 |= ((~((-20604 ? 42052 : (arr_3 [i_0] [i_2] [i_2])))));
                arr_12 [i_0] [i_0] [i_0] = (~27243);
                var_16 = (var_8 < -5156924364872952152);
            }
        }
        arr_13 [4] &= -2066959322;
    }
    for (int i_5 = 0; i_5 < 18;i_5 += 1)
    {
        arr_16 [i_5] = ((~(((arr_2 [i_5] [i_5] [i_5]) ^ (arr_2 [i_5] [i_5] [i_5])))));
        arr_17 [i_5] [i_5] = ((-((-54666 - (arr_2 [i_5] [i_5] [i_5])))));
    }
    var_17 = var_0;
    var_18 = (min(var_18, var_1));
    #pragma endscop
}
