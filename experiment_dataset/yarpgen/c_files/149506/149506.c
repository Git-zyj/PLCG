/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149506
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 19;i_2 += 1)
                {
                    var_15 ^= ((((max(26942, (arr_4 [i_2 - 1] [i_2 + 2] [i_2 + 1])))) && var_0));
                    var_16 &= arr_1 [i_0 - 1] [i_0 - 1];
                    arr_7 [i_2] [i_2] [i_2] [i_0] = ((var_5 || (arr_5 [i_1] [i_2] [i_0 - 2])));
                    var_17 = (min(var_17, ((((((~(arr_4 [i_0 + 2] [i_0 + 2] [i_2 + 2])))) ? (arr_2 [i_0]) : ((((arr_2 [i_0 - 3]) || (arr_4 [i_0 - 3] [i_0 + 2] [i_2 + 2])))))))));
                }
                for (int i_3 = 0; i_3 < 21;i_3 += 1) /* same iter space */
                {
                    var_18 += ((-(arr_0 [i_0 - 3])));
                    var_19 = max(var_9, (min(1, 0)));
                    var_20 -= ((+((max((arr_9 [i_1] [i_3]), 0)))));
                }
                for (int i_4 = 0; i_4 < 21;i_4 += 1) /* same iter space */
                {
                    var_21 = (min(var_21, (((((((((arr_11 [i_0] [i_0] [i_0] [i_4]) ^ (arr_3 [i_0 + 2] [i_0 + 2] [i_4])))) || var_2)) || (25057 || 40796))))));
                    var_22 *= 1;
                    var_23 = 25057;
                }
                arr_16 [i_1] [i_0] [i_1] = 38578;
                var_24 = (((arr_10 [i_0] [i_0] [i_1]) ? var_2 : (((!(arr_3 [i_0 + 1] [i_0 - 3] [i_0 + 1]))))));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 21;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 19;i_6 += 1)
                    {
                        {
                            var_25 = var_0;
                            var_26 = (min(((15320 ? 26504 : 50215)), ((~(arr_14 [i_0])))));
                        }
                    }
                }
            }
        }
    }

    for (int i_7 = 1; i_7 < 9;i_7 += 1)
    {
        arr_26 [i_7] = ((var_4 != (((21349 * var_6) / var_5))));
        var_27 ^= (41167 || 52431);
    }
    for (int i_8 = 0; i_8 < 15;i_8 += 1)
    {
        var_28 |= (((arr_4 [i_8] [i_8] [i_8]) != ((max((arr_9 [i_8] [i_8]), 0)))));
        var_29 ^= ((((((max(65535, 50215))) >= (((!(arr_8 [i_8] [i_8] [i_8] [i_8])))))) ? (15 || 52431) : 128));
    }
    var_30 = (max(var_30, var_2));
    #pragma endscop
}
