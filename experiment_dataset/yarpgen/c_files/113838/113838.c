/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113838
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_3;
    var_14 = 7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 24;i_3 += 1)
                    {
                        {
                            var_15 = var_10;
                            arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] = ((((min((arr_8 [i_3 - 1] [i_3] [i_0] [i_3 - 1]), var_4))) && (((((var_0 ? (arr_9 [i_0]) : (arr_1 [12])))) && ((((arr_11 [i_0] [i_0] [i_0] [i_0] [i_3 + 1] [i_3]) | 1171538008)))))));
                            var_16 = (max(var_16, ((((arr_3 [i_0]) - ((((!((((arr_7 [i_0] [20] [i_2]) ? (arr_6 [i_3] [2] [i_1] [i_0]) : 65534))))))))))));
                            var_17 = (((((arr_6 [i_0] [i_1] [i_2] [i_3]) && (((var_6 ? (arr_9 [i_0]) : var_2))))) || ((var_3 == (((~(arr_9 [i_0]))))))));
                        }
                    }
                }
                arr_13 [i_0] = (i_0 % 2 == 0) ? ((((((arr_2 [i_0]) + 2147483647)) << 0))) : ((((((((arr_2 [i_0]) - 2147483647)) + 2147483647)) << 0)));
            }
        }
    }
    var_18 = ((((min((!3123429280), var_6))) ^ (~var_1)));
    var_19 = (min(var_1, (17729 + 1171538024)));
    #pragma endscop
}
