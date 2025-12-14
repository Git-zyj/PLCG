/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152387
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_14 = (((+-4155838466384489759) ? ((((!(arr_3 [i_0] [10]))))) : (((1 > 4155838466384489747) ^ (min((arr_3 [5] [1]), (arr_2 [i_0] [3] [i_1])))))));
                arr_4 [i_0] [20] [4] = 1861719963743250106;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 18;i_3 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 18;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 19;i_5 += 1)
                    {
                        {
                            var_15 = (max(((+(((arr_2 [1] [22] [23]) ^ -1)))), ((((((arr_0 [4] [i_3]) ? (arr_11 [19] [i_4] [5] [i_2]) : (arr_9 [i_2] [i_2] [i_3])))) ? -1 : (max(var_4, (arr_2 [22] [i_4] [i_3])))))));
                            var_16 = ((!((((arr_7 [i_2 - 1] [i_3 - 1]) ? (arr_7 [i_2 - 1] [i_3]) : (arr_10 [i_2] [17] [i_5 + 1]))))));
                        }
                    }
                }
                arr_14 [i_3] = ((((!(arr_8 [7] [i_3] [i_3 + 2])))));
                var_17 = ((+((var_1 / (max((arr_9 [8] [i_3] [i_3]), var_0))))));
                var_18 = ((arr_0 [i_2] [i_2]) >> (((min((arr_9 [i_2 - 1] [1] [4]), (arr_5 [i_3 + 3] [13]))) - 8890901958247438876)));
            }
        }
    }
    #pragma endscop
}
