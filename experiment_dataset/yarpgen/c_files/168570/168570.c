/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168570
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168570 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168570
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 17;i_2 += 1) /* same iter space */
                {
                    arr_10 [i_1] = var_3;
                    var_11 = (min(var_11, (((((((max(var_5, 1750126890726387563))) ? (arr_4 [i_0] [i_0] [i_0]) : (arr_7 [i_0] [i_0] [i_2] [i_2]))) ^ ((((arr_9 [i_0] [i_2] [i_0] [i_0]) >> (var_5 + 74717659)))))))));
                    arr_11 [i_1] [i_1 + 2] = (min(239980836044149147, 0));
                }
                for (int i_3 = 0; i_3 < 17;i_3 += 1) /* same iter space */
                {
                    arr_15 [i_3] [i_3] [i_3] [i_1] = (28 ? (arr_8 [i_0] [i_1] [i_3]) : (((((~(arr_14 [i_3] [i_1] [i_1] [i_0])))) ? (((-19 < (-9223372036854775807 - 1)))) : -var_9)));
                    var_12 = (max(var_12, 21865));
                    var_13 = arr_14 [i_0] [i_0] [i_1] [i_0];
                }
                /* vectorizable */
                for (int i_4 = 0; i_4 < 17;i_4 += 1) /* same iter space */
                {
                    var_14 ^= var_9;
                    var_15 = (((arr_4 [i_0] [i_0] [i_4]) ? (arr_1 [i_0]) : (arr_13 [i_0] [i_4] [i_4])));
                }
                var_16 = (3327399424058670027 - -62);
            }
        }
    }

    for (int i_5 = 0; i_5 < 14;i_5 += 1)
    {
        var_17 *= 13269220047618516835;
        var_18 = 8070450532247928832;
        var_19 -= min((arr_16 [i_5]), (max(0, (arr_16 [i_5]))));
    }
    var_20 -= ((((max(4979, ((var_1 ? var_3 : 41583))))) || ((((var_9 || var_3) ? (min(var_7, var_10)) : 5)))));
    var_21 = (min(var_21, (max((max(65526, (18405 & var_1))), -9768))));
    #pragma endscop
}
