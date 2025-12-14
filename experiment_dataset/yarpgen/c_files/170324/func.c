/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170324
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
    var_14 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_3)), (2175426499U)))) ? (((((/* implicit */int) (signed char)48)) & (((/* implicit */int) var_9)))) : (((/* implicit */int) var_6)))) & (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (signed char)-48)) : (((/* implicit */int) var_11))))))))));
    /* LoopSeq 4 */
    for (int i_0 = 1; i_0 < 17; i_0 += 4) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */short) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) 2894401667U)) ? (arr_1 [i_0]) : (arr_1 [(signed char)2])))) ? (((((/* implicit */_Bool) 2119540779U)) ? (((/* implicit */int) arr_0 [i_0 + 3])) : (arr_1 [i_0 + 1]))) : (((/* implicit */int) ((((/* implicit */int) (short)-23014)) <= (arr_1 [i_0 + 1]))))))));
        /* LoopNest 3 */
        for (signed char i_1 = 2; i_1 < 17; i_1 += 1) 
        {
            for (long long int i_2 = 1; i_2 < 19; i_2 += 2) 
            {
                for (signed char i_3 = 2; i_3 < 18; i_3 += 3) 
                {
                    {
                        arr_10 [i_0] = (i_0 % 2 == 0) ? (((/* implicit */signed char) ((min((max((((/* implicit */unsigned long long int) arr_0 [i_0 + 3])), (arr_7 [i_0] [i_0] [i_2] [i_3]))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-61)) & (((/* implicit */int) (signed char)-64))))))) <= (((/* implicit */unsigned long long int) ((((arr_1 [i_0]) | (7680))) << (((((((/* implicit */int) arr_5 [i_3 - 2] [i_3] [i_0] [i_3])) & (((/* implicit */int) arr_6 [i_0])))) - (3))))))))) : (((/* implicit */signed char) ((min((max((((/* implicit */unsigned long long int) arr_0 [i_0 + 3])), (arr_7 [i_0] [i_0] [i_2] [i_3]))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-61)) & (((/* implicit */int) (signed char)-64))))))) <= (((/* implicit */unsigned long long int) ((((arr_1 [i_0]) | (7680))) << (((((((((/* implicit */int) arr_5 [i_3 - 2] [i_3] [i_0] [i_3])) & (((/* implicit */int) arr_6 [i_0])))) - (3))) - (58)))))))));
                        /* LoopSeq 4 */
                        for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 1) 
                        {
                            var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) min((min((((-1LL) + (((/* implicit */long long int) arr_9 [i_0] [i_0] [(unsigned char)6] [i_0] [(signed char)2] [(short)4])))), (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)57927)) + (((/* implicit */int) arr_6 [2U]))))))), (((/* implicit */long long int) (-(((/* implicit */int) min((arr_11 [i_0 + 2] [18] [i_2] [i_3 - 1] [i_4]), (((/* implicit */unsigned short) arr_6 [8LL])))))))))))));
                            var_16 ^= ((((((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [(unsigned char)18]))))) >> (((((/* implicit */int) (signed char)45)) - (44))))) >= (max((max((arr_3 [i_0] [i_0 + 1] [12LL]), (((/* implicit */int) arr_0 [i_0])))), (((/* implicit */int) ((((/* implicit */_Bool) 4294967270U)) || (((/* implicit */_Bool) arr_4 [i_0] [i_2] [i_2 + 1]))))))));
                        }
                        for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 4) /* same iter space */
                        {
                            arr_16 [i_0] [i_1] [15U] [i_0] [i_5] = ((((/* implicit */int) (!(((/* implicit */_Bool) ((short) -1754634083)))))) + ((+(min((((/* implicit */int) (signed char)48)), (1060916353))))));
                            arr_17 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) ((long long int) arr_8 [i_3 - 1])))) ? ((~((+(arr_7 [i_0] [13LL] [i_0] [i_5]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) ((arr_7 [i_0] [i_1] [i_1] [i_5]) == (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-115)))))) | (((/* implicit */int) (!(((/* implicit */_Bool) -19889319))))))))));
                        }
                        for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 4) /* same iter space */
                        {
                            var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(7680)))) ? (min((1LL), (((/* implicit */long long int) 2147483647)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_14 [i_3] [i_0] [i_0]))))) ? (((/* implicit */int) ((unsigned short) arr_19 [i_0] [i_3 - 2] [15U] [i_2]))) : (((/* implicit */int) min(((signed char)121), (((/* implicit */signed char) (_Bool)1))))))))));
                            arr_21 [i_0] [10LL] [i_2] [i_2] [i_6] = ((/* implicit */unsigned long long int) (+(((unsigned int) min((((/* implicit */unsigned int) (_Bool)1)), (2175426516U))))));
                        }
                        for (unsigned long long int i_7 = 0; i_7 < 20; i_7 += 4) /* same iter space */
                        {
                            arr_25 [i_0] [i_0 + 1] [i_7] [16] [16] [(signed char)8] [0U] &= ((/* implicit */short) min((((unsigned short) -2126597995)), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_24 [(signed char)8] [i_3] [i_2] [i_1] [i_0])) * (((/* implicit */int) (unsigned short)2040))))))))));
                            arr_26 [i_0] [i_0] [(short)1] [(signed char)13] [i_0] [i_0 + 3] [i_0] = (i_0 % 2 == 0) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_19 [(signed char)19] [i_3 - 1] [i_3 + 2] [i_3 + 2])) || (((/* implicit */_Bool) ((arr_19 [i_3] [i_3 + 2] [i_3] [i_3]) >> (((arr_9 [i_1 + 1] [i_2 - 1] [(short)7] [i_2] [i_3 - 1] [i_0]) - (590093862U))))))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_19 [(signed char)19] [i_3 - 1] [i_3 + 2] [i_3 + 2])) || (((/* implicit */_Bool) ((arr_19 [i_3] [i_3 + 2] [i_3] [i_3]) >> (((((arr_9 [i_1 + 1] [i_2 - 1] [(short)7] [i_2] [i_3 - 1] [i_0]) - (590093862U))) - (294861425U)))))))));
                            arr_27 [i_7] [i_1 + 3] [i_2 + 1] [i_0] [i_0] = ((/* implicit */long long int) (+(((min((((/* implicit */unsigned int) arr_1 [i_0])), (2175426517U))) ^ ((~(arr_19 [i_0 + 2] [i_1] [i_2] [i_3 - 2])))))));
                            var_18 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((signed char) ((short) arr_3 [i_0] [i_0] [i_0 + 3]))))));
                        }
                        var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_3 + 2] [i_2 + 1] [i_0 - 1])) ? (arr_7 [i_0] [i_3 - 1] [i_2] [i_0 + 2]) : (arr_7 [i_0] [i_3 - 2] [i_0] [i_0 + 3])))) ? ((~(arr_7 [i_0] [i_3 - 1] [i_2] [i_0 + 3]))) : (((((/* implicit */_Bool) arr_7 [i_0] [i_3 + 2] [i_2] [i_0 + 2])) ? (arr_7 [i_0] [i_3 + 2] [(signed char)9] [i_0 - 1]) : (arr_7 [i_0] [i_3 - 2] [i_0] [i_0 + 1])))));
                        var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) (-(((((/* implicit */int) arr_22 [i_0] [i_0 + 1] [i_0 + 1] [i_1] [14U] [i_2] [i_3])) * (((((/* implicit */int) (signed char)-49)) / (((/* implicit */int) arr_8 [i_0])))))))))));
                        var_21 &= -1LL;
                    }
                } 
            } 
        } 
    }
    for (int i_8 = 1; i_8 < 17; i_8 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_9 = 0; i_9 < 20; i_9 += 3) 
        {
            for (unsigned int i_10 = 0; i_10 < 20; i_10 += 3) 
            {
                {
                    var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1060916333)) ? ((-((~(((/* implicit */int) (unsigned char)109)))))) : (((((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [i_8] [i_9] [i_10] [i_8 + 2] [i_9] [(unsigned char)0]))))) - ((+(1060916353))))))))));
                    var_23 = ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned short)24441), (((/* implicit */unsigned short) (unsigned char)21)))))) : (((((/* implicit */unsigned int) 436005646)) * (((4260192705U) * (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-77)))))))));
                }
            } 
        } 
        var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) ((((/* implicit */_Bool) ((2175426487U) / (((/* implicit */unsigned int) 932633679))))) ? ((~(min((((/* implicit */int) arr_15 [i_8] [i_8] [i_8] [i_8 + 3] [i_8 + 3] [(unsigned short)4] [i_8])), (1060916312))))) : (((/* implicit */int) ((((/* implicit */_Bool) 1060916353)) || (((/* implicit */_Bool) 1169164532U))))))))));
    }
    for (unsigned int i_11 = 1; i_11 < 24; i_11 += 1) 
    {
        var_25 = ((/* implicit */short) ((((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-124)))))))) & (max((arr_38 [i_11 - 1]), (((/* implicit */unsigned int) arr_36 [i_11 - 1]))))));
        arr_39 [i_11] = ((/* implicit */unsigned int) min(((-(((/* implicit */int) arr_36 [i_11 + 1])))), (min((((/* implicit */int) arr_36 [i_11 + 1])), (2126597975)))));
        var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (signed char)124)) <= (((/* implicit */int) (unsigned char)115)))))) > (((((/* implicit */_Bool) arr_37 [i_11] [i_11])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)124))) : (arr_38 [2])))))) * (((/* implicit */int) (!(((/* implicit */_Bool) ((short) (short)-5376)))))))))));
    }
    for (signed char i_12 = 0; i_12 < 21; i_12 += 2) 
    {
        arr_42 [i_12] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_41 [i_12])) ? (((/* implicit */int) arr_41 [i_12])) : (((/* implicit */int) (short)4095))))) ? (min((min((((/* implicit */unsigned int) arr_37 [i_12] [i_12])), (arr_38 [i_12]))), (((/* implicit */unsigned int) ((-70811729) ^ (((/* implicit */int) arr_41 [i_12]))))))) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)249))) == (7680LL)))), ((short)-15854)))))));
        arr_43 [i_12] [(short)0] = ((/* implicit */int) max((((((/* implicit */_Bool) (-(arr_38 [i_12])))) ? (((((/* implicit */_Bool) arr_36 [i_12])) ? (arr_38 [i_12]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)11744))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)2007)) ? (((/* implicit */int) arr_37 [i_12] [24ULL])) : (((/* implicit */int) (signed char)127))))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_38 [i_12])) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)190))))) : ((+(((/* implicit */int) (signed char)119)))))))));
        var_27 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 1037253759)) ? (((/* implicit */int) (signed char)115)) : (((/* implicit */int) arr_41 [i_12]))))) ? (((((/* implicit */_Bool) (unsigned char)115)) ? (((/* implicit */int) arr_36 [i_12])) : (((/* implicit */int) (signed char)-126)))) : ((((_Bool)1) ? (((/* implicit */int) arr_37 [i_12] [i_12])) : (((/* implicit */int) arr_40 [i_12])))))) * (min((((/* implicit */int) arr_40 [i_12])), (1037253759)))));
        var_28 *= ((/* implicit */signed char) (+(max(((+(((/* implicit */int) (unsigned short)19062)))), (((((/* implicit */int) (signed char)121)) - (((/* implicit */int) arr_41 [(unsigned short)6]))))))));
        var_29 = ((/* implicit */unsigned int) ((((min((((/* implicit */long long int) arr_36 [i_12])), (7420285859680821616LL))) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))) * (((/* implicit */long long int) (-(((((/* implicit */_Bool) (unsigned char)253)) ? (((/* implicit */unsigned int) -1051159661)) : (3528979344U))))))));
    }
}
