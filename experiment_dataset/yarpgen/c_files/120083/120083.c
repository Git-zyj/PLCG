/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120083
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 += (~((8192 ? 196608 : 3158459148)));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    {
                        var_16 = (((min((arr_1 [i_0]), (arr_1 [i_0])))) ? (((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0]))) : (((arr_1 [i_0]) * (arr_1 [i_0]))));
                        var_17 = (min(var_17, ((max((((-26484 ? ((var_6 ? 28672 : var_9)) : (((arr_0 [11] [i_3]) ? 1136508147 : (arr_8 [i_0] [i_1] [10] [i_2] [10])))))), ((var_0 ? (((var_12 ^ (arr_0 [i_1] [i_1 + 1])))) : (max(2144019368223196732, (arr_9 [i_2] [i_1 - 1] [1] [i_3] [i_1]))))))))));
                        var_18 = (((((max((arr_3 [i_0] [i_0]), var_0)) ^ ((((arr_4 [i_0]) ? (-2147483647 - 1) : (arr_8 [i_0] [i_1] [i_0] [9] [9])))))) > (((1136508147 ? 18122 : -8630)))));
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 20;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 20;i_6 += 1)
                {
                    {
                        arr_17 [i_0] [i_0] [i_0] [i_6] = var_4;
                        arr_18 [i_6] [i_4] [i_0] = (((max(var_6, ((((arr_4 [i_0]) | (arr_0 [i_0] [i_0])))))) >> (((((~2251799813423104) ? -3158459148 : ((((var_13 <= (arr_14 [i_0] [i_5] [i_4] [i_0]))))))) - 1136508122))));
                        var_19 *= (arr_4 [i_4]);
                    }
                }
            }
        }
    }
    #pragma endscop
}
