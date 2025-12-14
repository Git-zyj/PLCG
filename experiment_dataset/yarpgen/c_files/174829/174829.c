/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174829
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_5 [3] = (arr_3 [i_0] [i_0]);
                arr_6 [i_0] = ((!(((-1 ? 1 : -6)))));
                var_16 = ((((((arr_4 [i_0] [i_1]) >> (((arr_0 [i_0]) - 17906))))) ? (((arr_3 [i_1] [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0]))) : ((~(arr_3 [i_1] [i_0])))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        arr_9 [i_2] [i_2] = (max(((((((arr_8 [i_2]) - 9))) ? (((max((arr_7 [i_2]), (arr_7 [i_2]))))) : (arr_8 [i_2]))), 1023175796449123361));
        arr_10 [i_2] = ((((((arr_7 [i_2]) ? (arr_7 [i_2]) : (arr_7 [i_2])))) < ((((min((arr_8 [i_2]), (arr_7 [8])))) ? (((arr_7 [i_2]) ? (arr_7 [i_2]) : (arr_8 [19]))) : ((9 ? (arr_7 [i_2]) : 1023175796449123357))))));
        var_17 = (max(var_17, ((((((1023175796449123338 << (3966515967 - 3966515955)))) && (31195 + 65535))))));
        arr_11 [i_2] [i_2] = (((max((arr_7 [i_2]), (arr_8 [i_2])))) ? (((arr_7 [i_2]) & (arr_7 [i_2]))) : (((arr_7 [i_2]) ^ (arr_7 [i_2]))));
    }
    /* vectorizable */
    for (int i_3 = 4; i_3 < 12;i_3 += 1)
    {
        var_18 = 0;
        var_19 = (max(var_19, -1));
    }
    #pragma endscop
}
