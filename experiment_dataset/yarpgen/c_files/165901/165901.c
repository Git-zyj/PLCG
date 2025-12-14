/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165901
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165901 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165901
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_15 = (((arr_2 [i_0]) ? (((var_5 && ((((arr_3 [i_0] [i_0]) / (arr_3 [i_0] [i_0]))))))) : (max(var_10, (((arr_0 [i_0] [0]) * 255))))));
        var_16 = (-8792753452001900116 == -8192);
        var_17 = (min((min(5528066296575708601, (max(12918677777133843014, (arr_1 [21] [i_0]))))), var_3));
        arr_4 [i_0] = 5528066296575708612;
        var_18 = 5528066296575708601;
    }
    var_19 = var_3;

    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 16;i_3 += 1)
            {
                {
                    var_20 = var_5;
                    var_21 ^= arr_1 [i_1] [i_2];
                }
            }
        }
        var_22 = (min(var_22, ((min((arr_0 [i_1] [i_1]), (arr_5 [i_1]))))));

        for (int i_4 = 3; i_4 < 17;i_4 += 1)
        {
            var_23 = var_11;
            arr_13 [i_1] [i_4 + 3] = (max(4294967270, -1197235977524176979));
        }
    }
    var_24 ^= ((-(-1197235977524176965 + -1197235977524176970)));
    #pragma endscop
}
