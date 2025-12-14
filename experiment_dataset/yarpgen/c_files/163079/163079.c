/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163079
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163079 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163079
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_20 = (max(var_20, (((((max(-3406699, (arr_5 [i_0] [i_1])))) ? -7459913239938998468 : (max(9223372036854775807, (arr_5 [i_0] [i_1]))))))));
                var_21 = (max(var_21, (((((-23155 ? 243 : 3140092434)))))));
            }
        }
    }
    var_22 = (min(((((((var_1 ? var_1 : var_14))) ? -23155 : ((-23132 ? 194 : 241756410))))), ((var_2 ? (((23155 ? var_14 : 61))) : 4294967295))));
    var_23 |= max((((var_13 || var_9) ? (!var_11) : ((var_15 >> (133 - 120))))), ((var_9 ? ((min(66, var_17))) : ((23131 ? 8079012131614672873 : 1)))));
    #pragma endscop
}
