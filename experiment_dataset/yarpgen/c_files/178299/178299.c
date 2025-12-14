/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178299
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 92;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_14 = (i_0 % 2 == zero) ? ((((min(((0 / (arr_0 [i_0] [i_0]))), ((-4583397589650048698 ? var_6 : (-32767 - 1))))) << (((((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : 1)) + 32608))))) : ((((min(((0 / (arr_0 [i_0] [i_0]))), ((-4583397589650048698 ? var_6 : (-32767 - 1))))) << (((((((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : 1)) + 32608)) - 5928)))));
                    arr_8 [i_0] [i_2] = (max(((((max((arr_3 [i_0]), (arr_6 [i_0] [i_0] [i_2])))) ? var_4 : (arr_1 [i_0] [i_0]))), (!var_12)));
                }
            }
        }
    }
    var_15 = ((var_6 ? ((-((var_1 ? var_8 : var_10)))) : (var_7 <= var_1)));
    #pragma endscop
}
