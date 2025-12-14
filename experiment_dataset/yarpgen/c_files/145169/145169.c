/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145169
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145169 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145169
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max((((((max(var_5, var_6))) == 27646))), (min(((min(var_2, var_2))), ((var_13 >> (var_5 - 213)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_15 = (min(3019976961832952729, ((((((arr_1 [i_0]) <= 8012)) ? (arr_3 [i_0]) : ((((1409 == (arr_4 [i_0]))))))))));
                arr_7 [1] [i_1] &= 2752669766;
            }
        }
    }
    #pragma endscop
}
