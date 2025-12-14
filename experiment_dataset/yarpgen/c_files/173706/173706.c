/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173706
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1 - 1] [i_1] [i_2] = (~(((var_5 >= ((1 ? 37969 : (arr_8 [i_0] [i_1] [i_2] [1])))))));
                    var_18 = (i_0 % 2 == zero) ? ((((((arr_0 [i_0] [i_0]) + 2147483647)) << (min(((1 ? (arr_5 [4] [i_1]) : 1)), 1))))) : ((((((((arr_0 [i_0] [i_0]) - 2147483647)) + 2147483647)) << (min(((1 ? (arr_5 [4] [i_1]) : 1)), 1)))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            {
                var_19 = ((17422 ? 11318506252440557540 : 35));
                var_20 ^= ((((-49 ? 43 : 35589)) * (arr_2 [i_3] [i_3])));
                /* LoopNest 3 */
                for (int i_5 = 2; i_5 < 17;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 17;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 1;i_7 += 1)
                        {
                            {
                                var_21 *= (min((max(-var_10, -8649691082575563881)), 64));
                                var_22 = (min(var_22, ((((((-(arr_6 [1] [i_4] [i_5] [i_6])))) != (max(((7128237821268994074 ? 8649691082575563891 : 6810)), (arr_7 [6] [i_4] [1]))))))));
                                var_23 = (min(var_23, 119));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
