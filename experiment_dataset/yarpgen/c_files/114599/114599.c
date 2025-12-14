/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114599
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114599 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114599
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_10 = (((((arr_3 [i_0] [i_0]) ? ((11 ? -1 : (arr_2 [i_0] [i_0]))) : (127 < var_1)))) ? (arr_3 [i_0] [i_0 - 1]) : ((((var_8 == (arr_0 [i_0 + 2] [i_0]))))));
                arr_5 [i_0] = ((!(((-((~(arr_2 [i_0 + 3] [i_0]))))))));
                arr_6 [i_0] [i_1] [i_0] = (((max(0, 564407707)) < (((max(1, 29))))));
                arr_7 [i_0] [i_0] [i_0] = (((max((arr_2 [i_0 + 2] [i_0]), 1)) << (((((71 ? var_5 : 1))) ? ((var_9 >> (16383 - 16383))) : (((459138240 == (arr_1 [i_0]))))))));
            }
        }
    }
    var_11 += var_7;
    var_12 = ((var_2 && ((max(1812301622, (max(var_1, var_4)))))));
    #pragma endscop
}
