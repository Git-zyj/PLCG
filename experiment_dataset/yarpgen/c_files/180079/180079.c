/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180079
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180079 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180079
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_20 = (((arr_6 [i_0] [i_0] [i_2] [i_2]) >> (((!(arr_6 [i_2] [i_2] [i_1] [i_0 + 3]))))));
                    var_21 = ((+((((var_15 | var_4) <= var_19)))));
                }
            }
        }
    }
    var_22 = ((((-(max(72057559678189568, 0)))) * (!72057559678189579)));
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 14;i_3 += 1)
    {
        for (int i_4 = 3; i_4 < 12;i_4 += 1)
        {
            {
                var_23 = (((((arr_5 [i_3]) ? -19375 : (arr_5 [i_3]))) < (min((max((arr_3 [i_3]), var_12)), 1))));
                arr_12 [i_4] = 2261599306;
                arr_13 [i_4] = 1;
            }
        }
    }
    #pragma endscop
}
