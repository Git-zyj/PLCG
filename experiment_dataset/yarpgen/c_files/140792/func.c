/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140792
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
    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((max((var_7), (((/* implicit */short) var_5)))), (min((((/* implicit */short) var_13)), (var_11)))))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_1))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 12; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 16; i_2 += 4) 
                {
                    for (unsigned int i_3 = 1; i_3 < 14; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_13 [i_2] [i_3 + 2] [i_2] [i_1] [i_1 + 3] [i_2] &= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((((/* implicit */_Bool) var_16)) && (((/* implicit */_Bool) arr_6 [(short)3] [i_1] [i_1] [i_3])))))))) & (var_3)));
                                var_18 &= ((/* implicit */short) min((((/* implicit */unsigned long long int) ((short) 33292288))), (18446744073709551599ULL)));
                                arr_14 [i_0] [i_0] [i_2] [i_3 + 1] [i_3 + 1] [i_0 + 3] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) min(((unsigned short)65535), ((unsigned short)65535)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) var_2)), (arr_9 [(short)7] [i_3 + 1] [i_4]))))) : (var_0))) & (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))));
                                arr_15 [i_0 - 1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) arr_4 [i_0]))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (unsigned char)181)))) : (((((/* implicit */_Bool) ((arr_7 [i_0] [i_1]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [3U] [i_4] [i_3 + 1] [i_2] [i_1] [i_0])))))) ? (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) | (-676464914)))) : (((long long int) (short)3))))));
                            }
                        } 
                    } 
                } 
                var_19 *= ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)99)) & (((/* implicit */int) (unsigned char)0))));
            }
        } 
    } 
    var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((int) var_6)))));
}
