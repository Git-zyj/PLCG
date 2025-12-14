/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183062
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, ((max(((var_0 ? ((min(-1, 13))) : var_0)), (!var_3))))));
    var_13 = var_0;
    var_14 = -23;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_15 = (((arr_3 [i_0] [i_1]) ? 65535 : var_3));
                arr_4 [8] [8] = -26;
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        {
                            var_16 = ((!(arr_8 [i_1] [i_2 - 2] [i_3 - 1])));
                            var_17 = ((((((max((arr_3 [i_0] [i_1]), var_6))) || var_1)) ? (min(2981440210, (arr_8 [i_3] [i_3 + 3] [i_2 + 3]))) : ((((!(((2004068382 << (arr_7 [i_0] [i_1] [i_2]))))))))));
                            var_18 = (1313527069 ? -2067349045 : 4294967294);
                        }
                    }
                }
                var_19 = (min(var_19, ((max(2346144632, (min((min(9, 45677851)), 2769256444)))))));
            }
        }
    }
    #pragma endscop
}
