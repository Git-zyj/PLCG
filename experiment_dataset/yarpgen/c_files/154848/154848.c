/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154848
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            var_20 = (229 >> (7479 - 7451));
                            arr_14 [i_1] [i_1] [i_2] [i_2] [i_2] [i_0] = 58069;
                        }
                        for (int i_5 = 0; i_5 < 19;i_5 += 1)
                        {
                            arr_17 [i_0] [i_1] [i_0] [i_3] [i_3] [i_5] = ((39166 ? 3674945835 : 8773580511139922449));
                            var_21 = 47321;
                            arr_18 [i_0] [i_1] [i_2] [i_3] [i_3] = 1;
                            arr_19 [i_0] [i_1] [i_2] [i_0] [i_0] = -var_18;
                        }
                        var_22 = (arr_16 [i_0] [i_1] [i_3] [i_2] [i_3] [18]);
                    }
                    var_23 = 3329257150;
                    var_24 = (max(var_24, (((-(arr_3 [i_1] [4]))))));
                    var_25 = (((arr_12 [i_0] [10] [i_0] [i_1] [i_0]) != var_3));
                }
                var_26 = (3511731097 + -1000160391);
            }
        }
    }
    var_27 = (!((((((1 ? -89 : -89))) ? 1 : 32767))));
    var_28 = 0;
    var_29 &= (max((max((max(var_15, 0)), var_18)), 527975708));
    #pragma endscop
}
