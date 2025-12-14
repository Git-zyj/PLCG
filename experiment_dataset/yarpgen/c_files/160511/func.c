/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160511
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
    var_17 = ((/* implicit */unsigned char) max((((/* implicit */long long int) var_8)), (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_16)), (18088121463819872869ULL)))) ? (max((var_16), (((/* implicit */long long int) var_4)))) : (((/* implicit */long long int) ((var_1) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_12)))))))));
    var_18 = (!(((/* implicit */_Bool) (-9223372036854775807LL - 1LL))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_7 [i_1] [i_1] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((9223372036854775807LL) << (((((/* implicit */int) (unsigned char)180)) - (180)))))))) ? ((~(((((/* implicit */int) var_8)) & (((/* implicit */int) (unsigned char)163)))))) : (((((/* implicit */int) arr_2 [i_0] [i_1])) >> (((/* implicit */int) (_Bool)0))))));
                    arr_8 [2U] &= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)39821)) ? (((((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0]))) : (-4852608098598555658LL))) - (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)21))) & (-9223372036854775786LL))))) : (((/* implicit */long long int) (~((+(((/* implicit */int) (signed char)-25)))))))));
                    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_12))))) ? ((~(var_14))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_2])))))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [(_Bool)1]))))) ? (var_2) : (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) arr_2 [(_Bool)1] [9])) : (((/* implicit */int) arr_5 [i_0] [i_2]))))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) arr_3 [i_0])))))));
                    arr_9 [i_1] [i_1] [i_2] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) (-(((((/* implicit */_Bool) 1633887165099163848ULL)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_3 [i_0])))))))));
                    arr_10 [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_2]))))), ((-(((/* implicit */int) var_5))))))) / (var_16)));
                }
            } 
        } 
        var_20 = ((/* implicit */long long int) 449611253U);
        var_21 = (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_5 [i_0] [i_0]))))), ((((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_15)))))));
        arr_11 [i_0] = arr_1 [i_0];
    }
    for (short i_3 = 3; i_3 < 23; i_3 += 3) 
    {
        arr_16 [i_3] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_13 [i_3])) << (((((/* implicit */int) arr_12 [i_3] [i_3 - 3])) + (54)))))) && (((/* implicit */_Bool) arr_14 [(signed char)18])))))));
        var_22 = ((/* implicit */_Bool) ((((var_16) <= (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_3 - 2] [(signed char)5]))))) ? ((~(((var_16) / (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_3]))))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_14 [i_3])) == ((((_Bool)1) ? (((/* implicit */int) arr_13 [i_3])) : (var_11)))))))));
        var_23 = ((/* implicit */_Bool) arr_12 [4U] [(short)22]);
    }
}
