/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164884
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_0] = ((((min(var_3, ((var_5 ^ (arr_2 [i_0])))))) ? (arr_2 [i_1]) : (((((arr_1 [i_0] [i_0]) >= ((((arr_5 [i_1]) != var_8)))))))));
                arr_7 [i_0] [i_1] [i_1] = ((((!(arr_4 [i_1] [i_1]))) || (((var_8 << (((((arr_3 [i_0] [i_0]) ? var_6 : (arr_3 [i_1] [i_0]))) - 28)))))));

                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    var_16 = ((((max((arr_1 [i_0] [i_0 - 1]), (arr_1 [i_0] [i_0 - 2]))))) < ((~(((arr_10 [i_2]) ? (arr_3 [i_1] [i_2]) : 34359738367)))));
                    var_17 -= (((((((191 ? (arr_0 [i_0]) : (arr_4 [i_2] [i_1])))) + 9223372036854775807)) << (((((var_4 << (((arr_2 [i_2]) + 1607250509570057321)))) == (!var_5))))));
                    arr_11 [i_0] [i_1] [i_0] [i_2] = (((((187 || (-9223372036854775807 - 1))) ? var_12 : ((max(43, (arr_10 [i_0])))))) * (((min(64, (arr_5 [i_0 - 2]))))));
                }
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    var_18 ^= ((arr_8 [i_1]) ? ((~(65 ^ 3782536416))) : ((max(((185 & (arr_5 [i_0]))), (arr_9 [i_3] [i_3] [21] [i_0])))));
                    var_19 = -924988353;
                }
                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    arr_17 [i_0] [i_0] [i_4] = (((arr_15 [i_0 + 2] [i_0 + 1] [i_0 + 1]) ? (((65 ^ var_8) ? var_14 : (arr_2 [i_0]))) : 1633915719));
                    var_20 = (((((arr_1 [i_0] [i_0]) > (arr_1 [i_0] [i_1]))) ? (((arr_1 [i_0] [i_0]) - (arr_1 [i_0] [i_4]))) : (arr_1 [i_0] [i_0])));
                }
                var_21 -= (arr_8 [i_1]);
            }
        }
    }
    #pragma endscop
}
