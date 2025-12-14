/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13021
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13021 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13021
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 *= var_14;
    var_16 = (max(42611, 9118207497960082336));
    var_17 = (((!var_12) ? ((~((max(var_3, var_2))))) : (((~var_4) & (~112)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_18 &= (~22924);

                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    var_19 ^= ((var_9 && ((((arr_4 [i_2]) ? (((arr_6 [i_0 + 1] [i_2]) ? (arr_7 [i_2] [i_1] [i_0 + 1]) : var_13)) : var_6)))));
                    arr_9 [i_0] [i_2] [i_2] [i_2] = ((((min((arr_6 [i_0 + 1] [i_0 + 1]), (arr_2 [i_0 + 1])))) != ((((arr_2 [i_0 + 1]) < (arr_6 [i_0 + 1] [i_2]))))));
                }
                arr_10 [i_0] [i_0] [i_0 + 1] = (max((arr_8 [i_0] [i_0] [i_1] [i_1]), (arr_3 [i_0 + 1])));
                arr_11 [i_0] [i_1] |= var_9;
            }
        }
    }
    #pragma endscop
}
