/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161859
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161859 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161859
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 2; i_0 < 20; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_2] [i_1] [(unsigned short)5])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_6))))), (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (((arr_2 [i_1] [i_2]) << (((arr_3 [i_0]) - (1362439386U)))))))));
                    arr_8 [i_0] [i_2] |= ((/* implicit */int) 2959728712U);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 21; i_4 += 3) 
                        {
                            {
                                var_18 &= ((/* implicit */unsigned long long int) ((arr_7 [i_0 + 1] [i_0] [0]) << (((max((((((/* implicit */_Bool) arr_3 [0LL])) ? (-5797167019455387686LL) : (((/* implicit */long long int) arr_2 [i_3] [i_4])))), (((/* implicit */long long int) arr_10 [i_2 + 1] [i_2 + 1] [i_1] [i_2] [i_2 + 1] [i_2 + 1])))) - (9160LL)))));
                                var_19 -= ((/* implicit */int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (960U)))) ? ((~(min((((/* implicit */unsigned long long int) (_Bool)1)), (511ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4294966308U)) ? (arr_2 [18] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)62))))))));
                                arr_14 [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((((/* implicit */int) (!((_Bool)1)))) > (((((/* implicit */_Bool) (unsigned short)11342)) ? (((/* implicit */int) (unsigned short)32768)) : (((/* implicit */int) var_1))))))) : (((/* implicit */int) (unsigned short)16368))));
                                var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) max((max((((arr_9 [i_0]) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0]))) : (-9223372036854775807LL))), (((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */long long int) arr_7 [i_0] [i_3] [i_2])) : (arr_12 [i_0] [i_1] [0ULL] [0ULL] [i_4] [i_0]))))), (((/* implicit */long long int) ((min((arr_6 [i_0] [i_1] [i_2 + 1]), (arr_3 [i_4]))) == (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)55)) || (((/* implicit */_Bool) arr_7 [18] [i_3] [i_0]))))))))))))));
                                arr_15 [i_0 + 1] [i_2] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) max(((_Bool)1), ((_Bool)1))))) * (((((/* implicit */_Bool) arr_5 [i_0 - 2] [i_0] [i_0 - 1] [i_0 - 1])) ? (((/* implicit */long long int) arr_6 [i_0] [i_0] [i_0 - 1])) : (-8428746533131993420LL)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (short i_5 = 0; i_5 < 20; i_5 += 4) 
    {
        arr_18 [i_5] = ((/* implicit */long long int) arr_10 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]);
        arr_19 [5ULL] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)0))))) ? (((/* implicit */int) (unsigned short)65518)) : (((/* implicit */int) ((max((18446744073709551615ULL), (((/* implicit */unsigned long long int) (unsigned short)49)))) != (((/* implicit */unsigned long long int) arr_6 [i_5] [i_5] [i_5])))))));
        /* LoopSeq 2 */
        for (short i_6 = 2; i_6 < 16; i_6 += 4) 
        {
            arr_23 [(unsigned char)7] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)65512)) && (((/* implicit */_Bool) 6952630419536860314LL))))), (((((/* implicit */_Bool) var_13)) ? (((((/* implicit */_Bool) var_6)) ? (arr_5 [i_5] [i_6] [i_6] [i_6 + 2]) : (((/* implicit */long long int) arr_2 [8LL] [i_6 + 3])))) : (6952630419536860329LL)))));
            var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) (unsigned char)250))));
            arr_24 [(_Bool)1] [8LL] [8LL] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)138)) ? (((/* implicit */long long int) arr_2 [i_6 - 1] [i_6 - 1])) : (var_9)))) ? (((var_0) * (((/* implicit */unsigned long long int) (+(-6952630419536860315LL)))))) : (((/* implicit */unsigned long long int) ((-8714968475485076434LL) / (((((/* implicit */long long int) ((/* implicit */int) arr_20 [i_5]))) * (6952630419536860322LL))))))));
            arr_25 [(unsigned char)1] [i_6] |= ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (_Bool)1))))));
        }
        for (int i_7 = 0; i_7 < 20; i_7 += 3) 
        {
            var_22 -= ((/* implicit */unsigned int) min((min((arr_11 [i_7] [i_7] [i_5] [i_5] [i_5]), (arr_11 [i_7] [i_5] [i_5] [i_5] [i_5]))), (((/* implicit */unsigned long long int) arr_13 [i_5] [i_5] [i_5]))));
            arr_28 [i_7] = ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-8281005718851271417LL))) - (((((/* implicit */_Bool) 32U)) ? (-6490475076376352629LL) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))))) ? (((((/* implicit */_Bool) arr_13 [i_5] [i_7] [i_7])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_13 [i_7] [i_7] [i_5])))) : (arr_7 [i_5] [i_7] [i_7]));
            arr_29 [i_7] = ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)82)) ? (((/* implicit */int) arr_10 [i_5] [i_5] [i_7] [(unsigned short)1] [i_5] [i_7])) : (((/* implicit */int) (signed char)-86))))) ? (((/* implicit */int) ((short) arr_1 [i_5]))) : (((/* implicit */int) arr_27 [i_7] [i_5] [i_7])))));
        }
    }
    var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_2)) ? (((((/* implicit */int) var_15)) - (((/* implicit */int) var_1)))) : (((/* implicit */int) var_8)))), (((/* implicit */int) ((signed char) (_Bool)1))))))));
    var_24 = ((/* implicit */unsigned int) min((var_24), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 4755844603983655202LL)) ? (min((var_9), (((/* implicit */long long int) (_Bool)1)))) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))) ? (((((/* implicit */_Bool) -8281005718851271409LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (2756567782U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)71)) ? (((((/* implicit */int) (unsigned char)204)) & (((/* implicit */int) (signed char)-16)))) : (((/* implicit */int) var_13)))))))));
    var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (min((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_16)))), (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (_Bool)1))))))) : (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65511))) : (-7457578259647829503LL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) -6051929975041641130LL))))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_10)) : (var_2)))))));
}
