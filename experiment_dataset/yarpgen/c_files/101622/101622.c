/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101622
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101622 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101622
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 14688782016512438031;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_11 += (1048575 == -1048590);
                arr_6 [i_0] [i_1] = (((((var_1 ? (arr_4 [i_0]) : (arr_4 [i_0])))) ? ((((arr_4 [i_0]) ? (arr_4 [i_0]) : (arr_4 [i_0])))) : (arr_4 [i_0])));
            }
        }
    }
    var_12 = (-32761 < -1064176598);
    var_13 = ((((((var_6 - -1048578) ? ((-1425942719 ? var_0 : var_8)) : var_3))) ? (min(((min(-1048590, 102))), (~var_8))) : var_5));
    #pragma endscop
}
