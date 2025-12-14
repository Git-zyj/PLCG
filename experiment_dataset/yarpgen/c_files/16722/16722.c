/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16722
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_6 [10] [4] [10] = var_8;
                var_18 = (min(var_18, ((((((arr_2 [i_0] [2] [i_1]) ^ -var_0)) == ((max((!var_15), -1790))))))));
                var_19 += (min(248, (((1543807534 && (((var_7 ? -24558 : -1))))))));
            }
        }
    }
    var_20 ^= var_10;
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        {
                            var_21 = (max(32767, 32755));
                            arr_18 [i_2] [2] [7] [2] [2] [i_5] = -32757;
                            var_22 = 32767;
                        }
                    }
                }
                var_23 = (min(var_23, ((((((-(max(var_7, var_11))))) ? ((-(max(111, 0)))) : (((((0 ? 1 : 2147483647))))))))));

                for (int i_6 = 0; i_6 < 14;i_6 += 1)
                {
                    var_24 = ((!((max(var_10, var_13)))));
                    var_25 = var_6;

                    for (int i_7 = 2; i_7 < 13;i_7 += 1)
                    {
                        arr_25 [i_2] [1] [8] [i_6] [i_7] [i_7] = ((((((992 >= (min(var_1, 0)))))) | (max(var_12, var_1))));
                        arr_26 [i_2] [1] [i_6] [i_7] = ((~(0 - 3)));
                        var_26 = ((-(((32761 < (arr_17 [1] [i_7 - 2] [1] [i_7 - 1] [i_7 + 1] [i_7 - 1]))))));
                        arr_27 [3] [i_6] [i_3] [4] = (arr_22 [i_2] [i_2]);
                    }
                    for (int i_8 = 0; i_8 < 14;i_8 += 1)
                    {
                        arr_30 [i_2] [i_3] [12] [i_2] [7] [i_8] = (min(((((arr_23 [i_2] [i_2] [i_2] [i_2] [i_3] [i_3]) || (arr_23 [i_2] [i_2] [i_3] [12] [i_2] [i_8])))), (((arr_23 [i_2] [i_2] [13] [i_6] [i_6] [i_8]) ? (arr_13 [i_2] [i_2] [i_2]) : 6864528060388384970))));
                        arr_31 [1] [i_8] [5] [1] = (min(1, 6864528060388384970));
                    }
                    arr_32 [i_2] [i_2] [0] [i_3] = ((((((((25 <= (arr_9 [i_2] [i_2])))) * 1))) ? ((((!((((var_9 + 2147483647) << (((-6864528060388384970 + 6864528060388384994) - 24))))))))) : (((arr_16 [5] [i_3] [i_3] [i_3]) ? (arr_16 [11] [11] [i_6] [11]) : (arr_16 [i_2] [i_6] [12] [i_3])))));
                }
            }
        }
    }
    #pragma endscop
}
