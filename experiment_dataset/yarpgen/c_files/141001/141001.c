/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141001
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 15;i_3 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            var_15 = (max(var_15, 1));
                            var_16 = (min(var_16, ((((((112 % (arr_4 [i_2] [i_0])))) ? -39958 : 36466)))));
                            var_17 = (min(var_17, (arr_11 [i_0] [i_3 + 3] [i_2] [i_3])));
                            var_18 ^= ((-(arr_8 [i_1] [i_3 + 1] [i_3 + 1] [i_3 - 1] [i_3] [i_3 - 1])));
                        }
                        /* vectorizable */
                        for (int i_5 = 2; i_5 < 17;i_5 += 1)
                        {
                            var_19 -= (((arr_5 [i_3 + 2] [i_0] [i_3] [i_5]) & (arr_1 [i_5 + 1] [i_3 - 1])));
                            var_20 += ((~(29080 + 1)));
                            var_21 += 1;
                            arr_14 [i_0] [i_1] [i_2] [i_2] [i_1] [i_1] = (((((arr_11 [i_0] [i_0] [i_0] [i_0]) >= 17)) && (arr_12 [i_5 - 1] [i_1] [i_1] [i_1] [i_0])));
                            var_22 = ((-4060714451148733584 > (arr_10 [i_5 + 1] [i_3 + 1] [i_3 + 1] [i_3])));
                        }
                        arr_15 [i_1] [i_2] [i_2] [i_2] [i_2] [i_2] = min((arr_11 [i_3 + 1] [i_3 + 1] [i_3 + 3] [i_3 + 3]), (min(127, (arr_7 [i_1] [i_3 + 3] [i_3 + 2] [i_1]))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 18;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 1;i_7 += 1)
            {
                {
                    var_23 = (arr_19 [i_0] [i_6] [i_7 - 1]);
                    var_24 -= (~(min((arr_6 [i_7] [i_7]), var_13)));
                    arr_20 [i_0] = ((((-(arr_12 [i_7 - 1] [i_7] [i_7] [i_7] [i_7 - 1]))) >= ((((arr_7 [i_0] [i_7 - 1] [i_7 - 1] [i_0]) > (arr_17 [i_0] [i_6]))))));
                }
            }
        }
        arr_21 [i_0] = ((((((!(arr_1 [i_0] [i_0]))))) & (arr_1 [i_0] [i_0])));
        var_25 = (-(~29522));
    }
    var_26 = (min(1, 9789));
    #pragma endscop
}
