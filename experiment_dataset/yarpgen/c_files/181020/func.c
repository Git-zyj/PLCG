/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181020
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181020 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181020
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
    var_14 = ((/* implicit */int) var_12);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 2; i_2 < 10; i_2 += 2) 
                {
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        {
                            var_15 += ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)2047))) * (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)213)) ? (((/* implicit */int) (short)16840)) : (((/* implicit */int) (short)29677))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)34))) : ((((_Bool)1) ? (2899828769U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))));
                            var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (17389884366402022664ULL) : (0ULL))))));
                            var_17 = ((/* implicit */_Bool) 690886159);
                        }
                    } 
                } 
                var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) (-(max((arr_8 [i_0] [i_1] [i_1] [i_1] [i_1] [i_1]), (((/* implicit */unsigned int) arr_4 [i_1] [i_0])))))))));
                var_19 *= (+(((((/* implicit */_Bool) arr_10 [i_0] [(short)0] [i_0] [i_0] [i_0] [i_1])) ? (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1]) : (arr_10 [i_0] [i_0] [(_Bool)1] [i_1] [i_1] [i_0]))));
                arr_11 [i_1] &= ((/* implicit */short) (((!(((/* implicit */_Bool) arr_10 [i_1] [i_0] [(short)2] [i_0] [i_0] [(short)2])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0))) : (max((min((((/* implicit */unsigned long long int) (short)-13)), (arr_2 [i_0]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1] [i_0]))) : (arr_9 [i_0] [i_0] [i_0]))))))));
                var_20 = ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) var_7)) ? ((~(-690886129))) : (((((/* implicit */_Bool) 3760565523070702731ULL)) ? (((/* implicit */int) (short)32745)) : (((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) (_Bool)1)));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned char i_4 = 1; i_4 < 8; i_4 += 4) 
    {
        arr_14 [i_4] = ((/* implicit */unsigned int) arr_5 [i_4] [i_4 + 1] [i_4]);
        arr_15 [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_4 [i_4 + 2] [i_4 - 1])) : (((/* implicit */int) (short)-16442))));
    }
}
