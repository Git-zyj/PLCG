/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134538
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((var_18 ^ var_14) ? (min((~825378818), var_8)) : ((((var_17 + 2147483647) >> (((~var_2) - 3430093553571774352)))))));
    var_20 = ((-(max(((var_10 ? 32757 : -32756)), 65))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 11;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_21 = var_17;
                                var_22 = var_18;
                                var_23 = (((!var_4) ? 2345164814 : 14510));
                                var_24 = (max((-32756 || var_5), var_0));
                            }
                        }
                    }
                    var_25 = (min(-var_17, (2932417519 % 4)));
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 13;i_6 += 1)
                        {
                            {
                                var_26 = ((((~(var_7 ^ -11))) ^ ((((max(32725, (arr_7 [5])))) ? var_0 : (((825378809 > (arr_15 [12] [i_0] [4] [i_2] [i_6]))))))));
                                var_27 *= (~var_9);
                                var_28 = (((min((arr_14 [i_2] [10] [i_5 - 1] [i_5] [i_6] [i_6]), var_17)) * (((arr_14 [i_1 - 1] [i_1 + 1] [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_6]) ? var_1 : (arr_14 [i_5] [i_5] [i_5 + 1] [i_6] [i_6] [i_6])))));
                            }
                        }
                    }
                    var_29 ^= (((-32756 ? (min(3339321540, var_7) : (825378809 < 230)))));
                    var_30 = 825378809;
                }
            }
        }
    }
    var_31 = (min(var_31, var_7));
    var_32 = 3285129112125811753;
    #pragma endscop
}
