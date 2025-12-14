/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104748
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = -3267861491;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((((((((min(var_3, 2714527017))) || var_8)))) >= (((max(var_2, 6821437749359568226)) % 1))));
        var_11 = 3267861491;
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_12 = (max(var_12, ((max((((3267861491 && (8067 | 1)))), ((50882 ? var_6 : 6821437749359568229)))))));

        for (int i_2 = 3; i_2 < 22;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 2; i_3 < 21;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    {
                        arr_13 [8] [i_1] [i_4] = var_3;
                        var_13 = (((((((min(2015323900, var_7)) <= (((max(32755, var_8)))))))) >= (--2279643402)));
                    }
                }
            }
            var_14 = (-43344 | (-32767 | 6821437749359568210));
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {
            var_15 = (min(var_15, (10 != var_3)));
            arr_17 [i_1] [i_1] = -var_3;
            var_16 = 65032;
        }
        var_17 = (max(var_17, (((min((min(119, 2279643402)), 65535))))));
        arr_18 [i_1] = ((111 / (((max(var_1, -32758))))));
    }
    var_18 = ((21813 ? (((((max(32755, -32758)))) - (max(-32755, var_6)))) : var_1));
    var_19 = 4294967295;
    /* LoopNest 2 */
    for (int i_6 = 1; i_6 < 13;i_6 += 1)
    {
        for (int i_7 = 1; i_7 < 13;i_7 += 1)
        {
            {
                arr_24 [i_6] [i_7] = (((11957428992060065944 & var_9) - ((-32756 ? -32756 : 32755))));
                arr_25 [i_6] [i_7] = ((((max(var_7, var_1))) ? 11957428992060065944 : ((max(-7146928676907821729, (1853230453 + -11))))));
            }
        }
    }
    #pragma endscop
}
