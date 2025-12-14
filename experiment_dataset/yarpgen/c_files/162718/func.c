/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162718
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
    for (int i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        var_20 *= ((/* implicit */short) arr_1 [i_0] [i_0]);
        arr_2 [i_0] [i_0 - 1] = ((/* implicit */_Bool) (+(((/* implicit */int) var_18))));
        arr_3 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0 + 2])) + (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (signed char)-116)) : (((/* implicit */int) (_Bool)1))));
        arr_4 [i_0] = (+(((/* implicit */int) (((!(((/* implicit */_Bool) var_11)))) && (((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0])) << (((-8419634650031447855LL) + (8419634650031447862LL))))))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 1; i_1 < 11; i_1 += 4) 
        {
            for (long long int i_2 = 4; i_2 < 11; i_2 += 2) 
            {
                {
                    var_21 = ((/* implicit */unsigned char) 18046600362764871643ULL);
                    /* LoopNest 2 */
                    for (long long int i_3 = 1; i_3 < 11; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 10; i_4 += 2) 
                        {
                            {
                                var_22 *= ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) -8419634650031447844LL)) | (arr_5 [i_0 - 1] [i_1])))) && (((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)172))))))));
                                arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_8 [i_1 - 1] [i_1 - 1])) % (((/* implicit */int) (((+(((/* implicit */int) var_9)))) >= (((/* implicit */int) min((var_9), (((/* implicit */unsigned char) (signed char)119))))))))));
                                var_23 = ((/* implicit */_Bool) max(((((+(8639925299999480234ULL))) - (((/* implicit */unsigned long long int) var_15)))), (576460752303423487ULL)));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_24 = ((/* implicit */unsigned int) (_Bool)1);
    var_25 = ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 6ULL)) ? (4189817584U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (((((/* implicit */int) (unsigned short)34358)) ^ (((/* implicit */int) (short)-29982)))) : (((/* implicit */int) var_3))));
}
