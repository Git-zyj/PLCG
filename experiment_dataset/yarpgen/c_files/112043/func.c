/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112043
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112043 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112043
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        var_18 = ((/* implicit */signed char) min((((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) 1593389878U)) ? (((/* implicit */int) arr_0 [i_0] [(unsigned short)14])) : (((/* implicit */int) (unsigned short)0)))))), ((~(((/* implicit */int) arr_1 [i_0]))))));
        var_19 = ((/* implicit */unsigned short) max((((((/* implicit */int) arr_0 [i_0] [i_0])) & (((/* implicit */int) (unsigned short)50222)))), (((/* implicit */int) max((((/* implicit */unsigned short) arr_0 [(unsigned char)6] [i_0])), ((unsigned short)65509))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 25; i_1 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned char i_2 = 3; i_2 < 23; i_2 += 1) 
        {
            for (unsigned short i_3 = 0; i_3 < 25; i_3 += 1) 
            {
                {
                    arr_9 [i_1] = ((/* implicit */int) ((unsigned short) arr_2 [i_2 - 2]));
                    var_20 |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) var_12)) - (var_14))))));
                    var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((((/* implicit */_Bool) arr_8 [i_2 - 3] [(short)8])) ? (((/* implicit */int) arr_5 [(unsigned short)3] [i_2 + 2] [i_2 + 1])) : (-786761188))))));
                    var_22 = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (arr_6 [i_1] [i_3]) : (arr_8 [i_2 + 1] [i_2 - 3])));
                    arr_10 [(unsigned short)22] [(unsigned char)4] [i_3] [14] &= ((/* implicit */short) (-(((/* implicit */int) arr_5 [14] [i_2 - 1] [i_2 - 2]))));
                }
            } 
        } 
        var_23 = ((/* implicit */int) arr_8 [(signed char)20] [i_1]);
        var_24 += ((/* implicit */unsigned short) ((unsigned char) arr_2 [i_1]));
        var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_1])) ? (arr_3 [i_1]) : (arr_3 [i_1])));
    }
    var_26 += ((/* implicit */unsigned short) (~(((var_11) & (min((((/* implicit */int) (unsigned short)65535)), (var_5)))))));
}
