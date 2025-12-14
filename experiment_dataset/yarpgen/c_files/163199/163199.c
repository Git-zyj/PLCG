/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163199
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (!(!var_16));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_19 *= (arr_0 [i_0]);
                    var_20 = (max(((((min(var_8, (arr_3 [0] [i_1] [0]))) < (((arr_4 [i_0] [i_1] [i_2]) ? (arr_6 [i_0] [1] [i_1] [1]) : (arr_3 [i_2] [6] [6])))))), (((((arr_0 [i_0]) == 0)) ? (((~(arr_4 [i_0] [i_0] [i_0])))) : (min((arr_2 [13] [i_1] [i_1]), (arr_3 [i_0] [i_0] [i_0])))))));
                }
            }
        }
    }
    var_21 *= ((11069173339178928835 <= ((((min(1, 1)) ? var_14 : (~var_9))))));
    var_22 = var_7;
    #pragma endscop
}
