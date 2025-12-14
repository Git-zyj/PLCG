/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18491
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18491 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18491
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((min(-53, ((var_4 ? var_14 : var_13)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                var_21 = (min(((((min(8, -62))) ? (!162) : 7311476847376836813)), ((((min(var_19, 0))) / (min(var_6, var_12))))));
                var_22 = ((((1 >= (arr_2 [i_1 + 4])))));
                arr_4 [1] = (min((min(((var_6 + (arr_3 [i_0]))), (((65528 ? 1 : 3273))))), 62));
                var_23 = ((min(8, var_4)));
            }
        }
    }
    #pragma endscop
}
