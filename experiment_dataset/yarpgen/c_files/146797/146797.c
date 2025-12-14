/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146797
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] [i_0] |= (arr_1 [i_0]);
        var_19 &= ((((((arr_2 [i_0]) ? var_5 : 4290772992))) - -1));
        var_20 = ((-(arr_2 [i_0])));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 2; i_2 < 12;i_2 += 1)
        {
            var_21 = (((((arr_2 [i_2 - 2]) ? (arr_2 [i_2 - 2]) : (arr_2 [i_2 + 2]))) > ((max(((min(-123, (-2147483647 - 1)))), -107)))));
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 0;i_5 += 1)
                    {
                        {
                            var_22 |= (((-((min((arr_11 [1]), (arr_1 [0])))))));
                            arr_16 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = (((arr_4 [i_1]) ? (((var_9 >> (3269403020 - 3269402990)))) : (arr_10 [i_1])));
                            var_23 |= ((max(((-(arr_4 [i_1]))), ((min((arr_1 [i_5 + 1]), (arr_1 [13])))))));
                        }
                    }
                }
            }
        }
        for (int i_6 = 0; i_6 < 15;i_6 += 1)
        {
            var_24 &= max((((arr_1 [i_1]) ? (arr_4 [i_6]) : -1)), ((max((arr_12 [i_1]), var_8))));
            arr_19 [i_6] = (min((var_6 - var_18), ((((arr_1 [i_1]) >> (((arr_2 [i_1]) - 12147419530461623449)))))));
        }
        var_25 = (arr_17 [i_1] [i_1]);
    }
    var_26 = (max(var_26, var_15));
    #pragma endscop
}
