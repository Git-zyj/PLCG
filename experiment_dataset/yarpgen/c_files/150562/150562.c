/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150562
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((var_1 < var_1) >= var_4));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 1; i_2 < 10;i_2 += 1)
                {
                    arr_7 [i_0] [i_0] [i_2] [i_1] = (arr_6 [i_0] [i_1] [i_0] [i_0]);
                    arr_8 [i_1] = (((arr_2 [i_1] [i_1]) > (arr_1 [i_1 - 1] [i_2])));

                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        arr_13 [i_0] [i_0] [i_0] [i_0] [i_1] = (((143 - 143) <= (arr_3 [i_3] [i_0] [i_0])));
                        arr_14 [i_0] [i_1] [i_1] [i_3] = (arr_12 [i_0] [i_1] [i_0] [i_1] [i_2]);
                    }
                    var_11 = (((arr_10 [i_0] [i_0] [i_1] [i_0] [i_0] [i_0]) - (((arr_10 [i_0] [i_0] [i_0] [i_0] [i_2] [i_2]) | (arr_9 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0])))));
                }
                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    var_12 = (((arr_6 [i_0] [i_1] [i_0] [i_4]) + (((((arr_10 [i_0] [i_0] [i_0] [i_1] [8] [i_0]) && (arr_6 [i_0] [i_1] [i_1] [i_4])))))));
                    var_13 -= ((((((arr_16 [i_0] [i_0] [i_1] [i_4]) || (arr_5 [i_0] [i_0] [i_0])))) - ((((arr_1 [i_1] [i_4]) > (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))));
                    var_14 = (((((arr_2 [i_1] [i_4]) % (arr_17 [i_0] [i_0] [11] [i_4])))));
                    var_15 -= (7610016439497091888 ^ -22);
                }
                var_16 = (min(var_16, (arr_1 [i_0] [i_0])));
                arr_18 [i_0] [i_1] = (((arr_1 [i_0] [i_1]) && ((((arr_3 [i_1] [i_0] [i_0]) << (((((arr_1 [i_1] [11]) + 2366806091366542900)) - 20)))))));
            }
        }
    }
    var_17 = ((((var_3 * var_2) - var_3)));
    #pragma endscop
}
