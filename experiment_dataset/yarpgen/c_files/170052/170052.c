/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170052
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 2258;
    var_21 = 1;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_4 [i_0] [7] [i_0] = ((12 ? (2258 ^ 2169302530) : (((19 ? 2258 : 1)))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 8;i_3 += 1)
                    {
                        {
                            var_22 = (((((2278 ? -2278 : -1332583881))) | (~11504418749756737170)));
                            var_23 = (20 ^ 0);
                        }
                    }
                }
                var_24 = 2269814212194729984;
                var_25 = (4294967287 ? ((min(25631, 0))) : ((~((2710429680 ? 0 : 0)))));
            }
        }
    }
    var_26 = -1186626655;
    var_27 = (min(var_27, (((-((~(14404057593498544606 ^ 2244))))))));
    #pragma endscop
}
