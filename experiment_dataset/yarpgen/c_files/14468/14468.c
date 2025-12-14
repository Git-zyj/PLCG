/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14468
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14468 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14468
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_8;
    var_17 = ((-(((((7054953842245300814 ? 6028418285600330988 : 6028418285600330988))) ? (~-6028418285600330989) : (((var_3 + 9223372036854775807) << (4252669287738024349 - 4252669287738024349)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 11;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_18 = 956203283;
                                var_19 *= (~-8006906215555573240);
                                var_20 = (((~(~3797715713))) & ((~(max(var_15, (arr_7 [i_0] [i_2] [i_3 - 1] [i_4]))))));
                            }
                        }
                    }
                    var_21 = arr_7 [i_0] [14] [i_2 + 2] [i_2];
                    var_22 *= var_0;
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 14;i_6 += 1)
                        {
                            {
                                var_23 = ((((var_9 / (arr_9 [i_6 - 2]))) / ((max((65535 / 956203297), (arr_14 [i_2 - 2] [i_2 + 2] [i_6 + 1] [i_6 - 2]))))));
                                var_24 ^= (((0 << (((!(arr_19 [i_0] [i_1] [i_6])))))));
                                var_25 = (arr_14 [i_2 + 3] [i_2 + 4] [i_2 - 2] [i_2 + 3]);
                                arr_20 [i_0] [i_1] [i_2] [12] [i_6] &= (arr_18 [i_1]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_26 = (max(var_26, 43597));
    var_27 = var_11;
    #pragma endscop
}
