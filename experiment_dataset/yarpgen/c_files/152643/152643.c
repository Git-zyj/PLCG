/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152643
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152643 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152643
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 &= 18446744073709551615;
    var_17 = var_7;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            arr_6 [6] [i_1] = var_5;
            var_18 += var_14;

            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                var_19 = 9743610007330201445;
                var_20 += ((((((arr_7 [i_0] [i_1] [14] [i_2]) ? ((min((arr_9 [i_0] [i_0] [i_1] [i_2]), (arr_9 [i_2] [i_0] [i_0] [i_0])))) : (((arr_1 [i_0]) ? var_6 : var_3))))) ? var_14 : (arr_4 [3])));
            }
            for (int i_3 = 2; i_3 < 12;i_3 += 1)
            {

                /* vectorizable */
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    var_21 |= (arr_3 [i_3 - 2] [i_1] [i_3 - 2]);
                    var_22 |= var_0;
                }
                for (int i_5 = 1; i_5 < 13;i_5 += 1)
                {
                    var_23 = var_8;
                    var_24 *= ((32752 || (((2147483647 / (arr_5 [i_0] [i_0]))))));
                    var_25 = 5961876392546747514;

                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        var_26 = ((min(var_15, (arr_2 [i_0] [i_5]))));
                        arr_22 [i_0] [i_0] [i_6] [i_0] [i_6] = (arr_8 [i_3] [i_5] [i_6]);
                        var_27 &= ((((min(2070272655, ((var_1 / (arr_16 [i_0] [i_1] [4] [i_3 - 1] [8] [i_0])))))) ? (((min((203122827 >= 5123774450048505399), (arr_0 [i_1] [i_1]))))) : 127));
                        var_28 += (min(((5961876392546747509 ? var_0 : (min((arr_8 [i_0] [i_1] [i_6]), var_15)))), (((((2047216377 ? (arr_21 [6] [i_1] [i_3] [i_1] [i_6] [10]) : (arr_3 [i_3] [i_5] [i_6]))) > (-138885228 == 1117103813820416))))));
                    }
                }
                var_29 &= (max(((((min(67, 2147483647))) ? (arr_16 [3] [i_3 + 1] [2] [i_1] [2] [i_0]) : (arr_12 [i_0] [i_0] [i_1] [i_3]))), var_2));
                var_30 = (arr_19 [i_0] [i_1] [i_3 + 3] [i_3]);
                var_31 ^= 3886094210;
            }
            var_32 = ((5991 && (((!5991) != var_8))));
        }
        for (int i_7 = 0; i_7 < 15;i_7 += 1)
        {
            arr_27 [1] [1] [i_7] = (((~-68) ? ((9223372036854775807 ? var_5 : 11749509938860197530)) : (arr_17 [12] [i_7] [i_0] [i_7])));
            arr_28 [i_0] = min(3886094189, ((((arr_2 [i_0] [i_0]) && ((min((arr_2 [i_0] [i_0]), (arr_19 [8] [i_7] [8] [i_0]))))))));
            var_33 += (min(-5922, 2307962450));
            var_34 = 29205;
            var_35 &= (arr_7 [i_0] [i_0] [3] [i_7]);
        }
        var_36 += (((arr_24 [i_0]) ? (arr_24 [i_0]) : (((!(arr_24 [i_0]))))));
    }
    #pragma endscop
}
