/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186839
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((((7 ? 31525197391593472 : -7498328968472138739))) ? 3960430124 : (min(var_0, var_7)))) / var_1));
    var_17 ^= ((-((((var_13 == var_4) != ((16603 ? var_14 : var_4)))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_18 = -5290437773718997291;
        arr_2 [i_0] = (((arr_0 [i_0]) < (((((arr_1 [i_0]) > var_2))))));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        var_19 = 5086537220646839409;
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 17;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 18;i_3 += 1)
            {
                {
                    var_20 = (max(var_20, (arr_4 [i_1])));
                    arr_10 [i_1] [i_2 - 3] [i_3 + 1] [i_1] = (max(((((((~(arr_3 [i_1])))) < ((58971 ? 13 : 7535688955320735095))))), (arr_8 [i_2 + 2] [i_3 + 1] [i_3])));

                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        arr_15 [i_1] [i_1] [i_1] = ((-3187957952747850308 & (((max(3, (arr_14 [i_2 + 1] [i_3 + 1])))))));
                        var_21 = ((6565 << (((((((var_5 ? var_14 : 5426))) ? var_5 : (((arr_5 [i_3] [i_1] [i_1]) ^ var_7)))) - 9981))));
                        var_22 = (min(var_22, 861815418));
                        var_23 = (min(var_23, (min(42803, 245))));
                        arr_16 [i_1] = (((-5290437773718997291 + 9223372036854775807) >> ((((~(arr_3 [i_1]))) + 41701))));
                    }
                    var_24 = (min(var_24, ((((((~((1047552 ? 48416 : var_7))))) ? (((((var_14 ? var_7 : var_1))) ? ((max(181, (arr_11 [3] [i_2] [3])))) : (!var_15))) : var_1)))));
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 15;i_5 += 1) /* same iter space */
    {
        var_25 *= (((~((20933 ? -1 : var_3)))));
        arr_19 [i_5] [7] = 17592186044415;
        var_26 = arr_3 [i_5];
        var_27 = (arr_6 [i_5]);
        var_28 = 5;
    }
    for (int i_6 = 0; i_6 < 15;i_6 += 1) /* same iter space */
    {
        var_29 = max((((-4092670062654245675 + 9223372036854775807) << (132 - 132))), (((!(5005803475751240811 >> var_10)))));
        arr_24 [i_6] = (((((-(var_3 ^ var_4)))) ? 1837278005 : 151));
        arr_25 [i_6] = 174;
    }
    #pragma endscop
}
