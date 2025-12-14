/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1468
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1468 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1468
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 9;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_1 + 2] [i_2] = (max(((min(0, (max((arr_5 [i_0] [i_0] [i_1 + 3] [i_2]), (arr_3 [i_0] [i_0] [i_0])))))), var_4));
                    var_19 = (min((182 < var_15), 21348));
                }
            }
        }
    }
    var_20 = var_7;
    var_21 = ((((-1061038935 ? 18256671412009336328 : (max(var_5, 2106885557322436178))))) ? (~646548008259708768) : ((((max(31808, var_14))) ^ var_6)));
    var_22 = 31818;
    #pragma endscop
}
