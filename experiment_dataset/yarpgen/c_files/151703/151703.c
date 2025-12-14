/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151703
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151703 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151703
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_11 = ((min(13011688478920228505, (arr_0 [i_1]))));
                var_12 = (min(13086975158467073716, ((min(-32761, var_9)))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 2; i_2 < 11;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 13;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 14;i_4 += 1)
            {
                {
                    var_13 = 13011688478920228505;
                    arr_15 [i_4] [i_2] [i_2] = (((((((-7203614193094705172 ? 398730798 : 13086975158467073714))) ? 43842 : var_5)) << (((((min(63769, 43842))) <= 11868395742781446769)))));
                    var_14 = (((((((min(-14765, 18446744073709551591))) ? 13011688478920228505 : (((arr_11 [i_2] [i_3]) ? 15055043578499593773 : 21693))))) && (((((18446744073709551615 && (arr_0 [i_4]))) ? (((398730783 ? 18520 : 398730806))) : (min(29137, 3391700495209957843)))))));
                    var_15 = (min((arr_14 [i_3 + 1] [i_3] [i_2 - 2]), (arr_9 [i_2 - 2] [i_3] [i_3 - 1])));
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 13;i_6 += 1)
                        {
                            {
                                arr_22 [i_2 - 1] [i_2 - 1] [i_3] [i_4] [11] [13] [i_2 - 1] = var_2;
                                var_16 = 14535117500109700694;
                            }
                        }
                    }
                }
            }
        }
    }
    var_17 -= (((((6624690801438964089 << (18520 - 18469)))) ? 46837 : (min(var_1, (40775 / -4053977630837139831)))));
    var_18 = ((14535117500109700694 <= (((min(var_5, var_4))))));
    #pragma endscop
}
