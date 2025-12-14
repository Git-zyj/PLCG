/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154283
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154283 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154283
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((min((((52 ? 52 : var_8))), ((var_2 ? 210 : var_7)))) * ((((~-70376454) ? ((min(var_6, 63))) : var_8)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 8;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 8;i_4 += 1)
                        {
                            {
                                var_12 = (max(var_12, (((-(((15 / 4558725776095902332) ? (arr_7 [i_0] [i_0] [i_3] [i_3]) : (((!(arr_6 [i_0] [i_1] [i_0])))))))))));
                                var_13 = (((var_6 ? 52 : (arr_12 [10] [i_3 + 1] [i_3]))));
                                arr_13 [4] [4] [i_0] [4] [4] = var_9;
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        var_14 = var_5;
                        var_15 = (max(var_15, ((min((((arr_9 [i_2] [i_2] [i_2] [i_5] [i_1 - 2]) | (arr_2 [i_1 + 2] [i_1 + 2]))), var_2)))));
                        var_16 -= (((~-14026) ? ((min((arr_4 [6]), (arr_4 [0])))) : ((~(arr_4 [0])))));
                        var_17 = (((((arr_11 [i_0] [1] [i_1 + 2] [i_1 + 2] [1] [i_5] [i_5]) >= (arr_11 [i_0] [i_1] [i_1 + 1] [i_1 - 3] [i_2] [i_2] [i_2]))) ? (arr_12 [i_0] [i_0] [i_1 + 2]) : (((((min(var_6, 2305843009213693951))) || ((((arr_9 [i_0] [i_1] [i_5] [i_5] [i_2]) ^ 1673870680))))))));
                    }
                }
                arr_16 [i_0] [i_0] [i_0] = ((((min(var_3, (arr_0 [5] [i_1])))) ? (arr_8 [i_0] [i_1] [i_1] [i_1] [i_1]) : ((max(210, 128)))));
                var_18 = (max(var_18, ((18895 ? 15360 : 1448187343429334205))));
                arr_17 [i_0] [i_0] [i_0] = var_2;
            }
        }
    }
    #pragma endscop
}
