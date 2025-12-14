/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181380
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
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 19;i_3 += 1)
                    {
                        {
                            arr_11 [i_3] [19] [i_1] [i_0] = (arr_9 [i_0]);
                            var_19 = 0;
                            var_20 = ((((((arr_4 [i_1 - 2] [i_3 + 1]) ? (arr_4 [i_1 - 1] [i_3 - 2]) : (arr_4 [i_1 - 2] [i_3 + 1])))) ? ((~((((arr_9 [i_3]) || (arr_8 [i_0] [i_2])))))) : (((((-24925 + (arr_9 [i_0])))) ? (arr_8 [i_1 + 1] [i_1 + 1]) : (max(var_5, (arr_2 [i_0])))))));
                            arr_12 [i_0] [i_0] [1] [i_0] [i_0] = (max(((2637 ? 14353943835108860579 : (-127 - 1))), (((8229 <= (arr_6 [i_1] [8]))))));
                        }
                    }
                }
                var_21 = (arr_8 [i_0] [i_1]);
                /* LoopNest 3 */
                for (int i_4 = 4; i_4 < 19;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 16;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 18;i_6 += 1)
                        {
                            {
                                var_22 = 27818;
                                arr_23 [i_6] [i_1] [i_6] [i_5 - 1] [i_6] = ((((min((((arr_10 [i_6 + 2] [1] [i_4] [i_5]) ? (arr_7 [i_6] [i_1] [i_0]) : (arr_8 [i_0] [i_1 - 1]))), ((1016437459 ? (arr_8 [i_1] [i_1]) : (arr_18 [i_5] [i_5] [i_5])))))) % (arr_20 [i_1] [i_4] [i_4 - 2] [i_5 - 2] [i_6 - 1])));
                                var_23 = ((~((-(arr_21 [i_6] [1] [i_6 - 3] [i_5] [i_5 + 3] [i_5])))));
                                var_24 = (arr_13 [i_0] [i_1 - 1] [i_4]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_25 = ((((((var_16 + var_1) ? var_11 : (((max(var_10, 27821))))))) ? var_7 : var_17));
    var_26 = (max(var_26, ((max(-var_7, var_0)))));
    #pragma endscop
}
