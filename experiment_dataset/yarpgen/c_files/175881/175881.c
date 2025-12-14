/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175881
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175881 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175881
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((((!(!var_2)))) == ((((var_9 / var_13) > -32759)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [6] |= ((((((min(32767, (arr_2 [0] [0]))))) < ((~(arr_1 [i_1]))))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        var_15 = ((!(var_1 || var_11)));
                        arr_12 [i_0] [i_0] [18] [i_0] [i_0] &= ((((!(arr_1 [i_1]))) ? (arr_0 [i_0] [i_3]) : (arr_5 [i_0] [i_0] [i_0] [i_0])));
                        arr_13 [i_0] [i_0] [i_0] [i_1] [i_1] = 24855;
                    }
                }
            }
        }
    }
    #pragma endscop
}
