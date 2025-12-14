/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142633
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142633 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142633
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_11 = (arr_5 [i_0]);
                    var_12 = (max(((var_6 << (var_2 - 6750609700522963244))), ((((max(var_4, (arr_2 [i_0] [i_1])))) ? var_2 : (max(var_5, var_1))))));
                    var_13 = var_10;
                }
            }
        }
    }
    var_14 = (min(32751, 32761));
    var_15 = (min(var_15, ((((((min(16836722418505307162, 16836722418505307162)))) ? var_9 : var_8)))));
    var_16 = (max(-127, (((max(var_10, var_6))))));
    #pragma endscop
}
