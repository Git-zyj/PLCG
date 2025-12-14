/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114979
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114979 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114979
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                {
                    var_13 = ((((arr_2 [i_0]) && (arr_0 [i_1] [i_0]))));
                    var_14 = ((((var_9 ? (arr_1 [i_0 + 1]) : -20266))));
                }
            }
        }
    }
    var_15 = (((((min(53014, var_3))) ? (var_11 > var_1) : var_4)));
    var_16 ^= ((((((~var_3) <= ((min(29304, var_11)))))) != var_11));
    var_17 = (min(var_17, ((((((12522 ? 65528 : 127))) ? var_3 : ((((min(var_4, -1))) ? (!var_0) : (!1))))))));
    #pragma endscop
}
