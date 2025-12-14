/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182513
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182513 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182513
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
    var_10 ^= ((/* implicit */short) -609874437);
    var_11 = ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        var_12 = ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))));
        var_13 &= ((/* implicit */short) ((((/* implicit */_Bool) (~(-1754891798)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1496120566166071062LL)) ? (((/* implicit */unsigned long long int) -7537613620541703900LL)) : (13704178340350454761ULL)))) ? (((/* implicit */long long int) ((((/* implicit */int) (short)-16462)) * (((/* implicit */int) (short)-29566))))) : (max((-3513534991277203539LL), (((/* implicit */long long int) arr_2 [i_0]))))))) : (((((/* implicit */_Bool) (((_Bool)1) ? (961046473U) : (((/* implicit */unsigned int) var_2))))) ? (((((/* implicit */_Bool) (short)4427)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))))) : (((/* implicit */unsigned long long int) (+(1346062499))))))));
        /* LoopSeq 3 */
        for (short i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            /* LoopNest 3 */
            for (unsigned int i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                for (unsigned short i_3 = 0; i_3 < 15; i_3 += 4) 
                {
                    for (unsigned short i_4 = 0; i_4 < 15; i_4 += 3) 
                    {
                        {
                            arr_15 [i_1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 573999355))));
                            var_14 = max((((/* implicit */long long int) (short)-14109)), (-9223372036854775787LL));
                        }
                    } 
                } 
            } 
            var_15 &= ((/* implicit */unsigned int) arr_13 [i_0]);
            var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_13 [i_0]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)8192)))))) ? ((+(arr_13 [i_0]))) : (((((/* implicit */_Bool) (short)18853)) ? (arr_13 [i_0]) : (((/* implicit */unsigned long long int) -8002866482985061743LL))))));
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 15; i_5 += 2) 
        {
            var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [(unsigned short)9])) ? (((/* implicit */unsigned long long int) 8587894299705330347LL)) : (((((/* implicit */_Bool) (short)-24691)) ? (7149209727379796999ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)28739)))))));
            /* LoopNest 2 */
            for (short i_6 = 1; i_6 < 12; i_6 += 2) 
            {
                for (unsigned short i_7 = 0; i_7 < 15; i_7 += 4) 
                {
                    {
                        arr_23 [i_6] [i_5] [i_0] = ((/* implicit */unsigned char) var_9);
                        var_18 = ((/* implicit */_Bool) (signed char)26);
                        arr_24 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_22 [i_6 + 1] [i_5] [i_6])) ? (((/* implicit */int) arr_22 [i_6 - 1] [i_6 - 1] [i_6 - 1])) : (((/* implicit */int) arr_22 [i_6 + 2] [(unsigned short)3] [(unsigned short)3]))));
                        var_19 = ((/* implicit */int) -981018669493301150LL);
                        var_20 ^= ((/* implicit */int) 12381396906528512930ULL);
                    }
                } 
            } 
            arr_25 [i_0] [i_0] [(_Bool)1] = ((/* implicit */unsigned int) (unsigned short)36188);
        }
        /* vectorizable */
        for (long long int i_8 = 0; i_8 < 15; i_8 += 2) 
        {
            var_21 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned short)15061)) : (((/* implicit */int) (unsigned short)30268))))) & (var_4)));
            /* LoopNest 3 */
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    for (int i_11 = 3; i_11 < 13; i_11 += 2) 
                    {
                        {
                            arr_35 [i_0] [(signed char)13] [i_9] [(signed char)13] [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) arr_33 [i_11] [i_11 - 2] [i_9] [i_11 - 1] [i_11] [i_11])) : (((/* implicit */int) (unsigned short)22799))));
                            var_22 = ((/* implicit */short) (+(((/* implicit */int) arr_34 [i_0] [i_11 - 1] [i_9]))));
                            arr_36 [i_0] [i_8] [i_0] [i_10] [i_11] [i_8] &= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_30 [i_11 - 1] [i_8])) ? (((/* implicit */int) arr_22 [i_11 - 3] [i_11 - 1] [i_11 + 1])) : (((/* implicit */int) arr_5 [i_11 + 2] [i_9]))));
                        }
                    } 
                } 
            } 
            arr_37 [i_0] [i_0] [11LL] = ((/* implicit */_Bool) arr_30 [i_0] [i_8]);
        }
        /* LoopNest 3 */
        for (unsigned long long int i_12 = 1; i_12 < 14; i_12 += 4) 
        {
            for (long long int i_13 = 1; i_13 < 13; i_13 += 4) 
            {
                for (signed char i_14 = 1; i_14 < 11; i_14 += 2) 
                {
                    {
                        arr_45 [i_0] [i_12] = ((/* implicit */_Bool) min((((((/* implicit */int) arr_5 [i_13 + 1] [i_12 - 1])) & (((/* implicit */int) arr_5 [i_13 - 1] [i_12 - 1])))), (((((/* implicit */_Bool) (unsigned short)4095)) ? (((/* implicit */int) arr_2 [i_13 + 2])) : (((/* implicit */int) (short)254))))));
                        /* LoopSeq 3 */
                        for (short i_15 = 0; i_15 < 15; i_15 += 1) 
                        {
                            var_23 &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [(short)13] [i_0] [i_13 + 2])) * (((/* implicit */int) arr_4 [i_0] [i_0] [i_13 - 1]))))) ? ((+(2222647851U))) : (((/* implicit */unsigned int) ((/* implicit */int) max((var_8), (((/* implicit */short) arr_4 [i_0] [i_12 + 1] [i_13 - 1]))))))));
                            var_24 &= ((/* implicit */unsigned short) max((((((/* implicit */_Bool) min((var_7), (((/* implicit */short) (_Bool)1))))) ? (((4508940479260353500ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)181))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))), (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_13 [i_0])) ? (((/* implicit */int) var_8)) : (var_0))))))));
                            arr_49 [12] [i_14 - 1] [i_13] [i_12] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) -4601216021119863699LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-20389))))));
                            var_25 += ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-5564))))) || (((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)50478))) : (8589934591LL)))))));
                        }
                        for (short i_16 = 0; i_16 < 15; i_16 += 2) 
                        {
                            arr_54 [i_0] [i_12] [(_Bool)1] [i_14] [i_14 - 1] [i_16] = ((/* implicit */long long int) min((((((/* implicit */unsigned int) ((/* implicit */int) (short)2572))) - (arr_41 [i_13 - 1] [i_12] [i_13 + 1]))), ((~(arr_41 [i_13 + 2] [i_13 + 2] [i_13])))));
                            var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)0)) ? (-6313024186491739489LL) : (((/* implicit */long long int) ((/* implicit */int) (short)18799))))))));
                        }
                        for (unsigned int i_17 = 0; i_17 < 15; i_17 += 4) 
                        {
                            var_27 ^= ((/* implicit */unsigned short) max((max((max((arr_13 [i_14]), (((/* implicit */unsigned long long int) (signed char)65)))), (((/* implicit */unsigned long long int) (signed char)-60)))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) max((((/* implicit */unsigned short) var_1)), ((unsigned short)13340)))))))));
                            var_28 ^= ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(var_2)))) ? (((4370737634549006943LL) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned short)50875))))) : (max((2513843668523043259LL), (((/* implicit */long long int) 7U))))))), (17631631506002035840ULL)));
                        }
                        var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) max((((/* implicit */int) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) var_2)) : (4294967291U))) != (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)3929))))))))), ((-(((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) (short)13247))))))))))));
                    }
                } 
            } 
        } 
    }
    for (short i_18 = 2; i_18 < 11; i_18 += 2) 
    {
        var_30 = ((/* implicit */short) (~(((/* implicit */int) (unsigned short)29763))));
        /* LoopNest 2 */
        for (short i_19 = 0; i_19 < 13; i_19 += 2) 
        {
            for (long long int i_20 = 0; i_20 < 13; i_20 += 4) 
            {
                {
                    arr_65 [i_18] [7] [i_19] [i_20] = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)19)) ? (((/* implicit */int) arr_39 [i_18] [14ULL] [i_20])) : ((+(((/* implicit */int) var_8))))));
                    /* LoopSeq 1 */
                    for (int i_21 = 0; i_21 < 13; i_21 += 3) 
                    {
                        var_31 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)210)) ? (-6639500038822154555LL) : (((/* implicit */long long int) 10U))));
                        var_32 = ((/* implicit */long long int) (-(876883961)));
                        var_33 = ((/* implicit */unsigned char) ((((((/* implicit */int) (unsigned short)43312)) < (((/* implicit */int) arr_39 [i_18] [i_18 - 2] [(short)9])))) ? (((((/* implicit */_Bool) (-(3949523373U)))) ? ((~(((/* implicit */int) arr_32 [i_20] [i_19] [i_20] [i_19] [i_19] [i_18])))) : (((/* implicit */int) arr_46 [i_18 + 2] [(unsigned short)13] [i_18])))) : (max(((+(((/* implicit */int) (unsigned char)0)))), ((((_Bool)1) ? (((/* implicit */int) arr_64 [i_21] [6U] [9U] [i_18])) : (arr_58 [i_18] [(unsigned char)11])))))));
                    }
                    arr_68 [i_18] [i_18] [i_19] [i_18] = ((/* implicit */unsigned int) min((min((7686401300114702748LL), (((/* implicit */long long int) arr_50 [i_18] [i_18] [i_18 - 2] [i_20] [i_20] [i_20] [i_20])))), (((/* implicit */long long int) (+(((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_46 [i_18 + 2] [i_18 + 2] [i_18 + 2]))) : (var_4))))))));
                }
            } 
        } 
        var_34 ^= ((/* implicit */short) ((((/* implicit */_Bool) arr_28 [i_18 + 1] [i_18] [i_18])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_18] [i_18 - 2] [3LL]))) : (((((/* implicit */_Bool) (signed char)-32)) ? (998020530U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)10342)))))));
    }
    for (int i_22 = 0; i_22 < 16; i_22 += 4) 
    {
        var_35 = max((max((((/* implicit */unsigned long long int) var_8)), (var_5))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 2856535127U)) ? (5897295098535094156ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)65)))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_71 [(unsigned short)11] [i_22]))))) : (arr_69 [i_22]))));
        arr_72 [i_22] [i_22] = var_3;
        arr_73 [i_22] = ((/* implicit */short) var_0);
    }
}
