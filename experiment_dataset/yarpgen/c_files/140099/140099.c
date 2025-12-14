/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140099
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140099 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140099
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 |= -19361;

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0 - 1] = (128 < -19361);
        arr_3 [1] = (((14 + (var_3 - var_5))));
        arr_4 [i_0] = (min((((arr_1 [i_0]) && (((-19349 ? 1 : 60920))))), (((arr_0 [i_0 - 1]) || (arr_1 [i_0 + 1])))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_9 [i_1] = ((var_3 ? var_2 : 19384));
        arr_10 [i_1] = -1019353167;
        arr_11 [i_1] [i_1] = (arr_6 [i_1]);

        for (int i_2 = 0; i_2 < 11;i_2 += 1) /* same iter space */
        {
            arr_16 [i_2] [i_2] [i_2] = (min(64, (arr_14 [i_1] [i_1])));
            arr_17 [i_1] = (((max(-18005, 1))) ? var_0 : (arr_15 [i_2] [i_1]));
            arr_18 [i_2] [i_1] [i_1] = (max((max((max(var_6, 32752)), (var_3 ^ -19365))), var_2));
        }
        for (int i_3 = 0; i_3 < 11;i_3 += 1) /* same iter space */
        {
            arr_22 [i_1] [i_1] = ((((max(var_2, (arr_14 [i_1] [i_3]))))));
            arr_23 [6] = (-((((arr_19 [i_1] [i_1]) > -12485))));
            arr_24 [i_3] [3] = var_6;
            arr_25 [i_1] [i_1] [i_3] = 19379;
        }
        for (int i_4 = 0; i_4 < 11;i_4 += 1) /* same iter space */
        {
            arr_28 [i_1] [i_4] |= (15 ? -23426 : (max((-2147483647 - 1), (arr_7 [i_1]))));
            arr_29 [i_1] [i_4] = (max(var_9, 7168));
            arr_30 [i_4] [i_4] [9] = ((0 && (((~(!var_9))))));
            arr_31 [i_1] [i_1] = (((max(var_9, ((var_0 << (2699 - 2696))))) % ((min((arr_27 [i_1] [i_1]), (var_9 || var_6))))));
        }
        for (int i_5 = 0; i_5 < 11;i_5 += 1)
        {
            arr_36 [i_1] [i_1] = -1;
            arr_37 [8] = 27913;
            arr_38 [i_1] = ((15 ? ((~(arr_6 [i_5]))) : (((arr_14 [i_5] [i_5]) ^ (~1141094379)))));
            arr_39 [i_5] [i_1] [7] = (((((((min(1, var_8))) ? 772589050 : var_2))) ? (((((var_1 + 2147483647) >> (var_6 - 1265207460))) << ((((3544997334 << (-9107155468215808891 + 9107155468215808893))) - 1295087445)))) : ((((max(19368, var_4))) | (arr_1 [i_1])))));
        }
    }
    for (int i_6 = 0; i_6 < 14;i_6 += 1)
    {
        arr_44 [i_6] = ((~((((arr_0 [i_6]) >= 14)))));
        arr_45 [i_6] = var_3;
        arr_46 [i_6] = (~240);
        arr_47 [i_6] &= (max((arr_43 [i_6] [i_6]), (min(1, ((min(214, (arr_42 [7]))))))));
        arr_48 [i_6] [i_6] = -var_4;
    }
    var_11 = (7 ? var_7 : ((1 % (max(5167977019353845739, 63)))));
    var_12 = ((~((598541858810766766 ? var_7 : (~1911)))));
    #pragma endscop
}
