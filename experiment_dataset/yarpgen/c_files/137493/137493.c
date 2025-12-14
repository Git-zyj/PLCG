/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137493
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137493 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137493
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((~(((((102 ? 1652581466105098782 : 22))) ? -var_5 : (max(0, 4294967274))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                arr_6 [6] [i_1 - 1] = (max((((arr_4 [i_0] [i_1 + 2]) ? (((arr_5 [1] [i_1]) ? (arr_1 [i_0]) : var_0)) : (((!(arr_1 [i_0])))))), -58));
                arr_7 [i_0] [i_1] [i_1] = ((-(((!(arr_0 [i_0 - 1] [i_1 + 2]))))));
            }
        }
    }
    var_20 = ((+((((var_5 & -91) && (!var_9))))));
    var_21 = -93;
    var_22 = 829011376;
    #pragma endscop
}
