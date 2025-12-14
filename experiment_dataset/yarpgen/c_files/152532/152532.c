/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152532
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 |= (4294967295 + var_10);

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] [10] = -4703304672034494842;
        arr_3 [i_0] = -7;
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        var_13 = (max(24841, ((~((~(arr_1 [14])))))));
        arr_8 [i_1] = ((-2879 ? (arr_6 [i_1]) : (((max(4703304672034494841, 15470846476806686472)) + (arr_6 [i_1])))));
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 15;i_3 += 1)
            {
                {

                    for (int i_4 = 0; i_4 < 17;i_4 += 1)
                    {
                        arr_18 [i_2] [i_2] = 40695;
                        var_14 = (max((arr_11 [i_2]), ((((var_3 + -2879) != 15470846476806686472)))));
                    }
                    var_15 |= ((((arr_11 [i_3 + 1]) ? (arr_11 [i_3 + 2]) : (arr_11 [i_3 - 2]))));
                    var_16 = (((((var_5 + var_7) > (((244 ? 245 : 1))))) ? (+-1) : ((((max((arr_17 [i_3] [i_3] [i_1]), 10036959262874125127))) ? (arr_7 [i_1]) : (arr_12 [i_1] [i_2] [i_1] [i_2])))));
                }
            }
        }
    }
    #pragma endscop
}
