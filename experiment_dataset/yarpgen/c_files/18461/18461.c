/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18461
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18461 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18461
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                var_20 = (((((arr_4 [i_1] [i_1 + 1] [i_1 + 1]) ? (arr_4 [i_0] [i_1 + 3] [1]) : (arr_4 [i_0] [i_1 + 1] [i_1]))) & ((-(arr_3 [i_0] [2] [12])))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_21 = (min((1611213892 || -2739723481608986951), (((arr_2 [i_1] [i_2]) ? ((((!(arr_8 [i_3] [i_1] [2] [i_3]))))) : (min((arr_9 [i_2] [i_3] [i_2] [i_3]), 2739723481608986950))))));
                            arr_10 [i_3] [i_3] [3] [i_3] = 0;
                            var_22 += ((((min((arr_4 [10] [i_3 - 1] [i_1 + 1]), (arr_4 [i_0] [i_3 + 2] [i_1 + 1])))) ? (((var_5 != 0) ? (((arr_1 [i_0]) ? 0 : 2739723481608986950)) : (arr_7 [i_0] [i_1 - 1] [i_0] [1]))) : (arr_0 [i_2])));
                        }
                    }
                }
            }
        }
    }
    var_23 = ((((((0 != ((var_15 ? 2849596686 : var_17)))))) < ((var_17 % ((1 ? -2739723481608986963 : 1))))));
    var_24 &= (((!var_16) ? (!-2739723481608986951) : (((((var_12 ? -2739723481608986950 : 3092784705)) >= (45891 | var_10))))));
    #pragma endscop
}
