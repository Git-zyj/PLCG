/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109511
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
    for (long long int i_0 = 4; i_0 < 18; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (int i_2 = 0; i_2 < 22; i_2 += 1) 
                {
                    var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)64777)) ? (176543108U) : (arr_6 [i_0] [i_1] [i_2] [i_1])))) : (((unsigned long long int) 1023U))))) ? (((/* implicit */int) ((((/* implicit */int) (signed char)49)) > (((/* implicit */int) (unsigned char)150))))) : (((/* implicit */int) (unsigned char)105)))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 19; i_4 += 2) 
                        {
                            {
                                arr_13 [i_0] [(_Bool)0] [i_2] = ((/* implicit */long long int) var_5);
                                var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) 2139051499U))));
                            }
                        } 
                    } 
                }
                for (long long int i_5 = 0; i_5 < 22; i_5 += 3) 
                {
                    var_18 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (arr_9 [i_5]) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))) ? (((/* implicit */unsigned long long int) (+(var_7)))) : (((((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_0 - 4])) ? (((/* implicit */unsigned long long int) var_13)) : (10455187923370555753ULL)))))) ? (((((/* implicit */_Bool) -1319081785)) ? ((-(arr_11 [i_0] [i_0] [i_1] [i_1] [i_5]))) : (1006U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_14)))));
                    var_19 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((var_9) != (((/* implicit */unsigned long long int) arr_11 [i_5] [i_1] [i_5] [i_0 + 3] [i_0 + 2]))))), (min((4294966289U), (((/* implicit */unsigned int) (unsigned char)106))))));
                    arr_17 [i_0] [i_1] [i_1] [i_5] = ((/* implicit */unsigned long long int) (-((~(((/* implicit */int) arr_4 [i_0]))))));
                }
                arr_18 [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(min((((/* implicit */long long int) (unsigned short)27704)), (12263878108095562LL)))))) ? (min((var_4), (((/* implicit */unsigned long long int) ((1006U) & (((/* implicit */unsigned int) 3))))))) : (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_2 [i_0] [i_1])), ((-(3))))))));
                var_20 = ((/* implicit */unsigned int) ((unsigned char) ((int) (-(2749059704906588635ULL)))));
                arr_19 [i_0 + 4] = ((/* implicit */_Bool) ((arr_0 [i_0]) << (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (_Bool)0)) : (var_13)))) % (var_6)))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned int) 1176559689);
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_6 = 0; i_6 < 24; i_6 += 3) 
    {
        var_22 = ((/* implicit */_Bool) 2749059704906588635ULL);
        /* LoopSeq 4 */
        for (unsigned int i_7 = 0; i_7 < 24; i_7 += 2) /* same iter space */
        {
            arr_27 [i_6] [i_6] = ((/* implicit */int) ((unsigned char) arr_21 [i_6]));
            var_23 = ((/* implicit */int) arr_20 [i_6] [i_7]);
            /* LoopSeq 1 */
            for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
            {
                /* LoopNest 2 */
                for (signed char i_9 = 1; i_9 < 22; i_9 += 4) 
                {
                    for (int i_10 = 0; i_10 < 24; i_10 += 2) 
                    {
                        {
                            arr_37 [i_6] [(signed char)12] [i_9 + 1] [i_8] [i_7] [i_6] [i_6] = ((/* implicit */int) var_8);
                            var_24 = ((/* implicit */_Bool) ((unsigned int) (+(var_11))));
                        }
                    } 
                } 
                arr_38 [i_6] [i_7] [i_8] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [i_6] [i_6] [i_8 - 1])) ? (((/* implicit */int) (unsigned short)27704)) : (((/* implicit */int) (unsigned char)129)))))));
            }
        }
        for (unsigned int i_11 = 0; i_11 < 24; i_11 += 2) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned char i_12 = 1; i_12 < 23; i_12 += 1) 
            {
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    for (unsigned int i_14 = 0; i_14 < 24; i_14 += 2) 
                    {
                        {
                            arr_50 [i_6] [i_13] [i_12] [i_11] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_28 [i_6] [i_12] [i_11] [i_6])) ? (4179314531U) : (((/* implicit */unsigned int) var_11))))) : (arr_32 [i_12 - 1] [i_12 - 1] [i_12 + 1])));
                            arr_51 [i_6] [i_11] [i_12 + 1] [i_13] [(_Bool)1] [i_6] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_47 [i_6] [i_6] [i_11] [i_11] [i_12] [i_13] [i_14]))));
                        }
                    } 
                } 
            } 
            var_25 = ((/* implicit */short) (+(((/* implicit */int) (unsigned char)204))));
            /* LoopSeq 2 */
            for (int i_15 = 0; i_15 < 24; i_15 += 4) /* same iter space */
            {
                var_26 -= ((/* implicit */unsigned short) arr_47 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]);
                var_27 += ((/* implicit */_Bool) (unsigned short)61233);
                var_28 -= ((/* implicit */long long int) ((signed char) (!(((/* implicit */_Bool) 8746002335256509647ULL)))));
            }
            for (int i_16 = 0; i_16 < 24; i_16 += 4) /* same iter space */
            {
                var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)127)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) arr_29 [i_6] [i_6] [i_16])))))) ? (((((/* implicit */unsigned int) var_11)) * (arr_43 [i_16] [i_6]))) : (1023U)));
                arr_56 [i_6] = ((/* implicit */_Bool) (+(((unsigned long long int) 15023456962663880844ULL))));
            }
            var_30 = ((/* implicit */long long int) max((var_30), (((/* implicit */long long int) var_3))));
        }
        for (unsigned char i_17 = 0; i_17 < 24; i_17 += 3) 
        {
            arr_60 [i_6] = ((/* implicit */unsigned int) (~(((((/* implicit */int) arr_59 [i_17])) & (((/* implicit */int) (unsigned short)37832))))));
            arr_61 [i_6] [i_17] [i_17] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) ((_Bool) (unsigned char)127))) : (((/* implicit */int) arr_45 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]))));
        }
        for (long long int i_18 = 0; i_18 < 24; i_18 += 2) 
        {
            var_31 = ((/* implicit */unsigned int) var_10);
            var_32 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) 4294966273U)) * (var_4)));
        }
    }
    for (signed char i_19 = 2; i_19 < 19; i_19 += 2) 
    {
        arr_66 [i_19] = ((/* implicit */signed char) ((arr_62 [i_19]) / ((-(3)))));
        var_33 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((7269037090190231703ULL) << (0U)))) ? (((((/* implicit */_Bool) arr_43 [i_19 - 2] [i_19 + 4])) ? (arr_43 [i_19 + 4] [i_19 - 1]) : (arr_43 [i_19 + 3] [i_19 + 2]))) : (arr_43 [i_19 - 2] [i_19 + 3])));
    }
    var_34 |= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_6) - (var_9)))) ? (((/* implicit */unsigned long long int) -1710650724)) : (((((/* implicit */_Bool) var_11)) ? (var_5) : (((/* implicit */unsigned long long int) 2620625334U))))))) ? (((((/* implicit */int) var_2)) | (((/* implicit */int) ((var_10) >= (((/* implicit */long long int) 1674341962U))))))) : ((-(((((/* implicit */_Bool) var_0)) ? (151595422) : (((/* implicit */int) var_2))))))));
}
