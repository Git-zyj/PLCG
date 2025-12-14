/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163402
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163402 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163402
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_16 = (min((max((arr_4 [i_1] [i_1]), (arr_3 [i_1] [i_1] [i_0]))), (((arr_1 [i_1] [i_0]) ? (arr_3 [i_0] [i_1] [i_1]) : (max((arr_3 [i_0] [i_1] [i_1]), (arr_2 [4])))))));
                arr_5 [6] [i_1] = ((((((arr_2 [i_1]) ^ ((65535 ? -1 : 188))))) ? ((~(((arr_2 [i_0]) ? (arr_0 [i_0]) : (arr_2 [i_0]))))) : (((!(((arr_3 [8] [i_1] [9]) > (arr_1 [0] [i_0]))))))));
            }
        }
    }
    var_17 = (!var_10);
    var_18 = ((var_12 ^ (((var_15 || var_14) / var_0))));
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 15;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 12;i_4 += 1)
            {
                {

                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        var_19 = (arr_13 [i_2] [i_2] [i_2] [i_2]);
                        arr_17 [i_2] [i_3] [i_4] [i_5] = (((min((min((arr_6 [i_2] [i_2]), (arr_12 [i_2] [i_2] [i_4 + 4]))), ((max((arr_10 [i_2] [i_5] [i_5]), (arr_9 [i_2] [4]))))))) ? ((((arr_9 [i_2] [i_2]) ? (!165) : (min(-500397563, 86))))) : (min(7278252721391372159, 7756005713821087887)));
                        var_20 = (213 ? (arr_15 [i_2] [i_3 + 1]) : (arr_8 [i_2] [i_2] [i_2]));
                    }
                    var_21 = arr_15 [i_2] [i_3 - 2];
                    var_22 = (((arr_10 [i_2] [i_3 - 2] [i_2]) ? ((-(arr_10 [i_2] [i_3 - 2] [i_2]))) : ((min((arr_11 [i_3 + 1] [i_2] [i_3 - 1]), (arr_11 [i_3 + 1] [i_2] [i_3 + 1]))))));
                }
            }
        }
    }
    var_23 = (min((((var_7 + var_5) ? -var_15 : 20)), var_5));
    #pragma endscop
}
