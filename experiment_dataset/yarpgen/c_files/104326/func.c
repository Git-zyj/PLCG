/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104326
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
    var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) var_10))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                /* LoopSeq 4 */
                for (long long int i_2 = 0; i_2 < 10; i_2 += 4) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 10; i_4 += 4) 
                        {
                            {
                                var_15 = ((/* implicit */int) ((short) (~(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned char)252)) : (((/* implicit */int) (unsigned short)3)))))));
                                var_16 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((arr_9 [(unsigned char)7] [(unsigned char)7] [(unsigned char)7] [i_0]), (arr_9 [i_3] [i_2] [i_2] [i_2]))))));
                                var_17 = ((/* implicit */unsigned long long int) (~(min((0), (((/* implicit */int) (signed char)16))))));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */unsigned char) min(((~(((/* implicit */int) var_10)))), (min((((((/* implicit */_Bool) (unsigned short)32768)) ? (((/* implicit */int) (unsigned short)63218)) : (((/* implicit */int) (unsigned char)176)))), (((/* implicit */int) (signed char)16))))));
                }
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) max((((/* implicit */short) (!(((/* implicit */_Bool) (unsigned short)32782))))), (var_8))))));
                    var_20 = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) ((signed char) arr_14 [i_0] [i_0] [i_5])))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) var_8))) ? ((+(((/* implicit */int) (unsigned short)32768)))) : (((/* implicit */int) (signed char)-15))))) : ((-((+(536805376U)))))));
                    var_21 = ((/* implicit */long long int) max(((signed char)98), ((signed char)16)));
                }
                /* vectorizable */
                for (unsigned long long int i_6 = 1; i_6 < 8; i_6 += 4) /* same iter space */
                {
                    var_22 = ((/* implicit */signed char) var_8);
                    /* LoopNest 2 */
                    for (unsigned short i_7 = 2; i_7 < 7; i_7 += 4) 
                    {
                        for (unsigned char i_8 = 0; i_8 < 10; i_8 += 4) 
                        {
                            {
                                arr_27 [i_0] [i_0] [(signed char)2] [i_6] [(signed char)6] = (signed char)-8;
                                var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-32751)) ? (1152912708513824768LL) : (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_6 - 1] [i_6 + 2] [i_6])))));
                                var_24 = (unsigned short)32755;
                                arr_28 [i_6] [i_8] [3U] [i_8] = ((/* implicit */_Bool) (-(18446744073709551615ULL)));
                                arr_29 [(short)0] [i_6] [(short)0] [(short)0] [(short)0] [i_6] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)32771)) ? (1879048192U) : (1879048192U)));
                            }
                        } 
                    } 
                }
                for (unsigned long long int i_9 = 1; i_9 < 8; i_9 += 4) /* same iter space */
                {
                    var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (((+(arr_8 [i_0] [(short)7] [i_0] [i_0]))) + (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-31277)))))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) min(((_Bool)1), ((_Bool)1))))))) : ((~(13270932150174490673ULL))))))));
                    arr_32 [i_1] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_0]))));
                    arr_33 [i_9] = ((/* implicit */int) 18446744073709551607ULL);
                }
                var_26 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (((/* implicit */int) arr_24 [i_1] [i_1] [i_1] [i_1] [i_1])) : (((/* implicit */int) (signed char)-83))))));
            }
        } 
    } 
    var_27 = ((/* implicit */signed char) var_8);
    var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) 3ULL)) ? (13270932150174490683ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) 4194303U)) ? (((/* implicit */int) (unsigned short)21533)) : (1489946536))) == (((/* implicit */int) var_3))))))));
}
