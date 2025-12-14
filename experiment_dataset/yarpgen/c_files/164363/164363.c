/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164363
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164363 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164363
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((34 ? var_2 : ((4354532617333652697 ? 21296 : 21317)))));
    var_15 = (min(var_15, (~21317)));
    var_16 = (~-15);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_17 = (min(var_17, 576459652791795712));
                var_18 = ((((((arr_0 [12]) <= (arr_2 [i_0] [i_0 - 1])))) > ((((arr_0 [i_0 - 1]) != 17870284420917755924)))));
                var_19 = (((((44220 <= (arr_4 [i_0 - 1])))) < 0));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_20 = (arr_7 [i_1] [i_1] [2] [i_1]);
                                var_21 = var_12;
                                var_22 = (min(var_22, ((max(44238, ((-14518319240285587928 ? 21301 : ((min(var_3, var_7))))))))));
                                var_23 = (arr_4 [i_0]);
                                var_24 = (min((max((!-8765941299665473356), (0 - 6))), (((((arr_0 [i_0]) + 2147483647)) >> (1958905880 - 1958905849)))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
