/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160107
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160107 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160107
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 1589026651;
    var_18 = ((var_8 < ((var_15 ? var_3 : var_5))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 11;i_1 += 1)
        {
            {
                var_19 = -525278301;
                var_20 = (max(var_20, (((((((1792 || -1391609335) + ((max(46234, 34709)))))) ? (((~1790) - (arr_4 [i_1 - 3] [6] [i_1 - 4]))) : var_1)))));
                var_21 = ((((((arr_0 [i_0] [i_1]) ? 0 : var_2))) ? 41910 : (arr_4 [i_0] [i_0] [i_0])));
                var_22 = (min(var_22, (((~(arr_0 [i_0] [i_1 - 1]))))));
            }
        }
    }
    var_23 -= (((max((-2147483647 - 1), var_13))) << (var_5 - 14473));
    var_24 = 0;
    #pragma endscop
}
