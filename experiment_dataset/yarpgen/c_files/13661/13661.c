/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13661
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (8938499670114041806 + -8938499670114041801);
    var_21 = (((~var_2) && var_17));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_7 [i_0] = (max((((~8938499670114041806) & var_0)), (max(3698406637101915317, 2465915499884763266))));

                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    arr_10 [i_0] = ((((((arr_1 [i_1]) ? (arr_5 [i_0] [i_0]) : (arr_1 [i_0])))) ? (max((var_3 ^ 8938499670114041789), (arr_2 [i_0] [i_0]))) : (((arr_3 [i_0] [i_2]) ? (~var_2) : -64))));
                    var_22 = (min(var_22, (((-12807 ? -8938499670114041822 : -12807)))));
                    arr_11 [14] [14] |= ((((min((((arr_4 [i_0] [16] [i_2]) ^ -114)), (max(var_19, var_11))))) + ((8938499670114041821 ? (arr_4 [i_0] [6] [i_1]) : 8938499670114041797))));
                }
                var_23 = (min(var_23, ((((~12797) & (((arr_0 [i_1] [i_0]) & (arr_6 [i_0] [i_0] [i_0]))))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 1;i_3 += 1)
    {
        for (int i_4 = 3; i_4 < 16;i_4 += 1)
        {
            {
                arr_17 [i_3 - 1] [i_3 - 1] [i_4 - 3] |= (min((arr_15 [i_3]), (max((arr_15 [i_3 - 1]), -1))));
                var_24 -= (max(((min((arr_12 [i_3] [i_4]), (0 / -1295246582)))), 5533659697435429856));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 18;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 18;i_6 += 1)
        {
            {
                var_25 *= (max((max(4278784057, 1)), (((((var_10 ? var_2 : var_3)) == (arr_9 [i_5] [i_6] [i_5]))))));
                var_26 = (min(var_26, (((((var_15 << (((-8938499670114041822 + 8938499670114041852) - 30)))) & (arr_6 [i_5] [i_6] [i_6]))))));
            }
        }
    }
    #pragma endscop
}
