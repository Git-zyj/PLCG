/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121734
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121734 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121734
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((((-16 ? 4294967295 : -1170877542)))) ? (min(((var_1 ? var_12 : var_8)), -var_12)) : ((-var_2 ? (((var_13 ? -45 : var_13))) : (max(var_10, 4294967285))))));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_15 = ((((246 ? (arr_1 [i_0 + 1] [i_0 - 4]) : (arr_1 [i_0] [i_0 - 4])))) ? (((arr_5 [i_0] [i_0 - 4] [i_0 + 2] [i_0 - 2]) & (arr_2 [i_0] [i_0 - 4] [i_0 + 2]))) : ((((!(arr_1 [i_0] [i_0 - 4]))))));
                    var_16 = var_7;
                    var_17 = (max(var_17, 65535));
                    arr_6 [i_0] [i_1] [i_2] = (((((1 ? (arr_5 [i_1] [i_1] [i_0 - 2] [2]) : 1))) ? (((arr_0 [i_0]) ? -644701839613960942 : 18446744073709551615)) : (((+((((arr_2 [i_0 - 2] [i_0] [i_0]) >= var_4))))))));
                }
            }
        }
    }
    var_18 = ((!((max(var_8, var_12)))));
    #pragma endscop
}
