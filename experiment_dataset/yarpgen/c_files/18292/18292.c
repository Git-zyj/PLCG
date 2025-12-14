/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18292
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18292 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18292
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 &= ((((max((min(-5306238644186834451, -1593024364917208778)), var_17))) ? var_18 : (((min(2147483642, 4212776557)) & var_15))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_21 = (max(((max((arr_6 [i_0] [i_0] [i_0] [i_0]), (arr_1 [i_2])))), ((88021204 ? ((2147483646 ? (arr_6 [i_2] [5] [i_0] [i_0]) : 5334160319546990127)) : (((4294967291 ? (arr_2 [i_0] [i_0]) : (arr_2 [i_0] [6]))))))));
                    var_22 = (max((((!(((var_18 ? -45 : var_17)))))), (~var_19)));
                    var_23 = ((1396294556 ? 113 : (arr_6 [i_0] [i_1] [8] [i_1])));
                }
            }
        }
    }
    var_24 = (~36);
    var_25 = var_12;
    var_26 = ((var_2 ? var_15 : 845444693));
    #pragma endscop
}
