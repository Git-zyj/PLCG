/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148860
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_5;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                {
                    arr_11 [i_0] [i_0] [i_0] [i_2 + 2] |= ((((min(((var_10 ? var_10 : var_4)), -var_5))) ? (((~(arr_3 [i_1 + 2])))) : ((var_6 ? var_9 : (((-(arr_6 [i_0]))))))));
                    var_12 = (min(var_12, (((((-4525237039890520518 > 1) ? var_5 : var_7)) < 122))));
                    var_13 = (min(var_13, ((((((arr_9 [i_0] [i_1] [i_1 + 2]) <= var_6)) ? (((arr_5 [i_1] [i_0]) ? var_6 : ((1 ? 1 : 1023)))) : (arr_9 [i_0] [i_0] [i_0]))))));
                }
            }
        }
    }
    var_14 = (min(var_14, var_2));
    #pragma endscop
}
