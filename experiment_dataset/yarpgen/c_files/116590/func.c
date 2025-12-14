/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116590
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116590 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116590
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
    for (long long int i_0 = 2; i_0 < 16; i_0 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                for (short i_3 = 0; i_3 < 17; i_3 += 3) 
                {
                    {
                        /* LoopSeq 4 */
                        for (unsigned int i_4 = 0; i_4 < 17; i_4 += 1) 
                        {
                            var_12 = ((/* implicit */_Bool) ((((((/* implicit */int) (short)30753)) + (((/* implicit */int) (short)30753)))) + (((/* implicit */int) min(((short)30753), ((short)30761))))));
                            var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_0 - 2] [i_0 - 1] [i_0 + 1])) & (((/* implicit */int) arr_7 [i_0] [i_0 - 1] [i_0 + 1]))))) ? (((/* implicit */int) min((arr_7 [i_0 - 1] [i_0 + 1] [i_0 - 1]), (arr_7 [i_0] [i_0 - 1] [i_0 - 1])))) : (((/* implicit */int) max((arr_0 [i_0]), (arr_0 [i_0]))))));
                        }
                        for (signed char i_5 = 2; i_5 < 16; i_5 += 2) /* same iter space */
                        {
                            var_14 += ((/* implicit */signed char) var_4);
                            var_15 &= ((((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_7 [i_0] [i_0] [9U])) ? (((/* implicit */int) arr_0 [i_0 - 2])) : (((/* implicit */int) arr_3 [i_0 + 1]))))))) / (min((((((/* implicit */_Bool) (short)30741)) ? (arr_6 [i_2] [i_2] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0 - 2] [i_1] [i_2]))))), (((/* implicit */unsigned long long int) arr_8 [i_1] [i_0 - 1] [(signed char)3] [i_0])))));
                        }
                        for (signed char i_6 = 2; i_6 < 16; i_6 += 2) /* same iter space */
                        {
                            var_16 = ((/* implicit */short) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_12 [i_6] [i_6 - 1] [i_3] [i_2] [i_1] [i_1] [i_0 - 2]) >> (((10660048403127672263ULL) - (10660048403127672248ULL)))))) ? (((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_2] [i_3])) ? (((/* implicit */int) (unsigned char)46)) : (((/* implicit */int) arr_2 [i_3])))) : (((/* implicit */int) ((signed char) (unsigned char)77))))))));
                            var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) min(((+(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (short)-30751)) : (((/* implicit */int) (short)-13628)))))), (1443000145))))));
                        }
                        for (signed char i_7 = 2; i_7 < 16; i_7 += 2) /* same iter space */
                        {
                            var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) arr_0 [i_0]))));
                            var_19 = ((/* implicit */int) ((((/* implicit */_Bool) ((long long int) (!(((/* implicit */_Bool) arr_17 [i_7] [i_3] [i_2] [i_1] [(unsigned short)16] [i_0])))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_2])) ? (((/* implicit */int) arr_5 [i_0 - 1] [i_3] [i_7])) : (((/* implicit */int) arr_19 [i_0] [i_1] [i_2] [i_2] [i_7]))))) ? (arr_6 [i_0 + 1] [i_0] [i_0 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (((_Bool)0) && (((/* implicit */_Bool) arr_14 [i_0 - 2] [i_1] [i_2] [i_3])))))))))));
                            var_20 = ((/* implicit */unsigned long long int) arr_9 [i_1]);
                            var_21 *= ((/* implicit */_Bool) var_9);
                        }
                        var_22 = ((/* implicit */int) ((((/* implicit */long long int) max((((/* implicit */int) max((((/* implicit */short) arr_16 [i_0 + 1] [i_0])), ((short)-19462)))), (((((/* implicit */_Bool) arr_9 [i_0])) ? (((/* implicit */int) (unsigned char)46)) : (900490529)))))) == (((((/* implicit */_Bool) arr_18 [9] [i_1] [i_0 - 2])) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) arr_18 [(signed char)16] [i_2] [i_3])), (arr_3 [i_0]))))) : (((var_3) & (((/* implicit */long long int) ((/* implicit */int) (short)-1)))))))));
                    }
                } 
            } 
        } 
        var_23 = ((arr_15 [i_0 + 1] [i_0 - 1] [i_0 - 2] [i_0 + 1] [i_0 + 1]) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0 + 1])) && (((/* implicit */_Bool) (short)-20362))))) : (-2125322160))) : (((/* implicit */int) (!(arr_0 [i_0 - 2])))));
        var_24 = ((_Bool) var_5);
    }
    for (long long int i_8 = 2; i_8 < 16; i_8 += 2) /* same iter space */
    {
        var_25 = ((/* implicit */unsigned short) (~(((/* implicit */int) (short)22109))));
        /* LoopNest 3 */
        for (int i_9 = 0; i_9 < 17; i_9 += 3) 
        {
            for (signed char i_10 = 1; i_10 < 15; i_10 += 1) 
            {
                for (short i_11 = 0; i_11 < 17; i_11 += 3) 
                {
                    {
                        var_26 = ((/* implicit */short) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)164))) ^ (((((/* implicit */_Bool) var_11)) ? (arr_9 [i_8]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_11]))))))) ^ (((/* implicit */long long int) ((((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)0)), (arr_2 [i_11])))) & ((~(((/* implicit */int) (short)20354)))))))));
                        /* LoopSeq 3 */
                        for (int i_12 = 0; i_12 < 17; i_12 += 1) 
                        {
                            var_27 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_8] [i_9]))) < (var_1)));
                            var_28 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) (short)-15312)) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_8))))) : ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (arr_14 [i_8] [i_10 + 2] [i_10] [i_8])))))));
                        }
                        for (short i_13 = 4; i_13 < 16; i_13 += 1) /* same iter space */
                        {
                            var_29 = ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 1169041790953627612ULL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_30 [9ULL] [i_9]))) : (-8273084394925296338LL))))))) : (((/* implicit */int) (unsigned char)163))));
                            var_30 = ((/* implicit */short) (+(((/* implicit */int) (((!(((/* implicit */_Bool) (short)30751)))) && (((/* implicit */_Bool) max(((short)18005), (((/* implicit */short) var_7))))))))));
                        }
                        for (short i_14 = 4; i_14 < 16; i_14 += 1) /* same iter space */
                        {
                            var_31 = ((/* implicit */int) ((short) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_32 [i_11] [i_9] [i_9] [i_14] [i_11] [(unsigned short)4] [i_11]))))) ^ (((((var_9) + (9223372036854775807LL))) << (((((/* implicit */int) (unsigned char)163)) - (163))))))));
                            var_32 = ((/* implicit */unsigned short) min((var_32), (((/* implicit */unsigned short) min(((~((~(((/* implicit */int) arr_20 [i_14 - 2] [i_11] [i_10] [i_9] [i_8])))))), (((int) arr_18 [i_10] [i_10 + 2] [i_14])))))));
                            var_33 = ((/* implicit */long long int) min((((/* implicit */unsigned int) ((((8273084394925296342LL) < (((/* implicit */long long int) ((/* implicit */int) (unsigned char)164))))) ? (((/* implicit */int) ((((/* implicit */_Bool) -7797083558972582293LL)) || (((/* implicit */_Bool) (short)-12950))))) : (((/* implicit */int) ((short) 900490535)))))), (((((/* implicit */unsigned int) ((((/* implicit */int) arr_10 [i_8] [i_8 - 1] [i_8] [i_8 - 1] [i_8])) | (((/* implicit */int) (unsigned short)23))))) + ((-(var_1)))))));
                        }
                    }
                } 
            } 
        } 
    }
    /* LoopNest 2 */
    for (long long int i_15 = 0; i_15 < 20; i_15 += 2) 
    {
        for (long long int i_16 = 0; i_16 < 20; i_16 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (int i_17 = 0; i_17 < 20; i_17 += 3) 
                {
                    var_34 = ((/* implicit */short) min((var_34), (((/* implicit */short) arr_42 [i_17] [i_16]))));
                    var_35 |= ((/* implicit */short) (_Bool)1);
                    var_36 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)76)) ? (((/* implicit */long long int) arr_41 [i_15] [i_16])) : (var_3)));
                    var_37 ^= ((/* implicit */signed char) -5737420144928863852LL);
                }
                for (int i_18 = 1; i_18 < 18; i_18 += 3) 
                {
                    var_38 &= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) max((((int) var_9)), (((/* implicit */int) ((unsigned short) var_1)))))) ^ (arr_47 [i_16] [i_16] [i_16] [i_16])));
                    var_39 = ((/* implicit */unsigned int) max((var_39), (((/* implicit */unsigned int) (~(max((((arr_45 [i_15]) | (arr_48 [i_15] [i_16] [i_18]))), (var_11))))))));
                    var_40 ^= ((/* implicit */signed char) (_Bool)1);
                }
                /* LoopNest 2 */
                for (signed char i_19 = 0; i_19 < 20; i_19 += 3) 
                {
                    for (short i_20 = 0; i_20 < 20; i_20 += 4) 
                    {
                        {
                            var_41 -= ((/* implicit */unsigned long long int) min((((arr_39 [i_16]) / (min((arr_45 [i_15]), (((/* implicit */int) arr_53 [i_15] [i_16] [i_16] [i_15])))))), (((((/* implicit */int) ((_Bool) 5156168777620158678ULL))) / (((/* implicit */int) min((var_0), (((/* implicit */short) var_6)))))))));
                            var_42 &= ((/* implicit */signed char) arr_45 [i_15]);
                            var_43 &= ((/* implicit */short) (unsigned char)92);
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                            {
                                var_44 = ((/* implicit */short) (~(arr_47 [i_15] [i_19] [i_20] [i_21])));
                                var_45 ^= ((/* implicit */signed char) 13290575296089392938ULL);
                                var_46 = ((/* implicit */short) ((((/* implicit */_Bool) arr_43 [i_15])) ? (((unsigned long long int) var_5)) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
                            }
                            var_47 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 5156168777620158678ULL)) ? (((/* implicit */int) arr_51 [i_20] [i_19] [i_16])) : (arr_48 [i_15] [i_15] [i_15])))) ? (((((((/* implicit */_Bool) 2886249979U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) >> (((/* implicit */int) (!(arr_56 [i_15] [i_15] [i_15] [i_20] [18ULL])))))) : (((/* implicit */int) ((unsigned char) ((((/* implicit */int) arr_49 [i_20] [i_19] [i_15])) >> (((/* implicit */int) (_Bool)1))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
