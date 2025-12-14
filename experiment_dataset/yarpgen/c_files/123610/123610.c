/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123610
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {
                var_19 = (min((max(11229609635483664948, (min(1, 16841448648317920579)))), (arr_4 [i_1 + 1] [i_1 + 1])));
                var_20 = (max((min((max((arr_4 [i_0] [i_1 - 2]), (arr_1 [i_0]))), var_16)), (((!(((~(arr_1 [i_1])))))))));
                var_21 = (min(((((min(var_7, (arr_0 [i_0])))) ^ (max((arr_1 [i_0]), (arr_1 [i_1]))))), var_7));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            {
                var_22 = ((-(min(-var_8, ((var_12 ? (arr_6 [i_2] [i_2]) : (arr_5 [i_2])))))));
                arr_13 [i_3] [i_2] [i_2] = (arr_5 [i_2]);
            }
        }
    }
    #pragma endscop
}
