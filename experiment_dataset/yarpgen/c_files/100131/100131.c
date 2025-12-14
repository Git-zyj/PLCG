/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100131
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_12 = (min(((!(arr_11 [i_0 + 1] [i_0]))), (min((arr_0 [i_3 - 2]), (arr_0 [i_3 - 2])))));
                            var_13 = ((~(min((max(var_8, var_3)), (arr_5 [i_3 - 2] [i_3 - 1])))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 14;i_5 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_6 = 0; i_6 < 1;i_6 += 1)
                            {
                                var_14 ^= (arr_10 [i_0 + 1] [i_1] [i_4]);
                                var_15 = ((((~(arr_13 [i_1] [i_5] [i_6]))) - -71));
                            }
                            arr_18 [i_4] [i_1] = (min((((max((arr_15 [i_5]), (arr_7 [i_0 - 1] [i_0 - 1] [i_0]))) - (arr_4 [i_1] [11]))), ((min((arr_6 [i_0 - 1] [i_0 + 2]), (arr_6 [i_0 + 2] [i_0 + 1]))))));
                            var_16 = (arr_12 [i_4]);
                            var_17 = (max(var_17, ((((((min(var_8, (arr_13 [i_4] [i_1] [i_0]))))) ? (~16905) : (((!(49502 == 243)))))))));
                        }
                    }
                }
                var_18 ^= ((~(arr_16 [i_0] [i_0 - 1])));
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 15;i_8 += 1)
                    {
                        {
                            var_19 = (min(var_19, (((((min(12, 16056))) + 1)))));

                            for (int i_9 = 2; i_9 < 14;i_9 += 1)
                            {
                                var_20 = (((((var_5 ? (arr_21 [i_7] [i_0 + 2] [i_9 - 2]) : (arr_0 [i_0 + 2])))) < ((1 ? 30 : 2308167453))));
                                var_21 = (arr_4 [i_0] [12]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = ((((min(var_8, ((min(1, 1)))))) ? -var_10 : 28672));
    #pragma endscop
}
