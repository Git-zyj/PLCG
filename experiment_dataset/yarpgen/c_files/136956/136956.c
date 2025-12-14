/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136956
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 &= 2047;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {
                var_11 = (max(var_11, ((((((((min((arr_1 [i_1] [i_0]), 16985845356470668522))) ? -var_2 : (arr_0 [i_1])))) || ((min((arr_1 [i_1 + 1] [i_0 - 4]), (arr_4 [i_1 + 2] [i_0 - 3])))))))));
                var_12 = (arr_4 [i_0 - 3] [i_1]);
                var_13 |= ((63481 * ((((arr_2 [i_0] [i_0 + 1]) / (((arr_0 [i_0]) ? 1 : (arr_1 [i_0] [i_0]))))))));
            }
        }
    }
    var_14 = (max(var_14, var_4));
    var_15 = ((((((!(var_3 <= var_6))))) * var_6));
    #pragma endscop
}
