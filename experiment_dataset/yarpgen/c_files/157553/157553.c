/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157553
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_18 = ((~(min((-2147483647 - 1), 126))));
        var_19 = ((~(max((arr_0 [i_0]), (arr_1 [i_0] [i_0])))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        arr_4 [i_1] = (min((arr_1 [i_1] [i_1]), (max(-24, (((arr_3 [i_1] [i_1]) & -2020495517313858820))))));
        var_20 = (min((arr_1 [i_1] [i_1]), ((max((arr_3 [i_1] [i_1]), (max((arr_2 [i_1]), 32767)))))));
        arr_5 [i_1] = (arr_1 [i_1] [i_1]);
        var_21 *= (6 > ((min((arr_1 [i_1] [i_1]), (arr_1 [i_1] [i_1])))));
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
    {
        arr_8 [i_2] = ((9535577791196409574 | ((max((((arr_7 [i_2]) ? (arr_3 [i_2] [i_2]) : 18836)), (((arr_7 [i_2]) ? -18836 : 97)))))));

        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            arr_12 [i_2] [i_2] [1] |= (((arr_7 [i_3]) ^ ((((max((arr_2 [i_2]), 255))) ? ((max(0, (arr_7 [i_2])))) : (arr_0 [i_2])))));
            var_22 = -50;

            for (int i_4 = 4; i_4 < 16;i_4 += 1)
            {
                arr_15 [i_4] [i_2] [i_2] [i_2] = (((max(((min(0, (arr_3 [i_2] [3])))), (min((arr_9 [4] [i_2]), (arr_3 [i_2] [i_2]))))) << (((min(((min(17158, 255))), (min(253, (arr_9 [12] [i_3]))))) + 2744221300414896108))));
                var_23 = (min((arr_1 [i_2] [i_3]), ((((min(32767, 1602990297)) != -6196783273654577945)))));
            }
            for (int i_5 = 0; i_5 < 19;i_5 += 1)
            {
                var_24 = (min(var_24, ((min((arr_6 [i_2]), (min((arr_17 [i_2] [i_3] [1]), (min(18835, (arr_7 [i_2]))))))))));

                for (int i_6 = 3; i_6 < 16;i_6 += 1)
                {
                    arr_20 [i_2] [4] [i_3] [i_6] = (min((arr_11 [i_2] [i_3] [i_3]), (min(1, ((max((arr_16 [i_2] [i_2] [i_2] [i_2]), 11)))))));
                    arr_21 [i_2] [i_2] [i_2] [i_2] [5] [i_2] = ((((max(((min((arr_3 [i_2] [1]), 1))), 32760))) | ((((((arr_9 [i_5] [i_3]) ^ -30329)) < (arr_3 [i_2] [i_3]))))));
                    arr_22 [6] [i_2] [i_2] [i_6] = (((((((max((arr_11 [i_2] [i_3] [i_5]), (arr_19 [i_2] [11] [i_2] [16] [i_2] [i_2])))) & (7295647957634019723 && 0)))) | (max((arr_16 [i_6 + 3] [i_6 - 1] [i_6 - 1] [i_6 + 2]), (min(1074106214, (arr_1 [i_3] [i_3])))))));
                }
                for (int i_7 = 0; i_7 < 19;i_7 += 1)
                {
                    var_25 = (((((((arr_13 [i_3] [i_5] [i_5] [i_7]) && 153)) ? (((min(1, (arr_0 [i_2]))))) : -1773253217987696143)) + ((((((arr_11 [i_3] [i_5] [i_3]) ? (arr_18 [i_2] [i_2] [i_2] [15] [i_7] [i_7]) : 0)) >> (min(8911166282513142032, (arr_3 [i_2] [i_3]))))))));
                    var_26 = 16165;
                    var_27 = 6;
                }
                for (int i_8 = 3; i_8 < 18;i_8 += 1)
                {
                    arr_29 [i_2] [i_3] [i_5] [i_3] = ((!((((arr_6 [i_8 + 1]) / (arr_6 [i_8 - 3]))))));
                    var_28 = (max(var_28, ((((((((((arr_11 [i_3] [i_5] [i_8 - 2]) << (-123 + 134)))) % (arr_13 [i_2] [i_3] [i_5] [i_8 - 2])))) + (max((arr_2 [i_8]), ((9535577791196409575 | (arr_18 [i_2] [i_2] [i_3] [i_5] [i_2] [i_8]))))))))));
                }
            }
        }
        var_29 = 1;
    }
    var_30 = (max((((5779780793934653046 | 122) ? (max(18446744073709551597, 255)) : ((((-9223372036854775807 - 1) ? -3997941338144256337 : 4))))), ((((max(var_6, var_10)) % (((min(var_6, -125)))))))));
    #pragma endscop
}
