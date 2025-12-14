/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162556
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162556 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162556
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) max(((+(arr_0 [i_0] [i_0]))), (max(((~(((/* implicit */int) (unsigned char)230)))), ((((_Bool)0) ? (((/* implicit */int) (unsigned char)25)) : (((/* implicit */int) (_Bool)0))))))));
        var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)155)) | (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)111)) && (((((/* implicit */_Bool) (unsigned char)231)) || (arr_1 [i_0])))))))))));
        arr_3 [i_0] = ((/* implicit */short) arr_1 [i_0]);
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_10 [8] [i_1] [i_2] |= ((/* implicit */signed char) ((unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) < (((458537343U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (signed char)9))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 2; i_4 < 8; i_4 += 2) 
                        {
                            {
                                arr_16 [i_0] [i_1] [i_2] [i_0] [(_Bool)1] = ((/* implicit */unsigned char) (+((~(((/* implicit */int) (short)127))))));
                                var_17 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [4] [i_2] [4]))) == (((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)54))) | (67108832U))) & (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [(unsigned short)1])))))));
                                arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [(unsigned short)9] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_4 - 2] [i_4 + 3] [i_4])) ? (max((arr_0 [(short)10] [i_4 + 2]), (((/* implicit */int) arr_8 [i_4 - 1] [i_4 - 1] [(short)2])))) : (((((/* implicit */_Bool) (unsigned char)231)) ? (((/* implicit */int) (unsigned char)229)) : (((/* implicit */int) (signed char)-46))))));
                                var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((((/* implicit */int) (unsigned char)229)) - (441704891))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) max((((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)172))))) + (((/* implicit */int) ((((/* implicit */int) var_1)) >= (((/* implicit */int) var_1))))))), (((/* implicit */int) min((var_2), ((!(((/* implicit */_Bool) -1652078600))))))))))));
    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) ((short) min((((/* implicit */unsigned int) (_Bool)1)), (3680611756U))))) : (((/* implicit */int) (_Bool)1))));
    var_21 = var_0;
}
