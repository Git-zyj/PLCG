/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185797
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((var_7 || var_0) + var_3));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_17 *= ((((((((arr_5 [i_0] [i_0]) % var_14)) - (arr_5 [i_0] [i_0])))) ? ((((((arr_2 [8]) << (((arr_6 [i_0] [i_0] [i_0]) - 9111)))) != (arr_4 [i_2])))) : (arr_9 [i_4] [i_3])));
                                var_18 = (((arr_3 [i_0]) % ((((((((-562361879 + 2147483647) << (1 - 1)))) && ((((arr_5 [i_0] [i_1]) % var_14)))))))));
                            }
                        }
                    }
                }

                for (int i_5 = 0; i_5 < 17;i_5 += 1)
                {
                    var_19 = max((562361873 != var_7), (((max(var_5, 3764173446414303741)) + ((((arr_10 [i_0] [i_0] [i_0]) - (arr_10 [1] [1] [i_5])))))));
                    var_20 = ((~((51 & ((~(arr_7 [i_0] [i_0] [i_0])))))));
                    var_21 = (2499 || var_3);
                }
                arr_15 [i_0] = max((arr_4 [i_0]), (arr_0 [2] [i_0]));
            }
        }
    }
    #pragma endscop
}
