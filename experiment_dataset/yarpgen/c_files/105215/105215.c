/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105215
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105215 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105215
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, (((~((((var_1 ^ var_0) && var_7))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = var_5;
                arr_7 [i_1] [i_1] [i_1] = min((max(((1358443177 ? -10344 : 6825300736038495389)), ((max(1358443177, -1))))), ((((arr_5 [i_0] [i_1] [i_1]) ? 1358443185 : 0))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 3; i_2 < 24;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            {
                arr_15 [i_2] [i_3] = (((((var_0 ? (min(var_16, var_16)) : (arr_13 [i_2] [i_2 - 2])))) ? (min((min(var_11, var_16)), (((var_12 ? (arr_12 [i_2] [i_2]) : var_15))))) : (arr_14 [i_2] [i_2])));
                var_18 *= var_12;
            }
        }
    }
    #pragma endscop
}
