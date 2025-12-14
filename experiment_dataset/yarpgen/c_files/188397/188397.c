/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188397
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 21;i_3 += 1) /* same iter space */
                    {
                        arr_8 [14] [i_1] [6] &= (((!((min(26367, -1700848027))))));
                        arr_9 [i_0] [1] [i_3] [i_3] [i_1] [i_0] = ((21857 && ((!((max(var_17, (arr_7 [18] [i_1] [i_1] [i_3]))))))));
                        arr_10 [i_3] [i_1] [i_2] [i_1] [i_2] = (min((min((0 * 1), 0)), 2110723036));
                        var_18 = ((43668 ? 21867 : -4294967295));
                        var_19 = (max((((!(arr_2 [i_1] [i_1] [i_2 + 3])))), (max((arr_7 [7] [i_0] [i_2 + 3] [i_3]), (arr_2 [i_0] [i_0] [i_2 + 3])))));
                    }
                    for (int i_4 = 0; i_4 < 21;i_4 += 1) /* same iter space */
                    {
                        arr_13 [13] [13] [i_0] [i_2] [i_4] [i_4] = ((((min((min(22, 43668)), (min(21867, (arr_2 [i_0] [1] [i_1])))))) ? (max(var_17, (max(-62, var_5)))) : (max((~var_6), var_1))));
                        arr_14 [12] &= (max((((arr_1 [i_0] [i_1 - 1]) ? (min((arr_5 [i_0]), (arr_6 [i_0] [i_0]))) : (arr_3 [i_4]))), ((min(var_3, var_14)))));
                    }

                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        arr_17 [i_0] [i_1] [i_0] [i_5] [i_5] |= 1;
                        var_20 -= (max((arr_4 [i_0] [i_1] [i_2] [i_5]), ((((((min(43676, -568502046)) + 2147483647)) >> (var_9 - 31160))))));
                    }
                }
            }
        }
    }
    var_21 = 43669;
    var_22 = var_11;
    var_23 = (!1526095104);
    var_24 = var_9;
    #pragma endscop
}
