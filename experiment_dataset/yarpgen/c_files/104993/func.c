/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104993
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104993 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104993
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
    var_16 = ((/* implicit */int) ((((/* implicit */_Bool) (-(var_4)))) ? (((unsigned long long int) ((long long int) var_2))) : (((/* implicit */unsigned long long int) ((-2069110004) / (2069110003))))));
    var_17 = ((/* implicit */int) ((((((/* implicit */_Bool) max(((unsigned short)62192), (((/* implicit */unsigned short) (short)14))))) ? (var_13) : (((/* implicit */int) (_Bool)1)))) < (((/* implicit */int) min(((_Bool)1), ((_Bool)0))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 4; i_0 < 22; i_0 += 3) 
    {
        var_18 *= ((/* implicit */unsigned short) var_5);
        arr_2 [i_0 + 1] = ((/* implicit */long long int) var_10);
        var_19 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (arr_0 [i_0 - 2]) : (arr_0 [i_0 + 2])))) && (((/* implicit */_Bool) ((arr_0 [i_0 - 1]) % (var_12))))));
        var_20 ^= ((/* implicit */unsigned short) var_3);
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    var_21 *= ((/* implicit */long long int) var_10);
                    var_22 ^= ((/* implicit */unsigned long long int) var_15);
                }
            } 
        } 
    }
    /* vectorizable */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        var_23 = ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_3] [i_3]))) : (var_2))));
        arr_12 [i_3] [i_3] = ((/* implicit */long long int) var_14);
        var_24 ^= ((arr_7 [(unsigned short)2]) >= (((((/* implicit */int) var_10)) * (((/* implicit */int) var_0)))));
    }
    var_25 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_8))) == (((((/* implicit */_Bool) max((-6308632283363140733LL), (((/* implicit */long long int) var_8))))) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) 1282315127))))))));
}
