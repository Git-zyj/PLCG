/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177110
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177110 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177110
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
    var_15 = ((/* implicit */signed char) var_4);
    var_16 = ((/* implicit */short) (-(((/* implicit */int) var_2))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        for (unsigned char i_1 = 2; i_1 < 12; i_1 += 4) 
        {
            {
                var_17 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_0 [i_1 + 2])) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) ^ (((/* implicit */unsigned long long int) 2031616U))))) ? (((/* implicit */long long int) ((4292935683U) << (((/* implicit */int) ((-4978520709788087029LL) <= (((/* implicit */long long int) ((/* implicit */int) (signed char)114))))))))) : (max((((((/* implicit */_Bool) 5878458582933190979ULL)) ? (-1578193235122355408LL) : (((/* implicit */long long int) (-2147483647 - 1))))), (((/* implicit */long long int) arr_2 [i_0 - 1] [i_0 - 1] [i_0]))))));
                var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) (((+(((/* implicit */int) arr_1 [11] [i_0 - 1])))) != (((/* implicit */int) arr_1 [i_0 + 1] [i_1])))))));
                /* LoopSeq 1 */
                for (int i_2 = 0; i_2 < 16; i_2 += 2) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 16; i_4 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-26)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (unsigned short)65528))));
                                var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) (+(18100873274765360556ULL)))) ? (((unsigned long long int) arr_3 [i_0 - 1] [i_0 + 1])) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_5 [i_1 + 3] [i_0 + 2] [i_2])))))))));
                                var_21 = ((/* implicit */_Bool) (~(((((/* implicit */int) arr_1 [i_0 + 1] [i_0 + 1])) ^ (((/* implicit */int) (signed char)-110))))));
                                var_22 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_4])) ? (4292935707U) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))) ? (4731771375675963868LL) : (((/* implicit */long long int) ((/* implicit */int) max((arr_6 [14] [14]), ((unsigned char)192))))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (short i_5 = 0; i_5 < 16; i_5 += 3) /* same iter space */
                    {
                        var_23 ^= ((/* implicit */unsigned char) arr_5 [i_2] [i_2] [i_2]);
                        var_24 &= ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) ((short) (signed char)-127)))))) ? (-394364816) : (((/* implicit */int) max((arr_0 [i_0 + 1]), (((/* implicit */signed char) ((arr_9 [i_0] [(signed char)7] [i_1 - 1] [(unsigned short)13] [(signed char)7]) < (((/* implicit */unsigned int) ((/* implicit */int) (signed char)20)))))))))));
                        var_25 = ((/* implicit */int) min((((/* implicit */unsigned long long int) arr_6 [i_5] [i_2])), (((((/* implicit */_Bool) var_3)) ? (arr_5 [i_0 + 2] [i_2] [i_5]) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) ^ (-4978520709788087024LL))))))));
                        var_26 = ((/* implicit */unsigned int) var_6);
                    }
                    for (short i_6 = 0; i_6 < 16; i_6 += 3) /* same iter space */
                    {
                        arr_18 [i_0 + 2] [i_0 + 2] [i_2] [i_2] = ((/* implicit */signed char) 2031613U);
                        var_27 ^= ((/* implicit */unsigned short) arr_10 [i_0 + 1]);
                        arr_19 [i_0] [i_1 + 4] [i_2] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~((((_Bool)1) ? (arr_5 [i_0 + 2] [i_0 + 2] [i_0 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_2] [i_6])))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-26))) : (arr_9 [(unsigned char)15] [i_6] [i_2] [i_2] [i_0 + 1])));
                    }
                    /* LoopSeq 3 */
                    for (unsigned char i_7 = 2; i_7 < 14; i_7 += 4) 
                    {
                        var_28 = ((/* implicit */signed char) arr_10 [i_7 + 2]);
                        arr_24 [i_0 + 1] [i_0 + 1] [(unsigned short)9] [i_2] [(signed char)15] [i_7 + 2] = ((/* implicit */unsigned char) arr_2 [i_0] [i_0] [i_0]);
                        var_29 ^= (~(((/* implicit */int) ((unsigned char) arr_9 [i_0 - 1] [i_0 + 2] [i_0] [(unsigned char)2] [i_1 - 1]))));
                        var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 67106816)) ? (((/* implicit */int) (signed char)-100)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (unsigned char)248)) : ((((_Bool)1) ? (((/* implicit */int) (short)-27492)) : (33521664)))));
                    }
                    for (unsigned char i_8 = 2; i_8 < 15; i_8 += 3) 
                    {
                        var_31 = ((/* implicit */_Bool) arr_14 [i_0 + 2] [i_0 + 2] [(signed char)13] [i_2] [i_2] [i_8]);
                        arr_27 [i_8] [i_1 - 2] [i_1 - 2] [i_8 - 1] = ((/* implicit */unsigned int) var_9);
                    }
                    for (int i_9 = 0; i_9 < 16; i_9 += 2) 
                    {
                        var_32 = ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (14737121225196330672ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)44117)))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned long long int i_10 = 0; i_10 < 16; i_10 += 3) 
                        {
                            var_33 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_0 [i_0 + 2]))));
                            arr_33 [i_0] [i_1] [i_1] [i_10] [i_9] [i_10] = ((/* implicit */unsigned int) var_12);
                            var_34 = ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))));
                            var_35 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_23 [(signed char)8] [i_1 + 2] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (2487929040U)))) ^ (((((/* implicit */_Bool) 18446744073709551586ULL)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_0 + 2] [i_0 + 2] [i_2] [i_9] [i_0 + 2])))))));
                            var_36 = ((/* implicit */unsigned short) arr_14 [i_0] [i_0 - 1] [i_0] [i_0] [i_0] [i_0 - 1]);
                        }
                        for (unsigned long long int i_11 = 4; i_11 < 14; i_11 += 2) 
                        {
                            var_37 = ((/* implicit */unsigned int) min((var_37), (((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_0 + 2] [i_9] [i_11] [i_0] [i_2])) ? (4292935680U) : (((/* implicit */unsigned int) 1645271514))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_11 - 2] [i_11 - 2]))) : (((((/* implicit */_Bool) var_3)) ? (arr_9 [10ULL] [(short)6] [i_2] [i_1 + 1] [10ULL]) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))) + (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_10)))))))));
                            var_38 &= ((/* implicit */unsigned char) var_7);
                            var_39 = ((/* implicit */signed char) max((var_39), (((/* implicit */signed char) (unsigned char)249))));
                        }
                    }
                    var_40 ^= ((((/* implicit */int) (short)4064)) ^ (((/* implicit */int) (unsigned char)109)));
                    arr_36 [i_0] [i_1 + 1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1087629639)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-124))) : (18100873274765360536ULL)))) ? (((((/* implicit */_Bool) min(((short)0), (((/* implicit */short) (_Bool)0))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_7)) ^ (((/* implicit */int) var_14))))) : (var_13))) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_2 [0U] [i_1 + 4] [i_0]))))));
                }
                var_41 = ((/* implicit */signed char) var_3);
            }
        } 
    } 
    var_42 = ((/* implicit */short) (!(((/* implicit */_Bool) var_13))));
    /* LoopSeq 2 */
    for (short i_12 = 2; i_12 < 18; i_12 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_13 = 3; i_13 < 20; i_13 += 4) 
        {
            var_43 = ((/* implicit */int) var_8);
            var_44 = ((/* implicit */unsigned long long int) var_11);
        }
        for (unsigned short i_14 = 0; i_14 < 22; i_14 += 4) 
        {
            arr_46 [(signed char)7] [i_12 + 2] [i_14] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_41 [i_12 + 3]), (((/* implicit */unsigned long long int) arr_39 [i_12 - 2]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_42 [i_12] [i_14]))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_39 [i_12 + 3]))) * (arr_43 [i_12 - 1])))));
            /* LoopNest 2 */
            for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) 
            {
                for (unsigned int i_16 = 1; i_16 < 20; i_16 += 4) 
                {
                    {
                        var_45 ^= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) <= (arr_41 [i_12 + 1]))))) <= (((((/* implicit */_Bool) arr_47 [i_15 - 1] [i_12 + 4])) ? (arr_37 [i_15 - 1] [i_12 + 4]) : (arr_37 [i_15 - 1] [i_12 + 4])))));
                        var_46 = ((/* implicit */unsigned short) max((var_46), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 16ULL)) ? (((/* implicit */int) (signed char)120)) : (134217727)))))))));
                        var_47 = ((/* implicit */int) max((var_47), (((/* implicit */int) (unsigned char)255))));
                        var_48 = ((/* implicit */int) (~(((((/* implicit */_Bool) (~(arr_49 [i_12] [i_15] [(unsigned short)9] [i_16])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_42 [i_14] [i_15 - 1]))) : (((((/* implicit */unsigned int) 67106816)) & (1807038246U)))))));
                        var_49 = ((/* implicit */signed char) max((var_49), (((/* implicit */signed char) ((((((/* implicit */_Bool) ((unsigned int) (signed char)124))) ? (((/* implicit */int) ((arr_40 [i_15]) >= (2908290899U)))) : (((((/* implicit */_Bool) var_10)) ? (arr_48 [i_12 - 1] [i_14] [i_14]) : (((/* implicit */int) (signed char)-115)))))) ^ (((/* implicit */int) arr_42 [i_12 + 1] [i_15 - 1])))))));
                    }
                } 
            } 
            var_50 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_2))));
        }
        var_51 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_12))))) ? ((-(((/* implicit */int) arr_47 [i_12] [i_12 + 1])))) : (((((/* implicit */_Bool) arr_47 [i_12] [i_12])) ? (((/* implicit */int) arr_47 [i_12 + 3] [i_12 - 1])) : (((/* implicit */int) arr_47 [i_12] [i_12 + 2]))))));
        var_52 = ((/* implicit */unsigned int) max((var_52), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_37 [i_12] [i_12 - 2])) ? ((~(((/* implicit */int) (signed char)114)))) : (((((/* implicit */_Bool) 1399222634U)) ? (((/* implicit */int) (signed char)124)) : (((/* implicit */int) var_1))))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)247))) % (2251799813685120ULL))) : (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_41 [i_12])) ? (arr_40 [i_12]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_45 [i_12] [i_12] [i_12])))))))))))));
        var_53 += ((/* implicit */signed char) ((((/* implicit */int) var_1)) << (((1807038246U) - (1807038223U)))));
    }
    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
    {
        var_54 = ((/* implicit */unsigned short) ((((/* implicit */int) ((_Bool) arr_14 [i_17] [i_17] [i_17] [(unsigned short)9] [11] [i_17]))) & (((((/* implicit */_Bool) arr_40 [i_17])) ? (((/* implicit */int) var_11)) : (arr_8 [i_17] [i_17] [i_17] [i_17])))));
        /* LoopNest 2 */
        for (long long int i_18 = 1; i_18 < 11; i_18 += 4) 
        {
            for (int i_19 = 0; i_19 < 12; i_19 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                    {
                        var_55 = ((/* implicit */unsigned long long int) max((var_55), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_18] [i_19] [i_20])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (4095U)))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_20 [(unsigned short)14] [i_17] [i_17] [i_17] [i_17])))) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (unsigned short)6)))))))));
                        var_56 = ((/* implicit */signed char) ((((0) >> (((((/* implicit */int) arr_6 [i_18 - 1] [i_17])) - (76))))) & (((/* implicit */int) var_10))));
                    }
                    var_57 = ((/* implicit */unsigned long long int) arr_1 [i_17] [i_17]);
                    arr_63 [i_17] [i_17] [i_17] [(unsigned char)4] = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) arr_60 [i_18 + 1] [i_18 - 1] [i_18])) || (((/* implicit */_Bool) (+(((/* implicit */int) var_12))))))));
                }
            } 
        } 
    }
}
