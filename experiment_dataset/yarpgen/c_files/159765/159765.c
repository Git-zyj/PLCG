/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159765
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159765 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159765
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 -= -var_5;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_5 [4] = (max((((~(arr_2 [i_0 - 1])))), (min(676520696532612560, -8510154371022834432))));
                arr_6 [14] [14] = (((arr_1 [i_0] [i_0]) <= ((max((((arr_4 [i_0] [i_0]) ? 248 : var_10)), var_10)))));
                arr_7 [18] [4] [4] = 10;
                arr_8 [i_0] = ((!(((var_7 & (arr_1 [i_0 - 2] [i_0 - 1]))))));
            }
        }
    }
    #pragma endscop
}
