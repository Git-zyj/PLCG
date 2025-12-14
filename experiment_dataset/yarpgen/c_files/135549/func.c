/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135549
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135549 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135549
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
    var_12 |= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) ((unsigned char) (signed char)-61))))) >= (((((((/* implicit */_Bool) var_8)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))) % (((/* implicit */unsigned int) ((/* implicit */int) (short)-29933)))))));
    var_13 = ((/* implicit */_Bool) var_2);
    var_14 = ((/* implicit */_Bool) (-(((/* implicit */int) ((signed char) min((var_10), (var_8)))))));
    var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 150820917)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)126))) : (1028448469U)))), (min((var_4), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)101))) != (var_7)))))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_1]))) / (arr_1 [i_1] [i_1]))))))) : (((/* implicit */int) arr_0 [i_0]))));
                arr_5 [i_1] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) min((var_8), (((/* implicit */unsigned short) arr_3 [i_1])))))))));
                arr_6 [i_1] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) (signed char)-43)) ? (7124764975119423ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1]))))), (((/* implicit */unsigned long long int) (+(((((/* implicit */int) arr_0 [i_0])) << (((((/* implicit */int) (unsigned short)59417)) - (59398))))))))));
                var_17 = ((/* implicit */unsigned char) 2970026690804568923ULL);
                /* LoopNest 3 */
                for (unsigned short i_2 = 2; i_2 < 21; i_2 += 4) 
                {
                    for (int i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 2; i_4 < 22; i_4 += 3) 
                        {
                            {
                                var_18 &= ((/* implicit */unsigned short) ((unsigned char) arr_2 [i_0]));
                                var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) ((((((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))) ^ (arr_11 [i_3] [i_1] [i_1] [i_1] [i_1] [i_1]))) & (((/* implicit */unsigned int) ((/* implicit */int) ((short) (signed char)-1)))))) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_2 [i_4 - 2]))))))))));
                                var_20 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) (((!(((/* implicit */_Bool) 2619726733U)))) || (((/* implicit */_Bool) arr_8 [i_0] [22ULL] [5] [(unsigned char)8]))))), (max((min((940587918U), (((/* implicit */unsigned int) (unsigned short)6100)))), (((/* implicit */unsigned int) (_Bool)1))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
