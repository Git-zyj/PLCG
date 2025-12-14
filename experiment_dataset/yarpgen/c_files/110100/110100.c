/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110100
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110100 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110100
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 &= ((127 ? (((var_1 ? var_10 : -13))) : 22));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_7 [i_1] = ((!(arr_3 [i_0])));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_12 = (max((((((max(16192963875431546191, 51037))) ? ((max(var_9, (arr_4 [i_3 - 1])))) : (arr_3 [i_2])))), 1023));
                                arr_12 [i_3] [5] [3] [i_3 + 1] [3] [i_3] = (max(((116 ? 1337826765 : 25311)), ((((arr_5 [i_3] [i_3] [i_3 - 1] [i_3 - 1]) ? (arr_5 [i_3 - 1] [i_3 + 1] [i_3 + 1] [i_3 + 1]) : (arr_5 [15] [i_3 - 1] [i_3 + 1] [i_3 + 1]))))));
                                arr_13 [i_3] = (arr_10 [i_3] [i_1] [i_2] [i_3] [i_1] [11]);
                                var_13 -= ((940542395 ? (arr_4 [i_4]) : 0));
                            }
                        }
                    }
                    arr_14 [i_0] [i_0] [i_0] = (arr_10 [i_1] [i_1] [i_1] [i_2] [i_2] [i_2]);

                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        var_14 = var_8;
                        var_15 = var_8;
                    }
                    arr_19 [i_0] [i_1] [i_0] = ((((((arr_15 [i_0] [i_1] [i_1] [i_2]) ? (arr_15 [i_0] [i_0] [i_1] [i_2]) : -1633169560))) ? (((arr_2 [i_0] [i_0] [i_2]) ? (arr_16 [i_0] [i_1]) : (arr_2 [i_0] [i_0] [i_0]))) : (arr_2 [i_0] [i_1] [16])));
                }
            }
        }
    }
    var_16 = var_10;
    var_17 *= 7012166854098087903;
    #pragma endscop
}
