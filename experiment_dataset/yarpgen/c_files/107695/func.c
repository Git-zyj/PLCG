/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107695
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                arr_5 [i_1] = ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1] [i_1] [i_0]))) != (((unsigned long long int) (signed char)-20)))) ? (((/* implicit */int) ((arr_1 [i_1] [i_0]) < (((/* implicit */int) var_9))))) : (((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)0)) && (((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_1])))) || (((/* implicit */_Bool) arr_3 [i_0] [i_1])))))));
                var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((((/* implicit */int) min((arr_4 [10ULL] [i_1] [10ULL]), (((/* implicit */unsigned char) ((arr_1 [i_0] [i_1]) != (arr_1 [i_1] [i_1]))))))) % (((/* implicit */int) arr_4 [i_0] [i_0] [i_0])))))));
                /* LoopSeq 2 */
                for (signed char i_2 = 0; i_2 < 19; i_2 += 4) 
                {
                    var_20 += ((/* implicit */unsigned int) min((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_1] [i_0])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (signed char)23))))), (((var_8) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))))), (((/* implicit */unsigned long long int) arr_7 [i_0] [i_0] [i_0] [i_0]))));
                    var_21 = ((/* implicit */_Bool) (unsigned short)6);
                }
                for (unsigned long long int i_3 = 1; i_3 < 17; i_3 += 3) 
                {
                    var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) (~((-(arr_6 [i_3 + 1] [i_3 + 1]))))))));
                    arr_11 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((arr_0 [i_1]) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))) : (arr_8 [i_0] [i_1] [i_3 + 2] [(short)8])));
                }
                /* LoopNest 2 */
                for (signed char i_4 = 0; i_4 < 19; i_4 += 4) 
                {
                    for (long long int i_5 = 2; i_5 < 16; i_5 += 2) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (unsigned long long int i_6 = 2; i_6 < 18; i_6 += 3) 
                            {
                                var_23 = ((/* implicit */int) arr_19 [i_0] [i_1] [i_0] [i_5] [i_1] [1U]);
                                var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) var_5))));
                            }
                            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                            {
                                arr_22 [i_0] [i_1] [i_7] [i_5] [i_7] = ((/* implicit */unsigned short) ((min((arr_10 [i_0] [i_1] [i_4] [i_5]), ((+(((/* implicit */int) arr_0 [i_0])))))) % (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 334480722U)), (arr_6 [9ULL] [i_1])))) ? (((/* implicit */int) arr_18 [i_5 + 2] [16ULL] [(unsigned short)14] [(unsigned short)14] [i_5 + 2])) : (arr_1 [i_5 + 2] [i_5 + 1])))));
                                var_25 += ((/* implicit */unsigned int) ((_Bool) (unsigned short)65535));
                                var_26 = (~(133955584));
                                arr_23 [i_7] [i_5] [i_7] [i_1] [i_0] = ((/* implicit */unsigned char) ((_Bool) ((var_17) < (((/* implicit */int) arr_16 [13] [(unsigned char)1] [i_5] [i_5 - 1] [i_5 + 2] [i_5 + 3])))));
                                var_27 += ((/* implicit */unsigned long long int) ((_Bool) (~(((arr_12 [i_0]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))))));
                            }
                            var_28 += ((/* implicit */_Bool) ((((min((18446744073709551615ULL), (((/* implicit */unsigned long long int) (unsigned short)65509)))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 5326787083577218030ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))) / (14304031800255354731ULL)));
                            var_29 = ((/* implicit */long long int) 3116183850U);
                        }
                    } 
                } 
            }
        } 
    } 
    var_30 = ((/* implicit */unsigned long long int) (unsigned short)26);
}
