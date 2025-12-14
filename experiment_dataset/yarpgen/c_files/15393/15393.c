/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15393
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    var_18 = (max((min((((arr_3 [i_2] [i_0]) ? 1 : 988410600)), (arr_0 [i_0] [i_2]))), (((min(226, (arr_6 [10] [i_1])))))));
                    arr_9 [4] [i_0] [i_1] [i_2] = (((min(988410600, (((arr_0 [i_0] [i_0]) * var_11)))) * 32));
                    var_19 -= (min((((!(221 == -59)))), ((((6354926027894424548 ? 15205929326525738181 : 1839589753)) + (~0)))));
                    var_20 = ((+(((arr_8 [i_0] [i_1 - 3] [i_2]) ? (arr_8 [i_1 - 2] [i_1] [i_1 - 2]) : 1))));
                }
                var_21 = (((!-180) * ((-((max(-36, (arr_6 [i_0] [i_1 - 1]))))))));

                for (int i_3 = 1; i_3 < 11;i_3 += 1)
                {
                    arr_12 [7] [i_1] [7] = (((max((arr_7 [i_1 - 2] [i_3 + 1] [i_3] [i_3 + 2]), (arr_7 [i_1 - 1] [1] [i_3 + 2] [i_3 + 1])))) || (((arr_7 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_3 + 3]) <= (arr_7 [i_1 - 1] [i_1 - 1] [i_1] [i_3 - 1]))));
                    var_22 = (min(var_22, ((max((max((arr_8 [i_3 + 1] [i_3 - 1] [i_1 - 2]), ((var_15 ? (arr_1 [13]) : (arr_0 [i_0] [i_3 - 1]))))), (107 || 988410599))))));
                    var_23 = ((((~(arr_7 [i_3 + 2] [i_3 + 2] [i_3 + 2] [i_3 + 3]))) >= (min(var_1, (arr_5 [i_1 - 3] [i_3 + 1])))));
                }
            }
        }
    }
    #pragma endscop
}
