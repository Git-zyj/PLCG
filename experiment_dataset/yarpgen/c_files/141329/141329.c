/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141329
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_8;

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        var_12 = ((((max((arr_1 [i_0]), (arr_1 [i_0])))) ? (!8306861300167246918) : (arr_1 [i_0])));
        var_13 = (((((((max(203, 872882608))) & (~304731446886615634)))) ? (~170) : ((~((var_5 ? -12 : (arr_0 [i_0])))))));
        var_14 = ((~((~((42092 ? 66 : 39834))))));
    }
    /* LoopNest 2 */
    for (int i_1 = 4; i_1 < 23;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            {
                var_15 = (arr_5 [i_2]);
                var_16 -= ((191 / ((var_7 ? (((100 ? (arr_4 [i_1]) : 25226))) : var_1))));
            }
        }
    }
    #pragma endscop
}
