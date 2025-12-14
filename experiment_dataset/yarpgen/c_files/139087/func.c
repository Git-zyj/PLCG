/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139087
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
    var_14 = ((/* implicit */unsigned int) min((0ULL), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)41984)))))));
    var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((max((var_2), (((/* implicit */unsigned long long int) var_4)))), (((/* implicit */unsigned long long int) 338103732141861514LL))))) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (var_10)));
    var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-10818)) ? (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_12), (var_1))))) : (max((((/* implicit */unsigned long long int) var_12)), (18446744073709551599ULL))))) : (((/* implicit */unsigned long long int) (+(((((/* implicit */int) (short)-4727)) + (((/* implicit */int) (unsigned short)19759)))))))));
    var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) 16ULL))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned int i_1 = 2; i_1 < 9; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */short) ((long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)246)) >> (((((/* implicit */int) arr_2 [i_0])) - (59714)))))) & (min((((/* implicit */unsigned long long int) (short)21990)), (10030092071100436905ULL))))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 12; i_2 += 1) 
                {
                    for (unsigned int i_3 = 1; i_3 < 10; i_3 += 3) 
                    {
                        {
                            arr_10 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) 16ULL);
                            var_19 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (short)21990)) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_3] [i_3] [i_3 + 2] [i_3]))) : (6765390401911446068LL)))));
                            /* LoopSeq 4 */
                            for (signed char i_4 = 0; i_4 < 12; i_4 += 4) 
                            {
                                var_20 *= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((long long int) (_Bool)0))) ? (var_7) : (((/* implicit */long long int) ((((/* implicit */int) arr_6 [i_1])) | (((/* implicit */int) (short)21990))))))) & (((((((/* implicit */_Bool) arr_2 [i_0])) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)73))))) << (((((/* implicit */int) arr_12 [i_4] [i_1] [i_1] [i_2] [i_3 + 2] [i_4])) - (31)))))));
                                arr_13 [i_4] [i_1] [i_2] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) ((unsigned char) var_9))) <= (((/* implicit */int) arr_12 [i_1] [i_1] [i_2] [i_3 + 2] [i_4] [i_1]))));
                                var_21 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1 - 1]))) ^ (var_10)))) ? (((/* implicit */unsigned long long int) ((unsigned int) min((((/* implicit */unsigned long long int) (unsigned short)19187)), (var_11))))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned short) (signed char)-13)), ((unsigned short)12875)))) ? (min((((/* implicit */unsigned long long int) (signed char)127)), (arr_0 [i_0] [i_2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535)))))));
                                arr_14 [i_1] [i_1] [i_1] = ((/* implicit */long long int) max(((short)-21990), (((/* implicit */short) min(((signed char)-66), (arr_11 [i_1]))))));
                            }
                            for (unsigned short i_5 = 0; i_5 < 12; i_5 += 4) 
                            {
                                var_22 -= ((/* implicit */unsigned long long int) min((arr_12 [i_5] [i_1] [i_1] [i_1] [i_1 - 2] [i_5]), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0])))))));
                                arr_17 [i_0] [i_1] [i_2] [i_3 + 2] [i_0] = ((/* implicit */unsigned long long int) 4611686018427387904LL);
                            }
                            for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) /* same iter space */
                            {
                                var_23 ^= ((/* implicit */_Bool) ((unsigned int) max((max((8186247616933437212LL), (((/* implicit */long long int) 2216646261U)))), (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)65535))))))));
                                var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */int) (signed char)-27)), (((arr_16 [i_1]) ? (((/* implicit */int) (signed char)48)) : (((/* implicit */int) (unsigned short)65535))))))) ? (((((16ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-66))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_3))))));
                            }
                            for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) /* same iter space */
                            {
                                arr_24 [i_0] [i_1 + 3] [i_1] [i_3] [i_0] [i_0] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_22 [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_7] [i_7] [i_7]), (arr_22 [i_7 - 1] [i_7 - 1] [i_7] [i_7] [i_7] [i_7 - 1])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_22 [i_7 - 1] [i_7 - 1] [i_7] [i_7 - 1] [i_7 - 1] [i_7])) - (((/* implicit */int) arr_8 [i_7] [i_7 - 1] [i_1] [i_7 - 1] [i_7 - 1] [i_7 - 1]))))) : (((((/* implicit */_Bool) arr_22 [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_7] [i_7 - 1])) ? (5906098451762603064ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_7] [i_7 - 1] [i_1] [i_7 - 1] [i_7 - 1] [i_7 - 1])))))));
                                var_25 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) 18446744073709551599ULL)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_1] [i_1 + 1] [i_1] [i_1] [i_1]))))))), (min((((/* implicit */unsigned long long int) (unsigned char)144)), (0ULL)))));
                                var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((short)16176), ((short)21990)))) ? (((/* implicit */unsigned long long int) ((long long int) arr_19 [i_0] [i_1] [i_0] [i_2] [i_3 + 1] [i_7 - 1]))) : ((-(var_11))))))));
                            }
                        }
                    } 
                } 
                arr_25 [i_1] [i_1] = ((/* implicit */_Bool) ((393216LL) + (((/* implicit */long long int) arr_20 [i_0] [i_0] [i_1]))));
            }
        } 
    } 
}
