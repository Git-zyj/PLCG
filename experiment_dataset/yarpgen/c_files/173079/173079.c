/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173079
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173079 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173079
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_4;
    var_16 = ((1 ? 1 : (min(var_2, ((var_14 ? var_10 : var_10))))));
    var_17 = (((((-2570265605457984502 ^ (var_1 / var_10))) + 9223372036854775807)) << (var_1 - 1));

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] &= (((((arr_0 [13]) - ((((arr_0 [i_0]) >= 0))))) > (((arr_0 [i_0]) ? -401944269 : (arr_0 [i_0])))));
        arr_3 [i_0] = ((-(min(((-(arr_1 [6]))), ((var_10 ? (arr_1 [i_0]) : 1))))));
        var_18 = ((1 && ((min(((6 ? var_10 : (arr_0 [1]))), (4294967290 - 4294967290))))));
        var_19 = ((-4 ? (min(((((arr_1 [i_0]) ? 0 : (arr_0 [i_0])))), (max(0, (arr_0 [i_0]))))) : (((~((~(arr_0 [7]))))))));
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 4; i_3 < 14;i_3 += 1)
                {
                    {
                        arr_14 [i_0] [i_1 + 1] [i_2] [i_3] [i_0] &= ((+(((arr_11 [i_3 - 4] [i_1 + 2] [i_2] [i_1]) ? (arr_11 [i_3 - 4] [i_1 - 1] [i_2] [i_3]) : (arr_11 [i_3 - 2] [i_1 + 3] [i_3 + 2] [8])))));
                        var_20 = (((((4294967287 == (arr_0 [i_3 - 1])))) + (((arr_0 [i_3 - 3]) ^ 1))));
                        arr_15 [i_0] [0] [3] [i_3] [i_1] [5] = ((((((!674226328) * ((4289678087693938081 ? 0 : 1))))) ? (max(((min((arr_8 [i_0] [i_0] [7] [7]), (arr_8 [i_0] [1] [i_2] [9])))), ((var_7 ? 65535 : (arr_10 [i_2] [i_2] [i_0] [i_0]))))) : 1));
                    }
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
    {
        var_21 = 8192;
        var_22 = (max((((max(6, 651919998)))), (arr_7 [7])));
        var_23 = (max((((arr_7 [i_4]) ? (arr_13 [i_4] [i_4] [i_4] [3] [i_4] [i_4]) : (arr_13 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4]))), (((~(-14213 % 1))))));
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
    {
        arr_21 [12] = (min((min(((((arr_16 [i_5]) <= (arr_0 [i_5])))), (arr_12 [i_5] [i_5]))), ((((0 == 4294967290) ? -4294967290 : 111484394)))));
        var_24 = ((!(((-(((arr_10 [i_5] [i_5] [i_5] [i_5]) << (((arr_7 [i_5]) - 7155499098587511285)))))))));
        arr_22 [i_5] = (min((((!(arr_1 [1])))), (max(1473277926087339761, 1))));

        for (int i_6 = 0; i_6 < 16;i_6 += 1) /* same iter space */
        {
            var_25 = ((((((~(arr_16 [4])))) | ((11 - (arr_5 [i_6] [1]))))));
            var_26 = (max(var_26, ((((((!(((16973466147622211873 ? (arr_24 [i_6] [1]) : (arr_23 [i_5] [i_6]))))))) << (((max((arr_7 [i_5]), (min((arr_12 [i_5] [i_5]), (arr_23 [8] [i_6]))))) - 7155499098587511302)))))));
        }
        for (int i_7 = 0; i_7 < 16;i_7 += 1) /* same iter space */
        {
            var_27 += 1855670726957006480;
            var_28 = var_10;
        }
        for (int i_8 = 0; i_8 < 16;i_8 += 1)
        {
            var_29 = (((arr_19 [5]) ? ((1 & ((max(1, 0))))) : (~9765)));
            var_30 = (min(var_13, ((((min((arr_29 [i_5]), (arr_10 [i_8] [4] [i_8] [i_8])))) ? ((var_1 ? (arr_9 [i_5] [2] [1] [7]) : 18420)) : (!0)))));
        }
    }
    #pragma endscop
}
