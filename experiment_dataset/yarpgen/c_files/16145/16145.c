/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16145
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 1;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_12 = ((1 ? -33 : 1064817127));
                    arr_9 [i_0] |= (min((arr_4 [i_0]), (((!(arr_2 [i_0]))))));
                    var_13 *= (max((arr_2 [i_0]), ((((arr_5 [i_0] [i_0] [i_0]) ? var_6 : 65525)))));
                }
            }
        }
    }
    var_14 = (min((((min(var_6, var_8)))), (var_7 / var_7)));
    #pragma endscop
}
