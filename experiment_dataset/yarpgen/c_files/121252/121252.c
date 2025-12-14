/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121252
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121252 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121252
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = max(var_14, ((-8935189266551965320 ? -8935189266551965320 : -7756166814187264698)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 13;i_3 += 1) /* same iter space */
                    {
                        var_17 = (((arr_2 [i_0] [i_0] [i_2 - 1]) >= ((~((3929546179378116288 << (3929546179378116288 - 3929546179378116288)))))));

                        for (int i_4 = 3; i_4 < 11;i_4 += 1)
                        {
                            var_18 &= ((~((((min(var_3, -8935189266551965319))) ? ((18446744073709551608 >> (var_5 - 76))) : (arr_6 [i_0] [i_2] [i_0])))));
                            var_19 = (min(0, ((~(arr_6 [i_0] [i_0] [i_2 + 1])))));
                        }
                    }
                    for (int i_5 = 0; i_5 < 13;i_5 += 1) /* same iter space */
                    {
                        var_20 = (max(var_20, ((min(((((var_1 ? 447108739 : var_13)))), (~var_7))))));
                        var_21 *= var_9;
                    }
                    arr_13 [i_2] [i_1] [i_2] [i_1] = ((((((arr_12 [i_2 + 1] [7] [i_2 + 1] [i_2 - 1]) == ((var_5 ? 0 : var_7))))) >= (arr_10 [i_2] [i_2] [i_1] [i_2] [i_2])));
                    var_22 *= (max((!127), ((16568709222536457202 ? 0 : 9223372036854775807))));
                    var_23 = (-128 > -105);
                }
            }
        }
    }
    #pragma endscop
}
