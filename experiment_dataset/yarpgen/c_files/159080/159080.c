/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159080
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159080 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159080
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_15 ^= (arr_1 [i_0] [i_1]);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            arr_8 [i_0] [i_1] [i_1] [i_3] &= (((arr_6 [i_3] [i_2] [i_2] [i_1] [i_0] [i_0]) ? var_14 : (1 != -var_2)));
                            var_16 -= (((((((-(arr_3 [i_0] [i_0])))) ? (arr_5 [i_0] [i_1] [i_2] [i_3]) : (arr_7 [i_0]))) % 1));
                            arr_9 [i_0] [i_0] [i_3] = (((min((var_9 % 1), (arr_5 [i_0] [i_0] [i_2] [i_3])))) ? 1 : ((~(((1 <= (arr_1 [i_0] [i_0])))))));
                            var_17 = max(var_2, ((var_8 << ((((-(arr_3 [i_0] [i_1]))) + 99)))));
                            arr_10 [i_0] [i_1] [i_2] = (((max((min(65535, (arr_6 [i_0] [i_0] [i_0] [i_0] [i_2] [i_3]))), var_4)) != (arr_7 [i_0])));
                        }
                    }
                }
                var_18 = ((1 > ((1 ? var_14 : (arr_3 [i_0] [i_0])))));
                var_19 ^= ((((min(var_6, var_9))) ? ((var_6 ? (arr_2 [i_0] [i_0]) : 1958736519)) : (arr_2 [i_0] [i_1])));
            }
        }
    }
    var_20 -= ((((((var_6 || var_8) >> (var_1 - 7833890621176466613)))) + ((var_11 << ((((0 ? var_2 : var_3)) - 50))))));
    #pragma endscop
}
