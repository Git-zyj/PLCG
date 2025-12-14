/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185000
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {
                    var_17 = (arr_7 [i_0] [i_0 + 1] [i_2 + 1]);
                    var_18 -= (((min(1759696176, ((0 << (-1759696176 + 1759696176))))) | (((246 >= ((2147483647 >> (((arr_7 [i_0 + 3] [i_0] [i_1]) - 1689687391)))))))));
                    arr_10 [i_1] [i_1] [i_1] = ((min(115, 596495862)));
                }
            }
        }
    }
    var_19 = (min(var_19, ((max((((min(var_13, var_11)) ? 4294967295 : var_1)), (((((min(1759696176, 127))) ? 2096128 : var_16))))))));
    var_20 = (min((((max(var_9, 2146959360)) >> (((var_2 / var_0) - 14256230)))), var_8));
    #pragma endscop
}
