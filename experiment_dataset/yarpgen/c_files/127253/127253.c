/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127253
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127253 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127253
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((var_7 >> (var_13 - 58)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {
                var_16 = (min((((((6198720936826185905 | (arr_1 [i_1] [i_0])))) ? ((var_7 ? 6198720936826185905 : (arr_3 [i_0] [i_1] [i_0]))) : ((71 | (arr_0 [i_0]))))), ((min((arr_2 [i_0] [19]), (arr_3 [i_0 + 2] [i_1] [i_0]))))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_17 = (max(var_17, (min((((~(((arr_7 [i_1] [i_1]) | (arr_8 [i_0] [i_1 - 2] [i_2] [i_1 - 2])))))), (((arr_3 [i_1] [i_1] [i_1]) ? (arr_1 [i_0 + 2] [i_1]) : (arr_1 [i_0] [i_1])))))));
                            var_18 ^= arr_1 [i_0 + 2] [i_3];
                        }
                    }
                }
            }
        }
    }
    var_19 *= var_9;
    #pragma endscop
}
