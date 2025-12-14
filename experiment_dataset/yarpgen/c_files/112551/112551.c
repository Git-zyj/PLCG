/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112551
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112551 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112551
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_10;
    var_16 = (((((max(var_9, var_9)))) > ((953003627 ? (var_10 + var_5) : ((max(2147483647, 1)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 8;i_3 += 1)
                    {
                        {
                            arr_14 [i_3 - 2] [i_2] [i_3] [i_3 - 2] = max(3341963668, 953003622);
                            arr_15 [i_2] = (524287 / 524287);
                            var_17 = (min(var_17, (((((((var_6 ? 1 : var_12)) != 953003651))) != ((((((0 ? 3341963669 : 4294967276))) && 3470259535)))))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 9;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_18 = (min(var_18, ((max(123, 3470259522)))));
                                var_19 = (max(var_19, ((((((((max(1, var_0)))) < 5327109385572513070)) ? (arr_16 [i_5 + 1] [i_5 + 1]) : ((~(arr_19 [i_0] [i_5 + 1] [i_4] [i_4]))))))));
                            }
                        }
                    }
                }
                var_20 *= var_12;
                arr_25 [i_0] [i_1] = (max(((((arr_18 [i_0]) ^ (arr_18 [i_0])))), (18446744073709551615 & 953003627)));
            }
        }
    }
    var_21 = var_11;
    #pragma endscop
}
