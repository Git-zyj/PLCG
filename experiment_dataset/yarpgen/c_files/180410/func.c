/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180410
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180410 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180410
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
    var_15 = ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (_Bool)1))))))))) == (min((max((((/* implicit */unsigned long long int) (_Bool)1)), (var_6))), (((/* implicit */unsigned long long int) ((long long int) var_6))))));
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((var_8), (((/* implicit */unsigned short) var_11))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_5)));
    var_17 = ((/* implicit */int) (_Bool)1);
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 1; i_2 < 15; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 15; i_3 += 4) 
                    {
                        for (long long int i_4 = 3; i_4 < 13; i_4 += 2) 
                        {
                            {
                                var_18 |= ((/* implicit */unsigned long long int) var_12);
                                var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) 15845006348895595399ULL)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))))) || (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_10))))) == (min((26ULL), (26ULL))))))))));
                                arr_12 [13] [i_2] [i_4] [i_4] = ((/* implicit */signed char) (+(1380897644)));
                            }
                        } 
                    } 
                    arr_13 [i_0] [i_2] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (((arr_8 [i_0] [i_0] [i_0 - 1] [(unsigned short)0] [i_0 - 1] [3LL]) ? (((/* implicit */unsigned long long int) arr_5 [i_1] [i_1] [i_1])) : (12462365533781765148ULL))) : (((/* implicit */unsigned long long int) var_14))))) ? (min((15845006348895595385ULL), (((/* implicit */unsigned long long int) -6201211992245015148LL)))) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (signed char)-124))))) / (((((/* implicit */_Bool) (unsigned short)46105)) ? (var_5) : (var_12)))))));
                }
            } 
        } 
    } 
}
