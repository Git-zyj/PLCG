/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144972
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((((var_3 >> (248 - 239))))) ^ var_7));
    var_12 = (min(var_12, ((min(-7, (min((!4), (min(var_1, var_3)))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 18;i_3 += 1)
                    {
                        arr_10 [9] [i_1 - 1] [i_2 + 2] [i_3 - 1] = (248 + (arr_5 [i_2 - 1]));
                        var_13 = ((var_0 ? (30 | 245) : (1510383891 == var_3)));
                        arr_11 [i_0] [i_1] = ((var_7 ? (!var_7) : ((7 ? var_8 : 244))));
                    }
                    arr_12 [i_0] [i_0] [i_1] [i_0] = ((var_0 ? var_2 : (((arr_0 [i_2 + 1]) - ((max(42030, 12582912)))))));
                }
            }
        }
    }
    var_14 = ((~((var_9 ? var_4 : ((var_0 ? 4282384384 : var_0))))));
    var_15 = ((((max(var_4, (var_6 >= var_7)))) ? (max(15, 4282384410)) : (~var_4)));
    #pragma endscop
}
