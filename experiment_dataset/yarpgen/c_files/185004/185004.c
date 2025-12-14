/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185004
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((~12454) % -var_11));
    var_17 = ((((((((var_0 ? var_13 : var_3))) ? ((var_8 ? var_3 : var_9)) : (~var_6)))) ? ((~((21251 ? 4613818564432934212 : var_4)))) : var_15));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] = (((~25331) | (((arr_0 [i_0]) | ((min(-21252, (arr_0 [i_0]))))))));
        var_18 = ((((((arr_1 [i_0]) * (!1662330770)))) ? ((+(((arr_0 [i_0]) ? (arr_0 [i_0]) : 2147483647)))) : (((!420137202) ? (((arr_1 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0]))) : (arr_0 [i_0])))));
        var_19 = (arr_1 [i_0]);
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    {
                        var_20 -= 4294967295;
                        arr_10 [i_1] [i_2] = ((+((+(((arr_0 [5]) + 1797238436128714975))))));
                        var_21 = 1;
                    }
                }
            }
        }
    }
    var_22 *= (min((((var_3 & ((1734362386 ? var_10 : 2832))))), var_1));
    #pragma endscop
}
