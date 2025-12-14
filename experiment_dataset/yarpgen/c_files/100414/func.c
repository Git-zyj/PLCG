/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100414
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100414 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100414
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
    /* LoopSeq 4 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */short) (~(((long long int) ((((/* implicit */_Bool) var_13)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0]))))))));
        var_18 = ((/* implicit */_Bool) min((var_18), ((!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_4)))) ? (((/* implicit */unsigned long long int) (+(2146435072U)))) : (((arr_0 [i_0]) ? (0ULL) : (((/* implicit */unsigned long long int) -1283758439)))))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) ((((((((/* implicit */int) arr_0 [i_0])) != (((/* implicit */int) var_15)))) && ((_Bool)1))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_1 [i_0] [i_0]))));
    }
    /* vectorizable */
    for (long long int i_1 = 3; i_1 < 11; i_1 += 3) 
    {
        var_19 *= ((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_1 - 2] [i_1 - 3])) & (((/* implicit */int) arr_1 [i_1 - 3] [i_1 - 1]))));
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 1; i_2 < 11; i_2 += 1) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 1; i_4 < 11; i_4 += 4) 
                    {
                        for (unsigned long long int i_5 = 3; i_5 < 12; i_5 += 1) 
                        {
                            {
                                arr_15 [i_5] [i_1] [(short)9] [i_4 - 1] [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */int) var_17)) > (((/* implicit */int) var_17)))) && (((/* implicit */_Bool) (~(457264882U))))));
                                arr_16 [i_4 + 1] [i_5 - 2] [i_1] [i_3] [i_1] [i_2 - 1] [i_1] = ((/* implicit */unsigned int) (~(arr_10 [i_4 - 1] [i_5 - 1] [i_5 - 1] [i_5])));
                            }
                        } 
                    } 
                    arr_17 [i_1] [(unsigned short)0] [i_1] = ((/* implicit */int) arr_1 [i_2] [i_2]);
                    arr_18 [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_1] [i_1] [i_3] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_1 + 2]))) : (4337371041275788856ULL))))));
                    var_20 *= ((/* implicit */int) var_7);
                }
            } 
        } 
        arr_19 [i_1] [i_1] = ((/* implicit */int) 2275767305U);
    }
    for (unsigned int i_6 = 0; i_6 < 11; i_6 += 4) 
    {
        var_21 = ((/* implicit */long long int) min((var_21), (((long long int) (-((~(arr_5 [i_6]))))))));
        var_22 = ((/* implicit */_Bool) ((((_Bool) arr_7 [i_6] [i_6])) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_6] [i_6]))) / (576451956210401280ULL))) : (((/* implicit */unsigned long long int) max((182020338), (((/* implicit */int) var_6)))))));
        /* LoopNest 2 */
        for (unsigned char i_7 = 0; i_7 < 11; i_7 += 3) 
        {
            for (unsigned int i_8 = 0; i_8 < 11; i_8 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_9 = 0; i_9 < 11; i_9 += 3) 
                    {
                        for (long long int i_10 = 4; i_10 < 8; i_10 += 2) 
                        {
                            {
                                arr_30 [i_7] [i_7] = ((/* implicit */unsigned long long int) ((unsigned char) var_11));
                                arr_31 [i_7] [i_8] [i_8] [i_7] [i_7] = ((/* implicit */unsigned long long int) max((22), (((/* implicit */int) (unsigned char)202))));
                                arr_32 [i_10] [i_9] [i_7] [i_7] [i_7] [i_6] = ((/* implicit */long long int) arr_5 [i_7]);
                            }
                        } 
                    } 
                    arr_33 [i_6] [i_7] [i_6] [i_6] = ((/* implicit */unsigned int) (((((-(((((/* implicit */_Bool) arr_29 [4ULL] [4ULL] [i_8] [i_8] [i_8] [(short)3] [i_8])) ? (((/* implicit */int) arr_27 [i_6] [i_7] [i_6] [i_7] [i_8])) : (((/* implicit */int) arr_9 [i_6] [i_7] [i_8])))))) + (2147483647))) >> (((/* implicit */int) ((short) (!(((/* implicit */_Bool) (unsigned char)92))))))));
                }
            } 
        } 
        var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((((/* implicit */unsigned int) (+((~(var_1)))))) <= ((-(754328167U))))))));
    }
    /* vectorizable */
    for (unsigned int i_11 = 3; i_11 < 13; i_11 += 3) 
    {
        /* LoopSeq 3 */
        for (unsigned int i_12 = 0; i_12 < 16; i_12 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                var_24 ^= ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)205)))))));
                arr_44 [i_13] [i_13] [i_11 - 2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)30637)) ? (((/* implicit */int) var_5)) : (arr_43 [i_11] [i_12] [i_11])));
            }
            arr_45 [i_11] [i_12] [i_12] = (+(((unsigned int) 3351626014U)));
            var_25 *= ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (((unsigned int) arr_43 [i_11] [i_12] [i_11])) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [5U])))));
            arr_46 [i_12] [i_12] [i_11] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_41 [2ULL] [i_11] [2ULL]))));
        }
        for (unsigned int i_14 = 0; i_14 < 16; i_14 += 1) /* same iter space */
        {
            /* LoopSeq 2 */
            for (short i_15 = 0; i_15 < 16; i_15 += 4) 
            {
                /* LoopNest 2 */
                for (int i_16 = 3; i_16 < 13; i_16 += 4) 
                {
                    for (long long int i_17 = 1; i_17 < 13; i_17 += 3) 
                    {
                        {
                            arr_57 [(short)0] [i_11 + 1] [i_14] [i_15] [i_14] [i_17] = (-((-(-8122718242077011096LL))));
                            arr_58 [i_11] [i_14] [i_15] [i_17] [i_17] [i_14] [i_16] = (unsigned char)57;
                            arr_59 [i_17] [i_14] [i_15] [i_14] [i_11 + 1] = ((/* implicit */signed char) arr_48 [i_14] [i_14]);
                            var_26 = (~(arr_52 [i_16 + 1] [i_11 - 3]));
                        }
                    } 
                } 
                var_27 = ((/* implicit */long long int) min((var_27), (arr_38 [i_11 - 3] [i_11 - 2])));
            }
            for (unsigned char i_18 = 0; i_18 < 16; i_18 += 3) 
            {
                var_28 = ((/* implicit */unsigned long long int) max((var_28), (((/* implicit */unsigned long long int) ((int) (+(-8133328230486499965LL)))))));
                arr_62 [i_14] [(signed char)1] [i_18] = ((/* implicit */unsigned int) (!(var_7)));
            }
            /* LoopNest 2 */
            for (unsigned int i_19 = 0; i_19 < 16; i_19 += 2) 
            {
                for (int i_20 = 0; i_20 < 16; i_20 += 2) 
                {
                    {
                        arr_69 [i_11] [i_14] [i_19] [i_20] = ((/* implicit */long long int) ((arr_39 [i_11 - 1]) ? (((((/* implicit */_Bool) (unsigned char)216)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) (short)8191))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_63 [i_11 - 3] [i_14] [i_11 - 3])))));
                        arr_70 [i_14] [i_14] [i_14] [i_14] [i_14] [i_14] = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_37 [i_20]))) : ((+(var_3)))));
                        var_29 = ((/* implicit */unsigned long long int) max((var_29), ((+(arr_47 [i_19] [i_19])))));
                    }
                } 
            } 
        }
        for (unsigned int i_21 = 0; i_21 < 16; i_21 += 1) /* same iter space */
        {
            arr_74 [i_11] [i_21] = ((/* implicit */long long int) var_17);
            var_30 = (!(((arr_71 [i_11] [i_11] [i_11]) <= (((/* implicit */long long int) ((/* implicit */int) var_7))))));
            /* LoopNest 2 */
            for (long long int i_22 = 0; i_22 < 16; i_22 += 4) 
            {
                for (unsigned short i_23 = 1; i_23 < 15; i_23 += 4) 
                {
                    {
                        var_31 ^= (-(arr_43 [(unsigned char)2] [i_11 - 2] [i_23]));
                        arr_79 [i_23] [i_23] [i_22] = ((/* implicit */unsigned int) arr_51 [i_23]);
                    }
                } 
            } 
            /* LoopNest 3 */
            for (int i_24 = 0; i_24 < 16; i_24 += 2) 
            {
                for (unsigned short i_25 = 0; i_25 < 16; i_25 += 4) 
                {
                    for (unsigned int i_26 = 2; i_26 < 14; i_26 += 3) 
                    {
                        {
                            arr_91 [i_11] [i_11 + 2] [(unsigned char)11] [i_24] [i_25] [i_26] = ((/* implicit */long long int) (+(((/* implicit */int) var_6))));
                            var_32 = ((/* implicit */long long int) min((var_32), (((/* implicit */long long int) ((signed char) ((unsigned int) arr_61 [i_24]))))));
                        }
                    } 
                } 
            } 
        }
        var_33 ^= ((/* implicit */unsigned int) (unsigned char)202);
        arr_92 [i_11] [i_11] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) * (var_10)));
        arr_93 [i_11] = ((/* implicit */unsigned long long int) (+(var_2)));
    }
    var_34 = ((/* implicit */long long int) var_17);
    /* LoopNest 2 */
    for (int i_27 = 0; i_27 < 10; i_27 += 2) 
    {
        for (int i_28 = 0; i_28 < 10; i_28 += 3) 
        {
            {
                arr_99 [i_27] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_75 [i_27]))));
                arr_100 [i_27] [i_28] = ((((/* implicit */_Bool) (+(((/* implicit */int) (short)10247))))) ? (1411895995U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_96 [i_27]) << (((arr_84 [i_27] [i_28] [i_28] [i_27] [i_28] [i_27]) - (531615120U)))))) ? (((/* implicit */int) (signed char)85)) : (268419072)))));
                var_35 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -330985572)) ? (((((/* implicit */_Bool) arr_88 [i_27] [i_28] [(unsigned short)12] [i_28] [i_27])) ? (var_1) : (((/* implicit */int) var_7)))) : (((/* implicit */int) min((((/* implicit */unsigned char) arr_72 [i_27])), (arr_22 [i_27]))))))) ? (((((arr_97 [i_27] [i_27] [i_27]) > (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)31))))) : ((-(var_16))))) : (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)11))) : (5U))))));
            }
        } 
    } 
    var_36 = ((/* implicit */int) var_5);
    var_37 &= (!(((/* implicit */_Bool) var_10)));
}
