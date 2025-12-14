/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185195
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
    var_19 = ((/* implicit */unsigned long long int) var_6);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) arr_1 [i_0]);
        arr_4 [i_0] [(unsigned short)8] = ((/* implicit */unsigned short) arr_1 [i_0]);
        arr_5 [i_0] [i_0] = (-(((((/* implicit */_Bool) 6585880075297273202ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (18260909437881642716ULL))));
        arr_6 [i_0] = ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-94))) | (16523872909233016058ULL));
    }
    for (unsigned int i_1 = 0; i_1 < 25; i_1 += 3) 
    {
        var_20 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)78))));
        /* LoopSeq 1 */
        for (unsigned int i_2 = 0; i_2 < 25; i_2 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned int i_3 = 0; i_3 < 25; i_3 += 3) 
            {
                for (int i_4 = 0; i_4 < 25; i_4 += 3) 
                {
                    {
                        var_21 = ((/* implicit */long long int) arr_15 [i_1] [i_1] [i_1]);
                        var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) 1922871164476535557ULL)) ? (((/* implicit */int) (unsigned char)76)) : (1527934152)));
                        /* LoopSeq 4 */
                        for (short i_5 = 0; i_5 < 25; i_5 += 1) 
                        {
                            arr_20 [i_2] [i_2] [i_1] [i_5] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)32440)), (arr_9 [i_2] [i_1])))) ? ((+(((/* implicit */int) var_4)))) : ((+(((/* implicit */int) var_16))))))));
                            arr_21 [i_1] [i_2] [i_3] [i_1] [i_5] = ((/* implicit */unsigned long long int) min((((((/* implicit */long long int) ((/* implicit */int) min(((unsigned short)38568), (((/* implicit */unsigned short) (unsigned char)202)))))) > (((((/* implicit */_Bool) var_13)) ? (var_3) : (((/* implicit */long long int) arr_9 [i_1] [i_1])))))), (((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)121)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned char)247))))) < (((((/* implicit */_Bool) 1922871164476535558ULL)) ? (var_2) : (var_14)))))));
                            arr_22 [i_1] [i_2] [i_3] [i_4] [i_4] [i_5] [i_5] = ((/* implicit */_Bool) 16523872909233016058ULL);
                            arr_23 [i_1] [i_2] [i_2] [i_1] [i_1] [i_5] = ((/* implicit */unsigned long long int) max((arr_12 [21] [21] [i_1] [2]), (((/* implicit */int) ((((/* implicit */int) var_10)) <= (((/* implicit */int) (signed char)127)))))));
                            arr_24 [i_1] [i_1] = ((/* implicit */int) arr_14 [i_1] [i_2] [i_2] [i_3] [i_4] [i_5]);
                        }
                        for (short i_6 = 0; i_6 < 25; i_6 += 1) 
                        {
                            arr_27 [i_1] [i_1] [i_3] [i_4] [i_6] [i_6] = ((/* implicit */unsigned long long int) arr_7 [i_1]);
                            var_23 = ((/* implicit */signed char) min((((/* implicit */long long int) ((16523872909233016058ULL) > (16523872909233016058ULL)))), ((-((-(var_2)))))));
                            arr_28 [i_1] = ((/* implicit */signed char) min((683728447), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_5))) < (-7625848582773244935LL))))));
                            arr_29 [i_1] = ((/* implicit */long long int) arr_18 [i_1] [i_2]);
                        }
                        for (unsigned char i_7 = 0; i_7 < 25; i_7 += 4) /* same iter space */
                        {
                            arr_33 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) (-(41895699757998589LL)));
                            arr_34 [i_7] [i_1] [i_3] [i_1] [i_1] = ((/* implicit */long long int) ((var_12) ? (576460752303422464ULL) : (((/* implicit */unsigned long long int) 3))));
                        }
                        for (unsigned char i_8 = 0; i_8 < 25; i_8 += 4) /* same iter space */
                        {
                            arr_38 [i_1] [i_2] [i_3] [i_2] [i_1] = ((/* implicit */short) 16523872909233016058ULL);
                            arr_39 [i_4] [i_1] [i_1] [i_2] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 1048575LL)), (1922871164476535558ULL)))))))) <= ((+((+(10590922597436246188ULL)))))));
                        }
                    }
                } 
            } 
            var_24 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (-((-(var_17)))))) == (1922871164476535558ULL)));
        }
        arr_40 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) min((((((/* implicit */_Bool) 16523872909233016058ULL)) && (((/* implicit */_Bool) arr_32 [i_1] [i_1] [i_1])))), (((((/* implicit */_Bool) arr_10 [i_1] [i_1] [i_1])) && (((/* implicit */_Bool) var_7))))))) ^ (((/* implicit */int) (short)5026))));
    }
}
