/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11065
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
    var_19 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_8))))) ? (((((/* implicit */_Bool) var_14)) ? (var_15) : (((/* implicit */unsigned int) var_4)))) : (((/* implicit */unsigned int) ((var_13) ? (var_4) : (((/* implicit */int) var_0))))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
    var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_18))))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_13)) : (var_10))) : (((/* implicit */int) var_6))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_18))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_3)) : (var_4)))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) var_4)) : (var_16))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_12))))))))))));
    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4396212155233309195LL)) ? (((/* implicit */int) (signed char)-53)) : (((((/* implicit */_Bool) (unsigned short)64118)) ? (((/* implicit */int) (signed char)-79)) : (((/* implicit */int) var_17))))))) ? (((/* implicit */int) (unsigned char)246)) : (((/* implicit */int) var_9))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 20; i_2 += 2) 
            {
                for (signed char i_3 = 0; i_3 < 23; i_3 += 2) 
                {
                    {
                        var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) arr_7 [i_0] [i_1] [1ULL] [1ULL]))));
                        arr_8 [i_0] [i_2] [i_2] [i_2] [i_0] = ((/* implicit */unsigned int) arr_1 [i_0]);
                        var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1] [i_2])) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) arr_4 [i_0] [i_0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_2]))) : (arr_2 [i_0] [i_0]))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_3] [i_2] [19U] [i_0])) ? (((/* implicit */int) arr_1 [(signed char)9])) : (((/* implicit */int) arr_6 [i_0] [i_0] [(short)19] [i_3]))))) ? (arr_2 [i_0] [i_1]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */int) arr_4 [i_3] [i_0])) : (((/* implicit */int) arr_4 [i_1] [i_2 - 1])))))))));
                        var_24 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */int) arr_6 [i_0] [i_1] [i_2] [i_3])) : (((/* implicit */int) arr_1 [i_1]))))) : (((((/* implicit */_Bool) (signed char)53)) ? (962072674304ULL) : (arr_7 [i_0] [i_0] [i_0] [i_0]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1])))));
                    }
                } 
            } 
        } 
        var_25 = ((/* implicit */unsigned char) min((var_25), (arr_3 [i_0] [i_0])));
        var_26 = ((/* implicit */unsigned int) arr_1 [i_0]);
        var_27 += ((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_0]);
        arr_9 [i_0] = ((/* implicit */unsigned short) arr_6 [i_0] [i_0] [i_0] [i_0]);
    }
}
