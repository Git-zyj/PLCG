/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172597
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172597 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172597
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((var_9 ? ((1 ? var_12 : 22) : (((var_0 ? -23071 : var_13))))));
    var_16 = ((((((!(((var_4 >> (var_4 - 1095672481)))))))) >= ((((min(1, var_9))) ? (~23071) : (max(22, var_3))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_17 = -23072;
                var_18 = (((((45 ? (arr_4 [i_1] [i_0]) : (arr_3 [i_0] [i_1] [i_0])))) ? -23087 : ((((0 <= (arr_4 [i_0] [i_1])))))));
            }
        }
    }
    var_19 = (min(((4294967295 ? 23066 : (min(var_1, 22)))), var_4));
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 4; i_4 < 9;i_4 += 1)
            {
                {
                    var_20 = (((((((max(7, var_10))) * (min(1, 35150012350464))))) ? ((((arr_2 [i_4 - 2] [i_4 + 4]) ? (arr_2 [i_4 + 4] [i_4 + 4]) : (arr_0 [i_4 + 1] [i_4 - 3])))) : 4136834589772476344));
                    arr_14 [i_2] [i_3] [i_3] [i_2] = (arr_3 [i_2] [i_3] [i_2]);
                    var_21 = ((1 ? (max((!903969578), ((-8 ? 12 : 23073)))) : (arr_2 [i_2] [i_2])));
                    var_22 = (min((((arr_11 [i_4 + 1] [i_4 - 4] [i_4 + 2]) ? (arr_11 [i_4 + 2] [i_4 - 4] [i_4 - 4]) : (arr_11 [i_4 + 2] [i_4 - 4] [i_4 - 4]))), ((((min(var_2, 23924))) ? ((29810 ? -903969579 : (arr_10 [i_2] [i_3]))) : (var_5 <= 1)))));
                    arr_15 [i_3] [i_3] = (min(((((!(arr_12 [i_3] [i_3] [i_3]))) ? (arr_12 [i_2] [i_3] [i_4 - 3]) : (min(7168, var_14)))), ((((arr_8 [i_2] [i_3]) ? (arr_7 [i_4 + 1]) : ((4136834589772476344 ? var_6 : (arr_10 [i_2] [i_2]))))))));
                }
            }
        }
    }
    #pragma endscop
}
