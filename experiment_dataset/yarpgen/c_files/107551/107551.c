/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107551
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107551 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107551
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                arr_6 [i_1 + 3] [3] = (((1 ? var_17 : (((arr_3 [i_0 - 2] [i_0 - 2]) ? 62006 : 331435086724900030)))));
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            arr_11 [i_1 + 3] [17] [i_1 + 3] [i_1 + 3] = ((((+((var_3 ? (arr_3 [i_3] [i_1 + 4]) : var_8)))) - (arr_1 [i_0 - 2])));
                            var_18 = (max(var_18, ((((((((0 ? 1 : -95))) ? (((17057629021857931797 ? var_12 : 90))) : ((64 ? 30742 : 16)))) ^ (((((min(var_17, var_7))) ? ((var_10 ? var_6 : var_14)) : ((536870908 & (arr_10 [i_1] [i_3])))))))))));
                            arr_12 [i_0] [14] [1] [8] = (((~var_9) ? ((39847 / ((var_13 ? var_17 : 4294967295)))) : ((1 ? -1 : (arr_3 [i_1 - 1] [i_0 - 2])))));
                        }
                    }
                }
                arr_13 [i_0] [i_0] = ((-(max(var_10, (var_7 - var_0)))));
                arr_14 [12] [i_1 + 4] [10] = (((!var_2) ? (((arr_0 [i_0 - 2] [i_0 - 2]) ? var_17 : 17114752909703008544)) : (((16 ? var_0 : ((((arr_1 [10]) || 51606))))))));
                var_19 = (min((arr_10 [i_0 - 1] [i_0 - 2]), -var_4));
            }
        }
    }
    var_20 = ((-331435086724900030 ? var_8 : var_3));
    #pragma endscop
}
