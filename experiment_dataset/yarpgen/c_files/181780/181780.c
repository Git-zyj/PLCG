/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181780
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181780 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181780
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 += max(2006, (max(var_3, 240911890)));
    var_13 = ((max((((-2147483647 - 1) ? 1999 : 0)), var_6)));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 6;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 6;i_3 += 1)
                    {
                        var_14 += ((1 ? -2147483626 : 1999));

                        for (int i_4 = 2; i_4 < 7;i_4 += 1) /* same iter space */
                        {
                            arr_11 [i_4 + 2] [i_3] [i_2] [i_3] [i_0] = (((~var_7) ? (var_3 & var_1) : ((65535 ? 2147483625 : var_4))));
                            arr_12 [i_0] [i_1] [i_1] [i_0] [i_3] = (((150032276 ? 127 : -14634)));
                            var_15 = (max(var_15, var_2));
                        }
                        for (int i_5 = 2; i_5 < 7;i_5 += 1) /* same iter space */
                        {
                            arr_16 [i_0] [i_0 - 1] [i_3] [i_2 + 2] [i_3] [i_3 + 4] [i_3 + 4] = ((var_3 ? var_5 : 18355529489399021568));
                            var_16 -= ((63537 ? 0 : 4451));
                            var_17 *= var_0;
                        }
                        for (int i_6 = 2; i_6 < 7;i_6 += 1) /* same iter space */
                        {
                            arr_21 [i_0 - 2] [i_1] [i_2 + 4] [i_3] [i_6] = var_9;
                            arr_22 [i_0] [i_0] [i_3] [i_2] [i_3 + 3] [i_3 + 3] [i_6] = ((1 ? (2147483625 - 9223372036854775807) : var_8));
                            var_18 = var_6;
                        }
                    }
                    arr_23 [i_0 + 1] [i_1] [i_2 + 1] = 60;
                    var_19 = 63529;
                }
            }
        }
    }
    var_20 += var_6;
    #pragma endscop
}
