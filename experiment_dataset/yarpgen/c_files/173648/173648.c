/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173648
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        {
                            arr_11 [i_1] [i_1] [i_1] [i_0] = -1784562840154949077;
                            var_18 = var_17;
                        }
                    }
                }
                arr_12 [i_1] [i_1] [i_1] = 796538221362085494;
            }
        }
    }
    var_19 = (((((1784562840154949077 ^ 1784562840154949046) ? (~4294967295) : ((1569583558 ? 561850441793536 : -3945735849215946594)))) | 3));
    /* LoopNest 2 */
    for (int i_4 = 1; i_4 < 11;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            {
                arr_19 [i_5] [i_4] [i_4] = ((((2722186946 ? (((arr_7 [i_4] [i_4] [i_5] [i_5]) ^ var_5)) : (arr_9 [i_4] [i_4 + 1] [i_4 - 1] [i_4 - 1] [9]))) & ((-1784562840154949079 ? 17650205852347466114 : 80))));
                var_20 = (((((-(arr_3 [i_4] [i_4])))) ? 13542 : ((~((~(arr_7 [i_4] [i_5] [i_5] [i_4])))))));
                /* LoopNest 2 */
                for (int i_6 = 1; i_6 < 11;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        {
                            var_21 = (-2838385119 ? (((arr_7 [i_4] [i_5] [i_6] [i_7]) << (-var_3 + 474764815928813732))) : ((((var_7 == ((-(arr_18 [i_4] [i_4]))))))));
                            var_22 = arr_15 [i_7];
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_8 = 3; i_8 < 11;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 12;i_9 += 1)
                    {
                        {
                            arr_30 [i_4] [i_5] [i_4] [i_9] = (max(((-(arr_25 [i_8 - 3] [11] [i_8] [i_4]))), ((((arr_23 [i_4 + 1]) ? (arr_4 [i_5] [i_9]) : 3770)))));
                            var_23 ^= (var_5 ? (((((0 << (-3854607565210003658 + 3854607565210003695)))) ? 5446228944509729094 : (((var_2 ? (arr_1 [i_8]) : 0))))) : var_6);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
