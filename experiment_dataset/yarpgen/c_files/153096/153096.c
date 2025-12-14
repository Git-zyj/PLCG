/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153096
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153096 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153096
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = min(-2829861136139043967, 3788);
    var_12 = (max(var_12, (min(var_8, var_4))));
    var_13 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                arr_5 [i_1] = ((((min(3, 32767))) ? 61720 : 1));
                arr_6 [i_0] [10] [i_1] = (((min(31, 2740429771205799024))));
                arr_7 [i_1] [i_1] [i_1] = (~(((~226491133) ? (min(3, var_6)) : ((((arr_0 [i_0]) ? (arr_0 [i_0]) : 226491129))))));
            }
        }
    }
    #pragma endscop
}
