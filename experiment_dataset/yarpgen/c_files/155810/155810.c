/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155810
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, var_0));
    var_13 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                arr_6 [i_1] = (((((!(arr_3 [i_1 + 2] [i_1 + 1])))) * (max(var_5, (arr_5 [i_1 + 1] [i_1 + 2])))));
                arr_7 [i_1] [i_1] = 54047;
                var_14 += var_8;
            }
        }
    }
    var_15 = ((((max((min(var_3, -1152921504606846976)), (!var_0)))) ? var_4 : 3093827140));
    var_16 *= (max(var_11, var_0));
    #pragma endscop
}
