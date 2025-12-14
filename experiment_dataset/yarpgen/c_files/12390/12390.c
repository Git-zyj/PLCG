/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12390
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((var_4 - var_2) / var_11));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_0] = ((((+((((arr_5 [i_0]) != var_1))))) == var_7));
                    var_14 = ((197 >> (-109 || 8388607)));
                    var_15 = (max(var_15, (((!(((arr_4 [i_0] [i_1]) != var_2)))))));
                    var_16 = (max(var_16, (((+(((arr_3 [13] [i_1]) + 1)))))));
                }
            }
        }
    }
    #pragma endscop
}
