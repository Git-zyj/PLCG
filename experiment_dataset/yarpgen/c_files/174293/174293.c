/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174293
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174293 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174293
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_11 &= ((((!var_0) > (~28392))));
                arr_6 [i_1] [i_0 - 1] &= ((!(((var_6 | (max(4294967281, var_1)))))));
            }
        }
    }

    for (int i_2 = 3; i_2 < 24;i_2 += 1)
    {
        var_12 = (((~4294967273) % (2831727958 + 27266)));
        var_13 = (min(var_13, -var_0));
        var_14 ^= ((!((!(!var_9)))));
    }
    for (int i_3 = 0; i_3 < 13;i_3 += 1)
    {
        var_15 &= ((((-((-(arr_3 [3] [i_3]))))) != ((~(arr_7 [i_3])))));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 13;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 13;i_5 += 1)
            {
                {
                    var_16 += (((-((min((arr_15 [i_3] [i_3]), var_0))))));
                    var_17 &= (min(((~(min(32751, var_7)))), (((~(arr_11 [i_3] [i_4] [i_5]))))));
                    arr_17 [i_3] [i_4] [i_5] = ((((max(((-(arr_3 [i_3] [i_3]))), ((min(var_0, var_4)))))) || ((((var_3 >> (((arr_1 [i_4]) + 12152))))))));
                }
            }
        }
        arr_18 [i_3] = ((((((max(-32760, -2560))))) < (var_7 || 0)));
    }
    for (int i_6 = 2; i_6 < 21;i_6 += 1)
    {
        arr_21 [i_6] [i_6 + 1] = ((!(arr_8 [i_6])));
        var_18 = (max(var_18, (~var_0)));
    }
    var_19 = (max(var_19, ((+(((~var_3) % -var_4))))));
    #pragma endscop
}
