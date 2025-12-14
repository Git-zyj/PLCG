/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174893
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_11;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_18 = ((((1 ? 13564069914229925857 : (arr_1 [i_0]))) << (arr_1 [i_0])));
        var_19 = (min(var_19, 1199049532));
        arr_2 [i_0] [i_0] = (arr_0 [i_0]);
        var_20 = (min(var_20, ((((((((3053279485545805342 ? 15985553380057525823 : 3106018028))) ? 1194398606 : var_9)) - 17)))));
        arr_3 [i_0] = (arr_0 [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 17;i_1 += 1)
    {
        var_21 = (~9970282594956667301);
        var_22 = var_2;

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_23 = (arr_0 [11]);
            var_24 ^= ((-(((arr_6 [i_1 - 1]) ? (arr_1 [i_2]) : var_3))));
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 18;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        {
                            var_25 = (arr_14 [i_1] [i_1] [i_3] [i_1]);
                            var_26 &= ((-(arr_17 [i_3])));
                            var_27 = (min(var_27, (arr_5 [i_2])));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
