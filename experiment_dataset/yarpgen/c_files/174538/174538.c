/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174538
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min((((var_7 ? var_0 : -12424))), ((6530497869224405445 - (max(6530497869224405445, 1228391522))))));
    var_21 = var_14;

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_22 = (min(var_22, (((4026945655 ? var_4 : (((((var_6 ? var_13 : -6313073454571542179)) == var_5))))))));
        arr_4 [i_0] [i_0] = (((arr_3 [i_0] [13]) % (-6313073454571542170 <= -1185147741)));
        arr_5 [i_0] = ((~(~-103)));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        arr_13 [i_2] [i_2] = (((~var_17) * (var_0 == 16)));
                        arr_14 [i_0] [i_0] [i_2] [i_3] = ((var_11 ? ((6187414342126255081 - (arr_9 [i_0] [i_1] [i_2] [i_3]))) : (((var_4 ? (arr_9 [i_0] [6] [i_2] [i_3]) : -103)))));

                        /* vectorizable */
                        for (int i_4 = 1; i_4 < 15;i_4 += 1)
                        {
                            var_23 = (arr_12 [i_2] [i_4 - 1] [i_0] [i_2]);
                            var_24 = var_12;
                        }
                        for (int i_5 = 0; i_5 < 17;i_5 += 1)
                        {
                            var_25 = (min(((var_9 ? (-83 / 6313073454571542169) : (16542943603659367055 < var_3))), (arr_19 [i_0] [15] [i_2] [i_3] [i_5])));
                            arr_20 [i_0] [i_1] [i_1] [i_2] [i_3] [i_2] [i_5] = ((((var_2 || (arr_2 [i_0]))) && ((((arr_2 [i_1]) ? (arr_11 [i_5] [i_2] [i_2] [i_0]) : (arr_0 [i_5] [i_1]))))));
                            arr_21 [i_2] [i_1] [i_2] [i_2] [i_2] [i_5] = 416539653;
                            var_26 |= var_10;
                            var_27 += 37;
                        }
                        arr_22 [i_0] [i_0] [i_2] [i_0] = (--56);
                        arr_23 [i_0] [i_0] [i_2] [15] [i_2] [i_3] = (min((((var_16 && (arr_12 [i_2] [i_1] [i_2] [i_3])))), (arr_8 [i_1])));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_6 = 3; i_6 < 12;i_6 += 1)
    {
        var_28 = (min(var_28, (((((20792 + (arr_10 [4] [i_6 - 1] [4] [4])))) ? (((var_1 ? -1793734662 : (arr_9 [i_6 - 3] [i_6] [i_6 - 3] [i_6 - 3])))) : ((var_5 ? (arr_10 [16] [i_6] [6] [10]) : var_2))))));
        var_29 = (2160708104 / var_11);
    }
    #pragma endscop
}
