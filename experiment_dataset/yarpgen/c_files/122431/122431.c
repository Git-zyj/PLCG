/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122431
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122431 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122431
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 += var_13;
    var_17 = (min((max(6, ((33 ? 238 : 0)))), var_8));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_7 [i_0] = ((((((arr_1 [i_0 - 1]) ? (arr_1 [i_0 - 1]) : (arr_1 [i_0 - 1])))) ? 2914439575 : ((((arr_1 [i_0 - 1]) ? (arr_1 [i_0 - 1]) : 11314)))));
                    var_18 = 47036;

                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        var_19 = ((-1 ? 44776 : 18446744073709551615));
                        var_20 = var_13;
                        arr_11 [i_0 - 1] [i_1] [i_2] [i_3] = (min(((min((max(var_9, var_9)), (arr_1 [i_0 - 1])))), (((arr_0 [i_0 - 1]) ? (arr_0 [i_0 - 1]) : (arr_0 [i_0 - 1])))));
                        var_21 += (min(1, (min((arr_0 [i_0]), (arr_4 [11] [i_0 - 1] [i_1])))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
