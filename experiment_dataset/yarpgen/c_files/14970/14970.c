/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14970
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 24;i_3 += 1) /* same iter space */
                    {
                        var_11 = (((var_5 != var_9) ? (arr_7 [i_0] [i_0] [i_0] [i_0]) : (((arr_7 [i_0] [i_0] [i_0] [i_0]) * 23848))));
                        var_12 = (443351855 & 1729382256910270464);

                        for (int i_4 = 2; i_4 < 23;i_4 += 1) /* same iter space */
                        {
                            var_13 |= 0;
                            var_14 |= ((((((~var_3) == (arr_1 [i_4] [8])))) & (arr_1 [i_0] [i_1])));
                            var_15 *= 15133;
                        }
                        for (int i_5 = 2; i_5 < 23;i_5 += 1) /* same iter space */
                        {
                            var_16 -= 121;
                            var_17 = ((((arr_3 [i_1] [i_1]) ? 248 : (arr_1 [i_2] [21]))));
                        }
                        var_18 = 7;
                    }
                    for (int i_6 = 0; i_6 < 24;i_6 += 1) /* same iter space */
                    {
                        var_19 = (min(var_19, (-1354500154 != var_1)));
                        var_20 = var_0;
                        var_21 ^= ((((max((!var_6), (arr_9 [4] [4] [i_2] [4])))) ? 2147483647 : ((((var_3 ? -1888104332 : var_2))))));
                        var_22 = ((max((arr_6 [i_2] [i_1]), (arr_16 [i_6]))));
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 24;i_7 += 1) /* same iter space */
                    {
                        var_23 = (max(var_23, (((-var_5 & (4294967295 >> var_8))))));
                        var_24 ^= (((var_6 | var_6) ? 7 : ((var_10 + (arr_4 [i_2])))));
                    }
                    var_25 *= ((+(((arr_4 [i_0]) + ((var_10 >> (((arr_10 [i_0] [i_0] [i_0] [i_0]) - 9662498040962405049))))))));
                    var_26 = (max(var_26, ((((~7) ? ((max(-2141006881, 11525877956737914215))) : var_1)))));
                }
                arr_22 [i_0] [i_0] = 16;
                var_27 = (max(var_27, ((max(((min(((var_4 >> (var_3 - 33965))), ((max((-127 - 1), var_9)))))), 7815144778844449438)))));
                var_28 = 11762792824601335191;
            }
        }
    }
    var_29 = ((var_0 ^ (min(((max(var_3, 16293))), (max(var_6, var_7))))));
    var_30 = (max(var_6, var_9));
    #pragma endscop
}
