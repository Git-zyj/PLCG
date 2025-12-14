/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106946
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106946 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106946
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 &= (((((max((var_7 == var_0), (min(var_5, var_8)))))) >= 4294967289));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 7;i_2 += 1)
            {
                {
                    arr_11 [i_1] [i_1] [i_2] = (min(((((((56131 * (arr_8 [i_1] [i_1] [i_1] [i_1])))) ? (var_9 || var_10) : 1))), (max((arr_9 [i_0] [i_0 - 1] [i_0 - 1]), (arr_9 [i_0] [i_0 - 1] [i_0 - 1])))));
                    arr_12 [i_1] [i_1] = ((!59041) ? (((!var_7) ? (((arr_6 [i_0] [i_0]) ? 1347246467 : 1)) : ((var_0 ? 11 : (arr_9 [i_2] [i_1] [i_0]))))) : ((((!((max((arr_0 [i_0]), (arr_1 [i_1])))))))));
                }
            }
        }
    }
    #pragma endscop
}
