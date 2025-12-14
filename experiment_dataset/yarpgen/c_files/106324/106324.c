/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106324
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 &= var_11;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_4 [i_0] = (min((arr_0 [i_0] [i_0]), ((min(1344967278, 2714685772947007967)))));
                var_21 = (min(var_21, (arr_2 [i_0])));
                var_22 = (((35 * 15732058300762543664) | (((538805560 ? (arr_0 [i_0] [i_1]) : (arr_0 [i_0] [i_1]))))));
                arr_5 [i_1] [i_0] = -1762756173;
            }
        }
    }
    var_23 = (min(var_23, (((min(15732058300762543657, (min(2714685772947007965, -64))))))));
    var_24 = (max((((((67 ? var_1 : var_5))) ? ((125 ? 5310 : var_1)) : var_12)), (28573 + var_19)));
    #pragma endscop
}
