/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18173
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
    for (long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        var_20 ^= ((/* implicit */_Bool) (+((-(arr_0 [i_0] [i_0])))));
        var_21 = ((/* implicit */short) ((((/* implicit */_Bool) (-(7118548261177494091ULL)))) ? (min((((((/* implicit */_Bool) 24576U)) ? (arr_0 [i_0] [i_0]) : (((/* implicit */int) var_8)))), (((/* implicit */int) ((short) var_4))))) : (((((/* implicit */_Bool) var_19)) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0])))));
    }
    for (long long int i_1 = 0; i_1 < 19; i_1 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_22 = ((/* implicit */unsigned char) ((signed char) arr_6 [i_1]));
            var_23 = ((/* implicit */short) ((((/* implicit */_Bool) var_17)) ? (arr_5 [i_1]) : (((/* implicit */unsigned long long int) var_15))));
            var_24 = ((/* implicit */_Bool) (signed char)-115);
            var_25 += ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) arr_4 [i_2])) : (((/* implicit */int) var_9))));
        }
        var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_7))))) ? (((/* implicit */int) arr_4 [i_1])) : (((((/* implicit */_Bool) arr_2 [i_1] [i_1])) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) arr_4 [i_1]))))));
    }
    var_27 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) var_4)) ? ((+(((/* implicit */int) var_9)))) : (((/* implicit */int) max((var_8), (((/* implicit */unsigned short) var_9))))))) : (((/* implicit */int) ((((/* implicit */_Bool) min((var_18), (((/* implicit */short) var_14))))) || (((/* implicit */_Bool) var_9)))))));
    var_28 = ((/* implicit */int) (signed char)87);
}
