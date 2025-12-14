/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107232
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 3; i_0 < 19; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (short i_1 = 1; i_1 < 19; i_1 += 3) 
        {
            for (signed char i_2 = 2; i_2 < 17; i_2 += 3) 
            {
                for (unsigned char i_3 = 0; i_3 < 20; i_3 += 3) 
                {
                    {
                        arr_10 [i_3] [i_2] [i_1] [i_0] |= ((/* implicit */unsigned long long int) var_1);
                        var_11 = ((/* implicit */signed char) (+((-(((((/* implicit */int) arr_9 [i_0] [i_1] [i_1] [(unsigned char)12])) / (var_7)))))));
                    }
                } 
            } 
        } 
        arr_11 [i_0] = ((/* implicit */unsigned short) var_8);
        /* LoopNest 2 */
        for (unsigned short i_4 = 1; i_4 < 19; i_4 += 4) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                {
                    var_12 = ((/* implicit */unsigned long long int) var_4);
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 3) 
                    {
                        for (long long int i_7 = 0; i_7 < 20; i_7 += 4) 
                        {
                            {
                                var_13 = arr_17 [i_0 + 1] [i_0 - 2] [i_0 + 1] [2U];
                                var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) ((unsigned long long int) (-(var_7)))))));
                            }
                        } 
                    } 
                    arr_21 [i_0] [(short)14] [i_5] [i_5] |= ((/* implicit */unsigned short) min((((unsigned int) var_5)), (min((((/* implicit */unsigned int) (unsigned short)6144)), (var_4)))));
                }
            } 
        } 
        /* LoopSeq 3 */
        for (unsigned int i_8 = 2; i_8 < 19; i_8 += 4) 
        {
            arr_24 [i_0 - 3] = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) var_0)), (var_1))))))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) min((var_6), (((/* implicit */short) arr_9 [i_0 - 3] [(short)19] [i_8 - 2] [i_0 - 3]))))))))));
            /* LoopSeq 1 */
            for (int i_9 = 0; i_9 < 20; i_9 += 1) 
            {
                arr_27 [i_9] [i_9] [i_9] [i_0] = (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_23 [i_0 - 3] [i_0 - 2]))))));
                /* LoopNest 2 */
                for (int i_10 = 4; i_10 < 17; i_10 += 1) 
                {
                    for (unsigned char i_11 = 3; i_11 < 18; i_11 += 2) 
                    {
                        {
                            var_15 = ((/* implicit */long long int) (~(1771418603440796982ULL)));
                            var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)18885))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (arr_2 [i_8]) : (((/* implicit */unsigned long long int) arr_3 [i_10 - 1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_10 - 3] [8] [i_10] [i_10 - 3] [i_11 - 1]))) : (min((10721669005463534855ULL), (((/* implicit */unsigned long long int) (signed char)64)))))) : (((/* implicit */unsigned long long int) ((((var_7) <= (((/* implicit */int) var_0)))) ? (((/* implicit */int) arr_33 [i_11] [i_9] [i_8] [i_9] [i_0])) : (((/* implicit */int) arr_23 [i_0] [i_8])))))));
                        }
                    } 
                } 
            }
        }
        /* vectorizable */
        for (unsigned short i_12 = 0; i_12 < 20; i_12 += 2) 
        {
            var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) ((unsigned long long int) var_0)))));
            arr_37 [i_12] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_36 [i_0 + 1] [i_12])) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)59391))))) == ((~(3251065479U)))));
            arr_38 [i_0 - 3] [i_0 - 3] = (+(((/* implicit */int) var_8)));
        }
        for (long long int i_13 = 1; i_13 < 17; i_13 += 2) 
        {
            /* LoopSeq 2 */
            for (long long int i_14 = 0; i_14 < 20; i_14 += 4) 
            {
                var_18 -= ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)59392))));
                /* LoopNest 2 */
                for (int i_15 = 0; i_15 < 20; i_15 += 1) 
                {
                    for (signed char i_16 = 2; i_16 < 16; i_16 += 4) 
                    {
                        {
                            arr_49 [i_13] [i_15] [i_15] [i_15] [i_13] [(unsigned char)0] [i_13] = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) min((var_6), (((/* implicit */short) arr_15 [i_13]))))), (var_3))))));
                            arr_50 [i_13] [(short)5] [i_14] [8LL] [i_16] = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */unsigned long long int) arr_25 [i_13] [(short)17] [i_15] [i_14])) > ((+(16675325470268754633ULL))))));
                            var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)47166)) && (((/* implicit */_Bool) var_2)))))) < ((-(((15378670571096373469ULL) - (((/* implicit */unsigned long long int) arr_29 [i_0] [i_14] [i_14] [6ULL])))))))))));
                            var_20 = ((/* implicit */unsigned int) var_0);
                            var_21 -= ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (-(((/* implicit */int) var_2))))), (min((var_10), (var_10)))))) ? (min((((/* implicit */unsigned int) (short)32)), (3671831077U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_33 [i_0] [i_16 - 2] [i_13] [i_14] [i_13 + 3])) : (((/* implicit */int) arr_33 [i_0 - 2] [i_16 + 1] [(short)4] [i_14] [i_13 + 3])))))));
                        }
                    } 
                } 
                var_22 = ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_2))))) ? (var_9) : (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)1))))))));
                var_23 = ((/* implicit */unsigned short) ((var_4) * (min((((((/* implicit */_Bool) arr_25 [i_0] [i_14] [(unsigned short)1] [i_14])) ? (var_10) : (1533529756U))), (((/* implicit */unsigned int) arr_6 [i_14] [i_14] [i_13 + 2] [i_0]))))));
                arr_51 [i_0] [i_13] [i_0 - 2] = ((/* implicit */int) ((((/* implicit */int) var_2)) != (((/* implicit */int) var_0))));
            }
            for (unsigned int i_17 = 0; i_17 < 20; i_17 += 1) 
            {
                var_24 = ((/* implicit */int) ((((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) arr_4 [i_17])) | (var_10)))) - (arr_30 [i_0 - 2] [i_0] [i_0] [i_0 + 1] [i_0 - 2] [i_13 + 1]))) >= (((unsigned long long int) (-(((/* implicit */int) (unsigned char)145)))))));
                var_25 = ((/* implicit */signed char) ((arr_17 [i_0] [i_13] [i_13 - 1] [i_17]) % (((/* implicit */long long int) 4000099025U))));
                var_26 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) min((((((/* implicit */int) var_0)) << (((((/* implicit */int) (short)7666)) - (7661))))), (arr_44 [i_0] [i_13] [i_0 - 3] [i_0 - 2])))), (((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_0)), (2858965760U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) != (3671831077U))))) : (var_9)))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_18 = 0; i_18 < 20; i_18 += 1) 
                {
                    var_27 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) (short)9093))));
                    var_28 = (i_13 % 2 == 0) ? (((/* implicit */unsigned short) ((((((/* implicit */int) var_6)) + (2147483647))) >> (((arr_31 [i_0 - 3] [i_13] [i_13] [i_13] [i_13 + 3] [i_17]) + (8156458705412287316LL)))))) : (((/* implicit */unsigned short) ((((((/* implicit */int) var_6)) + (2147483647))) >> (((((arr_31 [i_0 - 3] [i_13] [i_13] [i_13] [i_13 + 3] [i_17]) + (8156458705412287316LL))) - (2255101891769025468LL))))));
                }
                arr_58 [i_13] [i_17] = ((((/* implicit */int) ((unsigned short) arr_45 [i_13 - 1] [i_13] [(unsigned char)8] [i_17]))) << (((((unsigned int) 16675325470268754634ULL)) - (1633979076U))));
            }
            var_29 = ((/* implicit */unsigned long long int) arr_14 [i_13] [i_13] [i_13] [i_0 - 3]);
            /* LoopSeq 1 */
            for (unsigned short i_19 = 4; i_19 < 19; i_19 += 2) 
            {
                var_30 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_44 [i_0] [(unsigned short)18] [i_19] [i_13 + 3])) ? (((unsigned long long int) min((((/* implicit */unsigned long long int) arr_16 [i_19] [i_13] [i_0])), (14649955921711958417ULL)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)22843))) % (arr_32 [i_13] [i_13] [i_13 - 1] [i_13] [i_13] [i_13])))) ? (((/* implicit */int) arr_57 [i_0] [i_13 + 2] [i_13] [i_19])) : (((/* implicit */int) var_0)))))));
                var_31 = ((/* implicit */int) ((((((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_22 [i_13])), (var_5)))) & (arr_39 [i_0] [i_0] [i_19 - 1]))) | (((/* implicit */unsigned long long int) var_10))));
            }
            var_32 = min((((/* implicit */unsigned int) ((unsigned short) min((4771194092682472801LL), (((/* implicit */long long int) arr_18 [i_0] [4ULL] [i_13] [i_13] [(short)0])))))), (((((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned short)6144), (((/* implicit */unsigned short) var_0)))))) / (var_9))));
        }
        var_33 = ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_40 [i_0] [(_Bool)1])), (arr_41 [i_0] [(_Bool)1] [i_0 - 3]))))));
    }
    /* LoopSeq 2 */
    for (long long int i_20 = 1; i_20 < 14; i_20 += 1) /* same iter space */
    {
        var_34 *= ((/* implicit */unsigned char) (unsigned short)56907);
        arr_66 [i_20] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) min((((/* implicit */unsigned short) arr_15 [i_20])), (var_2))))));
    }
    for (long long int i_21 = 1; i_21 < 14; i_21 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        for (long long int i_22 = 0; i_22 < 15; i_22 += 1) 
        {
            var_35 = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_19 [i_21 + 1] [i_21 + 1] [i_21 - 1] [(unsigned char)4] [i_21])) ? (arr_19 [i_21 + 1] [i_21 - 1] [i_21 - 1] [i_21 - 1] [i_21]) : (arr_19 [i_21 + 1] [i_21 + 1] [i_21 + 1] [i_22] [i_22])))) >= (min((var_5), (((/* implicit */long long int) arr_61 [i_21 + 1]))))));
            var_36 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-3839)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_23 [i_21] [i_21]))))) : (min((var_5), (((/* implicit */long long int) arr_7 [i_22])))))) >= (((((/* implicit */_Bool) ((((/* implicit */_Bool) 6ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_4)))) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) arr_14 [i_21] [i_21] [i_22] [(_Bool)0])), (3141772093U)))) : (var_3)))));
        }
        for (unsigned char i_23 = 2; i_23 < 13; i_23 += 4) 
        {
            arr_74 [i_23] = ((/* implicit */signed char) ((min((min((var_4), (((/* implicit */unsigned int) (_Bool)1)))), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) != (var_10)))))) | (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (unsigned char)224)) : (((/* implicit */int) (signed char)14)))))));
            var_37 &= ((/* implicit */unsigned long long int) var_4);
        }
        arr_75 [(short)4] = ((((/* implicit */_Bool) arr_55 [i_21] [(unsigned char)0] [i_21] [i_21 - 1] [i_21 + 1])) ? (((/* implicit */int) ((short) (+(((/* implicit */int) var_2)))))) : ((+(((/* implicit */int) min((var_2), (((/* implicit */unsigned short) (short)-9081))))))));
        var_38 = ((/* implicit */_Bool) min((var_38), (((/* implicit */_Bool) (-(((long long int) var_2)))))));
        var_39 = ((/* implicit */unsigned long long int) min((var_39), (((/* implicit */unsigned long long int) (unsigned char)241))));
        arr_76 [13U] [i_21] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_22 [i_21 - 1]))))) ? (((/* implicit */long long int) ((arr_8 [(short)18] [(short)14] [0U] [i_21 - 1] [i_21]) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_22 [i_21 - 1]))))) : ((-(4615116864933223621LL)))));
    }
    var_40 = ((/* implicit */unsigned long long int) (+((+(var_3)))));
    var_41 = ((/* implicit */int) ((var_10) * (((/* implicit */unsigned int) ((/* implicit */int) min((min((((/* implicit */unsigned short) var_0)), (var_2))), (min(((unsigned short)0), (((/* implicit */unsigned short) (unsigned char)133))))))))));
}
