/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149479
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149479 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149479
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
    for (unsigned char i_0 = 2; i_0 < 12; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 12; i_1 += 2) 
        {
            {
                /* LoopSeq 4 */
                /* vectorizable */
                for (int i_2 = 0; i_2 < 13; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 10; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 4) 
                        {
                            {
                                var_14 = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)1)) < (((/* implicit */int) (unsigned char)96))))) & (((((/* implicit */int) var_12)) - (((/* implicit */int) arr_4 [i_3 - 1]))))));
                                arr_11 [i_0] [i_1 + 1] [i_3 + 1] [i_2] [i_4] = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) (short)20930)) || (((/* implicit */_Bool) (short)16368)))));
                                var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-16362))) < (14337446836013202821ULL))))) - (((unsigned long long int) (short)(-32767 - 1))))))));
                            }
                        } 
                    } 
                    arr_12 [i_0] [i_1] [i_2] [i_1] &= ((/* implicit */int) ((short) ((long long int) arr_0 [i_1])));
                    /* LoopSeq 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        var_16 = ((/* implicit */unsigned char) ((((/* implicit */int) (((_Bool)0) || (((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_5]))))) != (((/* implicit */int) ((signed char) var_13)))));
                        /* LoopSeq 1 */
                        for (int i_6 = 1; i_6 < 10; i_6 += 3) 
                        {
                            arr_18 [i_0] [i_0 - 1] [i_0 - 2] [i_0] [i_0] = ((/* implicit */signed char) ((unsigned char) ((unsigned long long int) arr_10 [i_0] [i_1] [i_2] [i_5] [i_2])));
                            var_17 -= ((/* implicit */short) ((unsigned int) ((((/* implicit */int) arr_4 [i_0])) >> (((((/* implicit */int) (short)16361)) - (16336))))));
                            var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) ((_Bool) ((((/* implicit */int) arr_4 [i_0])) == (var_1)))))));
                            var_19 = ((/* implicit */long long int) ((unsigned short) ((arr_4 [i_0]) && (((/* implicit */_Bool) arr_8 [i_1] [i_5] [i_6])))));
                        }
                        var_20 *= ((/* implicit */signed char) ((((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) arr_3 [i_0])))) || (((((/* implicit */_Bool) (signed char)0)) || (arr_4 [i_0])))));
                        /* LoopSeq 4 */
                        for (unsigned short i_7 = 0; i_7 < 13; i_7 += 2) 
                        {
                            var_21 &= ((/* implicit */short) ((long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1]))) > (arr_19 [i_0] [i_1] [i_1] [i_2] [i_5] [i_7] [i_7]))));
                            var_22 *= ((/* implicit */_Bool) ((((long long int) var_3)) << (((/* implicit */int) ((_Bool) (short)32767)))));
                            arr_21 [i_7] [i_5] [i_2] [i_1] [i_0] = ((/* implicit */signed char) ((long long int) ((signed char) var_11)));
                            var_23 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) || (((/* implicit */_Bool) 1388194894))))) == (((/* implicit */int) ((((/* implicit */_Bool) arr_17 [i_0 + 1] [i_0] [i_0] [i_0] [i_0 + 1])) && (((/* implicit */_Bool) 0ULL)))))));
                        }
                        for (unsigned short i_8 = 0; i_8 < 13; i_8 += 1) 
                        {
                            arr_24 [i_8] [i_1] = ((/* implicit */signed char) ((((var_1) ^ (((/* implicit */int) var_11)))) < (((/* implicit */int) ((unsigned char) arr_2 [i_0] [i_1])))));
                            arr_25 [i_0] [i_1] [i_0] [i_5] [i_8] [i_8] [i_8] = ((/* implicit */unsigned char) ((long long int) ((int) var_1)));
                            arr_26 [i_0] [i_0] [i_0] [i_0] [i_2] [i_8] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) (short)32760))) && (((4109297237696348819ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0 + 1] [i_0])))))));
                        }
                        for (int i_9 = 0; i_9 < 13; i_9 += 1) 
                        {
                            arr_31 [i_0] [i_0] [i_0 + 1] [i_0] [i_0] [i_0] [i_0 - 1] = ((/* implicit */unsigned int) ((((/* implicit */int) ((short) 9223372036854775807LL))) <= (((/* implicit */int) ((_Bool) (short)32767)))));
                            var_24 *= ((/* implicit */short) ((((unsigned long long int) 9525909703746007735ULL)) - (((/* implicit */unsigned long long int) ((var_10) >> (((arr_6 [i_0] [i_0] [i_0] [i_0]) - (5681447331997981108LL))))))));
                            arr_32 [i_0] [i_1 + 1] [i_2] = ((unsigned char) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (signed char)-49))));
                            var_25 = ((/* implicit */int) ((((/* implicit */int) ((unsigned char) (signed char)27))) >= (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_1])) && (((/* implicit */_Bool) arr_29 [i_0] [i_0] [i_0])))))));
                        }
                        for (signed char i_10 = 0; i_10 < 13; i_10 += 4) 
                        {
                            arr_35 [i_0] [i_0] [i_2] [i_5] [i_10] = ((/* implicit */unsigned char) ((((long long int) var_1)) - (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_11))))));
                            arr_36 [i_0] [i_0] [i_0] [i_5] [i_10] = ((/* implicit */short) ((unsigned long long int) ((_Bool) (unsigned char)240)));
                            var_26 = ((/* implicit */long long int) ((unsigned long long int) ((signed char) (short)32767)));
                        }
                    }
                    for (long long int i_11 = 1; i_11 < 11; i_11 += 1) 
                    {
                        arr_40 [i_2] = ((/* implicit */unsigned long long int) ((long long int) ((_Bool) arr_19 [i_0] [i_0] [i_0] [i_0 + 1] [i_0 - 2] [i_0] [i_0])));
                        var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) arr_0 [i_0]))) && (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [i_2] [i_11]))) & (arr_29 [i_11] [i_11] [i_11])))))))));
                        var_28 = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) -1351647101)) && (var_3))));
                    }
                    /* LoopSeq 1 */
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        var_29 = ((/* implicit */short) ((long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0]))) & (var_13))));
                        /* LoopSeq 2 */
                        for (unsigned short i_13 = 1; i_13 < 11; i_13 += 1) 
                        {
                            arr_47 [i_0] [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_0] = ((/* implicit */long long int) ((_Bool) ((((/* implicit */int) (short)20135)) & (((/* implicit */int) arr_1 [i_0])))));
                            var_30 = ((/* implicit */long long int) ((int) ((int) -1LL)));
                        }
                        for (int i_14 = 0; i_14 < 13; i_14 += 4) 
                        {
                            arr_51 [i_1] [i_1] [i_1] [i_1] [i_1] |= ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_11))) / (2932948945183426228LL))));
                            var_31 ^= ((/* implicit */signed char) ((short) -1351647092));
                            arr_52 [i_0] [i_0] [i_0] [i_12] [i_14] = ((((/* implicit */unsigned long long int) ((unsigned int) (short)-16362))) / (((unsigned long long int) (short)4)));
                            arr_53 [i_1] [i_12] [i_12] = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) & (arr_48 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12] [i_12]))));
                        }
                        var_32 = ((/* implicit */long long int) min((var_32), (((((/* implicit */long long int) ((/* implicit */int) ((signed char) var_8)))) | (((arr_44 [i_1] [i_1] [i_1] [i_1] [i_1 + 1] [i_1]) | (((/* implicit */long long int) -65536))))))));
                        arr_54 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1] = ((long long int) ((unsigned char) arr_3 [i_0 - 2]));
                        arr_55 [i_0] [i_2] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((unsigned char) ((unsigned char) var_3)));
                    }
                }
                for (unsigned char i_15 = 0; i_15 < 13; i_15 += 4) 
                {
                    arr_58 [i_0] [i_1] [i_15] = ((((/* implicit */int) (unsigned short)11056)) - (((/* implicit */int) (signed char)33)));
                    /* LoopSeq 1 */
                    for (unsigned char i_16 = 0; i_16 < 13; i_16 += 1) 
                    {
                        var_33 = ((/* implicit */signed char) min((var_33), (((/* implicit */signed char) ((((/* implicit */_Bool) ((short) (((_Bool)0) && (((/* implicit */_Bool) (unsigned char)106)))))) && (((/* implicit */_Bool) ((long long int) ((((/* implicit */int) var_12)) / (65520))))))))));
                        var_34 = ((/* implicit */short) min((var_34), (((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) var_1)) & (arr_19 [i_0 + 1] [i_0] [i_1 - 1] [i_15] [i_15] [i_16] [i_16])))), (min((14337446836013202797ULL), (((/* implicit */unsigned long long int) (short)-7979))))))) || (((/* implicit */_Bool) ((((((/* implicit */int) (short)-17312)) & (var_5))) ^ (((((((/* implicit */int) (short)-16368)) + (2147483647))) << (((((((/* implicit */int) (short)-17318)) + (17334))) - (16)))))))))))));
                        var_35 ^= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((unsigned long long int) var_12)) <= (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (short)-7979)), (520093696U)))))))) & (((((/* implicit */unsigned long long int) ((int) (unsigned short)32086))) ^ (((unsigned long long int) (short)20135))))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_17 = 1; i_17 < 11; i_17 += 1) 
                        {
                            var_36 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-16344))) / (((min((((/* implicit */unsigned int) (signed char)60)), (4073027428U))) + (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (short)-77))))))));
                            arr_64 [i_17] = ((/* implicit */signed char) max((min((max((((/* implicit */short) (signed char)-55)), ((short)20135))), (((/* implicit */short) ((signed char) (unsigned char)0))))), (((/* implicit */short) ((signed char) (unsigned short)22260)))));
                            arr_65 [i_17] = ((_Bool) min((min((((/* implicit */long long int) arr_59 [i_0] [i_0] [i_0])), (7568094985337821436LL))), (((/* implicit */long long int) ((signed char) 946869615)))));
                            var_37 = max((((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_15 [i_15] [i_1]))) + (arr_6 [i_0] [i_1] [i_15] [i_0])))) && (((/* implicit */_Bool) min(((signed char)-64), ((signed char)7)))))), (((((/* implicit */_Bool) max((((/* implicit */unsigned int) (short)0)), (arr_39 [i_16] [i_16] [i_16] [i_16])))) && (((((/* implicit */_Bool) (unsigned char)15)) && (((/* implicit */_Bool) 14337446836013202797ULL)))))));
                        }
                        var_38 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)65535)) & (((/* implicit */int) ((((/* implicit */int) (short)16350)) < (((/* implicit */int) (_Bool)0)))))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)22271))) ^ (8418462427107134857ULL)))));
                    }
                }
                /* vectorizable */
                for (unsigned char i_18 = 2; i_18 < 10; i_18 += 1) 
                {
                    arr_70 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) ((432345564227567616ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (short)20123)))))) > (((/* implicit */int) ((((/* implicit */int) (unsigned short)33449)) != (((/* implicit */int) (unsigned char)42)))))));
                    var_39 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) 18446744073709551612ULL))) || (((((/* implicit */int) (signed char)-16)) == (((/* implicit */int) (unsigned short)65532))))));
                    var_40 = ((unsigned char) ((unsigned short) var_5));
                    var_41 -= ((/* implicit */long long int) ((((((/* implicit */int) (signed char)-55)) - (((/* implicit */int) arr_1 [i_0 - 2])))) == (((/* implicit */int) ((((/* implicit */_Bool) 9468025151533776583ULL)) && (arr_9 [i_0] [i_0] [i_0]))))));
                    /* LoopNest 2 */
                    for (signed char i_19 = 0; i_19 < 13; i_19 += 3) 
                    {
                        for (_Bool i_20 = 1; i_20 < 1; i_20 += 1) 
                        {
                            {
                                arr_75 [i_18 + 1] [i_18 + 1] = ((/* implicit */unsigned char) ((unsigned int) ((long long int) (unsigned short)22250)));
                                arr_76 [i_0 - 1] [i_1] [i_18] [i_0 - 1] [i_20] = ((/* implicit */signed char) ((_Bool) ((short) var_13)));
                                var_42 = ((/* implicit */signed char) max((var_42), (((signed char) ((signed char) var_13)))));
                            }
                        } 
                    } 
                }
                for (signed char i_21 = 0; i_21 < 13; i_21 += 4) 
                {
                    var_43 = ((((long long int) ((((/* implicit */int) (signed char)-1)) / (((/* implicit */int) arr_16 [i_0] [i_0] [i_0 - 1] [i_0 - 1] [i_0]))))) == (((/* implicit */long long int) ((int) ((unsigned char) arr_43 [i_21] [i_1] [i_1] [i_0])))));
                    arr_81 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) ((short) var_7)))) && (((/* implicit */_Bool) ((unsigned char) ((((((/* implicit */int) var_0)) + (2147483647))) << (((((((/* implicit */int) arr_2 [i_0 - 1] [i_1])) + (11877))) - (28)))))))));
                    var_44 = ((/* implicit */unsigned long long int) max(((unsigned char)215), (((/* implicit */unsigned char) (signed char)-55))));
                }
                /* LoopNest 2 */
                for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                {
                    for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                    {
                        {
                            arr_87 [i_22] [i_22] [i_22] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */int) ((short) var_8))) / (((/* implicit */int) ((unsigned short) (unsigned short)33449)))))), (max((min((((/* implicit */unsigned long long int) arr_57 [i_0] [i_0])), (var_2))), (((/* implicit */unsigned long long int) ((signed char) arr_1 [i_0])))))));
                            arr_88 [i_0] [i_1] [i_22] [i_23] = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (signed char)27)), ((unsigned short)58914)))) && (((/* implicit */_Bool) max((((/* implicit */long long int) arr_60 [i_0] [i_0])), (-1LL))))))) ^ (((/* implicit */int) min((((short) arr_42 [i_1] [i_1] [i_1] [i_0])), (((/* implicit */short) ((((/* implicit */_Bool) (short)-16414)) || (((/* implicit */_Bool) 6U))))))))));
                            arr_89 [i_0] [i_0] [i_0] [i_22] = ((/* implicit */signed char) ((int) ((int) ((4202177217U) - (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127)))))));
                            arr_90 [i_23] [i_22] [i_22] [i_0] = ((/* implicit */unsigned char) min((((max((((/* implicit */int) arr_17 [i_0] [i_0] [i_0] [i_22] [i_0])), (var_5))) ^ (((/* implicit */int) ((_Bool) var_7))))), (((/* implicit */int) ((short) max((arr_46 [i_23] [i_22] [i_22] [i_0] [i_0]), (((/* implicit */unsigned long long int) (short)-20135))))))));
                            var_45 *= ((/* implicit */long long int) ((_Bool) min((((/* implicit */long long int) max((((/* implicit */int) arr_13 [i_23])), (var_1)))), (((long long int) (signed char)1)))));
                        }
                    } 
                } 
                var_46 = ((/* implicit */signed char) max((((unsigned long long int) ((signed char) (signed char)44))), (((/* implicit */unsigned long long int) ((max((4739798136269757859LL), (((/* implicit */long long int) (_Bool)0)))) + (((/* implicit */long long int) ((/* implicit */int) max((arr_72 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned char) arr_59 [i_0] [i_0] [i_1])))))))))));
                /* LoopNest 2 */
                for (long long int i_24 = 0; i_24 < 13; i_24 += 4) 
                {
                    for (long long int i_25 = 0; i_25 < 13; i_25 += 2) 
                    {
                        {
                            arr_97 [i_0] [i_0] = ((((/* implicit */int) min((min((((/* implicit */short) (unsigned char)9)), ((short)-7978))), (((/* implicit */short) ((signed char) (unsigned char)15)))))) & (max((((/* implicit */int) ((unsigned char) var_7))), (max((((/* implicit */int) arr_3 [i_0])), (var_7))))));
                            arr_98 [i_0 - 1] [i_1] [i_25] = ((/* implicit */unsigned long long int) ((((((6032200780070463510LL) ^ (((/* implicit */long long int) 274321879)))) & (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)-1)) || (((/* implicit */_Bool) 430083742U)))))))) - (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((signed char) var_13)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_47 -= ((/* implicit */unsigned short) max((min((min((((/* implicit */unsigned int) var_12)), (430083742U))), (((/* implicit */unsigned int) ((unsigned short) (short)-7978))))), (((/* implicit */unsigned int) ((((/* implicit */int) ((signed char) var_1))) - (max((var_5), (((/* implicit */int) (short)20135)))))))));
    var_48 = ((/* implicit */unsigned short) max((max((((_Bool) var_3)), (((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_5)))))), (((_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) <= (var_6))))));
    var_49 = ((/* implicit */_Bool) ((max((((((/* implicit */unsigned long long int) var_9)) - (var_6))), (((/* implicit */unsigned long long int) ((unsigned char) var_3))))) ^ (((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */int) (short)-7978)) + (var_7)))), (((((/* implicit */long long int) var_7)) ^ (var_4))))))));
}
