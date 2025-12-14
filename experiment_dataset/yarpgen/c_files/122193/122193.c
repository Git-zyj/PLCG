/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122193
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122193 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122193
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        arr_11 [i_2] [i_1] [i_3] = ((9020988093644665658 <= ((((!(!11266307894278552812)))))));
                        arr_12 [i_2] [i_2] = (((min(9425755980064885957, 1875864111139493788)) - ((9425755980064885958 ? 16736247801920885621 : 32060))));
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 17;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 19;i_5 += 1)
                        {
                            {
                                arr_19 [i_0] [13] [i_1 - 1] [i_2 - 1] [i_2] [16] [i_5] = 32989;
                                arr_20 [7] [i_0] [15] [i_2] [10] [i_0] [i_0] = (~11266307894278552812);
                                arr_21 [i_0] [i_2] [9] [i_2] [i_0] = (~0);
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = ((56380 ? (~0) : (!1596820959751532446)));
    #pragma endscop
}
