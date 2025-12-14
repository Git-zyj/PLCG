/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155168
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_19 -= (max((arr_3 [i_0]), (((arr_2 [i_0]) ? ((max((arr_3 [i_1]), (arr_4 [i_1])))) : (arr_2 [i_0 - 2])))));
                var_20 = ((~(((!(arr_2 [i_0]))))));
                arr_5 [i_1] [i_1] [i_0] = (((arr_3 [i_0 + 1]) % var_4));
                var_21 = ((((!(arr_2 [i_0 + 3]))) ? (arr_3 [i_0 - 1]) : 1510146385));
            }
        }
    }
    var_22 = (((var_12 ? var_8 : 0)));
    #pragma endscop
}
