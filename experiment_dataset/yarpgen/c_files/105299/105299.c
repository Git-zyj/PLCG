/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105299
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                var_16 = ((arr_0 [i_1]) % (min(2394514586, -1016375240)));
                arr_5 [i_0] [i_0] = (((((((arr_3 [i_0] [i_1]) <= var_1)) ? (arr_3 [i_1 + 2] [i_1 + 1]) : (35569 == -1534855462)))) ? (((arr_1 [i_1 + 2] [i_1]) ? (arr_4 [i_1 + 3]) : var_7)) : var_4);
                var_17 = (min(var_17, (((((max(9869, 42059))) ? var_3 : (min((arr_4 [i_1 - 2]), (arr_4 [i_1 - 2]))))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            {
                var_18 = (arr_6 [i_2]);
                var_19 ^= (arr_6 [i_3]);
                var_20 = ((-443167680 ? (((~(-2147483647 - 1)))) : (max((((arr_6 [i_2]) ? (arr_7 [2]) : (arr_9 [i_3] [i_2]))), (1 || -2016799655)))));
            }
        }
    }
    var_21 *= (!41561178);
    var_22 = (max(var_22, ((var_14 + ((var_10 ? -23476 : (var_1 + 1)))))));
    #pragma endscop
}
