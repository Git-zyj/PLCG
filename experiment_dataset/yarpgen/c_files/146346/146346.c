/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146346
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_2 ? (var_9 / var_3) : var_11));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_4 [i_1] = ((var_9 ? ((((min(2147483645, (arr_0 [i_0]))) << ((2147483646 ? 0 : 22))))) : (min((((~(arr_1 [i_1] [17])))), (((arr_0 [i_1]) ? (arr_3 [i_0] [1] [i_1]) : (arr_2 [i_0] [i_1])))))));
                arr_5 [1] [i_1] |= ((((max((arr_1 [i_1] [i_1]), (arr_3 [i_1] [i_1] [i_1])))) ^ (((((arr_0 [i_1]) ? (arr_0 [i_0]) : (arr_2 [i_1] [i_0]))) ^ (((arr_2 [i_0] [i_1]) ^ 65528))))));
                arr_6 [2] = 31;
            }
        }
    }
    #pragma endscop
}
