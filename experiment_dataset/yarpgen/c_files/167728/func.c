/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167728
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167728 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167728
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
    var_19 = ((/* implicit */unsigned short) max((((/* implicit */short) var_2)), (var_17)));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 3) /* same iter space */
    {
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-5)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_2 [i_0] [i_0]))));
        var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (unsigned short)6111)) : (arr_0 [i_0]))) > (((/* implicit */int) ((arr_1 [i_0]) == (((/* implicit */int) (signed char)31))))))))));
        arr_4 [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_0] [i_0]))));
    }
    for (unsigned short i_1 = 0; i_1 < 19; i_1 += 3) /* same iter space */
    {
        var_21 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) arr_7 [i_1])) : (((/* implicit */int) arr_7 [i_1]))))) ? (((/* implicit */int) arr_7 [i_1])) : (((/* implicit */int) arr_7 [i_1]))));
        var_22 ^= ((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [i_1] [i_1])) - (((arr_7 [i_1]) ? (((((/* implicit */int) arr_6 [i_1] [i_1])) ^ (((/* implicit */int) arr_2 [i_1] [i_1])))) : (((/* implicit */int) arr_5 [i_1]))))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 16; i_2 += 3) 
    {
        /* LoopNest 2 */
        for (signed char i_3 = 0; i_3 < 16; i_3 += 3) 
        {
            for (signed char i_4 = 2; i_4 < 15; i_4 += 3) 
            {
                {
                    var_23 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_14 [i_2])) ? (((/* implicit */int) (signed char)-33)) : (((/* implicit */int) arr_15 [i_2] [i_3] [i_3] [i_4 - 1]))))));
                    arr_17 [i_3] [i_3] [i_3] [i_4] = ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_15 [i_3] [i_3] [(short)5] [i_4 - 1])) : (((/* implicit */int) arr_15 [i_3] [i_3] [i_3] [i_4 - 1])));
                }
            } 
        } 
        var_24 *= ((/* implicit */unsigned int) arr_7 [(unsigned char)11]);
    }
    var_25 = ((/* implicit */int) var_2);
    var_26 = ((/* implicit */_Bool) ((((/* implicit */int) var_7)) % (((/* implicit */int) var_17))));
}
