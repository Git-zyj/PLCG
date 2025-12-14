/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16347
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_13 = var_6;
                var_14 ^= (((arr_4 [i_1] [i_1] [i_0]) <= ((-((0 ? 192106763 : 192106768))))));
                var_15 = 36654;
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_16 -= (((arr_5 [10] [10] [i_3 - 1] [i_3]) <= (min((arr_5 [i_1] [i_1] [i_3 - 3] [i_0]), 2089910843))));
                            var_17 = var_0;
                        }
                    }
                }
                var_18 = (((((arr_4 [i_1 - 1] [i_1] [i_1]) ? (arr_4 [i_1 - 1] [i_1] [10]) : (arr_4 [i_1 - 1] [14] [22]))) / (((arr_4 [i_1 - 1] [i_1] [i_0]) ? (arr_4 [i_1 - 1] [i_1 - 1] [i_1 - 1]) : (arr_4 [i_1 - 1] [i_1 - 1] [i_1 - 1])))));
            }
        }
    }
    var_19 = (24084 >= 1746255698);
    var_20 = var_6;
    #pragma endscop
}
