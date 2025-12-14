/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154873
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, var_6));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_14 += ((!var_0) ? (arr_0 [i_0]) : 1);
                var_15 = ((((max(1, 5501032669629063620)) ? (arr_3 [i_1]) : ((-96 ? 65524 : -1)))));
                arr_6 [i_1] = ((var_11 ? ((max(var_0, var_0))) : (((213 >= (arr_5 [i_1] [i_0] [i_0]))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_16 *= (((((243 ? (arr_9 [i_4] [i_3 - 1] [i_3] [i_3]) : (arr_9 [i_3] [i_3 - 1] [2] [i_1])))) ? (((arr_9 [9] [i_3 - 2] [i_1] [i_1]) ? 2110658433336106694 : (arr_9 [i_3] [i_3 - 2] [i_1] [i_0]))) : (((min((arr_9 [i_4] [i_3 + 1] [i_3] [i_0]), (arr_9 [2] [i_3 - 2] [i_2] [11])))))));
                                var_17 = (arr_1 [i_0]);
                                var_18 *= (-2110658433336106695 | 2110658433336106694);
                            }
                        }
                    }
                }
                arr_16 [i_1] [i_0] = (min((((((max(var_4, (arr_1 [i_0])))) ? (((-2147483647 - 1) ? var_0 : (arr_8 [i_1] [i_1] [i_0]))) : 2110658433336106696))), ((((536870400 ? 3334926207706618856 : var_4)) | (max(var_4, 2110658433336106694))))));
            }
        }
    }
    var_19 -= var_1;
    var_20 = (var_6 <= var_4);
    var_21 = (max(var_1, var_0));
    #pragma endscop
}
