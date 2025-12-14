/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173906
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173906 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173906
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_4 [i_0] = ((((((1938796449 <= (arr_3 [i_0 + 1] [i_1]))))) == (arr_3 [i_0 - 1] [4])));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {
                            var_14 = (((127 % 225) + (((((((var_13 || (arr_2 [i_2]))))) < var_8)))));
                            arr_12 [i_3] [i_2] [i_0 + 1] [i_1] [i_2] [i_0 + 1] = (((((107 ? (var_4 + var_10) : ((var_6 - (arr_2 [i_2])))))) ? ((234 ? (~var_11) : (arr_8 [i_2] [i_3]))) : ((((arr_0 [i_0 - 3] [i_0 - 1]) ? (arr_0 [i_0 + 1] [i_0 - 2]) : (arr_0 [i_0 - 1] [i_0 + 1]))))));
                            var_15 = (((-127 - 1) >= 108));
                            var_16 = var_8;
                            var_17 = ((((!(arr_8 [i_0 - 1] [i_1]))) && (((arr_8 [i_0 + 1] [i_0]) && (arr_5 [i_0 - 3])))));
                        }
                    }
                }
            }
        }
    }
    var_18 = ((!((!(24 && 127)))));
    #pragma endscop
}
