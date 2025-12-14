/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_15;
    var_19 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 3; i_2 < 15;i_2 += 1) /* same iter space */
                {
                    var_20 = ((~(arr_0 [i_2 + 1])));
                    var_21 = (((arr_2 [i_2 + 2] [i_2 - 3] [i_2 + 2]) - (arr_2 [i_2 + 2] [i_2 - 3] [i_2 + 2])));
                    arr_8 [i_0] [i_0] [i_2] |= (!var_2);
                }
                for (int i_3 = 3; i_3 < 15;i_3 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        for (int i_5 = 2; i_5 < 14;i_5 += 1)
                        {
                            {
                                arr_17 [i_0] [i_1] [i_1] [i_3] [i_1] [i_4] [i_5 + 3] = var_13;
                                var_22 = ((((arr_14 [i_3 - 1] [i_5 + 1]) ? (arr_14 [i_3 - 2] [i_5 - 2]) : (arr_14 [i_3 + 2] [i_5 + 3]))));
                                var_23 = ((((((arr_2 [i_5 - 2] [i_5 + 2] [i_5 - 1]) ? -126 : (arr_2 [i_5 + 2] [i_5 + 1] [i_5 + 2])))) ? ((-(arr_2 [i_3 - 2] [i_3 - 2] [i_5 - 1]))) : (arr_12 [i_3 - 3] [i_3 + 1])));
                            }
                        }
                    }
                    var_24 = (max(var_24, 8));
                }
                for (int i_6 = 2; i_6 < 16;i_6 += 1)
                {
                    var_25 = var_12;
                    var_26 = (min(var_26, ((((max((arr_7 [i_0] [i_6]), var_5)))))));
                    arr_22 [i_0] [i_0] [i_1] [i_0] = (!var_6);
                    var_27 = ((((max((((-29 == (arr_5 [i_0])))), ((var_10 % (arr_14 [i_6] [i_6])))))) ? (((!(arr_19 [i_0] [i_0] [i_1])))) : ((min((arr_16 [i_6 + 1] [i_6 + 1] [i_6 + 1]), ((max(1, 110))))))));
                    var_28 = (((min(var_7, -1)) - 0));
                }
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 17;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 17;i_8 += 1)
                    {
                        {
                            var_29 = (((((arr_15 [i_0]) ? (arr_24 [i_7] [i_1] [i_7]) : ((-106 ? 34 : 185)))) == (arr_2 [i_0] [i_0] [i_8])));
                            var_30 = max(((111 ? 224 : 1)), var_2);
                            arr_27 [i_0] = (((((((arr_0 [i_0]) ? (arr_3 [i_8]) : 1)) <= ((31 ? -34 : (arr_13 [i_0]))))) ? (arr_5 [i_0]) : (arr_18 [i_0] [i_8])));
                        }
                    }
                }
                var_31 = var_2;
                var_32 |= (arr_12 [i_0] [i_1]);
            }
        }
    }
    #pragma endscop
}
