/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186479
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186479 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186479
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
    var_14 = ((/* implicit */long long int) var_8);
    var_15 = ((/* implicit */unsigned long long int) var_9);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_10 [3ULL] [i_1] [i_3] [i_3] [i_1] [i_0] = ((/* implicit */unsigned short) arr_0 [i_0]);
                            arr_11 [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */_Bool) ((((/* implicit */int) (!(arr_6 [(signed char)8] [3] [i_2] [i_3])))) / (((/* implicit */int) arr_6 [i_0] [i_1] [i_2] [i_3]))));
                            var_16 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_10)), (9177493552740626120ULL)))) ? (((/* implicit */int) (((+(((/* implicit */int) var_8)))) >= (((/* implicit */int) var_12))))) : (((((/* implicit */_Bool) 9269250520968925499ULL)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_4 [i_0]))))));
                            /* LoopSeq 1 */
                            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                            {
                                var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) max((((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) 9269250520968925488ULL))))), (((((/* implicit */_Bool) arr_0 [i_1])) ? (arr_0 [i_2]) : (arr_0 [i_2]))))))));
                                arr_15 [i_0] [(short)1] [(signed char)8] [(short)5] [i_3] [(unsigned short)2] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [(signed char)1] [i_2] [i_4])) ? (((((/* implicit */_Bool) arr_9 [i_4] [i_3] [8LL])) ? (min((((/* implicit */unsigned int) arr_0 [i_0])), (4294967295U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) (signed char)-85))))) > (((arr_14 [i_3] [(signed char)5] [i_3]) ? (arr_0 [i_1]) : (((/* implicit */int) (signed char)45))))))))));
                            }
                        }
                    } 
                } 
                arr_16 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) var_3);
                arr_17 [i_0] [i_0] = ((/* implicit */long long int) min(((-(((/* implicit */int) var_6)))), (((/* implicit */int) max((arr_1 [i_0] [i_1]), (arr_1 [(_Bool)1] [(unsigned char)8]))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) min((var_3), (((((((/* implicit */_Bool) var_12)) ? (-8012614630793515364LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)201))))) < (((/* implicit */long long int) ((/* implicit */int) min((var_5), (((/* implicit */unsigned short) var_12)))))))))))));
}
