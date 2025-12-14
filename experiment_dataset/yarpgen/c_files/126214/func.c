/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126214
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
    /* LoopSeq 2 */
    for (long long int i_0 = 1; i_0 < 19; i_0 += 1) /* same iter space */
    {
        arr_3 [i_0 + 1] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 890079091)) || (((/* implicit */_Bool) 2852442617U))));
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 2; i_1 < 18; i_1 += 2) 
        {
            arr_6 [i_1 + 2] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (-890079092) : (((/* implicit */int) (unsigned char)249))))) || (((((/* implicit */_Bool) arr_0 [i_0 - 1])) || (((/* implicit */_Bool) arr_0 [i_0 + 1]))))));
            var_15 &= ((/* implicit */unsigned short) (-(((((/* implicit */int) (unsigned char)249)) - (-890079091)))));
            var_16 -= ((/* implicit */long long int) ((((/* implicit */unsigned int) ((32766) * (((/* implicit */int) arr_4 [i_0 - 1] [i_1 - 1]))))) * ((+(var_6)))));
            var_17 = ((/* implicit */short) ((((/* implicit */_Bool) (((-(arr_1 [i_1] [i_1]))) % (((/* implicit */unsigned int) ((/* implicit */int) ((-1) >= (-18)))))))) || (((/* implicit */_Bool) ((arr_1 [i_0 + 1] [i_0 - 1]) + (arr_1 [i_0 - 1] [i_0 - 1]))))));
            /* LoopNest 2 */
            for (unsigned short i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_18 = ((/* implicit */_Bool) (-((-(1442524679U)))));
                        var_19 ^= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_0 [i_1 + 2])) && (((/* implicit */_Bool) 2852442599U)))) || (((((/* implicit */_Bool) arr_0 [i_1 + 1])) && (((/* implicit */_Bool) (unsigned char)6))))));
                    }
                } 
            } 
        }
        for (unsigned int i_4 = 0; i_4 < 20; i_4 += 4) 
        {
            var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_12 [i_0 - 1]) + (arr_5 [i_0] [i_0 + 1])))) || ((!(((/* implicit */_Bool) 4294967295U))))));
            arr_15 [i_0] [i_0] = ((/* implicit */short) (!(((((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) != (0LL)))));
            /* LoopNest 3 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                for (unsigned short i_6 = 0; i_6 < 20; i_6 += 4) 
                {
                    for (int i_7 = 0; i_7 < 20; i_7 += 1) 
                    {
                        {
                            var_21 ^= ((/* implicit */unsigned char) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) + (18446744073709551615ULL)))));
                            arr_23 [i_6] [0ULL] = (-(((((/* implicit */_Bool) -13)) ? (-555074203) : (((/* implicit */int) (_Bool)1)))));
                        }
                    } 
                } 
            } 
        }
        for (int i_8 = 0; i_8 < 20; i_8 += 1) 
        {
            var_22 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)7)) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-12968)) ? (((/* implicit */int) (unsigned char)31)) : (((/* implicit */int) (_Bool)1))))) != (1U)))) : (((/* implicit */int) ((((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)926))))) >= (4294967295U))))));
            arr_26 [i_0 + 1] [i_0] [i_0 + 1] = ((/* implicit */unsigned int) (((+(18446744073709551587ULL))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 1442524678U)) || (((/* implicit */_Bool) -1648367916))))))));
            /* LoopSeq 2 */
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(1442524696U)))) ? (-1) : (((/* implicit */int) (unsigned short)64610))));
                arr_31 [i_0] [0ULL] [i_9] &= ((/* implicit */int) ((((((/* implicit */_Bool) -890079094)) && (((/* implicit */_Bool) (short)32767)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
                /* LoopSeq 1 */
                for (signed char i_10 = 0; i_10 < 20; i_10 += 4) 
                {
                    var_24 -= ((/* implicit */unsigned char) ((((15397800211884641901ULL) >= (18446744073709551615ULL))) ? (((((/* implicit */_Bool) 3048943861824909714ULL)) ? (((/* implicit */unsigned int) -890079094)) : (((((/* implicit */_Bool) arr_25 [i_10] [i_10] [i_10])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_0]))) : (arr_8 [i_0] [i_0] [i_0] [i_0 - 1]))))) : (((/* implicit */unsigned int) ((((/* implicit */int) (short)4470)) % (((/* implicit */int) (_Bool)1)))))));
                    arr_36 [19U] [i_8] [i_9] [i_9] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 1985171761U)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (signed char)127)))) >= (((((/* implicit */_Bool) ((((/* implicit */int) (short)12968)) + (arr_9 [i_0] [i_10])))) ? (((((/* implicit */int) arr_18 [i_0] [i_8] [i_9] [i_10])) % (((/* implicit */int) var_11)))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_33 [i_9])) || (((/* implicit */_Bool) var_11)))))))));
                    var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) ((((arr_21 [i_0] [i_0]) || (((/* implicit */_Bool) 2502478054149318141ULL)))) || (((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) (short)32755)) && (((/* implicit */_Bool) (unsigned short)65535))))) % ((-(((/* implicit */int) (short)21339))))))))))));
                }
            }
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(arr_5 [10] [i_0 + 1])))) && (((/* implicit */_Bool) ((67553994410557440ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (short)12972)))))))))));
                var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)4470)) ? (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)6527))) * (0U))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (short)-12968))))))))));
            }
        }
        var_28 = ((/* implicit */unsigned short) ((4294967295U) / (((/* implicit */unsigned int) ((/* implicit */int) (short)-32759)))));
        arr_39 [i_0] = ((/* implicit */unsigned int) (+(12461814576428235749ULL)));
    }
    for (long long int i_12 = 1; i_12 < 19; i_12 += 1) /* same iter space */
    {
        var_29 += ((/* implicit */unsigned int) (((-(((/* implicit */int) (unsigned char)239)))) * (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) >= (((/* implicit */int) ((arr_34 [i_12] [i_12]) || (((/* implicit */_Bool) arr_40 [i_12 - 1]))))))))));
        var_30 = (~(9223372036854775807LL));
        arr_43 [i_12] = (-((~((-(arr_17 [12]))))));
    }
    var_31 = ((/* implicit */unsigned long long int) var_1);
    var_32 = ((/* implicit */long long int) ((((/* implicit */unsigned int) (~(((/* implicit */int) var_8))))) % (var_9)));
}
