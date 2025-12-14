/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143203
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143203 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143203
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            var_11 = (((arr_1 [i_0]) ? 33123 : var_6));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 10;i_3 += 1)
                {
                    {
                        var_12 = ((~((-185655932 ? var_5 : -113))));
                        var_13 = (16961 ? (arr_9 [i_3 + 2] [i_3 + 2]) : ((((max(var_4, 32767)) > (arr_5 [i_0] [i_0] [i_0])))));

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            var_14 -= (((((arr_9 [i_0] [i_0]) >> (var_2 - 7413))) & (arr_13 [i_1] [i_3 - 1] [i_3 + 1] [i_3 - 1] [i_1])));
                            arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((((var_3 ? 13857 : var_0)) >= (-32767 - 1)));
                            var_15 = (arr_11 [i_0]);
                        }

                        for (int i_5 = 0; i_5 < 12;i_5 += 1)
                        {
                            var_16 = (arr_1 [i_0]);
                            arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (229 || 32767);
                        }
                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            var_17 = (min(var_17, (((((((arr_7 [i_3] [i_3 - 1] [i_3 - 1] [i_3 - 1]) ? var_7 : var_2))) || var_3)))));
                            var_18 = (min(((-(arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))), var_6));
                            var_19 = (min(var_19, (((4294967295 ? 22 : 16979)))));
                        }
                        for (int i_7 = 1; i_7 < 10;i_7 += 1)
                        {
                            arr_23 [i_0] = ((((((var_6 ? (arr_0 [i_0] [i_0]) : var_10))) & 4294967293)) >> ((((!(arr_20 [i_0] [i_0] [i_0] [i_0] [i_0]))) ? (arr_13 [i_0] [i_0] [i_0] [i_0] [i_7 + 2]) : (!var_7))));
                            arr_24 [i_0] [i_0] [i_0] [i_0] = (max(-32759, ((((arr_7 [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_3 + 1]) > (arr_7 [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_3 + 1]))))));
                            var_20 = (max(var_20, ((((116332886 == 2553672901) == (max(var_7, (arr_12 [i_1] [i_0] [i_1] [i_1] [i_0] [i_0]))))))));
                        }
                    }
                }
            }
        }
        for (int i_8 = 0; i_8 < 12;i_8 += 1)
        {

            for (int i_9 = 0; i_9 < 12;i_9 += 1)
            {
                var_21 = var_10;
                var_22 ^= ((65519 + (min((171 - var_9), 4294967255))));
                var_23 = (((var_2 ? 7 : -27)));
                arr_29 [i_0] [i_0] [i_0] [i_0] = var_8;
            }
            var_24 = (max(var_24, 0));
        }
        var_25 = (((-(!var_5))));
    }
    var_26 = (((min(var_10, (max(2075969979, 36)))) <= ((var_5 ? var_4 : (13 <= var_5)))));
    #pragma endscop
}
