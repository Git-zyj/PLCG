/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184413
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        var_17 += ((-(10 || 1)));
                        var_18 = (arr_5 [i_3] [i_3] [i_0 - 2] [i_0]);
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 13;i_5 += 1)
                        {
                            {
                                arr_19 [0] [i_1] [i_5] [0] [i_5] = (min(((var_8 ? 1 : (arr_10 [i_0 - 2]))), ((((((0 - (arr_6 [i_5] [i_2] [i_2])))) > ((var_7 ^ (arr_9 [6] [i_1] [i_1] [i_1]))))))));
                                var_19 = 4038580286905467750;
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 = ((min(1, (-2147483647 - 1))));
    var_21 = var_4;
    var_22 = (((max((~17800074173299845608), ((min(0, 8101590655607812421))))) ^ ((((!(!var_11)))))));
    #pragma endscop
}
