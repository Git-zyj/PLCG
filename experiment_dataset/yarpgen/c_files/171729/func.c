/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171729
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171729 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171729
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
    var_17 = min((((/* implicit */int) var_13)), (((((/* implicit */_Bool) (((_Bool)1) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_14)))))) ? (((/* implicit */int) min((var_8), (((/* implicit */signed char) var_12))))) : (((/* implicit */int) max((var_0), (((/* implicit */unsigned char) (_Bool)1))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        var_18 ^= ((/* implicit */_Bool) var_13);
        arr_4 [15] [(unsigned short)15] = ((/* implicit */short) (_Bool)1);
        /* LoopSeq 2 */
        for (unsigned char i_1 = 1; i_1 < 14; i_1 += 4) /* same iter space */
        {
            arr_8 [5LL] [(_Bool)1] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_0])) - (((/* implicit */int) (!(((/* implicit */_Bool) (short)19597)))))));
            arr_9 [i_0] [i_1] = ((/* implicit */unsigned short) arr_3 [i_0]);
        }
        for (unsigned char i_2 = 1; i_2 < 14; i_2 += 4) /* same iter space */
        {
            var_19 ^= ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)65535))))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_7 [i_0])) : (((/* implicit */int) var_16)))) : (((/* implicit */int) var_3)));
            var_20 = ((/* implicit */unsigned char) (-((~(((/* implicit */int) var_12))))));
            arr_13 [2LL] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_2 [i_2 + 2])) : (arr_12 [i_2 + 2] [i_2])));
        }
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 23; i_3 += 1) 
    {
        var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) var_5)) << (((var_6) - (8749724654200932536LL)))))) ? ((~(((/* implicit */int) var_11)))) : (((/* implicit */int) arr_16 [i_3]))));
        var_22 = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_15 [(unsigned char)19])) : (((/* implicit */int) var_12)))));
        arr_18 [i_3] = ((/* implicit */short) (+(((/* implicit */int) (short)29450))));
    }
}
