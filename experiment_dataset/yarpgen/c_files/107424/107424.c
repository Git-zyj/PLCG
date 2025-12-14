/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107424
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_12 += ((((((arr_1 [i_0]) ? (arr_1 [i_2]) : (arr_1 [i_1 - 1])))) ? 7057662999122394169 : ((((arr_1 [i_0]) ? (arr_1 [i_2]) : (arr_1 [i_0]))))));
                    var_13 += arr_1 [i_1 - 1];
                }
            }
        }
    }
    var_14 = ((+(((~6737637824849164609) ? (((var_9 ? var_7 : var_4))) : ((var_1 ? var_9 : var_6))))));
    var_15 = ((var_0 ? var_2 : var_1));
    var_16 = ((-var_10 > (255 == var_0)));
    #pragma endscop
}
