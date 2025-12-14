/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108804
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
    for (short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 20; i_1 += 4) 
        {
            for (unsigned char i_2 = 3; i_2 < 18; i_2 += 4) 
            {
                {
                    var_11 = ((((int) arr_8 [i_1 - 1] [i_2 + 3] [i_0])) << (((((int) ((((/* implicit */_Bool) 7533494922749240320LL)) ? (((/* implicit */int) (signed char)115)) : (((/* implicit */int) (signed char)-99))))) - (105))));
                    arr_10 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) max((var_7), (((/* implicit */short) (_Bool)0))))) : ((-(((/* implicit */int) var_8))))))) ? ((+(max((((/* implicit */unsigned long long int) var_0)), (arr_0 [i_0]))))) : (((/* implicit */unsigned long long int) var_3))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_3 = 1; i_3 < 20; i_3 += 3) 
    {
        var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [(short)12])) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (((((/* implicit */_Bool) arr_3 [14LL])) ? (var_5) : (var_5)))));
        /* LoopSeq 1 */
        for (signed char i_4 = 0; i_4 < 21; i_4 += 1) 
        {
            arr_16 [i_4] = ((/* implicit */unsigned short) ((((var_3) + (2147483647))) << (((arr_0 [18ULL]) - (4847831978317770263ULL)))));
            arr_17 [i_4] [i_3 + 1] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) 230032019U)) ? (((/* implicit */int) arr_9 [i_3 + 1])) : (((/* implicit */int) arr_9 [i_3 - 1]))));
        }
    }
    /* LoopNest 2 */
    for (long long int i_5 = 1; i_5 < 23; i_5 += 1) 
    {
        for (unsigned short i_6 = 2; i_6 < 22; i_6 += 2) 
        {
            {
                var_13 ^= ((/* implicit */unsigned char) (((~(min((((/* implicit */long long int) var_0)), (var_5))))) != (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_18 [i_6])) : (((/* implicit */int) var_2)))))))));
                var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 1319100122U)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_4)))) : (min((((/* implicit */unsigned int) min((((/* implicit */unsigned short) (signed char)-97)), ((unsigned short)6107)))), (((((/* implicit */_Bool) (unsigned short)58259)) ? (4294967293U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-93))))))))))));
                var_15 = ((/* implicit */unsigned short) ((short) (signed char)110));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (short i_7 = 0; i_7 < 19; i_7 += 1) 
    {
        arr_27 [i_7] = ((/* implicit */signed char) (-(((/* implicit */int) ((unsigned short) arr_6 [i_7] [(unsigned short)8] [i_7])))));
        var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_9))) / (677677165951771562LL)))) ? (((/* implicit */unsigned int) (~(((arr_2 [12LL]) >> (((var_6) - (6477439411692524438ULL)))))))) : (((unsigned int) 15982698686997992457ULL))));
        /* LoopNest 2 */
        for (unsigned char i_8 = 0; i_8 < 19; i_8 += 4) 
        {
            for (long long int i_9 = 0; i_9 < 19; i_9 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 19; i_10 += 4) 
                    {
                        var_17 *= ((/* implicit */unsigned int) (~(((/* implicit */int) arr_14 [i_7] [i_8] [i_9]))));
                        var_18 *= ((/* implicit */short) arr_26 [i_9]);
                    }
                    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [i_9] [i_8] [i_7])) ? (arr_31 [i_9] [i_8] [i_7]) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))) ? ((-(((unsigned long long int) (signed char)37)))) : (((((/* implicit */_Bool) ((unsigned int) arr_29 [(unsigned short)14]))) ? (((((/* implicit */_Bool) (short)-19818)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)17927))) : (15650277292904627308ULL))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_1)))))))));
                }
            } 
        } 
    }
    for (short i_11 = 1; i_11 < 15; i_11 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned short i_12 = 1; i_12 < 14; i_12 += 2) 
        {
            for (short i_13 = 2; i_13 < 17; i_13 += 4) 
            {
                for (unsigned short i_14 = 2; i_14 < 15; i_14 += 3) 
                {
                    {
                        var_20 = ((/* implicit */short) arr_11 [(unsigned short)12] [i_12]);
                        var_21 &= ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) ((int) arr_6 [i_14 + 1] [i_13] [i_11 - 1])))))) > (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-110))))) >= (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_1)))))))));
                        var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)27443)) ? (((/* implicit */int) (signed char)-119)) : (((/* implicit */int) (signed char)-110))))) ? (((/* implicit */int) arr_3 [i_13])) : (((/* implicit */int) var_0))))), (((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_38 [(short)2] [i_12] [i_12]))) / (2464045386711559144ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_35 [i_12])))))))))));
                        arr_45 [i_14 - 1] [i_11] [i_12] [(unsigned short)10] [i_11] [i_11 + 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) (unsigned char)210)) ? (var_10) : (((/* implicit */long long int) arr_31 [i_11 + 1] [i_11 + 1] [i_13]))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_6)))) : (var_5)));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_15 = 2; i_15 < 17; i_15 += 4) 
        {
            for (short i_16 = 0; i_16 < 18; i_16 += 4) 
            {
                {
                    var_23 = var_4;
                    var_24 = ((/* implicit */unsigned char) var_4);
                    var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-101)) ? (((((/* implicit */_Bool) 131113170U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-38))) : ((-(15982698686997992453ULL))))) : (((/* implicit */unsigned long long int) (+((-(5699117415887117824LL))))))));
                    var_26 ^= (+(((((/* implicit */_Bool) (~(arr_48 [i_15] [i_15])))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-10)), ((unsigned char)21)))))));
                    arr_52 [i_15] |= ((/* implicit */short) (!(((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) < (arr_6 [i_15 - 1] [i_15] [14LL])))));
                }
            } 
        } 
    }
    for (short i_17 = 1; i_17 < 17; i_17 += 3) 
    {
        var_27 |= ((/* implicit */short) ((((((/* implicit */_Bool) (unsigned short)27439)) && (((/* implicit */_Bool) arr_1 [(short)8])))) ? ((+(((/* implicit */int) ((_Bool) arr_20 [(unsigned char)12] [(unsigned char)12]))))) : (((/* implicit */int) ((unsigned short) (unsigned char)156)))));
        /* LoopSeq 1 */
        for (unsigned char i_18 = 1; i_18 < 18; i_18 += 4) 
        {
            var_28 = ((/* implicit */unsigned long long int) var_10);
            /* LoopSeq 1 */
            for (unsigned char i_19 = 3; i_19 < 19; i_19 += 4) 
            {
                /* LoopSeq 2 */
                for (long long int i_20 = 0; i_20 < 20; i_20 += 4) /* same iter space */
                {
                    arr_66 [i_17] [i_18] [(_Bool)1] [6ULL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 7533494922749240328LL)) ? (((((/* implicit */_Bool) (unsigned char)99)) ? (((/* implicit */long long int) arr_2 [i_17])) : (7533494922749240328LL))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)99)))))) ? (min((var_4), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) arr_57 [i_18] [i_19] [i_17])) : (var_5))))) : (((/* implicit */long long int) max((arr_59 [i_17] [i_19 - 1]), (arr_59 [i_17] [i_19 - 3]))))));
                    arr_67 [i_17] [i_19] [i_17] = ((/* implicit */short) arr_60 [i_17] [i_17] [i_17]);
                    /* LoopSeq 4 */
                    for (short i_21 = 1; i_21 < 19; i_21 += 4) 
                    {
                        var_29 *= ((/* implicit */signed char) ((unsigned int) (+((+(-4231977624510783327LL))))));
                        arr_70 [i_17] [i_17] = ((/* implicit */unsigned short) var_9);
                        var_30 ^= ((short) (unsigned char)74);
                        var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(var_5)))) ? (((/* implicit */int) min((((unsigned short) var_3)), (((/* implicit */unsigned short) (short)-16061))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((long long int) 677677165951771574LL))) && (((/* implicit */_Bool) ((var_8) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) arr_53 [i_17])))))))))));
                    }
                    for (long long int i_22 = 2; i_22 < 17; i_22 += 4) 
                    {
                        arr_73 [i_17] [i_18] [i_19 - 1] [i_17] [i_18] [i_22] [i_22 + 2] = ((/* implicit */unsigned char) (short)-16073);
                        arr_74 [i_19] [i_17] [i_19] = ((/* implicit */signed char) ((short) (-(((/* implicit */int) arr_1 [i_17])))));
                        var_32 ^= ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) arr_59 [i_22] [i_17 + 2])) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))));
                    }
                    for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                    {
                        var_33 = ((/* implicit */unsigned short) min((var_33), (((/* implicit */unsigned short) (-(((/* implicit */int) min((arr_13 [i_17 + 3] [(unsigned short)19] [i_18 + 2]), (arr_13 [i_17 - 1] [i_17] [i_18 + 2])))))))));
                        var_34 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_8)) | (((/* implicit */int) ((unsigned char) var_9)))))) || (((/* implicit */_Bool) (+(((var_8) ? (((/* implicit */int) (unsigned short)11096)) : (((/* implicit */int) var_0)))))))));
                        var_35 -= ((/* implicit */unsigned char) ((unsigned int) arr_13 [i_17 + 2] [i_17 + 3] [i_18 + 1]));
                    }
                    for (unsigned short i_24 = 4; i_24 < 19; i_24 += 3) 
                    {
                        var_36 = min((max((arr_2 [i_17]), (arr_2 [i_17]))), (((/* implicit */int) ((unsigned short) -677677165951771565LL))));
                        var_37 = ((/* implicit */int) var_7);
                        var_38 = ((/* implicit */signed char) arr_5 [i_17] [i_20] [i_17]);
                        arr_81 [i_17] [i_17] [(unsigned short)5] [i_20] [i_24] [i_24 - 1] = (i_17 % 2 == 0) ? (((/* implicit */unsigned short) ((((arr_60 [i_17] [i_17] [i_17]) + (9223372036854775807LL))) >> (((((/* implicit */int) (short)-29697)) + (29698)))))) : (((/* implicit */unsigned short) ((((((arr_60 [i_17] [i_17] [i_17]) - (9223372036854775807LL))) + (9223372036854775807LL))) >> (((((/* implicit */int) (short)-29697)) + (29698))))));
                        var_39 = ((/* implicit */unsigned long long int) min((var_39), (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) -7533494922749240337LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)2047))) : (max((((/* implicit */long long int) (unsigned short)33004)), (8342414538271653501LL))))), (((/* implicit */long long int) (signed char)-113)))))));
                    }
                }
                for (long long int i_25 = 0; i_25 < 20; i_25 += 4) /* same iter space */
                {
                    var_40 &= ((/* implicit */short) ((unsigned short) (-(2035393234))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_26 = 1; i_26 < 18; i_26 += 3) 
                    {
                        var_41 = ((/* implicit */unsigned int) ((unsigned short) (-(var_4))));
                        var_42 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (-677677165951771571LL)))) * (((unsigned long long int) var_4))));
                        arr_88 [i_17] [i_17] [i_17] [i_25] [i_25] [i_17] = ((/* implicit */short) -495790115);
                    }
                    var_43 &= ((/* implicit */long long int) arr_5 [i_25] [i_19] [i_25]);
                    var_44 *= ((/* implicit */unsigned long long int) ((unsigned short) var_10));
                }
                /* LoopNest 2 */
                for (unsigned short i_27 = 0; i_27 < 20; i_27 += 4) 
                {
                    for (unsigned int i_28 = 4; i_28 < 19; i_28 += 4) 
                    {
                        {
                            arr_94 [i_17] = ((/* implicit */int) (+(3123112608655207696LL)));
                            var_45 = ((unsigned short) ((((/* implicit */_Bool) var_5)) ? (arr_0 [i_17]) : (arr_0 [i_17])));
                        }
                    } 
                } 
                var_46 = ((/* implicit */short) ((long long int) ((((/* implicit */_Bool) arr_90 [i_17 + 1] [i_18] [i_17] [i_17 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_90 [i_17 + 2] [i_17] [i_17] [i_17 + 2]))) : (var_10))));
                var_47 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_86 [i_19 - 2] [i_18 + 1])) ? (((/* implicit */int) arr_86 [i_19 + 1] [i_18 + 1])) : (((/* implicit */int) arr_86 [i_19 + 1] [i_18 + 2]))))) ? (((((/* implicit */_Bool) arr_86 [i_19 - 1] [i_18 + 2])) ? (((/* implicit */int) arr_86 [i_19 - 2] [i_18 + 2])) : (((/* implicit */int) var_2)))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_86 [i_19 + 1] [i_18 + 2])) : (((/* implicit */int) arr_86 [i_19 - 2] [i_18 + 1]))))));
            }
            arr_95 [i_17] [i_17] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((11596271352232329521ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (short)16081)))))))));
            var_48 = ((/* implicit */unsigned long long int) max((var_48), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) arr_78 [6LL] [i_17 + 3]))) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_18 + 2] [16] [i_17 - 1])) && (((/* implicit */_Bool) min((var_10), (var_5)))))))))))));
        }
        var_49 *= ((/* implicit */unsigned int) ((short) (-(((/* implicit */int) var_8)))));
        arr_96 [i_17] = ((/* implicit */short) ((long long int) arr_79 [i_17 + 1] [i_17] [i_17] [i_17] [i_17 - 1] [(short)16] [i_17 - 1]));
    }
}
