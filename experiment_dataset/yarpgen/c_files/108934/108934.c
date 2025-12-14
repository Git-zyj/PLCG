/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108934
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 &= ((var_8 ? ((min(var_1, var_11))) : (((!(((var_14 ? var_5 : var_1))))))));
    var_18 = (((((var_5 ? 6 : 66))) ? var_8 : var_12));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {
                    var_19 = (min(var_19, (arr_1 [i_0])));
                    var_20 += ((+(((((var_0 ? (arr_5 [i_0] [i_0]) : -20440))) ? (var_15 || var_9) : (615054962 && 117)))));
                    var_21 &= ((max((arr_4 [i_0]), var_1)));
                }
            }
        }
    }
    #pragma endscop
}
