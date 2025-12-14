/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171230
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171230 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171230
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((((max(var_4, var_9)))) ? var_5 : (max((((255 ? 54 : 28666))), (~var_5)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_18 |= ((-(min(7, ((var_2 ? 110 : var_12))))));
                var_19 = (max(var_19, ((((((-28658 ? 201 : var_15))) ? (((!(((var_10 ? (arr_1 [i_0] [i_1]) : -104)))))) : (!-139))))));
                arr_5 [i_0] [i_0] [i_0] = ((((max((max(2, 54)), ((max(var_10, var_6)))))) ? -15607 : (((!(((var_0 ? (arr_3 [i_0] [i_1] [i_1]) : 9))))))));
            }
        }
    }
    #pragma endscop
}
