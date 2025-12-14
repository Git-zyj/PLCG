/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150299
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_17 = ((((((((var_6 ? 2161082386 : 2199023255551))) ? (arr_2 [i_0 + 1] [i_1]) : (arr_5 [i_0] [2] [i_1])))) ? ((max((arr_4 [i_0] [i_1]), (arr_5 [4] [2] [i_0])))) : var_1));
                arr_6 [i_0] [i_1] = 31542;
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 12;i_2 += 1) /* same iter space */
    {
        var_18 ^= (arr_0 [i_2] [i_2]);
        var_19 = (((var_15 << var_12) * (arr_4 [i_2] [i_2])));
        arr_9 [i_2] = (arr_3 [i_2] [i_2]);
        arr_10 [i_2] = var_14;
        var_20 = ((-6288844658285787221 ? (arr_8 [i_2] [i_2]) : (arr_8 [i_2] [i_2])));
    }
    for (int i_3 = 0; i_3 < 12;i_3 += 1) /* same iter space */
    {
        var_21 += (arr_2 [2] [i_3]);
        var_22 = (((--243) ^ var_13));
    }
    for (int i_4 = 0; i_4 < 12;i_4 += 1) /* same iter space */
    {
        arr_17 [i_4] = (var_11 ? -2199023255552 : (-127 - 1));
        arr_18 [i_4] [i_4] = var_5;
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 12;i_6 += 1)
            {
                {
                    arr_23 [i_6] [i_6] [9] [9] = -var_2;
                    var_23 -= ((var_15 || (arr_5 [i_4] [i_4] [i_4])));
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 9;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 12;i_8 += 1)
                        {
                            {
                                var_24 = (arr_16 [i_4] [i_7 + 3]);
                                var_25 *= ((~(arr_8 [i_6] [i_7 + 1])));
                                var_26 = ((((!((min(var_4, (arr_4 [i_4] [i_8])))))) ? (arr_19 [6]) : (((!4242673814) ? (max(3884960874133052958, 33990)) : (arr_28 [i_7 + 1])))));
                            }
                        }
                    }
                }
            }
        }
        var_27 = ((((max((((arr_1 [i_4] [i_4]) ? var_3 : var_7)), ((50147 ? -1847535394 : (arr_21 [i_4] [i_4])))))) * (arr_3 [i_4] [i_4])));
        var_28 *= (((arr_13 [i_4]) ? 65535 : (var_13 + var_13)));
    }
    var_29 = var_13;
    var_30 = (max(var_4, var_6));
    #pragma endscop
}
