/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102394
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102394 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102394
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_6 [i_1] = 4294967286;
                arr_7 [i_1] [i_1] [i_1] = (4294967271 == 127942223);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            {
                var_11 = ((((min((arr_9 [i_3]), (arr_9 [i_2])))) ? ((((arr_9 [i_2]) ? (arr_9 [i_3]) : (arr_9 [i_2])))) : (max((arr_13 [i_2] [i_2] [i_2]), var_9))));
                var_12 |= ((!(((~(arr_14 [i_3]))))));
                var_13 = (max(var_13, var_6));
                var_14 = (min(((((((24 ? var_0 : 252))) ? 127942223 : 46))), (((((-(arr_12 [i_2] [i_2])))) ? (arr_10 [i_3]) : ((4294967228 ? (arr_13 [i_2] [i_2] [i_3]) : var_1))))));
                var_15 = (((arr_10 [i_2]) || ((!(arr_14 [i_2])))));
            }
        }
    }
    var_16 = (min(var_7, ((~((var_5 ? var_8 : var_6))))));
    #pragma endscop
}
