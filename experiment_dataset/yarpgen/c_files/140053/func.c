/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140053
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140053 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140053
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
    for (unsigned long long int i_0 = 2; i_0 < 16; i_0 += 1) 
    {
        var_12 = ((((/* implicit */_Bool) 715437935072270970ULL)) ? (((((/* implicit */_Bool) (-(((/* implicit */int) (short)-23012))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) 8505449205627841962ULL))))) : (((((/* implicit */int) var_8)) & (((/* implicit */int) var_0)))))) : (((/* implicit */int) ((_Bool) var_7))));
        /* LoopSeq 2 */
        for (unsigned char i_1 = 3; i_1 < 13; i_1 += 2) /* same iter space */
        {
            arr_4 [i_0] [i_0] [i_0] = ((/* implicit */short) min((((arr_3 [i_0] [i_0 - 2] [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_4))), (max((14599587018178262436ULL), (var_4)))));
            arr_5 [i_0] = ((/* implicit */unsigned char) var_11);
            arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) << (((((/* implicit */int) var_3)) - (150)))))), (arr_0 [i_1 - 2] [i_1 - 1]))) & (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_2 [(_Bool)1] [i_0 + 1] [i_0])))))));
        }
        for (unsigned char i_2 = 3; i_2 < 13; i_2 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned char i_3 = 0; i_3 < 17; i_3 += 3) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 3) 
                {
                    {
                        arr_14 [i_0] [i_0] [i_3] [i_4] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_13 [i_0] [i_0] [i_3] [i_2 - 1] [i_0]))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 463637462893492884ULL)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned char)67))))))))));
                        arr_15 [i_0] [i_0 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)32767)) ? (arr_1 [i_0]) : (max((((unsigned long long int) 8505449205627841962ULL)), (((/* implicit */unsigned long long int) min((var_5), ((short)32767))))))));
                        arr_16 [i_4] [i_0] [2ULL] = ((/* implicit */unsigned long long int) (-(min((((((/* implicit */int) var_9)) | (((/* implicit */int) var_5)))), (((((/* implicit */_Bool) (short)29701)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_10))))))));
                    }
                } 
            } 
            var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) ((_Bool) var_6))), (var_1))))) >= (min((((/* implicit */unsigned long long int) arr_10 [i_0] [i_2] [(signed char)11])), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_0 [(short)14] [i_0])))))));
        }
        var_14 = ((/* implicit */unsigned char) max((min((((/* implicit */int) min((((/* implicit */short) arr_3 [i_0] [i_0 - 1] [i_0])), (var_5)))), (((((/* implicit */int) arr_3 [i_0] [i_0] [(unsigned char)16])) & (((/* implicit */int) (short)32764)))))), ((((((~(((/* implicit */int) var_1)))) + (2147483647))) << (((max((((/* implicit */unsigned long long int) var_2)), (var_11))) - (11828148883831190656ULL)))))));
        var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (short)-32752)) : (((/* implicit */int) (_Bool)1)))) + (2147483647))) << (((((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_3)))) + (15892))) - (14)))))) ? (((/* implicit */int) var_7)) : ((~(((/* implicit */int) arr_7 [i_0]))))));
    }
    /* vectorizable */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        var_16 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_0))))));
        arr_19 [(unsigned char)5] = ((/* implicit */_Bool) var_11);
    }
    var_17 = ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */int) var_10)) * (((/* implicit */int) var_1)))))) && (((/* implicit */_Bool) 8628767650249601325ULL)));
}
