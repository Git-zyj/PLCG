/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160451
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 *= min((max(((42 ? var_8 : -5)), (var_1 || var_0))), ((36252 ? (814970860 || var_7) : var_6)));

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_11 = (max(var_11, (((((-0 + (((max(1, (arr_0 [i_0] [i_0])))))))) ? (((-8 - (-32767 - 1)))) : (~-var_7)))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_12 = ((((((arr_3 [i_0 - 1]) / ((-(arr_6 [i_0] [i_1] [i_1] [i_0])))))) ? var_3 : ((~((var_0 ? var_3 : 814970832))))));
                    arr_7 [i_0] = (max((max(-4, (arr_2 [i_2] [i_0]))), (((!(((arr_5 [i_0] [i_1] [i_0] [i_0]) && (arr_1 [i_0]))))))));
                    arr_8 [i_0] [i_1] [i_2] [i_1] = 1;
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        var_13 = (max((((+(max((arr_9 [i_3] [i_3]), (arr_9 [i_3] [i_3])))))), (((((16078 ? -7600300087260235174 : var_2))) ? (max(17347073257594616277, var_9)) : (arr_10 [i_3] [i_3])))));
        var_14 &= max((((((-(arr_10 [i_3] [i_3])))) ? (min(1924145348608, (arr_9 [8] [i_3]))) : (arr_9 [12] [i_3]))), (((((-8 ? (arr_10 [i_3] [i_3]) : (arr_11 [i_3] [i_3])))) ? (arr_10 [i_3] [i_3]) : ((max(3479996456, 9))))));
        arr_12 [i_3] [i_3] = ((((~(max((arr_9 [i_3] [i_3]), (arr_9 [i_3] [i_3])))))) ? (max(var_7, (arr_11 [i_3] [i_3]))) : (min((arr_11 [i_3] [i_3]), (((-6038318762357794893 + 9223372036854775807) >> (var_1 - 15668083145338985578))))));
    }
    var_15 = max(var_1, ((3479996456 | ((65523 ? var_7 : var_6)))));
    #pragma endscop
}
