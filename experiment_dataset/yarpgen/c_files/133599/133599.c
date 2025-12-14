/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133599
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133599 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133599
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (!0);

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            var_21 = (max(var_21, (((((max(var_7, ((min(-93, (arr_2 [18] [14] [i_1]))))))) ? ((max(112, (-127 - 1)))) : (arr_3 [i_1] [i_1 - 1] [i_0]))))));
            var_22 = (((var_18 & (-2147483647 - 1))) == var_17);
        }
        var_23 = var_14;
        var_24 = ((-93 ? (-2147483647 - 1) : 123));
    }
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            arr_8 [i_2] = (arr_7 [i_2] [i_2] [i_2]);
            /* LoopNest 2 */
            for (int i_4 = 3; i_4 < 24;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 23;i_5 += 1)
                {
                    {
                        arr_14 [i_2] = (((((min(-100, 1)))) - -var_9));
                        arr_15 [i_2] [i_2] [i_5 - 1] [i_5 + 1] [i_5] = (i_2 % 2 == zero) ? ((((arr_11 [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_5]) >> (((arr_10 [i_5 + 2] [i_5 + 2] [i_2] [10]) - 1216807298))))) : ((((arr_11 [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_5]) >> (((((arr_10 [i_5 + 2] [i_5 + 2] [i_2] [10]) - 1216807298)) - 213458889)))));
                    }
                }
            }
            var_25 = (min((min((arr_6 [i_2] [i_2] [1]), (arr_6 [i_3] [i_2] [3]))), (((~3387830976) - -1493716102))));
        }
        var_26 = max((arr_7 [i_2] [19] [19]), (((arr_10 [20] [20] [i_2] [i_2]) ? var_3 : (arr_10 [i_2] [i_2] [i_2] [i_2]))));
    }
    for (int i_6 = 0; i_6 < 12;i_6 += 1)
    {
        arr_19 [1] = (((((var_5 | (arr_10 [10] [10] [6] [24])))) ? (arr_13 [i_6]) : ((min((min(var_7, 92)), (arr_17 [i_6]))))));
        var_27 = (+-2088706946);
    }
    /* vectorizable */
    for (int i_7 = 1; i_7 < 15;i_7 += 1)
    {
        var_28 &= var_11;
        var_29 ^= (-var_7 < var_12);
        arr_23 [1] [i_7 + 3] = 1;
    }
    var_30 += var_11;
    #pragma endscop
}
