/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115847
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 &= var_17;
    var_21 = ((-((((0 ? 53991 : 894538954)) ^ (65533 > var_5)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            {
                var_22 = (((((max(var_12, 11530)))) && (arr_3 [i_1 + 2] [i_1 + 2])));
                var_23 = (!(((-1850218184 ? ((124 ? 11539 : var_7)) : 420192544))));
                arr_6 [i_1] |= ((((2642927665 ? (arr_0 [i_1 + 1]) : 55))) ? ((125 ? ((((34 <= (arr_5 [i_1]))))) : (max(4294967281, -114)))) : (~-1652039630));
            }
        }
    }
    var_24 ^= var_14;
    #pragma endscop
}
