/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186360
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186360 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186360
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
    /* LoopSeq 3 */
    for (long long int i_0 = 2; i_0 < 8; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */int) ((min((((/* implicit */unsigned long long int) 4294967293U)), (arr_1 [i_0 + 3]))) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
        var_16 = ((/* implicit */unsigned short) (+(5809383451154628384ULL)));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((signed char) ((var_6) << (((((((/* implicit */int) (short)-11357)) + (11374))) - (17))))));
        arr_4 [7] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((4373956485994520606ULL) % (((/* implicit */unsigned long long int) var_5)))), (((var_1) << (((var_7) + (249594983)))))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) 18444492273895866368ULL)))))))) : (((((((/* implicit */_Bool) (unsigned char)93)) ? (7U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-124))))) | (((/* implicit */unsigned int) min((-22), (((/* implicit */int) (short)3361)))))))));
    }
    for (unsigned int i_1 = 2; i_1 < 9; i_1 += 3) 
    {
        /* LoopSeq 1 */
        for (int i_2 = 1; i_2 < 7; i_2 += 4) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 2) 
            {
                arr_14 [i_1] [i_2] [i_2] [(short)3] = ((/* implicit */long long int) var_4);
                var_17 = ((/* implicit */long long int) ((unsigned long long int) arr_8 [i_2 + 2]));
                /* LoopNest 2 */
                for (short i_4 = 0; i_4 < 10; i_4 += 4) 
                {
                    for (short i_5 = 0; i_5 < 10; i_5 += 4) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned int) max((var_18), ((-(((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) 1707833973)) : (16U)))))));
                            var_19 = ((short) ((((/* implicit */_Bool) (short)3352)) ? (-1467712075) : (((/* implicit */int) (short)-3357))));
                            arr_20 [i_1] [i_1 - 1] [i_2] [i_3] [i_4] [i_5] [i_5] = ((/* implicit */unsigned int) ((_Bool) 8U));
                        }
                    } 
                } 
            }
            arr_21 [i_1] [i_1] [i_1] = (short)23778;
            arr_22 [i_1 - 1] [i_1 - 1] [i_1 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_1)))) <= (4294967289U)));
            arr_23 [7ULL] = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)2047)) >> (((var_7) + (249594982)))))) <= (var_1)))) << (((((((/* implicit */unsigned int) ((((/* implicit */int) var_12)) << (((((/* implicit */int) (short)-21884)) + (21892)))))) % (min((var_5), (arr_13 [i_2] [i_2 + 2] [i_1 + 1] [i_1]))))) - (4534251U)))));
        }
        var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) min((((/* implicit */unsigned int) min((var_8), (((/* implicit */int) (signed char)-127))))), (((unsigned int) arr_9 [i_1 - 1])))))));
        arr_24 [i_1] = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) 853996302U)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-3367))) : (1674606780541198174LL))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_10)))))));
    }
    for (short i_6 = 4; i_6 < 18; i_6 += 1) 
    {
        var_21 = ((/* implicit */short) min((((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) var_15)))))), (((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned short)6246)) : (-2119419291))) % (((/* implicit */int) ((short) (unsigned char)246)))))));
        /* LoopNest 2 */
        for (unsigned int i_7 = 0; i_7 < 21; i_7 += 3) 
        {
            for (long long int i_8 = 3; i_8 < 18; i_8 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        for (signed char i_10 = 0; i_10 < 21; i_10 += 2) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned int) var_7);
                                var_23 -= ((/* implicit */int) var_2);
                                arr_38 [i_10] [i_6] [i_10] [(short)1] [14U] = ((/* implicit */unsigned short) ((int) ((int) ((((/* implicit */int) var_11)) << (((-1674606780541198174LL) + (1674606780541198189LL)))))));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) (short)3357))));
                    arr_39 [(_Bool)0] [i_7] [i_8] |= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-124)) ? (((/* implicit */int) (signed char)-5)) : (min((-1977033217), (-22)))))) ? (((/* implicit */long long int) ((/* implicit */int) (short)-3347))) : (((((/* implicit */_Bool) 1045501670U)) ? (((/* implicit */long long int) 863354684)) : (-9LL)))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_11 = 2; i_11 < 17; i_11 += 4) 
                    {
                        for (int i_12 = 0; i_12 < 21; i_12 += 3) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned int) var_14);
                                var_26 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (-460997082) : (((/* implicit */int) var_14))))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_12)))) : (((/* implicit */int) var_15)))) << (((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_5)))) : (max((7U), (((/* implicit */unsigned int) (short)-25288)))))) - (4294958867U)))));
                                arr_44 [i_6] [(signed char)16] [i_6] [i_11] [i_12] [i_7] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) min((((/* implicit */int) ((_Bool) 928507523))), (-1171176579)))), ((((!(((/* implicit */_Bool) arr_41 [i_12] [i_7])))) ? (((/* implicit */long long int) max((2147483647), (var_8)))) : ((~(4954235639521742469LL)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_13 = 0; i_13 < 21; i_13 += 3) 
        {
            for (short i_14 = 0; i_14 < 21; i_14 += 3) 
            {
                {
                    /* LoopSeq 3 */
                    for (short i_15 = 0; i_15 < 21; i_15 += 2) 
                    {
                        arr_54 [i_15] [i_13] [i_14] &= ((/* implicit */short) arr_33 [i_6 - 2] [i_6 + 2] [i_14] [i_15]);
                        arr_55 [i_6] [i_13] [i_6] [i_14] [i_15] = ((/* implicit */short) ((((/* implicit */_Bool) ((-1956691911) / (((/* implicit */int) var_9))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_33 [i_6] [i_6] [i_6 + 2] [i_13]))))) : (((/* implicit */int) max(((short)-20), ((short)32767))))));
                        arr_56 [i_6] [i_6] [i_14] [i_15] = ((/* implicit */unsigned int) ((unsigned short) max((((/* implicit */unsigned int) (short)-25288)), (((unsigned int) 1930121215)))));
                    }
                    for (unsigned char i_16 = 0; i_16 < 21; i_16 += 2) 
                    {
                        var_27 *= ((/* implicit */short) (unsigned char)48);
                        var_28 = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) ((short) var_5))) : (((/* implicit */int) (unsigned char)44))));
                        arr_61 [i_6 - 2] [i_6] [(short)1] [8] = ((/* implicit */unsigned char) ((((((var_0) << (((-966331463459305285LL) + (966331463459305346LL))))) % (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)46)) << (((-1930121198) + (1930121211)))))))) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_58 [i_6 - 4] [i_6 + 1])) ? (((/* implicit */int) (unsigned char)217)) : (((/* implicit */int) (unsigned char)41)))))));
                    }
                    for (short i_17 = 0; i_17 < 21; i_17 += 4) 
                    {
                        arr_64 [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)16068)) ? (((((/* implicit */_Bool) var_14)) ? (5357399857498499256ULL) : (((/* implicit */unsigned long long int) 1639038624)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_7))))))) ? (((/* implicit */int) ((unsigned char) 5357399857498499261ULL))) : ((+(((/* implicit */int) arr_49 [i_6] [i_17] [i_14]))))));
                        /* LoopSeq 2 */
                        for (short i_18 = 0; i_18 < 21; i_18 += 2) 
                        {
                            arr_69 [i_17] [i_17] [i_14] [i_14] [i_17] [i_18] &= ((/* implicit */unsigned char) max((-1674606780541198174LL), (((/* implicit */long long int) ((((/* implicit */int) max(((short)4940), ((short)-24)))) * (((/* implicit */int) ((1674606780541198173LL) <= (((/* implicit */long long int) var_4))))))))));
                            var_29 *= ((5357399857498499274ULL) >> (((-928507524) + (928507553))));
                            var_30 = ((/* implicit */unsigned int) max((var_30), (((/* implicit */unsigned int) ((((/* implicit */int) ((_Bool) var_0))) - (((/* implicit */int) ((short) var_5))))))));
                        }
                        for (unsigned char i_19 = 3; i_19 < 19; i_19 += 4) 
                        {
                            var_31 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_70 [i_6] [i_14] [i_17] [i_17] [(unsigned char)20])) ? (((((/* implicit */_Bool) (unsigned short)27516)) ? (18310326394466449205ULL) : (((/* implicit */unsigned long long int) arr_32 [i_19] [i_6] [i_6] [i_13])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)15414))))), (((/* implicit */unsigned long long int) ((((int) var_9)) <= (((/* implicit */int) var_12)))))));
                            var_32 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((2126874600U), (((/* implicit */unsigned int) ((unsigned char) 5357399857498499269ULL)))))) ? (((((/* implicit */int) ((272908556318533361ULL) <= (((/* implicit */unsigned long long int) var_5))))) >> (((/* implicit */int) (!(((/* implicit */_Bool) (short)-3367))))))) : (((((/* implicit */_Bool) (signed char)80)) ? (((/* implicit */int) (short)-15411)) : (((/* implicit */int) var_11))))));
                            var_33 = ((/* implicit */unsigned int) max((var_33), (((/* implicit */unsigned int) 7263034801417548509LL))));
                        }
                    }
                    arr_72 [i_6] = ((/* implicit */short) ((((unsigned long long int) ((unsigned long long int) var_9))) | (((/* implicit */unsigned long long int) var_4))));
                    arr_73 [(signed char)18] [i_6] [i_13] [18U] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_33 [i_6] [i_6 + 2] [(unsigned short)0] [i_6]), (((/* implicit */unsigned long long int) arr_27 [i_6] [i_6 - 4]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_65 [i_6] [i_13] [i_14]))) : (min((((/* implicit */unsigned long long int) ((_Bool) arr_28 [(signed char)6] [i_13]))), (((unsigned long long int) var_3))))));
                    var_34 = (short)50;
                }
            } 
        } 
        var_35 = ((/* implicit */short) max((var_35), ((short)15177)));
    }
    var_36 = ((/* implicit */signed char) var_9);
}
