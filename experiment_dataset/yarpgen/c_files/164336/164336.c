/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164336
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_8;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {
                    var_14 = (max(var_14, ((((((((((arr_5 [i_0] [i_1] [i_1] [i_1]) ? (arr_4 [i_0]) : 4294967295))) ? -2 : (((var_7 && (arr_3 [i_0]))))))) ? (((((((var_7 ? 3586912691 : (arr_2 [i_0])))) || (arr_4 [5]))))) : (((arr_4 [i_0 + 1]) ? ((min(4294967295, (arr_0 [i_1])))) : (arr_2 [i_0 + 4]))))))));
                    var_15 = (min((arr_6 [i_0] [3] [i_0 + 1] [i_0]), (((arr_3 [i_0]) ? (var_6 || 8502583528985268998) : (min((-9223372036854775807 - 1), 26489619))))));
                    arr_7 [i_0] [i_1] [i_1] = (((arr_0 [i_0]) & ((var_7 ? var_8 : (arr_2 [i_2 + 1])))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_1] [i_0] = var_3;
                                var_16 = ((((0 ? -27 : 2147483647))) ? (6268593504813206104 - var_3) : -2053316633);
                            }
                        }
                    }
                }
            }
        }
    }
    var_17 = var_7;
    #pragma endscop
}
