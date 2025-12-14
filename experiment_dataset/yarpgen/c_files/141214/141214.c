/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141214
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_11 [i_0] [i_0 - 1] [i_1] [i_0] = (((arr_8 [i_1 + 1] [i_1] [i_0 - 1]) ? ((~(arr_8 [i_1 + 1] [i_1] [i_0 + 1]))) : (((!(arr_8 [i_1 + 1] [i_1] [i_0 - 1]))))));
                    arr_12 [i_1] = (((((arr_2 [i_0 - 1]) ? (arr_3 [i_0 + 1]) : (arr_3 [i_0 + 1]))) > (((((max(46218, 1))) + ((-(arr_0 [i_0 - 1]))))))));
                    arr_13 [i_2] [i_1] [i_0] = (!18446744073709551615);
                }
            }
        }
    }
    var_19 = ((!(((var_17 ? ((min(var_15, var_2))) : ((var_6 ? var_0 : var_8)))))));
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            {
                arr_19 [1] [i_3] [i_3] = ((((((arr_17 [i_4]) ? (arr_3 [i_3]) : (arr_9 [i_4] [i_4] [i_4] [i_4])))) ? (((arr_3 [i_3]) % (min((arr_10 [i_3] [i_3] [i_4] [i_3]), (arr_5 [20] [i_4]))))) : (max((arr_3 [i_3]), ((min(0, 238)))))));
                var_20 = (max(var_20, (arr_4 [i_3])));
            }
        }
    }
    #pragma endscop
}
