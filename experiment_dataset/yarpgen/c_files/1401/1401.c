/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1401
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1401 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1401
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = -15;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        arr_11 [i_0] [i_1] [i_2] [i_1] = ((1 + (((arr_9 [i_0] [i_1] [i_2] [i_2] [i_0]) + (arr_9 [i_0] [i_1] [i_2] [i_2] [i_0])))));
                        arr_12 [i_0] [i_0] [i_0] [i_3] = ((-((((min(var_0, 1))) + var_6))));
                        arr_13 [i_0] [i_1] [i_2] [i_0] = (min(233, (min(((~(arr_3 [i_0] [i_0]))), 11194))));
                        var_14 -= ((((max((arr_8 [i_3] [i_0] [i_0]), (arr_4 [i_2])))) ? (min((30 - 21), (arr_3 [i_2] [i_1]))) : (arr_7 [i_3] [i_3] [i_3])));
                    }

                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 16;i_4 += 1) /* same iter space */
                    {
                        arr_17 [i_0] = (((arr_1 [i_4]) ? ((~(arr_7 [i_1] [i_1] [i_4]))) : ((-(arr_6 [i_0] [i_1] [i_1] [i_4])))));
                        arr_18 [i_0] = (((arr_5 [i_0] [i_2]) ^ (arr_0 [i_0])));
                        var_15 |= (((7864275523083645820 ? 5 : 235)));
                    }
                    for (int i_5 = 0; i_5 < 16;i_5 += 1) /* same iter space */
                    {
                        var_16 ^= (!(((-((((arr_14 [i_1] [i_2] [i_5]) && var_11)))))));
                        arr_21 [i_5] [i_0] [i_0] [i_0] [i_0] = ((226 ? 6642201251958140419 : 144115185928372224));
                    }
                }
            }
        }
    }
    #pragma endscop
}
