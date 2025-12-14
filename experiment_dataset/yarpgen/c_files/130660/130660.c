/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130660
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 &= var_11;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    var_17 = ((1 != (((arr_1 [i_2 - 1]) ^ (arr_1 [i_2 - 1])))));
                    var_18 = ((((((arr_2 [i_2] [i_1] [i_2 + 1]) < var_11))) != ((min(-7, (arr_1 [i_2 + 1]))))));
                    arr_9 [i_2] = ((arr_6 [i_2] [i_2] [i_2 - 1] [i_2 + 1]) & (((15 <= (arr_2 [i_2 + 1] [i_2 + 2] [i_2 + 1])))));
                }
            }
        }
    }
    var_19 = (min(((((-7 ? 1 : var_3)) + -var_5)), ((((min(var_10, var_5))) ? ((var_8 ? 13244867970924529398 : var_7)) : (max(var_14, 0))))));
    var_20 = (((((1 || var_7) <= var_1)) ? var_11 : var_13));
    #pragma endscop
}
