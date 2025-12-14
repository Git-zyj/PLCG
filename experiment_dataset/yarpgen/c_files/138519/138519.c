/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138519
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] = (((arr_1 [i_0]) != 8661));
        arr_3 [i_0] [i_0] = (max(((((max(var_3, var_8))) ? (((var_3 ? 32763 : -8652))) : ((-32761 ? var_4 : (arr_0 [3] [i_0]))))), (((~var_4) ? (min((arr_1 [i_0]), var_0)) : ((~(arr_0 [i_0] [i_0])))))));

        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            arr_7 [i_1 - 1] = -32767;
            var_10 = 32767;
            var_11 = (max(var_11, var_5));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            arr_10 [i_2] [i_0] = 12294046407500829068;
            arr_11 [i_0] = ((((3152052188 ? var_5 : (arr_5 [13] [i_2])))) ? (6258677239202556409 ^ var_7) : (arr_5 [i_0] [i_0]));
        }
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            arr_14 [4] [4] = ((!(var_9 != var_0)));
            arr_15 [i_0] [i_0] |= (((!var_7) ? ((((!(((var_1 ? (arr_6 [i_3]) : var_3))))))) : (min((max(2362984934959974538, (arr_1 [i_0]))), ((-32756 ? 2362984934959974538 : 1))))));
        }
    }
    for (int i_4 = 4; i_4 < 15;i_4 += 1)
    {
        arr_18 [i_4] [i_4] = (min((((arr_17 [i_4 + 2] [i_4 - 2]) ? 18446744073709551615 : (arr_17 [i_4 + 2] [i_4 + 1]))), (((-11189 ? var_0 : (arr_17 [i_4 + 1] [i_4 - 3]))))));
        var_12 += (!var_7);
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        var_13 -= ((((min(var_6, 134217727))) == (max(11189, var_9))));
        arr_21 [i_5] [i_5] = (min(0, 1));

        for (int i_6 = 0; i_6 < 17;i_6 += 1)
        {
            var_14 = ((((!((min((arr_23 [i_5] [i_6]), var_5))))) ? (((min(78, 32747)))) : ((12427 ? ((var_9 ? var_2 : (arr_23 [i_5] [i_5]))) : (((134217716 ? var_0 : 4294967295)))))));
            arr_24 [i_6] |= ((!235) ? (!235) : var_1);
            var_15 = (arr_16 [i_6]);
        }
        for (int i_7 = 4; i_7 < 13;i_7 += 1) /* same iter space */
        {
            var_16 = (((((158 ? (arr_20 [i_5] [i_7 + 1]) : (arr_22 [i_7 + 2])))) >= (((arr_20 [i_5] [i_7 - 1]) + (arr_23 [i_7 + 3] [i_7 + 2])))));
            arr_27 [i_7] [i_7] [i_7] = (max(((var_2 ? 100 : var_5)), (arr_26 [i_7 + 4] [i_7 + 3])));
        }
        for (int i_8 = 4; i_8 < 13;i_8 += 1) /* same iter space */
        {
            var_17 = var_3;
            arr_32 [i_5] [i_8] = var_2;

            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                var_18 ^= ((-(!1)));
                arr_37 [i_8 - 4] [i_8 - 1] [i_8 + 3] [i_8 - 3] = (((32764 % var_0) ? (((-2061641838 ^ var_2) ? (~9207) : 0)) : 175));
            }
            for (int i_10 = 0; i_10 < 17;i_10 += 1)
            {
                var_19 |= 78;
                arr_42 [i_5] [i_8] [i_5] = ((-(arr_19 [i_5])));
                var_20 += (((max(((var_9 >> (var_2 + 32427))), (arr_35 [i_5] [i_5] [i_5]))) % (((((max(var_9, 18446744073709551608)) != ((min(var_3, var_1)))))))));
                arr_43 [16] [16] = ((!(arr_17 [2] [i_10])));
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 17;i_12 += 1)
                    {
                        {
                            arr_49 [i_5] [i_5] [i_5] [13] = (min((((((min(2251112557310878664, 65528))) ? var_7 : var_6))), (max(var_5, 1))));
                            var_21 = (arr_20 [i_10] [i_10]);
                        }
                    }
                }
            }
            var_22 = (min(var_22, var_7));
        }
        for (int i_13 = 4; i_13 < 13;i_13 += 1) /* same iter space */
        {
            var_23 = (max((((((min(1, 127)))) & var_0)), (((min(1086035189, 1))))));
            arr_53 [i_5] = var_7;
            arr_54 [i_5] [i_5] [i_5] = ((-3417443230222728452 + (((((!var_1) <= (arr_33 [i_13 - 3])))))));
            arr_55 [13] = (max((arr_44 [i_13 + 3] [i_13 + 3]), (89 - 13643315222588585131)));
        }
    }
    var_24 = ((3144838272153806515 ? 9 : 4294967268));
    #pragma endscop
}
