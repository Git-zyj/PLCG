/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129819
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129819 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129819
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((((15622520633683833438 ? (min(var_6, var_0)) : var_0))) ? (((~(min(1753241014, -1))))) : (((1 + var_6) ? var_3 : (max(83, var_8))))));
    var_11 = 10078778214532684264;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            arr_5 [i_0] [12] [i_1] = (var_3 ? ((1843885374 ? var_4 : -3)) : var_9);
            var_12 = (((arr_0 [i_0] [i_0]) != ((16383 ? -615659592 : 11818760612746725403))));
        }
        var_13 = (((arr_0 [i_0 - 1] [i_0]) <= (arr_1 [i_0 - 1])));
    }
    #pragma endscop
}
