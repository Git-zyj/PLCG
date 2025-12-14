/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17211
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (4884192124429913622 + var_1);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_19 = (((var_8 + var_2) == (((((((arr_3 [i_0] [i_0] [i_1]) <= (arr_1 [i_0] [0]))))) - (arr_3 [8] [i_0] [i_0])))));
                arr_6 [i_0] [i_1] [i_1] = (var_16 && 897717429);
                var_20 |= (((((((1614834779 && (arr_2 [i_0] [5])))))) + ((((arr_1 [i_0] [i_1]) < 2884680665)))));
                var_21 = (min(var_21, ((((((((100 == -17747) >= (((5223801816740277350 && (arr_1 [1] [i_0])))))))) >= var_4)))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_16 [10] [10] [i_2] [i_3] [i_3] &= ((15 >= ((((var_7 >> (((arr_14 [5] [8] [i_2] [i_4]) - 10521)))) % 16066896379278047922))));
                                arr_17 [i_0] [i_1] [5] [i_3] [i_1] = ((((43661 & (((arr_14 [2] [i_4] [i_2] [i_3]) % var_5)))) <= (((((((var_7 <= (arr_7 [i_2] [i_1] [i_1])))) >= (var_1 || var_17)))))));
                                var_22 -= (-1 && 13222942256969274277);
                                arr_18 [5] [i_1] [i_1] [i_0] = ((((((((((arr_13 [i_0] [i_1] [i_1] [i_2] [i_2] [i_4] [i_4]) || var_5)))) >= (arr_1 [i_0] [i_2])))) == 712759773));
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 = (((((12185 == (6 >= var_1)))) != ((((var_10 < 682912568) >= (var_12 / 1250609624))))));
    #pragma endscop
}
