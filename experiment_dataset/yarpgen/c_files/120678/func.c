/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120678
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
    for (long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned long long int) var_8);
        arr_4 [i_0] = ((/* implicit */unsigned int) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_1 [i_0]))))), ((unsigned short)37991)));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    arr_9 [6] [6] = ((/* implicit */int) arr_2 [i_0]);
                    arr_10 [i_2] = ((/* implicit */unsigned short) ((((((long long int) 161417718)) != (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (short)2388)) : (((/* implicit */int) var_7))))))) ? (((min((((/* implicit */unsigned long long int) (_Bool)1)), (2243080894315429479ULL))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_10)))))) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_2 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                    arr_11 [i_0] [10LL] [i_2] [15ULL] = ((/* implicit */signed char) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) 16203663179394122137ULL)) || (((/* implicit */_Bool) (unsigned char)230))))), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_6 [i_1])))));
                    var_18 = max((29LL), (((/* implicit */long long int) -348368016)));
                }
            } 
        } 
        var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_8 [i_0]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 2464658933U)) ? (var_1) : (arr_6 [i_0])))) : (((((/* implicit */long long int) (+(582970177)))) + (((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0]))) / (arr_1 [10])))))));
        var_20 = ((/* implicit */short) min((max((((/* implicit */long long int) var_0)), (29LL))), (((/* implicit */long long int) ((unsigned char) 16203663179394122137ULL)))));
    }
    var_21 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) ((var_11) * (((/* implicit */unsigned long long int) 0LL))))) ? (((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) / (-1LL))) : (((/* implicit */long long int) ((((/* implicit */int) var_12)) * (((/* implicit */int) var_12)))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 4) 
    {
        arr_16 [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_3]))) : (1394439459U)))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_15 [i_3])) : (((/* implicit */int) arr_15 [i_3])))) : ((~(((/* implicit */int) arr_15 [i_3]))))));
        arr_17 [i_3] = (+(348368020));
    }
}
