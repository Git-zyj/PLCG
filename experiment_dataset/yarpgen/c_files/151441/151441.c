/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151441
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151441 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151441
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((~((((min(1, 243))) | ((-96 ? 28673 : -4720))))));
    var_13 = ((~((-1681849833104635379 & (1297923042 == var_3)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((((((var_11 == 12) ^ ((max(239, 30288)))))) ? (arr_1 [i_0] [i_1]) : 4792));
                var_14 = ((~((~(arr_3 [i_0] [i_1] [i_0])))));
                arr_6 [i_0] [5] [i_0] = (((((-1931 + -1419) - (arr_1 [i_0] [i_1]))) + (min(((-30288 ? var_0 : (arr_1 [i_0] [i_0]))), var_3))));
            }
        }
    }
    var_15 = min((((~-1) ? ((4 ? 3855 : 29)) : 30677)), 6276);
    #pragma endscop
}
