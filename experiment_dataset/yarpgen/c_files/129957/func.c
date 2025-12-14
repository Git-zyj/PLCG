/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129957
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129957 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129957
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
    for (signed char i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */long long int) (unsigned short)11262);
        var_13 = ((/* implicit */signed char) var_10);
    }
    var_14 = ((/* implicit */short) var_3);
    /* LoopSeq 2 */
    for (int i_1 = 2; i_1 < 21; i_1 += 4) 
    {
        arr_8 [i_1] [i_1] = ((/* implicit */unsigned char) arr_5 [i_1]);
        arr_9 [i_1] = (short)-5837;
        /* LoopNest 2 */
        for (short i_2 = 2; i_2 < 21; i_2 += 2) 
        {
            for (long long int i_3 = 0; i_3 < 23; i_3 += 2) 
            {
                {
                    var_15 += ((/* implicit */short) (-(max((((var_10) ^ (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_2 - 1] [i_1] [i_1]))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)2941)) ? (((/* implicit */int) (short)2044)) : (((/* implicit */int) (signed char)13)))))))));
                    var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) (signed char)13))));
                    arr_15 [i_1] [i_2] = ((((min((((/* implicit */int) arr_7 [i_1 + 1] [i_2 - 2])), (-1384376848))) + (2147483647))) >> (((((/* implicit */int) ((short) (unsigned char)138))) - (130))));
                    var_17 = ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) (short)32256)) ? (((/* implicit */int) arr_6 [i_1 - 1] [i_2 - 2])) : (((/* implicit */int) arr_6 [i_1 - 2] [i_2 + 1])))));
                    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((486791365U) != (((/* implicit */unsigned int) -1041298947)))) ? ((-(3111431312U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) 17592186028032LL))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1] [i_2 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_1))))))) : (((((/* implicit */_Bool) ((((/* implicit */int) (signed char)44)) & (-142369767)))) ? (((int) -1262022720)) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)21755)) : (((/* implicit */int) var_8))))))));
                }
            } 
        } 
    }
    for (signed char i_4 = 0; i_4 < 24; i_4 += 2) 
    {
        /* LoopSeq 2 */
        for (short i_5 = 0; i_5 < 24; i_5 += 4) 
        {
            /* LoopSeq 1 */
            for (signed char i_6 = 0; i_6 < 24; i_6 += 2) 
            {
                /* LoopSeq 1 */
                for (short i_7 = 0; i_7 < 24; i_7 += 4) 
                {
                    arr_27 [i_4] [i_5] [i_6] [(unsigned short)23] [i_7] [i_7] = ((/* implicit */int) ((((/* implicit */_Bool) (+(4294967293U)))) ? (min((((((/* implicit */long long int) var_3)) & (2042021356379054167LL))), (((((/* implicit */_Bool) arr_19 [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) (short)-998))) : (var_12))))) : (((/* implicit */long long int) ((int) 8388592)))));
                    arr_28 [(signed char)1] [i_6] [i_5] [i_4] = ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (short)2058)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [6U]))) : (arr_21 [3LL] [i_5] [i_6] [i_7]))) - (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (short)15)))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_22 [i_7] [i_5] [i_4])) ? ((+(((/* implicit */int) arr_20 [i_5] [i_4])))) : ((+(((/* implicit */int) (signed char)35))))))) : (355079084U));
                    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((17812141768840458479ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)6)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned short)35509)), (var_6)))) ? (((/* implicit */int) max((var_5), (((/* implicit */short) arr_19 [i_7]))))) : (((/* implicit */int) (short)21755))))) : (min((arr_21 [(signed char)10] [i_5] [i_6] [i_7]), (852428796U)))));
                }
                var_20 += ((/* implicit */unsigned int) ((int) var_6));
                arr_29 [i_4] [i_5] [i_6] = ((/* implicit */signed char) ((0ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (~(-2251213488614121208LL))))))));
                var_21 = ((/* implicit */short) ((((/* implicit */_Bool) min((((unsigned long long int) 3808175928U)), (((/* implicit */unsigned long long int) arr_20 [i_6] [i_6]))))) ? (((((/* implicit */unsigned long long int) 2097151)) * (5222314442352769500ULL))) : (((/* implicit */unsigned long long int) ((int) var_7)))));
                arr_30 [i_4] [i_5] [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) var_9)) ? (var_0) : (((/* implicit */unsigned long long int) ((long long int) 66846720)))));
            }
            /* LoopSeq 1 */
            for (signed char i_8 = 3; i_8 < 22; i_8 += 2) 
            {
                arr_33 [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_23 [(unsigned char)17] [i_5] [i_8 - 1]))))) >> (((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 3603441515U)))))) & (4494803534348288LL)))));
                var_22 = ((/* implicit */short) min((((/* implicit */unsigned int) ((unsigned short) arr_24 [i_4] [i_8 - 1] [5]))), (((unsigned int) arr_24 [i_4] [i_8 + 1] [18]))));
                var_23 = ((/* implicit */unsigned long long int) ((7110491068763031757LL) % (4494803534348288LL)));
                /* LoopSeq 2 */
                for (signed char i_9 = 0; i_9 < 24; i_9 += 2) 
                {
                    var_24 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) 6)), (842810329U)))), (((unsigned long long int) var_0))))) ? (((((/* implicit */int) var_2)) >> (((((/* implicit */int) arr_18 [i_5])) - (25411))))) : (min((((/* implicit */int) ((short) (signed char)7))), ((+(((/* implicit */int) (short)13088))))))));
                    var_25 = ((/* implicit */long long int) min((((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (short)-21765)) == (((/* implicit */int) arr_26 [i_4] [i_5] [i_8] [i_9])))))) < (var_6)))), ((signed char)-13)));
                    /* LoopSeq 2 */
                    for (unsigned short i_10 = 2; i_10 < 21; i_10 += 4) 
                    {
                        var_26 = ((/* implicit */_Bool) max((42221859U), (((/* implicit */unsigned int) var_2))));
                        var_27 *= ((/* implicit */unsigned int) (+(4494803534348300LL)));
                        var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_38 [i_8] [i_5] [i_5] [i_4]), (((/* implicit */unsigned int) arr_35 [i_8]))))) ? ((-(11918262548765156168ULL))) : (((((/* implicit */_Bool) -4494803534348293LL)) ? (var_1) : (((/* implicit */unsigned long long int) -806478192))))))) ? (((((/* implicit */_Bool) ((int) 7158593435994592569ULL))) ? (((/* implicit */unsigned long long int) -448635861)) : (min((var_1), (1631869011060046882ULL))))) : (((((/* implicit */_Bool) min((((/* implicit */short) (signed char)59)), (arr_35 [i_8])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)124))) : (arr_21 [13ULL] [i_5] [i_9] [i_10])))) : (((((/* implicit */_Bool) arr_17 [(unsigned short)3] [i_9])) ? (1095121997405144120ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)45)))))))));
                        var_29 *= ((short) min((var_3), (((/* implicit */unsigned int) arr_18 [i_10 + 2]))));
                    }
                    /* vectorizable */
                    for (unsigned int i_11 = 3; i_11 < 22; i_11 += 4) 
                    {
                        arr_43 [i_4] [i_5] [i_8] [i_9] [i_8] = ((((/* implicit */int) arr_20 [i_11] [7ULL])) - (((/* implicit */int) (!(((/* implicit */_Bool) 1806779415U))))));
                        var_30 = ((/* implicit */unsigned long long int) (unsigned short)28548);
                        var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) arr_42 [i_4] [i_4] [i_8] [i_4] [i_4])) ? (4LL) : (((/* implicit */long long int) 7)))) : (-4494803534348288LL)));
                        arr_44 [i_4] [i_5] [i_8] [i_9] [i_11] = ((/* implicit */unsigned long long int) ((short) (!(((/* implicit */_Bool) 17351622076304407508ULL)))));
                    }
                }
                for (long long int i_12 = 0; i_12 < 24; i_12 += 2) 
                {
                    var_32 = ((/* implicit */signed char) (+(((/* implicit */int) (signed char)-75))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_13 = 2; i_13 < 21; i_13 += 4) 
                    {
                        var_33 = ((/* implicit */int) min((var_33), ((+(((/* implicit */int) arr_42 [i_13] [i_5] [i_5] [i_8 - 1] [8ULL]))))));
                        arr_51 [i_4] [i_5] [i_8] [i_12] [i_8] [8] = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) 448635853)) + (6528481524944395448ULL))) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_13] [i_13 - 1])))));
                        var_34 = ((/* implicit */signed char) ((short) ((((/* implicit */int) var_9)) / (((/* implicit */int) var_11)))));
                    }
                    arr_52 [i_4] [i_8] = ((/* implicit */unsigned short) var_10);
                    /* LoopSeq 2 */
                    for (int i_14 = 1; i_14 < 21; i_14 += 4) 
                    {
                        var_35 = ((/* implicit */signed char) var_7);
                        arr_56 [i_4] [i_8] [i_8] [i_8] [i_12] [i_14] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) -2168522986833998913LL))) ? (((/* implicit */unsigned long long int) max((-158615681), (((/* implicit */int) (!(((/* implicit */_Bool) 3670739734U)))))))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 11918262548765156169ULL)) ? (((/* implicit */int) (signed char)38)) : (((/* implicit */int) var_8))))), (var_4)))));
                    }
                    for (int i_15 = 1; i_15 < 23; i_15 += 4) 
                    {
                        var_36 = ((/* implicit */unsigned int) (signed char)127);
                        arr_59 [i_8] = ((/* implicit */signed char) var_12);
                    }
                }
                arr_60 [i_4] [i_5] [i_8] = ((/* implicit */int) var_3);
            }
            arr_61 [i_4] = ((/* implicit */long long int) -158615681);
            var_37 *= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_23 [i_4] [i_4] [i_4])) : (((/* implicit */int) (signed char)90))))) ? (((((/* implicit */int) (signed char)31)) - (((/* implicit */int) (unsigned char)203)))) : ((~(((/* implicit */int) (unsigned char)233))))))) & (max((3670739734U), (((/* implicit */unsigned int) ((unsigned short) (-2147483647 - 1))))))));
        }
        for (int i_16 = 2; i_16 < 20; i_16 += 2) 
        {
            var_38 = ((/* implicit */unsigned long long int) ((_Bool) ((unsigned int) (unsigned short)57344)));
            var_39 = ((/* implicit */unsigned long long int) max((var_39), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_9)), (((((/* implicit */_Bool) var_12)) ? (((((/* implicit */long long int) arr_21 [(unsigned char)20] [i_4] [i_4] [i_16])) % (arr_25 [i_16] [i_16 - 1] [i_4] [i_4] [i_4] [i_4]))) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)18))) ^ (-9223372036854775803LL))))))))));
            arr_65 [i_4] [i_16] = ((/* implicit */unsigned short) max((var_0), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)16382)) ? (268435455ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)237))) : (((((/* implicit */unsigned long long int) 2LL)) & (6528481524944395438ULL)))))));
        }
        var_40 = min((((((/* implicit */_Bool) -158615687)) ? ((-(((/* implicit */int) (signed char)96)))) : (((((/* implicit */int) (signed char)122)) % (((/* implicit */int) (unsigned char)16)))))), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)8291))) == (min((((/* implicit */long long int) (unsigned char)66)), (8646911284551352320LL)))))));
        /* LoopNest 2 */
        for (unsigned long long int i_17 = 0; i_17 < 24; i_17 += 4) 
        {
            for (unsigned short i_18 = 3; i_18 < 23; i_18 += 4) 
            {
                {
                    var_41 = ((/* implicit */signed char) ((var_10) % (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)127))) : (3611090872U)))) != (max((6528481524944395447ULL), (((/* implicit */unsigned long long int) arr_54 [i_4] [i_17] [i_18 - 3] [i_18] [i_4]))))))))));
                    arr_70 [i_18] [i_17] [i_18] [i_18] = ((/* implicit */short) var_6);
                }
            } 
        } 
    }
    var_42 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) var_12)) ? (-158615707) : (((/* implicit */int) (signed char)-1)))) : ((~(((/* implicit */int) (short)26655))))))) & ((~(var_6)))));
}
