/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101091
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101091 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101091
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, (((-(((622872339 ? var_8 : var_1))))))));
    var_15 = (((((((622872339 ? 39963 : 7))) ? (~92) : 568209815))) ? -var_12 : 12392);
    var_16 = var_11;
    var_17 *= (~var_3);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {
                    var_18 *= (((((min((arr_5 [1] [5] [i_0]), -622872339)) | (~var_4))) >= (((~-622872317) ? (((arr_6 [22] [i_0] [i_0] [i_2 + 2]) ? (arr_5 [i_0] [8] [22]) : (arr_2 [i_0] [i_1]))) : -7))));
                    var_19 = (((arr_8 [i_2 + 1] [i_2 + 2]) ? ((max(6, -7))) : ((((arr_8 [i_2 + 1] [i_2 + 2]) == (arr_8 [i_2 + 1] [i_2 + 1]))))));
                    var_20 ^= 92;
                    var_21 = ((568209815 ? -8 : 7));
                }
            }
        }
    }
    #pragma endscop
}
