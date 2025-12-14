/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163338
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163338 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163338
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
    for (long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                var_16 += ((/* implicit */unsigned short) (((((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0)))) & ((~(((/* implicit */int) ((signed char) -5518389644588808890LL)))))));
                arr_6 [i_0] = ((/* implicit */short) 9223372036854775792LL);
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        {
                            arr_13 [i_0] [(unsigned char)11] [i_0] [(short)2] = ((/* implicit */unsigned short) min((((int) max((9223372036854775787LL), (((/* implicit */long long int) (_Bool)1))))), ((~(((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))));
                            /* LoopSeq 2 */
                            for (int i_4 = 2; i_4 < 14; i_4 += 4) 
                            {
                                arr_17 [i_0] [i_0] = ((/* implicit */signed char) ((((((2095024563U) == (((/* implicit */unsigned int) ((/* implicit */int) var_6))))) ? (((/* implicit */unsigned int) arr_16 [i_4] [i_4 + 2] [i_4 + 2] [i_4 + 2] [i_4 - 2] [i_4 + 3] [(_Bool)1])) : (((unsigned int) (unsigned short)13097)))) & (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_0] [i_0] [i_2] [i_0])))));
                                var_17 = ((/* implicit */long long int) max(((+((~(1720693564))))), (((/* implicit */int) ((((/* implicit */int) max((var_2), (((/* implicit */short) (_Bool)1))))) >= (((/* implicit */int) (short)3676)))))));
                            }
                            for (short i_5 = 4; i_5 < 16; i_5 += 2) 
                            {
                                var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) 9223372036854775792LL))) ? (((((/* implicit */_Bool) arr_15 [(short)13] [(short)13] [(_Bool)1] [i_5 - 3])) ? (((/* implicit */int) (unsigned short)53523)) : (((/* implicit */int) (unsigned short)0)))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_15 [i_5] [i_5] [i_5] [i_5 - 3])) && (((/* implicit */_Bool) arr_15 [i_5] [i_5 - 3] [i_5 - 3] [i_5 - 1])))))));
                                var_19 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (!(min(((_Bool)0), ((_Bool)1))))))) - ((~(((unsigned int) var_14))))));
                                var_20 += ((/* implicit */unsigned int) var_15);
                                arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((max((min((((/* implicit */long long int) (unsigned char)205)), (-9223372036854775801LL))), (((/* implicit */long long int) ((_Bool) 11804357954695832101ULL))))) >= (((((9223372036854775766LL) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)5943)))))));
                            }
                        }
                    } 
                } 
                arr_22 [i_0] [i_1] = ((/* implicit */unsigned char) min((min((((/* implicit */unsigned int) min(((-2147483647 - 1)), (((/* implicit */int) (_Bool)1))))), (((unsigned int) (unsigned short)65512)))), (((/* implicit */unsigned int) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned char)87))))), (((unsigned short) (_Bool)1)))))));
                arr_23 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((short) ((signed char) ((unsigned short) (_Bool)1))));
            }
        } 
    } 
    var_21 = ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_15)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)188)))))))));
}
