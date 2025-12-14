/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185592
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (~-4160321197986951091);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 7;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_2] [i_3] = (7 < -1);

                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 10;i_4 += 1) /* same iter space */
                            {
                                arr_13 [i_0] [i_2] [i_4] = 255;
                                var_18 = ((~(arr_11 [i_2] [i_2 + 3] [i_2 - 2] [i_1 - 1] [i_2] [i_1 - 1])));
                                arr_14 [i_2] [i_4] [9] [i_2] [i_1] [7] [i_2] = (arr_3 [i_0] [i_1 + 1]);
                            }
                            for (int i_5 = 0; i_5 < 10;i_5 += 1) /* same iter space */
                            {
                                var_19 = (min(var_19, ((max(-50, 90)))));
                                var_20 = (max(var_20, ((max((arr_3 [i_2] [i_2]), ((max(var_3, 0))))))));
                                var_21 += (((85203872 >> (274877906943 & 0))));
                            }
                        }
                    }
                }
                arr_18 [1] [i_0] [i_0] = var_5;
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 10;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 10;i_7 += 1)
                    {
                        {
                            var_22 *= -1;
                            arr_23 [i_7] [i_6] [i_1] [i_7] = 7404956948557574240;
                            var_23 = (min(var_23, (18446744073709551615 - 205)));
                        }
                    }
                }
            }
        }
    }
    var_24 += var_0;
    var_25 = var_7;
    var_26 = (min(var_26, var_2));
    #pragma endscop
}
