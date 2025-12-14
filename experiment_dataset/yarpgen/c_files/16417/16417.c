/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16417
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16417 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16417
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 &= var_4;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] = (~53246);
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_11 = (((!var_5) ? var_2 : var_8));
                                arr_12 [i_4] [i_3] [i_2] [i_1] [i_4] &= ((var_7 + 2147483647) << (var_6 - 13688255781694112760));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 12;i_6 += 1)
                        {
                            {
                                var_12 &= (((var_6 >> 20) ? (!53246) : ((24 ? (arr_4 [i_6] [i_1 + 2] [i_0]) : var_2))));
                                var_13 = (((arr_11 [i_0] [i_0] [i_0]) || ((((arr_3 [i_0] [i_0]) ? var_3 : 0)))));
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_7 = 1; i_7 < 16;i_7 += 1)
    {
        var_14 = (min(var_14, ((((((var_4 ? (18446744073709551615 != var_1) : ((1 ? var_1 : -1270710183))))) ? ((var_0 << (((arr_19 [1]) & var_5)))) : (arr_18 [10] [10]))))));
        var_15 = ((((max(((32767 ? 1 : 1)), 17))) ? 706282105 : (((65535 ? 1 : -160726418)))));
    }
    for (int i_8 = 0; i_8 < 13;i_8 += 1)
    {
        var_16 = ((((((((max(16, (arr_16 [i_8] [i_8] [i_8] [i_8] [2]))))) % (((arr_9 [i_8] [i_8] [i_8] [i_8]) ? -7567751633528514520 : var_7))))) ? (((~((max(48, 30573)))))) : ((((-1 ? var_1 : 4294967295)) | 2147483647))));
        var_17 = var_0;
    }
    #pragma endscop
}
