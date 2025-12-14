/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16546
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 17;i_3 += 1)
                {
                    {
                        var_10 = ((165 ? (((((var_8 ? var_7 : (arr_9 [12] [i_0] [i_0] [i_0])))) ? (var_4 && var_2) : 50)) : (((6 || ((((arr_6 [i_3] [i_2] [i_0] [i_1] [i_0]) ? var_1 : var_9))))))));
                        var_11 = (max(var_11, ((max((((1157544055 < var_1) - (arr_6 [i_3] [i_1] [i_2 + 1] [i_3] [i_0]))), (!211))))));
                    }
                }
            }
        }
        var_12 = ((((((arr_9 [i_0] [i_0] [i_0] [i_0]) + 7))) ? (((arr_9 [i_0] [i_0] [i_0] [i_0]) | var_4)) : (((710745001 ? 4294967289 : 111060)))));
        arr_10 [i_0] = (((((((min((arr_9 [i_0] [i_0] [i_0] [7]), 4294967290))) ? (arr_2 [i_0] [i_0]) : var_1))) ? (min((!710745020), (max((arr_4 [i_0]), var_5)))) : (!4294967283)));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 19;i_5 += 1)
            {
                {
                    var_13 *= var_9;
                    var_14 = (((arr_9 [i_0] [i_0] [i_4] [i_5]) ? (!var_7) : ((-((max((arr_0 [i_5]), (arr_0 [i_0]))))))));
                    var_15 = ((17002396797396065715 ? (arr_0 [i_0]) : (max(var_3, (((114 ? 255 : 3)))))));
                }
            }
        }
    }
    var_16 = ((!(!247)));
    #pragma endscop
}
