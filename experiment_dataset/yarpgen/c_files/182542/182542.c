/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182542
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182542 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182542
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_15 = ((!((min((arr_0 [i_0]), (arr_0 [i_0]))))));
                var_16 = (max((min((((arr_1 [i_0]) / (arr_0 [i_0]))), (arr_0 [i_0]))), ((((arr_3 [0] [i_0] [i_0]) != -1)))));
            }
        }
    }
    var_17 = (((((~((~(-32767 - 1)))))) ? var_5 : var_4));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            {
                arr_10 [i_2] = (max((((((max((arr_9 [i_2] [11]), var_3))) & (((arr_6 [i_2]) & (arr_8 [i_2])))))), ((((((arr_8 [i_2]) ? 127 : (arr_6 [i_3])))) ? ((((arr_7 [i_2] [i_3]) & (arr_5 [i_2])))) : 17233143675322310898))));
                var_18 = 1;
                var_19 |= ((((arr_8 [i_2]) % (arr_5 [i_2]))));
                var_20 = (((((((163 ? (arr_6 [i_2]) : (arr_9 [i_2] [i_2]))) * (!var_1)))) ? (((((arr_5 [i_2]) > (arr_5 [i_2]))))) : ((-((117 ? (arr_8 [i_3]) : var_5))))));
            }
        }
    }
    #pragma endscop
}
