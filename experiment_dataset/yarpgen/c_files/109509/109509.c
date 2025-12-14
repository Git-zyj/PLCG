/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109509
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 20;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_4] [i_4] [i_3 - 2] [i_4] [i_4] = ((!((min(5539056716789326043, 116)))));
                                arr_14 [i_4] = ((~(min(((261468278 ? 1 : 261468259)), (4294967280 >= 4033499029)))));
                                var_13 |= (((((4033499024 ^ (arr_9 [i_0] [i_1] [i_2 - 4] [i_1 - 1])))) ? (((min(4033499041, -8520419759828778445)) ^ 29)) : ((((min((arr_3 [i_4]), var_5)) & (var_11 <= 4033499048))))));
                            }
                        }
                    }
                    arr_15 [i_2] [i_1 + 2] [i_0] = (((min(((min(261468243, 188))), (var_4 % var_11))) * ((min((!4033498999), ((64790 << (((-79 + 104) - 18)))))))));
                    arr_16 [i_0] = ((!(((((64794 ? 81 : 261468258)) >> (((~var_5) + 259731451)))))));
                }
            }
        }
    }
    var_14 = var_1;
    #pragma endscop
}
