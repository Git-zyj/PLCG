/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17577
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17577 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17577
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        var_19 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_0 [i_0]))));
        arr_2 [i_0] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (var_2)))));
        var_20 = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)26)) ? (2107627557U) : (2187339737U)));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    var_21 |= (+(((/* implicit */int) arr_1 [i_0] [i_0])));
                    var_22 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_5 [i_0] [7] [i_2] [i_2])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0]))))))));
                    var_23 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_0 [(signed char)7])) : (((/* implicit */int) (unsigned short)40611))))) ? (18446744073709551600ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
                    var_24 = ((/* implicit */unsigned short) (+((+(((/* implicit */int) arr_0 [i_2]))))));
                }
            } 
        } 
    }
    var_25 = ((/* implicit */long long int) var_12);
    var_26 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) (signed char)23)) << (((18446743798831644672ULL) - (18446743798831644652ULL))))))));
}
