/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127256
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_17 = ((((arr_1 [i_1]) < var_11)) ? 0 : (arr_4 [i_1] [i_0]));

                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        var_18 = var_6;
                        var_19 = (max(var_3, -var_2));
                        arr_10 [7] [i_1] [8] [i_3] = ((min((arr_0 [i_1]), (arr_6 [i_0]))) != ((((!(arr_0 [i_0]))))));
                        arr_11 [i_0] [i_0] [i_0] = (max((arr_9 [i_2] [i_2] [i_2]), (((var_12 ? (arr_9 [i_1] [i_1] [i_0]) : 2170802185)))));
                    }
                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {
                        var_20 += ((!((min((((1821752443593964651 > (arr_9 [i_4] [i_1] [i_2])))), (((arr_9 [i_0] [i_0] [i_0]) ^ var_16)))))));
                        var_21 = (((((((arr_9 [i_0] [i_0] [0]) * 4294967295))) != var_13)));
                        var_22 = var_2;
                        arr_15 [i_4] [0] [3] [i_2] [7] [i_0] = ((!(!var_11)));
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            {
                                var_23 = 0;
                                var_24 = (max(var_24, ((((!16320) + ((~(((!(arr_13 [i_0] [i_0] [i_0] [i_0])))))))))));
                                arr_20 [i_5] [i_2] [i_1] [7] = (max((-1 <= var_1), ((((min(var_0, (arr_5 [i_0] [i_0] [i_0])))) != (arr_12 [i_0])))));
                                var_25 *= ((!((max(((((arr_1 [i_0]) < (arr_2 [i_6] [i_2] [i_0])))), (arr_13 [1] [i_1] [i_1] [1]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_26 |= ((2170802185 - ((min(2147483626, (-1 != 82))))));
    #pragma endscop
}
