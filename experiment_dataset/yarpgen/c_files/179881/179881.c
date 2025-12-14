/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179881
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179881 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179881
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {
                            arr_13 [i_2] [i_2] [i_2] = (min((((9675563 == (arr_10 [i_3] [i_2] [i_1] [i_1] [i_0])))), (max((arr_9 [6] [i_1] [6] [i_1] [i_2]), ((8127 ? 12742 : 4294967295))))));
                            arr_14 [i_3] [i_2] [i_0] [i_0] = 4294967288;
                        }
                    }
                }
                var_16 = (arr_11 [i_1]);
                var_17 = (max(var_17, ((((((-((min(14, (arr_9 [i_0] [i_0] [i_0] [i_0] [i_1]))))))) ? 11779448626050637312 : -8127)))));
                var_18 = (((~((~(arr_1 [i_0] [i_1]))))));
                var_19 = (min(((((arr_12 [3] [3]) ? (arr_12 [i_1] [i_1]) : 102))), (6667295447658914278 & 57401)));
            }
        }
    }
    var_20 = (min((((!((min(11779448626050637298, -24191)))))), ((var_0 ? (min(var_11, 1431417673)) : var_9))));
    #pragma endscop
}
