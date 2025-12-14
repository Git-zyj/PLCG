/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117005
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117005 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117005
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                {
                    arr_6 [i_2] [i_1] [i_0] [i_0] = (max((arr_1 [i_0] [i_1]), (arr_0 [i_2 + 1])));
                    var_14 ^= ((((-(((var_3 == (arr_5 [i_0] [i_1] [i_2] [i_2]))))))) <= (min(var_3, 84)));
                    var_15 *= ((var_4 & ((var_11 ? ((4204035932 ? 93 : var_13)) : (max(978019484, 7))))));
                }
            }
        }
    }
    var_16 *= -var_2;
    /* LoopNest 2 */
    for (int i_3 = 2; i_3 < 19;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 1;i_4 += 1)
        {
            {
                var_17 = (min(var_17, ((((((7650194214891053035 ? var_8 : 4294967295))) ? -92 : (max(1, var_4)))))));

                for (int i_5 = 1; i_5 < 20;i_5 += 1)
                {
                    arr_15 [i_3] [i_4] [i_3] [i_4] = ((var_9 ? (((!var_0) ? (((arr_2 [i_5 - 1] [i_4 - 1] [i_5 + 1]) & -34)) : 124)) : (((max((arr_12 [i_3]), var_4))))));
                    arr_16 [i_3] [i_4] [i_3] = (+(((arr_4 [i_3 + 2] [i_4] [i_5]) ? ((((arr_5 [i_5] [i_4] [i_3] [i_3]) ? var_1 : (arr_13 [i_3] [i_4] [i_4] [i_5 - 1])))) : 6095679682690393240)));
                }
                arr_17 [i_3] [i_3] = (((((arr_5 [i_4] [i_4] [i_3] [i_3]) ? var_13 : (arr_3 [i_4 - 1] [i_4]))) % (~-22)));
            }
        }
    }
    var_18 = ((((((var_1 ? var_5 : 16557442549002898997)) & var_11))) ? var_12 : (((!(((35 ? 56 : -300433728)))))));
    #pragma endscop
}
