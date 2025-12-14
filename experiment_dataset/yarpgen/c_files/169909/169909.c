/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169909
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_12 ^ (var_10 ^ var_5)));
    var_17 ^= ((+(((!var_8) ^ -127))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            {
                var_18 |= ((!((max((arr_2 [i_1 - 2] [i_1 - 3] [i_1 - 1]), ((((arr_1 [i_0] [i_1 - 3]) & 991))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_19 = ((arr_5 [i_1 - 1] [4]) ? ((max((arr_6 [i_0] [i_1 - 3] [i_2] [i_3]), (((var_9 && (arr_7 [i_0]))))))) : (((195 == (!105)))));
                            var_20 = ((((max((var_15 + 2), (arr_5 [i_0] [i_1 - 2])))) || (arr_10 [i_0] [i_1] [i_1] [i_3] [i_0] [i_1])));
                        }
                    }
                }
            }
        }
    }
    var_21 = ((-((1423729305417609906 | (max(var_10, -9223372036854775806))))));
    #pragma endscop
}
