/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182798
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182798 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182798
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(53713, ((-19 ? (!var_4) : var_6))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 4; i_2 < 16;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_13 [i_1] [i_0] [i_4] = (arr_6 [0] [i_2] [i_3] [i_4]);
                                var_12 = ((var_7 ? (arr_6 [i_1 + 1] [i_1 + 1] [i_2 + 1] [i_4]) : (arr_6 [i_1 + 1] [i_1 + 1] [i_2 + 1] [i_2 + 1])));
                                var_13 -= -19;
                            }
                        }
                    }
                    arr_14 [i_0] [13] = ((-15 ? (arr_12 [i_0] [i_0] [i_0] [i_2]) : (arr_2 [i_1 + 1])));
                    var_14 = ((arr_7 [i_2 + 1] [i_1 - 1] [i_2]) << (((arr_7 [i_2 - 1] [i_1 + 1] [i_2]) - 5694757629471739788)));
                }
                var_15 = ((var_4 << ((((53707 >> (36 - 5))) << (-1 + 12)))));
                /* LoopNest 3 */
                for (int i_5 = 2; i_5 < 17;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 16;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 18;i_7 += 1)
                        {
                            {
                                var_16 = (min(var_16, (((!(((arr_10 [i_1] [i_5] [i_6]) == ((max(var_4, 5169))))))))));
                                var_17 = (!var_4);
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 = ((((max((min(81, -32761)), 0))) ? (~54942) : ((var_4 ? -32754 : ((255 ? 48071 : 1))))));
    #pragma endscop
}
