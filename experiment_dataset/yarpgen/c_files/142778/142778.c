/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142778
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142778 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142778
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((!(((var_8 ? 1 : var_4))))) ? ((var_9 ? (max(var_9, 6956996504568258620)) : -1591134822)) : (!var_9)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_0] = ((-((((((arr_5 [i_0] [3] [i_1]) ? 124 : -9418))) ? var_0 : ((var_0 ? (arr_0 [i_1]) : var_3))))));

                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    var_11 = (min(var_11, var_7));
                    arr_12 [i_0] [i_1] [i_2] = ((((((var_4 ? 250 : 160664601)))) ? ((((1 ? var_7 : var_7)))) : (max(((35604 << (9446197488137478689 - 9446197488137478677))), var_2))));
                }
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    var_12 = 2896541234;
                    var_13 = (max(var_13, (((((max(105, 1320027934))) ? (min((arr_2 [i_1]), ((var_3 ? 1929546826 : -1320027940)))) : (((((min(var_5, 1)) >= (arr_9 [i_0] [i_1]))))))))));
                    var_14 = (min(var_14, (((((max(5424301851683551189, (arr_3 [i_1])))) ? (((((9421 ? -29067 : (arr_0 [i_3])))) ? (max(var_6, (arr_11 [i_0]))) : (arr_14 [i_1] [i_1] [4] [i_1]))) : ((max((-2147483647 - 1), 68))))))));
                }
                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    var_15 = 679131119876847089;
                    arr_17 [i_0] [i_1] [i_0] = (max((arr_8 [i_4] [i_0]), (((arr_6 [i_1] [i_1] [i_4]) ? (arr_6 [i_0] [i_1] [i_4]) : (arr_5 [1] [i_1] [i_4])))));
                    var_16 = (max(var_16, 30254));
                }
            }
        }
    }
    var_17 = var_6;
    var_18 = (((((((var_3 ? 187 : var_6))) ? var_0 : ((var_4 ? 3886980715 : var_0)))) > var_5));
    #pragma endscop
}
