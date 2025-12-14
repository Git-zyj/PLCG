/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164863
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 |= (max(var_9, (((var_3 ? (0 * 0) : var_15)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] [i_1] = (max((!var_11), (min(((var_14 ? 120 : var_1)), (((var_14 ? 111 : var_3)))))));
                var_17 = (((((((max(65531, 0))) || var_4)))) | (((1153366632209553824 - var_14) ? var_13 : (arr_3 [i_0] [i_1 + 1] [i_1 - 2]))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {
                            var_18 = (max((((!(arr_1 [i_1 - 2])))), ((65535 / (arr_1 [i_1 - 2])))));
                            var_19 |= ((((~(((arr_3 [i_0] [i_0] [i_2]) ? var_13 : (arr_6 [i_0] [8])))))) ? ((var_9 ? var_4 : 1)) : (arr_6 [i_1 - 1] [i_1 - 1]));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
