/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164653
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_16 = var_4;
        var_17 = ((((4294967295 ? (!var_6) : ((-(arr_2 [i_0]))))) == (max(var_15, -1232400959))));
    }
    for (int i_1 = 1; i_1 < 9;i_1 += 1)
    {
        var_18 = (min((min((max(var_1, var_5)), (arr_0 [i_1]))), ((max((arr_2 [i_1 + 1]), (arr_3 [i_1 + 1]))))));
        var_19 -= (arr_0 [i_1]);
        /* LoopNest 3 */
        for (int i_2 = 2; i_2 < 9;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 9;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    {

                        for (int i_5 = 1; i_5 < 7;i_5 += 1)
                        {
                            var_20 = (~-1232400959);
                            var_21 |= 1;
                            arr_16 [i_1] [i_2] [i_1] [i_4] [i_2 - 2] = ((!((min(var_9, -1)))));
                            var_22 = (min(var_22, (((+((max((!var_0), (((arr_3 [i_1 - 1]) || var_5))))))))));
                        }
                        arr_17 [i_1 + 1] [i_1] [i_2] [i_1] [i_1] [i_1 + 1] = ((((((max(-1232400959, 4294967285))) | ((var_6 ? var_13 : (arr_14 [i_4] [i_4] [i_3] [i_3] [i_2] [i_1]))))) % (arr_0 [i_1 - 1])));
                    }
                }
            }
        }
        var_23 = (((1 == 1671659760762889983) > 1232400956));
    }
    var_24 &= 0;
    #pragma endscop
}
