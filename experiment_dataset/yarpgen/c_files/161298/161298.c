/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161298
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161298 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161298
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_16 = (~46444);
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_1] [i_2] [i_2] [i_3] [i_2] = var_14;
                            arr_12 [i_0] [i_2] [i_2] [i_3] = (min((min(22476, 14178317942862297519)), ((min((arr_5 [16] [i_2] [i_2] [i_2 + 1]), (arr_6 [i_2 - 1] [i_2 - 1] [i_2 + 1]))))));
                            arr_13 [12] [i_1] [i_2] [i_3] [i_0] = min(((var_7 * (arr_10 [i_3] [i_2] [i_2] [i_2 - 2] [i_2] [i_0]))), (46444 || 19092));
                            var_17 = ((~(max(((-15428 ? 15441 : var_14)), var_5))));
                        }
                    }
                }
                var_18 = (min(15872, 19092));
                var_19 &= ((-(arr_6 [i_0] [i_1] [i_1])));
            }
        }
    }
    var_20 = (min(((((2763615897844517671 ? var_6 : 1522491171)))), (min(46436, (46435 + 49663)))));
    #pragma endscop
}
