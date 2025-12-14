/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184932
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184932 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184932
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
    var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (var_7) : (((/* implicit */unsigned long long int) 7267280572017217138LL))))) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))) ? (((/* implicit */int) (signed char)-114)) : (((/* implicit */int) var_6))));
    var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(min((((/* implicit */unsigned int) (_Bool)1)), (3380886297U)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)115)) || (((/* implicit */_Bool) -1548848829714520273LL)))))) : (((unsigned long long int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_7)))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        var_13 *= ((/* implicit */unsigned short) (signed char)14);
        var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) (unsigned char)44))));
        var_15 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) arr_0 [i_0]))) ? (arr_0 [i_0]) : ((-(-7093106896308736579LL)))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((var_1), (((/* implicit */long long int) arr_1 [i_0] [i_0]))))))))) : (((((/* implicit */_Bool) (signed char)69)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (arr_0 [i_0])))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_1 = 2; i_1 < 23; i_1 += 3) 
        {
            arr_4 [i_0] [i_1 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)114)) ? (6569008136705466113LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)148)))));
            /* LoopSeq 3 */
            for (unsigned short i_2 = 3; i_2 < 23; i_2 += 4) 
            {
                /* LoopNest 2 */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    for (unsigned long long int i_4 = 3; i_4 < 23; i_4 += 2) 
                    {
                        {
                            arr_12 [i_0] [i_0] [i_2] [i_0] [i_4] = ((/* implicit */unsigned short) arr_5 [i_1 + 1] [i_3]);
                            var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) 0LL)) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned char)157)) : (((/* implicit */int) (_Bool)1)))) : ((~(((/* implicit */int) (short)30452))))));
                            var_17 |= var_1;
                            arr_13 [i_0] [i_1 - 1] [i_0] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) ((unsigned int) (_Bool)0)))));
                        }
                    } 
                } 
                arr_14 [7LL] [i_1] [i_0] = ((/* implicit */signed char) (unsigned short)14243);
                var_18 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) 9223372036854775807LL)) : (12064816260254688420ULL)))));
                /* LoopNest 2 */
                for (signed char i_5 = 0; i_5 < 24; i_5 += 2) 
                {
                    for (long long int i_6 = 0; i_6 < 24; i_6 += 2) 
                    {
                        {
                            var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) 2104778620U)) ? (((/* implicit */unsigned long long int) arr_0 [i_0])) : (3943852126562370096ULL)));
                            var_20 -= ((/* implicit */_Bool) 914080999U);
                            arr_21 [15] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (-(-241311029)))) ? (arr_20 [i_0] [2U] [i_2] [i_2 - 1] [i_5] [i_6] [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))));
                            var_21 = ((/* implicit */long long int) var_3);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_7 = 2; i_7 < 23; i_7 += 3) 
                {
                    for (signed char i_8 = 1; i_8 < 22; i_8 += 2) 
                    {
                        {
                            arr_28 [i_8] [i_7 + 1] [i_0] [i_0] [2U] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (short)-21718)) ? (-7093106896308736579LL) : (((/* implicit */long long int) arr_20 [i_2 - 2] [i_1 - 1] [i_2] [i_1 - 2] [i_8] [i_8 + 1] [i_7 + 1]))));
                            var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_19 [i_8 - 1] [i_0] [i_0] [20]))))) ? (((/* implicit */int) ((((/* implicit */int) arr_18 [i_0] [i_1] [i_2 - 2] [i_0] [i_8 - 1])) != (((/* implicit */int) arr_16 [i_0] [i_7]))))) : (((/* implicit */int) var_5))));
                            var_23 = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_0))))) ? (var_10) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_8 [i_0])))))));
                            arr_29 [i_0] [i_8] = ((/* implicit */_Bool) (unsigned short)15553);
                        }
                    } 
                } 
            }
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned short i_10 = 0; i_10 < 24; i_10 += 4) 
                {
                    for (int i_11 = 1; i_11 < 21; i_11 += 2) 
                    {
                        {
                            var_24 = ((/* implicit */_Bool) (+(arr_11 [i_0] [i_1 + 1] [i_11 + 1] [i_11 - 1] [i_11 - 1])));
                            arr_37 [i_0] [(signed char)4] [i_0] [i_0] [i_0] [(_Bool)1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(arr_23 [i_0])))) ? (((int) (signed char)-114)) : (((/* implicit */int) (unsigned char)142))));
                        }
                    } 
                } 
                var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)100)) ? (((/* implicit */int) (short)17191)) : (((/* implicit */int) arr_18 [i_1] [i_1 - 1] [i_1 - 1] [0U] [16])))))));
            }
            for (short i_12 = 0; i_12 < 24; i_12 += 4) 
            {
                var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) (!(((/* implicit */_Bool) (-(11661561275062953349ULL)))))))));
                arr_40 [i_0] [6] [i_0] = 10334611658300377831ULL;
            }
            /* LoopNest 2 */
            for (unsigned long long int i_13 = 0; i_13 < 24; i_13 += 4) 
            {
                for (unsigned short i_14 = 4; i_14 < 21; i_14 += 1) 
                {
                    {
                        var_27 ^= ((/* implicit */short) (-(7494584323204821036ULL)));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_15 = 1; i_15 < 21; i_15 += 3) 
                        {
                            var_28 = ((/* implicit */unsigned short) (short)-32764);
                            var_29 = ((/* implicit */int) 12535552815429943884ULL);
                            var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(2104778604U)))) ? (-756194702) : (((/* implicit */int) arr_25 [i_1 - 1] [i_0] [i_15] [i_15 + 1]))));
                            var_31 *= arr_9 [i_14 - 4] [i_15] [i_13] [i_15] [i_15];
                            arr_48 [i_0] [i_0] = ((/* implicit */signed char) 0ULL);
                        }
                    }
                } 
            } 
        }
        /* LoopNest 2 */
        for (long long int i_16 = 0; i_16 < 24; i_16 += 1) 
        {
            for (short i_17 = 2; i_17 < 23; i_17 += 2) 
            {
                {
                    var_32 = var_10;
                    var_33 = ((/* implicit */short) arr_45 [i_0] [i_16] [(signed char)16] [i_17 - 1]);
                    /* LoopSeq 3 */
                    for (long long int i_18 = 0; i_18 < 24; i_18 += 4) /* same iter space */
                    {
                        var_34 &= ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_32 [(signed char)8] [i_17 + 1] [i_17 + 1] [i_18] [i_17] [i_17 + 1]), (((/* implicit */unsigned short) arr_16 [i_0] [i_18]))))) ? (arr_56 [i_17] [i_17 + 1] [i_17 - 2] [i_17 - 2]) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_30 [i_17])) ? (arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) - (((((/* implicit */_Bool) -1530121355)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_18] [i_17] [i_17] [i_0] [i_0]))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))));
                        var_35 = ((/* implicit */signed char) max((var_35), (((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) 5911191258279607732ULL))) ? ((-(15644426590666790840ULL))) : (((/* implicit */unsigned long long int) 2190188676U)))))));
                        var_36 |= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_32 [i_17 - 2] [i_17] [i_17] [i_17] [i_18] [i_18])) ? (((((/* implicit */int) (short)0)) >> (((var_1) + (6100752905200748854LL))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) arr_18 [i_0] [i_16] [(short)22] [i_17] [i_17 - 2])) : (((/* implicit */int) (unsigned char)105))))) ? ((+(((/* implicit */int) (short)-11893)))) : ((-(arr_17 [i_0] [i_18] [i_0] [18U] [i_16] [(signed char)15])))))));
                        arr_58 [i_0] = ((/* implicit */unsigned long long int) arr_43 [i_0] [i_0] [i_0] [i_0]);
                    }
                    for (long long int i_19 = 0; i_19 < 24; i_19 += 4) /* same iter space */
                    {
                        var_37 &= ((/* implicit */int) (-(((((/* implicit */_Bool) ((69201114592457426ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_43 [i_0] [i_16] [i_19] [(signed char)16])))))) ? (((((/* implicit */_Bool) 14659461160888094520ULL)) ? (arr_33 [i_17]) : (((/* implicit */long long int) ((/* implicit */int) (short)22952))))) : (((/* implicit */long long int) -441749810))))));
                        arr_61 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)53999)) ? ((+(((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) : (4287027367U))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))));
                    }
                    for (long long int i_20 = 0; i_20 < 24; i_20 += 4) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (signed char i_21 = 0; i_21 < 24; i_21 += 4) 
                        {
                            arr_67 [i_0] [i_16] [i_0] [i_16] [i_16] [i_16] = ((/* implicit */unsigned char) min((((/* implicit */int) arr_38 [i_0])), (arr_17 [i_0] [i_16] [1] [1LL] [1LL] [i_20])));
                            var_38 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 9702920825450394054ULL)) && (((/* implicit */_Bool) (unsigned char)110))));
                        }
                        arr_68 [4] [i_0] [i_0] [i_20] = ((/* implicit */signed char) var_9);
                    }
                }
            } 
        } 
    }
}
