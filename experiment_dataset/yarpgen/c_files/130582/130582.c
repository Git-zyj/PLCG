/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130582
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130582 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130582
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 &= var_6;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    var_18 = (((~var_6) == (arr_5 [i_0 + 3] [i_2] [i_2])));

                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        var_19 = (!2106104399);
                        var_20 -= -var_6;
                        arr_11 [i_3] [i_2] [i_1] [i_3] = 7;
                    }
                    for (int i_4 = 0; i_4 < 25;i_4 += 1)
                    {
                        arr_15 [i_2] [i_2] [17] [i_0 - 1] [i_0 - 1] = (arr_14 [i_0 + 1] [i_0 + 1] [i_0 + 2]);
                        var_21 = (max(var_21, (((((var_7 <= (arr_14 [i_0] [i_1] [12]))))))));
                        var_22 = ((((arr_14 [i_0] [i_1] [i_2]) ? 10450789698367222184 : 13288215941548573879)));
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            {
                                var_23 ^= (~268427264);
                                var_24 = (min(var_24, ((((arr_19 [i_0 - 1] [i_0] [i_0 - 1] [i_0] [1] [i_0]) ? (arr_14 [i_0 + 1] [i_1] [i_6]) : (111 * var_11))))));
                                var_25 = (arr_20 [i_0 + 2] [i_0 - 1]);
                                var_26 = ((+(((arr_10 [i_0] [i_1] [i_5] [i_5]) ? var_13 : (arr_3 [i_0])))));
                                arr_22 [i_1] [i_1] [i_1] [i_1] [i_1] = (arr_7 [i_0]);
                            }
                        }
                    }
                }
                for (int i_7 = 1; i_7 < 22;i_7 += 1)
                {
                    var_27 = ((-10450789698367222184 ? 10132876041427654613 : (((arr_20 [i_0 + 3] [i_0 + 1]) ? (arr_6 [1]) : 268427264))));
                    var_28 = (min(var_28, ((((!((max(32256, var_11))))) ? (((((((arr_20 [i_0] [i_1]) ? var_11 : 268427260))) ? 2251799813677056 : (((var_12 - (arr_17 [i_0] [i_0] [23] [i_7 + 3] [i_7]))))))) : (((arr_9 [i_0 - 1] [i_1] [i_7] [i_1] [i_1]) ? (arr_14 [i_0 - 1] [i_1] [i_7]) : (arr_9 [i_0 + 2] [1] [i_1] [i_1] [i_1])))))));
                }
                var_29 = (((((((max(var_4, (arr_7 [i_0])))) / var_11))) || ((max((arr_21 [i_0] [i_0 + 2] [i_0] [i_1] [i_1]), (arr_21 [i_1] [i_0 + 3] [i_0] [i_1] [i_0]))))));
            }
        }
    }
    #pragma endscop
}
