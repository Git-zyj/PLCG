/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114642
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                var_20 = -1179626249976240738;
                var_21 = var_19;
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_13 [i_3] [i_1] [i_2] [9] = (((((((max(11606223181054392487, (arr_5 [i_0] [i_2] [i_0] [i_3])))) ? var_7 : var_5))) ? (((arr_1 [i_1 + 1] [i_3 + 1]) ? (((~(arr_8 [i_0])))) : ((var_13 ^ (arr_8 [7]))))) : (arr_10 [i_2] [11] [i_1] [i_2 - 2])));
                                arr_14 [i_3] [i_0] [i_1] [16] [15] [i_4] = ((+((var_1 ? (arr_3 [i_1 - 1]) : (arr_3 [i_1 - 2])))));
                                arr_15 [i_0] [i_4] [i_3] [i_4] [i_4] [i_3 + 1] [15] = (max(var_17, ((-(max(6840520892655159128, var_17))))));
                                var_22 = ((1 ? 4 : 70480838));
                            }
                        }
                    }
                }
                var_23 = (-9223372036854775807 - 1);
            }
        }
    }
    var_24 = var_18;
    #pragma endscop
}
