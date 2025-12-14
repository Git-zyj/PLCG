/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171570
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171570 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171570
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 += ((~var_1) ? 16777215 : var_6);
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 23;i_3 += 1) /* same iter space */
                    {
                        var_14 = 884437659;
                        var_15 = (max(var_15, var_8));
                        arr_10 [i_2] = ((((-(arr_3 [i_0 + 1] [i_0] [i_0]))) - (arr_1 [i_0 + 2] [i_0 + 1])));
                        arr_11 [i_2] [i_0] [1] [i_2] = (((max(var_1, (arr_3 [i_0 + 1] [i_0 - 1] [13])))) ? (((arr_3 [i_0 - 1] [i_0 - 1] [5]) ? (arr_3 [i_0 + 1] [i_1] [i_2]) : (arr_3 [i_0 + 1] [i_0 + 2] [i_0]))) : (!884437659));
                        var_16 &= ((((((var_0 >> 1) | (max(var_6, 53))))) < (arr_8 [i_0 - 1] [i_1] [i_2] [i_2])));
                    }
                    for (int i_4 = 0; i_4 < 23;i_4 += 1) /* same iter space */
                    {
                        var_17 = (max((((min(var_3, -127)))), 884437659));

                        /* vectorizable */
                        for (int i_5 = 1; i_5 < 20;i_5 += 1)
                        {
                            arr_20 [i_2] [i_1] [3] [i_4] [i_5] [i_4] [i_5] = 208;
                            arr_21 [i_2] [i_2] [i_4] [i_2] = ((-(arr_5 [i_5 - 1] [i_1] [i_0 + 2] [i_4])));
                        }
                    }
                    for (int i_6 = 0; i_6 < 23;i_6 += 1) /* same iter space */
                    {
                        var_18 = (((((max(var_1, -90716848)))) ? (min(-1147126077568634756, (min(10838325097295632416, var_0)))) : ((min(-1469394399, 15)))));
                        var_19 = (min(((-(min(var_10, 922251575)))), var_12));
                    }
                    var_20 += var_4;
                    arr_26 [i_0] [i_0] [i_2] [i_0] = 10060736102138237907;
                    arr_27 [i_2] = (max(884437659, (max((arr_16 [i_2] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0] [i_0 + 1]), (arr_16 [i_2] [i_0 - 1] [i_2] [i_0 - 1] [i_0 - 1] [i_2])))));
                }
            }
        }
    }
    var_21 = var_3;
    var_22 = var_10;
    var_23 = (var_0 * -0);
    #pragma endscop
}
