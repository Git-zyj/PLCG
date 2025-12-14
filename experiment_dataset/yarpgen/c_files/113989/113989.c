/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113989
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 *= var_5;
    var_13 = ((-((((min(88, var_10))) ? var_9 : (!1)))));
    var_14 = 1;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_15 = (((((-((0 ? (arr_0 [i_2] [i_0 - 2]) : var_6))))) ? var_1 : ((1 & ((min(22272, 22277)))))));
                    arr_8 [i_1] [i_2] [i_0] [13] = (min((((((min(var_9, var_3))) ? (((1 ? (arr_4 [i_0 - 1] [i_0]) : var_5))) : (var_10 & var_2)))), ((((((arr_5 [i_0] [i_1] [i_2]) ? (arr_6 [22] [i_2]) : (arr_3 [i_1])))) ? (min(33521664, 11090949668077572460)) : ((1 ? -88 : var_0))))));
                }
            }
        }
    }
    #pragma endscop
}
