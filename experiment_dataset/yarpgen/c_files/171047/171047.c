/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171047
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171047 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171047
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (~var_9);
    var_20 = (min(var_20, (((-(~var_13))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_12 [i_4] = (((arr_1 [i_4 - 1]) ? (((arr_6 [i_1 + 1] [i_4 - 3] [4] [i_3]) ? (arr_6 [i_1 - 1] [i_4 - 2] [i_2] [12]) : (arr_6 [i_1 + 1] [i_4 - 3] [i_1 + 1] [i_4 - 3]))) : (((arr_1 [i_4 + 1]) ? (arr_1 [i_4 + 1]) : (arr_1 [i_4 + 1])))));
                                var_21 &= (max((((arr_4 [i_0 + 2] [i_0 + 3] [i_0 + 3]) ? (arr_4 [i_0 + 3] [i_0 + 1] [i_0 + 1]) : (arr_4 [i_0 - 1] [i_0 - 2] [13]))), ((min(var_18, (arr_11 [8] [i_4] [i_4 - 1] [i_4] [i_3]))))));
                                var_22 = (((((((((arr_7 [i_3] [i_3] [i_2] [i_0 - 1]) ? 1 : var_12))) ? (arr_10 [i_4 - 2] [i_4] [i_1] [i_1 + 1] [i_0 - 1]) : ((-(arr_2 [i_0] [i_1] [i_3])))))) ? (((-(arr_10 [i_1 + 1] [i_4] [i_1 + 1] [4] [8])))) : (max(((91 - (arr_9 [i_1]))), (((16708914776556310732 ? (arr_4 [1] [i_1] [i_2]) : -17)))))));
                                arr_13 [i_4] [1] [i_4] [i_4] [i_0] [i_0] = ((!(arr_6 [i_4] [i_1 + 1] [i_3] [i_3])));
                            }
                        }
                    }
                }
                var_23 -= ((max(2944952099509746643, 187)));
                arr_14 [i_0 + 1] [i_0 + 2] [13] = (((arr_9 [i_0 - 2]) % ((((arr_9 [i_0 + 2]) ? (arr_7 [i_1 - 1] [i_1] [i_1 + 1] [i_1 + 1]) : (arr_7 [15] [i_1 - 1] [i_1 + 1] [i_1 + 1]))))));
                /* LoopNest 2 */
                for (int i_5 = 2; i_5 < 13;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        {
                            arr_20 [i_0 + 2] [i_0 + 3] [i_5 + 2] [i_6] = ((+(max((((-27213 + 2147483647) >> (((arr_6 [i_0] [10] [1] [i_0 + 1]) - 9712)))), 194))));
                            arr_21 [6] = var_6;
                        }
                    }
                }
            }
        }
    }
    var_24 = (min(var_24, ((((((var_13 ^ 3238067014) ? (((max(var_11, var_9)))) : (max(var_5, var_18)))) >= ((var_6 ? (min(var_1, var_5)) : ((var_0 ? var_7 : var_5)))))))));
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 24;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 24;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 24;i_9 += 1)
            {
                {
                    var_25 = (min(((((((arr_29 [i_7] [i_7] [i_7]) ? var_15 : (arr_26 [i_8])))) ? ((76 ? var_13 : 8010728821202393468)) : (arr_23 [i_7]))), ((max(3601385575, (arr_30 [i_7] [i_7] [i_9] [17]))))));
                    var_26 = ((((((260046848 ? var_7 : (arr_24 [10]))))) + (((arr_22 [i_9] [14]) % ((((arr_28 [i_7]) ? (arr_25 [i_7]) : (arr_30 [19] [i_7] [i_9] [i_9]))))))));
                }
            }
        }
    }
    #pragma endscop
}
