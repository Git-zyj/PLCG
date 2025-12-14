/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186385
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, 28880));
    var_15 *= ((((((var_5 ? var_6 : var_7))) != (min(4154353748, 13)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_6 [i_0] = ((-(max(((var_11 ? (arr_5 [i_0] [i_1] [i_1]) : 99)), ((max((arr_2 [i_0] [i_0] [i_0]), (arr_1 [i_0] [i_0]))))))));
                arr_7 [i_0] = ((~(max((~var_12), -1655679346))));
                arr_8 [i_0] [i_0] |= (var_2 - -445388048);
                arr_9 [i_1] = (min((((arr_0 [i_0] [i_0]) >> (var_4 - 56624))), (arr_5 [i_1] [i_1] [i_0])));
            }
        }
    }
    #pragma endscop
}
