/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144132
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144132 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144132
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            var_10 = (max(var_10, (((+(min((arr_2 [i_0]), (arr_4 [i_1]))))))));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    {
                        var_11 = 4142;
                        var_12 ^= 61394;
                        arr_12 [i_1] = (((var_8 ? 131 : -1047513757)));
                        var_13 = (max(var_13, ((((+((min((arr_7 [1] [i_0]), 16383)))))))));
                    }
                }
            }
            var_14 += var_3;
        }
        for (int i_4 = 0; i_4 < 10;i_4 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 10;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 10;i_6 += 1)
                {
                    {
                        var_15 += (min((arr_16 [i_6] [i_5] [i_4] [1]), (((((max((arr_16 [8] [i_4] [0] [i_6]), 162))) * (((-1202950111 >= (arr_16 [i_6] [i_5] [i_4] [i_0])))))))));
                        arr_19 [i_0] [i_0] [i_0] = (min((((((-(arr_14 [i_0] [i_0] [i_0])))) / ((57066 ? 956866047 : (arr_1 [i_0]))))), -var_4));
                        var_16 = ((((var_2 * 131) >= 1202950107)));
                    }
                }
            }
            arr_20 [i_0] [i_4] [i_4] |= (((max((((arr_2 [i_4]) ? var_6 : 61393)), (arr_10 [i_4] [2] [i_4] [4]))) == (arr_15 [3] [1] [i_0] [i_0])));
        }
        /* vectorizable */
        for (int i_7 = 0; i_7 < 10;i_7 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 10;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 10;i_9 += 1)
                {
                    {
                        arr_28 [i_9] [i_8] = -1202950138;

                        for (int i_10 = 0; i_10 < 10;i_10 += 1)
                        {
                            arr_31 [i_0] [i_8] [i_8] [i_9] [6] [i_10] [i_10] = (arr_25 [i_0] [i_0] [8]);
                            var_17 = (((1935236987 + 4143) | (arr_13 [i_8])));
                        }
                    }
                }
            }
            var_18 = 61393;
            arr_32 [i_7] |= (~842854766);
        }
        var_19 = (min(var_19, (((!((((var_8 ? -423918927 : -5)))))))));
    }
    for (int i_11 = 1; i_11 < 15;i_11 += 1)
    {
        var_20 = (var_2 >> var_7);
        arr_37 [i_11 - 1] [i_11] = ((((min(((45915 ? var_6 : var_2)), (arr_33 [i_11])))) ? -512 : (((((var_6 ? 45916 : var_8)) < (arr_34 [i_11]))))));
    }
    var_21 = var_1;
    var_22 = ((((!1202950110) ? var_3 : 3787355642)));
    #pragma endscop
}
