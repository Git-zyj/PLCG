/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142345
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142345 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142345
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
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_0] = ((/* implicit */_Bool) var_4);
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 10; i_2 += 4) 
                {
                    for (int i_3 = 1; i_3 < 9; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_12 [i_3] [i_1] [i_1] [i_3] = ((/* implicit */long long int) min((((((/* implicit */int) (unsigned char)193)) % (((/* implicit */int) min((var_5), (arr_11 [i_0] [(_Bool)1] [i_0] [i_0] [(short)9] [i_0])))))), (((((/* implicit */_Bool) arr_11 [(_Bool)1] [i_1] [i_2] [i_3] [i_3] [(_Bool)1])) ? (((/* implicit */int) ((unsigned short) var_0))) : (var_4)))));
                                arr_13 [i_0] [(signed char)9] [(signed char)5] [(signed char)9] [i_3] = ((/* implicit */unsigned short) max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_1] [3] [2LL] [6U] [i_3]))) * (var_8))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [(short)3] [i_1] [i_3 + 1])) ? (max((4294967289U), (((/* implicit */unsigned int) arr_1 [(signed char)8])))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) arr_4 [i_4] [i_3 - 1] [7U])) : (((/* implicit */int) arr_6 [i_0] [i_1] [i_2]))))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_14 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) 7500619480119571007ULL)) ? (((/* implicit */int) var_13)) : ((~((+(((/* implicit */int) var_11))))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_5 = 2; i_5 < 8; i_5 += 2) 
    {
        arr_18 [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_5] [i_5])) ? (arr_9 [i_5] [i_5]) : (7305238309656235555ULL)))) ? (((/* implicit */int) max((((/* implicit */signed char) var_7)), ((signed char)-110)))) : (arr_10 [i_5] [(signed char)4] [i_5 - 1] [i_5] [i_5 + 2] [i_5] [i_5])))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967286U)) ? (arr_8 [i_5] [i_5] [i_5] [2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (7889558434658376821ULL) : (arr_9 [i_5] [i_5]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((10U) / (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_5 + 1] [7] [7] [i_5] [i_5] [i_5])))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) min(((unsigned char)24), (((/* implicit */unsigned char) arr_14 [i_5] [i_5]))))))))));
        /* LoopNest 2 */
        for (signed char i_6 = 0; i_6 < 10; i_6 += 2) 
        {
            for (int i_7 = 0; i_7 < 10; i_7 += 1) 
            {
                {
                    arr_23 [i_7] = ((/* implicit */int) arr_1 [i_5 - 1]);
                    arr_24 [i_6] = ((/* implicit */unsigned long long int) ((long long int) min((((/* implicit */unsigned char) ((((/* implicit */_Bool) 8ULL)) && (var_11)))), (max((arr_20 [i_6] [i_7]), (((/* implicit */unsigned char) arr_21 [i_5] [(unsigned short)8] [0] [(unsigned short)8])))))));
                }
            } 
        } 
    }
    for (unsigned char i_8 = 0; i_8 < 24; i_8 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_9 = 4; i_9 < 21; i_9 += 4) 
        {
            for (long long int i_10 = 2; i_10 < 21; i_10 += 4) 
            {
                {
                    arr_34 [i_8] = ((/* implicit */int) (+(arr_30 [(unsigned short)23] [i_9])));
                    var_15 ^= ((/* implicit */short) var_11);
                }
            } 
        } 
        var_16 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (arr_25 [i_8]) : (((/* implicit */unsigned int) ((int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)18320))) + (arr_32 [i_8] [i_8] [i_8])))))));
        arr_35 [i_8] = (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) -7706368471863461522LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [(short)8]))) : (var_8)))))) ? ((((!(((/* implicit */_Bool) arr_28 [i_8] [i_8])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_31 [i_8] [i_8] [i_8] [i_8])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)9200))) : (arr_25 [i_8])))) : (max((((/* implicit */unsigned long long int) arr_29 [12])), (7889558434658376808ULL))))) : (((/* implicit */unsigned long long int) arr_30 [23ULL] [i_8])));
        arr_36 [i_8] = ((/* implicit */int) ((((/* implicit */_Bool) arr_27 [i_8])) ? (max((((((/* implicit */_Bool) (unsigned char)75)) ? (arr_25 [i_8]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_11))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_30 [6ULL] [i_8]))))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_11 = 3; i_11 < 23; i_11 += 1) 
        {
            /* LoopNest 2 */
            for (long long int i_12 = 3; i_12 < 22; i_12 += 4) 
            {
                for (int i_13 = 0; i_13 < 24; i_13 += 1) 
                {
                    {
                        arr_43 [i_8] [i_11] = ((/* implicit */_Bool) (((_Bool)1) ? (((((/* implicit */_Bool) (short)27178)) ? (((/* implicit */long long int) -1371367237)) : (var_1))) : (arr_29 [i_13])));
                        arr_44 [2LL] [22ULL] [i_8] [i_13] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)13))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_9))))) : (arr_37 [i_11] [i_11 + 1] [(signed char)6])));
                        arr_45 [i_8] [i_8] [(unsigned short)3] [i_12 - 3] [i_11] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_42 [2ULL] [i_12 + 1] [i_11 - 2] [i_11])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)34571))) : (arr_42 [i_13] [i_12 + 2] [i_11 + 1] [i_11])));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (int i_14 = 1; i_14 < 22; i_14 += 4) 
            {
                for (signed char i_15 = 0; i_15 < 24; i_15 += 2) 
                {
                    for (unsigned long long int i_16 = 1; i_16 < 21; i_16 += 4) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned short) (+(arr_52 [i_16] [i_16] [i_11] [i_14 + 1] [i_11 - 3])));
                            var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_46 [i_11] [i_14 - 1] [i_11] [i_11])) ? (arr_46 [i_11] [i_14 + 2] [i_11] [i_11]) : (arr_46 [i_11] [i_14 + 2] [i_14] [i_11])));
                            var_19 = ((/* implicit */int) ((((/* implicit */_Bool) arr_38 [i_8] [i_8] [i_8])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_48 [(unsigned short)23] [i_14])) : (((/* implicit */int) arr_26 [i_8]))))) : (((var_6) ? (var_8) : (((/* implicit */unsigned long long int) 2166458080U))))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned int i_17 = 2; i_17 < 21; i_17 += 2) 
        {
            /* LoopSeq 1 */
            for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_19 = 0; i_19 < 24; i_19 += 2) 
                {
                    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                    {
                        {
                            arr_62 [i_8] [i_17] [i_18] [i_18] [(signed char)4] = ((/* implicit */unsigned int) 691289089263939156ULL);
                            arr_63 [i_18] [i_17] [i_17] [i_17] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (arr_58 [19] [1ULL] [22LL] [i_20]) : (((/* implicit */long long int) var_12))))) ? (((((/* implicit */_Bool) arr_59 [i_8] [(_Bool)1] [i_19] [12U])) ? (arr_30 [i_8] [i_8]) : (((/* implicit */long long int) ((/* implicit */int) arr_31 [i_17 - 1] [i_8] [(_Bool)0] [i_8]))))) : (((/* implicit */long long int) ((/* implicit */int) arr_60 [i_8] [i_17] [i_19])))));
                            arr_64 [i_18] [i_18] [i_18] [i_18] [(signed char)10] [i_19] [i_20] = ((/* implicit */unsigned int) arr_26 [(signed char)14]);
                            arr_65 [4] [i_19] [i_18] [i_18] [i_18] [i_17] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */int) var_2)) - ((+(((/* implicit */int) ((unsigned short) 12641457642509179231ULL)))))));
                            var_20 ^= ((/* implicit */signed char) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-77)) ? (17755454984445612447ULL) : (5805286431200372384ULL)))) ? (((int) arr_55 [i_8] [i_17] [i_18])) : (var_12)))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_21 = 2; i_21 < 23; i_21 += 4) 
                {
                    arr_70 [i_8] [i_8] [i_18] [3ULL] = ((/* implicit */signed char) (+(arr_42 [i_8] [i_17 + 1] [i_18] [i_8])));
                    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_59 [i_21 - 1] [i_21] [i_21 + 1] [i_17 - 1])) : (((/* implicit */int) arr_41 [13] [(signed char)8] [i_18]))));
                    arr_71 [i_18] [i_18] [i_17] [i_18] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_61 [i_8] [(short)16] [i_18] [i_18] [(unsigned short)15])) ? (((/* implicit */long long int) 16U)) : (var_10)))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned char)158)) : (((/* implicit */int) (unsigned short)30965)))) : (((/* implicit */int) ((_Bool) var_7)))));
                    var_22 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_55 [i_17] [i_18] [i_18])) ? (arr_58 [i_21] [i_18] [i_17] [i_8]) : (((/* implicit */long long int) ((/* implicit */int) var_9))))) | (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)46))) : (arr_25 [i_8]))))));
                }
                var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) max((((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_52 [i_8] [i_17] [i_8] [i_8] [i_18])) ? (arr_58 [i_8] [i_17] [i_17] [i_18]) : (((/* implicit */long long int) ((/* implicit */int) var_7))))) == (((/* implicit */long long int) ((var_6) ? (arr_40 [i_18] [i_17]) : (((/* implicit */int) var_9)))))))), (0U))))));
            }
            /* LoopSeq 1 */
            for (signed char i_22 = 0; i_22 < 24; i_22 += 3) 
            {
                arr_74 [i_8] [i_22] = ((/* implicit */short) min((((/* implicit */long long int) ((((/* implicit */_Bool) min((733613828), (((/* implicit */int) arr_66 [i_8] [i_8] [(unsigned char)2] [i_17] [(unsigned short)6] [16ULL]))))) ? (((((/* implicit */_Bool) arr_58 [i_8] [i_17] [i_22] [i_22])) ? (4294967289U) : (((/* implicit */unsigned int) var_12)))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)49314))))))))), (((((((/* implicit */_Bool) 957910834)) ? (var_10) : (-1770926764578382131LL))) - (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_31 [i_8] [i_17] [i_22] [i_22])) >= (((/* implicit */int) var_7))))))))));
                arr_75 [i_8] |= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) max(((!(((/* implicit */_Bool) arr_38 [i_8] [8LL] [i_22])))), (arr_49 [i_17 + 3] [i_17] [i_17 + 3] [i_17])))), (((arr_32 [i_17 + 2] [i_17 + 3] [i_17 + 1]) & (arr_32 [i_17 + 3] [i_17 - 1] [i_17 + 2])))));
            }
        }
    }
}
