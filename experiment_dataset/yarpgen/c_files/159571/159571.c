/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159571
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_1 + 1] = (max((+-591821921), ((-((-836169977 ? 360626480 : 133))))));
                var_10 = (max(var_10, (((var_0 & ((-(arr_2 [i_1 - 1]))))))));
                var_11 &= max(834647547, -775659834);
                arr_5 [i_0] = (((arr_0 [i_0] [i_0]) && ((max((arr_3 [i_1 + 2] [i_1 - 2]), var_1)))));
                var_12 = ((!((((arr_3 [i_0] [i_1]) % (591821936 <= var_4))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        for (int i_3 = 4; i_3 < 12;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 13;i_4 += 1)
            {
                {
                    arr_13 [i_2] [i_3 - 3] [i_4] [i_4] = (8442905155236241559 ^ 18446744073709551612);
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 9;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 13;i_6 += 1)
                        {
                            {
                                var_13 = var_9;
                                arr_19 [i_2] [i_4] [i_6] [i_5] [i_6] [6] [i_3 - 3] = (14 || 8442905155236241550);
                                var_14 &= 134217727;
                            }
                        }
                    }
                    var_15 = ((-6815626109426942826 ? (max((!834647547), (max(3, 8866159741419498250)))) : ((max(134217726, (arr_12 [i_3 - 3] [i_3 - 4]))))));
                    /* LoopNest 2 */
                    for (int i_7 = 4; i_7 < 12;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 13;i_8 += 1)
                        {
                            {
                                var_16 = (((max((arr_24 [i_7 - 4] [i_7] [i_7 - 2] [i_7 - 3] [i_7 - 3] [i_7 - 3]), (arr_22 [i_7] [i_7 - 3] [i_7 - 2] [2]))) << ((((-2147483647 ? -222065197 : (var_0 <= 1))) - 4072902092))));
                                arr_27 [i_2] [i_3] [i_3] [i_2] = (((arr_20 [i_2] [i_2] [i_7] [i_8]) ? ((((arr_7 [i_3 - 3]) || var_3))) : ((((arr_12 [i_3 - 1] [i_7 - 3]) >= ((max((arr_21 [i_2] [i_2] [i_4] [i_2] [i_8] [12]), -8416))))))));
                                arr_28 [10] [i_3 - 4] = (arr_16 [i_2] [i_3] [i_4] [i_7] [i_8]);
                                arr_29 [i_2] [i_3] [i_4] [i_7] [i_8] = 134217726;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
