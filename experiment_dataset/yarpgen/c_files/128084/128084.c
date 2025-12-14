/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128084
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 -= (((-(~var_4))));
    var_11 = (max(var_11, 32606));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_4 [i_0 + 2] [i_0 + 2] [i_0 + 1] = var_2;
                arr_5 [i_0] = arr_1 [i_0];
                var_12 = (max(((max(((min(var_8, -67))), ((2 ? -1596398579 : var_1))))), (((max(223, 15744565594503079342)) & (arr_3 [i_0 + 1] [i_0 + 2])))));
                var_13 = (max(var_13, ((max((4294967288 - 101), ((max((arr_0 [i_0 + 2]), (arr_0 [i_0 + 1])))))))));
                var_14 = (max((((-(1 || 6657513717547409655)))), (max(6657513717547409649, 32767))));
            }
        }
    }
    #pragma endscop
}
