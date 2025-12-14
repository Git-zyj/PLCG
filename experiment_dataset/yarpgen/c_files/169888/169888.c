/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169888
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169888 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169888
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = max((-15283 < -93023558), (max(0, -15283)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 12;i_2 += 1)
            {
                {
                    var_14 = ((((((arr_2 [i_2 + 1] [i_2] [i_2 + 1]) ? var_3 : var_5))) ? (arr_2 [i_2 - 1] [i_2 - 1] [i_2]) : (((arr_2 [i_2 + 1] [i_2] [i_2 + 1]) ^ (arr_2 [i_2 - 3] [i_2] [i_2])))));
                    var_15 = ((var_5 ? (((max((arr_0 [i_0]), var_6)) * (((0 ? 15275 : -1513148805))))) : ((max(var_11, (arr_3 [i_0] [i_0] [i_2 - 1]))))));
                    var_16 *= (min((arr_4 [i_2]), var_5));
                    arr_6 [i_2] [i_2] = ((+(((!((((arr_2 [i_0] [i_1] [i_2]) | var_0))))))));
                    arr_7 [i_2] [i_0] [i_0] = var_1;
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 23;i_5 += 1)
            {
                {
                    arr_17 [1] [i_3] [i_3] [i_3] = max(((1 ? 18 : 187)), (min(((-(-127 - 1))), -var_10)));
                    var_17 = ((!((!(arr_16 [i_5] [i_5] [i_5])))));
                    var_18 = ((-(arr_9 [i_5] [i_3])));
                }
            }
        }
    }
    #pragma endscop
}
