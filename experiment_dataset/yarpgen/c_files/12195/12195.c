/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12195
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, var_2));

    for (int i_0 = 0; i_0 < 18;i_0 += 1) /* same iter space */
    {
        var_14 ^= (arr_3 [i_0]);
        var_15 ^= (max(((4294967295 ? (arr_2 [i_0]) : (arr_3 [i_0]))), (((108 ? (min((arr_2 [i_0]), (arr_1 [i_0]))) : var_0)))));
        var_16 = ((((((arr_3 [i_0]) ? (arr_3 [i_0]) : (arr_3 [i_0])))) || (arr_3 [i_0])));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1) /* same iter space */
    {
        var_17 = (max(var_17, ((max((arr_4 [i_1]), (~111))))));
        var_18 = (((((arr_4 [i_1]) ? (arr_6 [i_1] [i_1]) : (arr_3 [i_1])))) ? (max(var_8, (max(16772139324684060430, 4294967295)))) : ((-(((arr_6 [i_1] [i_1]) ? 16772139324684060425 : (arr_5 [i_1] [i_1]))))));
        var_19 = (max(var_19, ((((min(65524, 16772139324684060430))) ? ((max(((1674604749025491186 ? -13135 : -25092)), ((~(arr_0 [i_1] [i_1])))))) : 1674604749025491187))));
        arr_8 [i_1] = (min(589503526, 5258347677650391717));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 18;i_3 += 1)
            {
                {
                    var_20 = ((1 ? (((min((arr_6 [i_1] [i_1]), (arr_6 [i_2] [i_2]))) / ((((arr_9 [i_1] [i_1]) ? 52 : 1))))) : (arr_9 [i_2] [i_1])));
                    var_21 = (((min((arr_2 [i_2]), (1 / 95))) << (((max((arr_11 [i_2] [i_2] [i_2]), (arr_3 [i_1]))) - 4294820494562563582))));
                    var_22 = ((((13135 ? ((max(-25101, 2147483628))) : 1674604749025491186))) ? ((((((arr_5 [i_2] [i_1]) && var_8)) || (((-96 ? 141 : (arr_12 [i_1]))))))) : (arr_4 [i_3]));
                }
            }
        }
    }
    var_23 = ((2135353407 ? 95 : ((1330175400 * (min(3388, 11347861280370986732))))));
    #pragma endscop
}
