/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158049
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158049 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158049
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((var_3 * -64) || var_4));
    var_15 = (max(var_15, var_5));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_16 = (max(var_16, ((((arr_5 [i_1]) ? var_12 : (min((73 - 3243414594), ((var_3 ? -64 : var_13)))))))));
                var_17 = ((((!(arr_5 [i_1])))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 4; i_2 < 18;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            {
                var_18 = (((var_12 ^ var_1) || (arr_7 [i_2 - 4])));
                arr_10 [i_3] = ((~(max(var_9, (arr_8 [6] [i_3])))));
            }
        }
    }
    var_19 = ((((var_11 << (((~-62) - 48)))) - ((((((var_12 ? var_0 : var_7))) || var_8)))));
    #pragma endscop
}
