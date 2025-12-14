/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133018
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133018 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133018
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_18 = (max(var_18, (((2147483647 ? (((~(arr_0 [i_0])))) : (max(4, ((max(var_14, (arr_4 [i_0])))))))))));
                var_19 ^= (((((max(var_5, (arr_2 [i_0] [i_0] [i_0]))))) ? var_1 : ((15722610882814886678 ? 9223372036854775807 : 9223372036854775807))));
            }
        }
    }
    var_20 = ((((min(15722610882814886695, 4294967295))) ? ((min(var_0, var_4))) : (((!33521664) ? (min(72057589742960640, 9223372036854775807)) : 72057589742960665))));
    var_21 &= ((var_9 / (max(((var_7 ? 4294967294 : var_3)), var_14))));
    var_22 = var_17;
    var_23 = (min(var_23, (max(-1870027641887004740, 3456555267034908593))));
    #pragma endscop
}
