/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143674
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143674 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143674
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
    for (int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 19; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        for (int i_4 = 1; i_4 < 18; i_4 += 4) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (arr_8 [i_4] [i_1] [i_1]) : (((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_4]))))) ? ((+(3332121862451402026LL))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (short)16320)) < (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [(signed char)18])))))))) >= (((((/* implicit */_Bool) var_12)) ? (((long long int) var_3)) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) -3332121862451402026LL))))))))));
                                var_16 = ((/* implicit */unsigned int) var_12);
                                arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) max((min((((/* implicit */unsigned long long int) (unsigned char)243)), (7973015483032043499ULL))), (((/* implicit */unsigned long long int) ((signed char) max((((/* implicit */unsigned long long int) var_10)), (var_14)))))));
                            }
                        } 
                    } 
                } 
                var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) 7973015483032043499ULL))) ? (((((unsigned long long int) 0ULL)) | (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_1] [i_0] [i_0] [(unsigned short)7]))) | (var_13)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) 7973015483032043499ULL))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_5 = 4; i_5 < 13; i_5 += 1) 
    {
        for (unsigned long long int i_6 = 0; i_6 < 14; i_6 += 2) 
        {
            for (int i_7 = 2; i_7 < 12; i_7 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_8 = 0; i_8 < 14; i_8 += 4) 
                    {
                        arr_25 [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */int) arr_10 [i_5 - 1] [i_5 - 2] [i_5 + 1] [i_5] [i_7 + 1] [(_Bool)1] [4ULL]);
                        var_18 = ((/* implicit */int) ((((/* implicit */unsigned long long int) 6562568375604795001LL)) + (10473728590677508117ULL)));
                        /* LoopSeq 1 */
                        for (unsigned int i_9 = 0; i_9 < 14; i_9 += 2) 
                        {
                            arr_28 [i_5] [i_5] [i_5] [i_8] [9U] = ((/* implicit */signed char) ((((/* implicit */int) arr_5 [i_9])) >= ((~(((/* implicit */int) arr_10 [i_5] [i_5] [(short)16] [i_5] [i_8] [i_9] [i_5]))))));
                            arr_29 [i_5] [i_5] = ((/* implicit */int) (!(var_4)));
                            var_19 = ((/* implicit */unsigned long long int) ((((var_11) < (arr_23 [i_5] [i_6] [i_7]))) ? (arr_4 [i_5]) : (((/* implicit */long long int) ((/* implicit */int) (!(var_2)))))));
                            var_20 = ((/* implicit */int) 18446744073709551615ULL);
                            var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) ((unsigned int) arr_27 [i_9] [(unsigned short)4] [i_7] [i_7] [i_7 + 2] [12U])))));
                        }
                    }
                    var_22 = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (arr_16 [i_5 + 1]) : (arr_27 [i_5] [i_5] [i_5] [i_5] [i_7] [i_5])));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) ((unsigned long long int) var_1)))) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned short)4904)) : (((/* implicit */int) (unsigned short)53225))))) ? (((/* implicit */long long int) ((var_4) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)48736))) : (var_7)))) : (-6562568375604794995LL)))));
}
