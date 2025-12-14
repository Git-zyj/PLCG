/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182326
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = -1;
    var_21 = var_9;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_22 = ((-(((!(var_16 && var_10))))));
                    arr_6 [i_2] = (min(var_3, (((arr_1 [i_1] [i_1]) ? -543532222 : -543532223))));
                    var_23 = (max(var_23, ((((arr_5 [i_0] [i_0] [i_1] [i_2]) ? (((((arr_5 [i_0] [i_1] [i_2] [i_2]) && 9)))) : (min(var_7, var_7)))))));
                    arr_7 [i_1] [i_1] [i_0] = ((!((min(543532223, (arr_2 [i_1] [i_0]))))));
                    var_24 *= (-(-358409492 > var_0));
                }
            }
        }
    }
    #pragma endscop
}
