/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157901
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157901 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157901
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((var_0 ? var_0 : var_13)) & (max(var_1, var_11))));
    var_20 += var_12;
    var_21 = var_7;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 8;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 8;i_4 += 1)
                        {
                            {
                                var_22 = ((~((-289934965851095062 - (((arr_10 [i_0] [i_0] [i_3] [i_3 + 1]) ? (arr_5 [i_1] [i_3] [i_1]) : -5769731506958635762))))));
                                var_23 = ((((max(var_14, (((var_11 != (arr_0 [i_1]))))))) ? (arr_6 [i_0] [i_1] [i_3] [i_4 + 2]) : var_17));
                            }
                        }
                    }
                    arr_11 [i_0] [i_1] [i_0] [i_1] = ((~((((min((arr_9 [i_1] [i_0] [i_1] [i_0] [i_2 - 1] [i_2]), var_14))) ? (arr_5 [i_1] [8] [i_1]) : (max((arr_10 [i_2] [i_0] [i_1] [i_1]), var_1))))));
                    var_24 = arr_9 [i_1] [i_1] [i_2 - 1] [i_1] [i_2] [i_1];
                }
            }
        }
    }
    var_25 = (min(var_3, (((max(var_17, var_10)) ? (~var_1) : (max(221933978, -1314494323))))));
    #pragma endscop
}
