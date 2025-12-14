/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121068
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121068 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121068
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((max(var_5, var_10))) < 20844));
    var_15 = var_2;
    var_16 ^= (min(1, (1 | -1)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_17 = 4260410540;
                                var_18 ^= (min((~903928228924094269), var_9));
                                var_19 = ((-((var_8 * (arr_9 [i_0] [i_0] [i_1] [i_2] [2] [i_3] [i_4])))));
                                arr_11 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = ((1 || (((4147679714 ? (-9223372036854775807 - 1) : 11918940934796068006)))));
                                var_20 -= ((((((((117 ? 1 : (arr_0 [i_1])))) <= ((-(arr_5 [i_2])))))) ^ ((-((min(22131, -19055)))))));
                            }
                        }
                    }
                    var_21 += 4;
                }
            }
        }
    }
    var_22 = ((-var_7 * (((min(1, 143))))));
    #pragma endscop
}
