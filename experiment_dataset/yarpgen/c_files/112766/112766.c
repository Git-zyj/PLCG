/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112766
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                arr_5 [i_1] = (((((((208 ? (arr_2 [i_0]) : 1)) | (min((arr_2 [i_1]), 2443222415))))) ? (((arr_3 [7] [7] [i_1 + 1]) ? (arr_4 [i_1] [i_1 + 1]) : (arr_3 [i_1 + 1] [i_1 + 1] [i_1 + 1]))) : (arr_3 [i_1 + 1] [i_1 - 1] [i_1 + 1])));
                arr_6 [i_0] = (arr_1 [i_0]);
            }
        }
    }
    var_18 = ((max(((var_9 ? 1851744872 : 477315171), (!var_13)))));
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 15;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 13;i_3 += 1)
        {
            {
                arr_13 [i_3] [i_3] [i_2] = (((~(arr_12 [i_2 - 1]))));
                arr_14 [i_2] = (min((min((arr_8 [i_2 + 2] [i_2 + 1]), ((1851744880 << (((arr_9 [i_2]) - 14811)))))), ((+((var_7 ? (arr_9 [i_2]) : 2443222415))))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        {
                            arr_21 [i_3] [i_3] [i_3] = 43061;
                            arr_22 [i_2] [i_2] [i_3] [i_4] [i_4] [i_5] = (arr_9 [i_2]);
                        }
                    }
                }
                arr_23 [i_2 + 2] [i_2 + 2] [i_3] = ((+((((((arr_12 [i_2]) ? 37271 : (arr_10 [9])))) ? (max((arr_7 [i_3] [i_3]), 43053)) : var_16))));
            }
        }
    }
    var_19 = 1851744881;
    #pragma endscop
}
