/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126908
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 0;
    var_11 = var_8;
    var_12 -= (min(var_5, var_6));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_8 [i_1] = 138;
                arr_9 [i_1] = (((((arr_6 [i_0]) ? ((144115188073758720 ? (arr_7 [i_0] [i_1]) : 5168862762577552842)) : var_5)) < ((((var_8 && (!-1315)))))));
            }
        }
    }
    var_13 += ((var_2 ? (max((max(var_9, 0)), var_3)) : 18446744073709551607));
    #pragma endscop
}
