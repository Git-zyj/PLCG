/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12163
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 += 63703;

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_8 [i_1] [i_1] = (7680776739806313284 ? 31 : ((max(31, (max(var_11, 65517))))));
                    arr_9 [i_1] [i_1] = (max((((arr_5 [i_1] [i_1] [i_1]) ? (arr_5 [i_2] [i_2] [i_1]) : (arr_5 [i_0] [i_1] [i_1]))), 2128055694));
                    var_19 ^= (((max((arr_5 [i_0] [0] [10]), var_10)) <= ((((((arr_6 [i_2] [i_2] [1] [i_2]) ^ var_6)) | ((34 ? 31 : 31)))))));
                    var_20 ^= -6470424695415152729;
                }
            }
        }
        var_21 = (((228 + -6470424695415152729) ? 31 : ((((min(var_13, (arr_4 [i_0] [i_0])))) ? (arr_7 [i_0]) : var_4))));
        var_22 -= ((0 ? 6470424695415152728 : 7572577817355929654));
    }
    #pragma endscop
}
