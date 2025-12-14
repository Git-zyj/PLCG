/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119812
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119812 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119812
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) 3663319697U)) && (((/* implicit */_Bool) (short)15965))));
                    var_19 = ((/* implicit */unsigned int) min((var_19), (min((((/* implicit */unsigned int) ((((4611123068473966592LL) & (((/* implicit */long long int) 631647599U)))) != (min((((/* implicit */long long int) (unsigned short)0)), (arr_6 [i_0] [10U] [i_0])))))), (((arr_1 [i_0]) % (arr_1 [i_2])))))));
                    arr_7 [i_0] = ((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [7ULL] [(unsigned short)19] [5LL] [18LL])) * (((/* implicit */int) arr_3 [i_0]))))) ? (((unsigned int) var_0)) : (min((631647599U), (((/* implicit */unsigned int) (signed char)-111)))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_4 [i_2] [(short)15]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_0 [18U]))))) && (arr_0 [(signed char)16]))))));
                    var_20 = ((/* implicit */signed char) min((min((min((arr_6 [i_2] [3ULL] [i_0]), (((/* implicit */long long int) (short)-25967)))), (((((/* implicit */_Bool) arr_3 [i_1])) ? (var_7) : (((/* implicit */long long int) arr_1 [i_0])))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0] [(signed char)4])) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [i_0] [(short)8])) / (((/* implicit */int) arr_3 [4]))))) : (((((/* implicit */_Bool) var_6)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [(unsigned short)7] [(unsigned short)7]))))))))));
                }
                for (long long int i_3 = 4; i_3 < 19; i_3 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_4 = 0; i_4 < 20; i_4 += 2) 
                    {
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            {
                                arr_15 [(_Bool)1] [(unsigned short)9] [(unsigned char)8] [4LL] [16ULL] = arr_5 [i_5] [8] [i_3 - 4] [i_1];
                                arr_16 [(_Bool)1] [i_1] [(_Bool)1] [i_3 - 2] [(_Bool)1] [i_5] [i_5] = ((/* implicit */int) arr_6 [i_0] [13ULL] [16LL]);
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) min((((((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_0] [(unsigned short)2] [i_0])) - (((/* implicit */int) arr_10 [i_3]))))) ? (min((((/* implicit */long long int) (unsigned short)13118)), (arr_6 [i_0] [i_0] [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_3 + 1] [i_3 + 1] [i_3 + 1]))))), (((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) (unsigned short)65515)) ? (((/* implicit */unsigned long long int) 4294967295U)) : (2308205736674987825ULL))))))))));
                }
                var_22 = ((/* implicit */short) ((((/* implicit */_Bool) min((min((arr_2 [2] [2]), (9223372036854775807LL))), (((/* implicit */long long int) (!((_Bool)1))))))) ? (((/* implicit */int) min((arr_5 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_11 [i_0] [(short)7] [(short)7])) && (((/* implicit */_Bool) (signed char)-47)))))))) : ((+(((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)186)), ((unsigned short)26930))))))));
                arr_17 [i_0] = ((/* implicit */long long int) ((((arr_14 [(unsigned char)1] [i_1]) < (arr_14 [i_0] [i_0]))) ? (((/* implicit */int) ((((/* implicit */int) arr_3 [(unsigned char)7])) > (((/* implicit */int) arr_0 [i_0]))))) : (((((/* implicit */_Bool) arr_3 [i_0])) ? (arr_14 [i_0] [i_1]) : (((/* implicit */int) arr_3 [i_1]))))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (unsigned short)60949)) : (((/* implicit */int) (unsigned short)0)))), (((/* implicit */int) var_5))));
}
