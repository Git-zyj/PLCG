/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133687
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, -21707));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_17 *= ((((max((arr_1 [i_1]), (arr_3 [i_0] [i_1])))) ? (((((21181 >> (944742799 - 944742768)))) ? (arr_2 [i_0]) : 0)) : var_1));
                arr_6 [i_0] [i_0] = 4214353869;

                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    var_18 = (arr_3 [i_0] [i_1]);

                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        var_19 = ((((678801343885535890 ? (arr_5 [i_3] [i_0]) : (arr_10 [i_0] [i_1] [i_1]))) | (arr_4 [i_1] [i_0])));
                        arr_13 [i_0] [i_2] &= (max((((-181820042 / (min(181820042, 2396901893))))), (arr_4 [i_0] [i_2])));
                        arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] |= (2241934432 && -8426681956547971018);
                        var_20 = (min(var_20, ((((((((max(-4236474199199790154, 59575))) ? (arr_5 [i_0] [i_0]) : 181820026))) % (arr_4 [i_0] [i_0]))))));

                        for (int i_4 = 2; i_4 < 7;i_4 += 1)
                        {
                            arr_18 [i_4] = ((((((((19841 ? (arr_4 [i_2] [i_3]) : (arr_2 [i_4 + 3]))) + 9223372036854775807)) >> ((((max((arr_2 [i_2]), 16487))) - 16473)))) == (arr_8 [i_1] [i_0])));
                            var_21 = (14291408261769491170 % 77);
                        }
                        for (int i_5 = 0; i_5 < 10;i_5 += 1)
                        {
                            var_22 = (arr_5 [i_0] [i_0]);
                            var_23 = (min(((((min(3494295526, -22))) ? 49049 : 3964234829)), 14895));
                            arr_21 [i_1] [i_1] [i_5] [i_3] [i_5] = (max((min((arr_3 [i_0] [i_2]), (max((arr_16 [i_0] [i_1] [i_2] [i_2] [i_3] [i_5]), 187948052)))), ((((arr_15 [i_0] [i_1] [i_2] [i_3] [i_5]) - (arr_10 [i_0] [i_1] [i_3]))))));
                        }
                    }
                    var_24 |= ((-(arr_12 [i_0] [i_0] [i_0] [i_0])));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 10;i_7 += 1)
                        {
                            {
                                var_25 = ((~(arr_10 [i_1] [i_6] [i_2])));
                                arr_28 [i_7] [i_1] = (arr_24 [i_0] [i_1] [i_6]);
                                var_26 = (max((((max(-112, 4113147254)) / ((((23108 || (-32767 - 1))))))), ((-232382812 ? (-1230066802206797649 && 1) : (arr_25 [i_0] [i_0] [i_2] [i_6] [i_7])))));
                            }
                        }
                    }
                }
                var_27 = 1;
            }
        }
    }
    var_28 = var_12;
    #pragma endscop
}
