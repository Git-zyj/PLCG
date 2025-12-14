/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137332
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
    var_12 = ((/* implicit */long long int) min((var_12), ((-((-(9223372036854775807LL)))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 8; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 8; i_2 += 4) 
            {
                {
                    var_13 = ((/* implicit */int) ((unsigned short) 2093398990U));
                    arr_8 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) < ((((!(((/* implicit */_Bool) 6701027072120231269LL)))) ? (((/* implicit */int) ((-5091014279357452468LL) <= (8045129884784267613LL)))) : (((/* implicit */int) var_0))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_3 = 4; i_3 < 18; i_3 += 4) 
    {
        for (unsigned short i_4 = 2; i_4 < 15; i_4 += 3) 
        {
            {
                arr_15 [9LL] [i_4 + 3] [i_4 + 3] = ((((/* implicit */_Bool) -1362844314)) ? (590937202U) : (4026531840U));
                var_14 = ((/* implicit */unsigned int) ((unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) 5091014279357452467LL)) ? (((/* implicit */int) (unsigned short)17)) : (((/* implicit */int) (unsigned short)65530))))));
                var_15 &= ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) ((unsigned short) -1362844314))) ? (0ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3452011908U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_7))))))));
                var_16 += min((max((((/* implicit */unsigned int) -2131607923)), (3344323590U))), (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)0)) | (((/* implicit */int) (unsigned short)41058))))));
                /* LoopNest 3 */
                for (unsigned int i_5 = 2; i_5 < 15; i_5 += 4) 
                {
                    for (unsigned long long int i_6 = 0; i_6 < 19; i_6 += 1) 
                    {
                        for (short i_7 = 0; i_7 < 19; i_7 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned long long int) var_4);
                                arr_23 [i_3 + 1] [i_4] [i_4] [i_5] [i_5] [i_6] [i_7] &= ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)23))) / (786432U)))) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65534))) * (var_6)))) : (min((var_9), (((/* implicit */long long int) var_2)))))));
                                arr_24 [i_6] [i_3 - 4] [i_3 - 2] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (signed char)44)) ? (((/* implicit */int) (unsigned short)127)) : (((/* implicit */int) (_Bool)1))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) ((-2617339428030838578LL) / (((/* implicit */long long int) 1396983943U))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)9850))) : (var_6)))) : (((var_3) / (var_11)))))));
}
