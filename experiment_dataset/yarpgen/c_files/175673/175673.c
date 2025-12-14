/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175673
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_15 = ((1 ? (((167 ? 92 : var_14))) : var_11));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {

                            for (int i_4 = 1; i_4 < 12;i_4 += 1) /* same iter space */
                            {
                                var_16 = (min(var_16, var_13));
                                var_17 += ((var_14 > ((((1 ? 4294967295 : (-2147483647 - 1)))))));
                            }
                            for (int i_5 = 1; i_5 < 12;i_5 += 1) /* same iter space */
                            {
                                arr_15 [7] [i_1] [i_0] [10] [i_5] = ((!(((var_14 && var_10) >= (min(2668959788218495386, 0))))));
                                arr_16 [i_0] [i_2] [i_1] [i_0] = ((~((((max(0, 88))) ? ((var_13 ? -5472 : 6675126970404603389)) : var_14))));
                                var_18 += (((((((var_9 | 88) <= (((4294967282 ? 189 : -110))))))) < ((4294967295 ? (10 != 88) : 1125899906842623))));
                                var_19 = 28858;
                            }
                            arr_17 [i_0] = ((min(((229 ? 0 : var_6)), ((((arr_13 [i_0 - 1] [i_0] [i_0] [i_0 - 1] [i_3] [i_2 + 1] [i_0]) / 32))))));
                            arr_18 [i_3] [i_0] = (((75 > -3661219938563644021) != ((var_9 ? -8392321966758463768 : 75))));
                        }
                    }
                }
                arr_19 [i_0] [i_0] [i_0] = (((min(1, 3212227596))) || (((-28252 ? -114 : 1082739700))));
                arr_20 [i_0] [i_0] [i_1] = (0 * -21);
                var_20 = 1;
            }
        }
    }
    /* LoopNest 3 */
    for (int i_6 = 0; i_6 < 0;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 20;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 20;i_8 += 1)
            {
                {
                    var_21 ^= ((4 ? 175 : 22));
                    arr_31 [i_6] [i_7] [i_7] = ((!(((-2018381135 ? (max(var_11, var_2)) : (((var_5 ? var_1 : 1))))))));
                    var_22 = (min((var_5 == var_6), (max((arr_28 [i_7] [i_7]), (~-36)))));
                }
            }
        }
    }
    #pragma endscop
}
