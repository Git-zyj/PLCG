/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111086
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
    for (unsigned short i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */signed char) ((unsigned int) var_7));
                /* LoopSeq 3 */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
                {
                    var_15 += ((/* implicit */int) var_1);
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 25; i_4 += 2) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_8 [i_0] [i_0] [i_1] [i_0])))))));
                                arr_12 [i_1] = ((/* implicit */unsigned long long int) ((var_3) ? (((/* implicit */int) arr_8 [i_0 + 1] [i_0 + 1] [i_0 + 2] [i_0])) : (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) arr_11 [21ULL] [8U] [21ULL] [i_2] [21ULL] [i_1] [i_0]))))))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) min((min((arr_4 [i_2 + 1] [i_2 + 1] [i_0 + 1]), (arr_4 [i_2 + 1] [i_2 + 1] [i_0 + 2]))), (((/* implicit */short) (_Bool)1)))))));
                }
                for (unsigned char i_5 = 0; i_5 < 25; i_5 += 2) 
                {
                    /* LoopNest 2 */
                    for (signed char i_6 = 0; i_6 < 25; i_6 += 3) 
                    {
                        for (unsigned short i_7 = 1; i_7 < 24; i_7 += 2) 
                        {
                            {
                                arr_22 [i_1] [i_1] = ((/* implicit */short) ((((((/* implicit */int) arr_20 [i_7 + 1] [i_7 + 1] [i_7 - 1] [i_7 - 1] [i_7])) <= (((/* implicit */int) (short)32767)))) ? (((/* implicit */int) min((((/* implicit */short) (!(((/* implicit */_Bool) arr_3 [i_1] [i_1]))))), (min((var_7), (var_9)))))) : (((/* implicit */int) var_9))));
                                arr_23 [i_1] [i_6] [i_5] [i_1] [i_1] = ((/* implicit */unsigned short) var_0);
                                var_18 = ((/* implicit */unsigned char) arr_11 [i_0] [i_0] [(short)16] [i_6] [i_0 - 1] [i_7 + 1] [i_6]);
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned int i_8 = 0; i_8 < 25; i_8 += 1) 
                    {
                        arr_28 [i_1] [i_8] [i_1] [i_1] [i_1] [i_1] = arr_1 [i_0 - 1];
                        /* LoopSeq 1 */
                        for (unsigned char i_9 = 0; i_9 < 25; i_9 += 4) 
                        {
                            var_19 = ((/* implicit */_Bool) (~(arr_2 [i_1] [i_1])));
                            var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) var_1))) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)159)) << (((((/* implicit */int) arr_10 [i_9] [i_8] [i_8] [i_0] [i_0] [i_0])) - (27988)))))) : (((((/* implicit */_Bool) arr_0 [i_0 + 3] [i_9])) ? (((/* implicit */long long int) arr_25 [i_9])) : (arr_9 [i_5] [(signed char)10] [i_5] [i_5]))))))));
                            var_21 = ((/* implicit */unsigned int) arr_24 [i_1] [i_1] [i_1] [i_5]);
                        }
                        var_22 = ((/* implicit */long long int) ((short) arr_3 [i_0 - 1] [i_1]));
                        arr_32 [i_0] [(short)1] [i_0] [i_5] [i_1] [i_0 + 3] = ((/* implicit */unsigned int) arr_18 [i_1] [i_0 - 1] [i_1]);
                    }
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_7)))))));
                        var_24 *= ((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (arr_11 [i_0] [i_0] [i_1] [i_0] [24U] [i_10] [i_10]) : (((/* implicit */unsigned int) var_2))))) >= (arr_2 [i_5] [(short)14])))), (max((((((/* implicit */_Bool) arr_19 [i_0])) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (_Bool)1)))), ((+(((/* implicit */int) arr_29 [i_0 + 2] [i_0] [2ULL]))))))));
                    }
                }
                /* vectorizable */
                for (unsigned char i_11 = 0; i_11 < 25; i_11 += 4) 
                {
                    arr_37 [i_11] [(signed char)11] [i_11] [i_1] = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (short)32752))));
                    var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_1] [i_1])) || (((/* implicit */_Bool) var_5))));
                    var_26 ^= ((/* implicit */short) arr_14 [i_11] [i_11] [i_11] [i_0]);
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_12 = 3; i_12 < 13; i_12 += 4) 
    {
        for (unsigned long long int i_13 = 0; i_13 < 14; i_13 += 2) 
        {
            {
                var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)3650)) ? (((/* implicit */int) arr_1 [i_12])) : (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) var_8))))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_14 = 0; i_14 < 14; i_14 += 2) 
                {
                    var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) var_12))));
                    var_29 = ((/* implicit */short) (+((+(((/* implicit */int) var_0))))));
                }
                /* LoopSeq 1 */
                for (unsigned char i_15 = 0; i_15 < 14; i_15 += 1) 
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned short i_16 = 0; i_16 < 14; i_16 += 2) 
                    {
                        var_30 |= ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) var_11)))))));
                        var_31 = ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) arr_18 [i_13] [i_15] [i_13])));
                        arr_51 [i_16] [i_15] [i_15] [(short)1] [i_12] = ((/* implicit */unsigned long long int) arr_21 [i_12 - 3] [i_13] [i_15]);
                    }
                    for (unsigned char i_17 = 0; i_17 < 14; i_17 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_18 = 0; i_18 < 14; i_18 += 2) 
                        {
                            var_32 -= ((/* implicit */short) (!((!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_12)), (arr_42 [i_12 + 1]))))))));
                            var_33 = ((/* implicit */unsigned int) var_8);
                            arr_59 [i_12] = max((((unsigned long long int) (unsigned short)65535)), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) arr_52 [i_12] [i_17] [i_17] [i_17] [i_18] [i_12])) <= (arr_42 [i_12 + 1])))));
                        }
                        var_34 = ((/* implicit */_Bool) min((var_34), (((/* implicit */_Bool) max((((/* implicit */int) ((short) ((short) var_1)))), ((+(((/* implicit */int) max((var_1), (((/* implicit */unsigned short) arr_15 [(short)14] [i_15] [(short)14] [i_12]))))))))))));
                    }
                    for (unsigned long long int i_19 = 0; i_19 < 14; i_19 += 1) 
                    {
                        arr_62 [i_19] [i_19] = ((/* implicit */int) var_3);
                        var_35 = min((max((arr_61 [i_19] [i_15] [i_12 - 3]), (arr_61 [i_12 - 2] [i_12 + 1] [i_12]))), (arr_61 [i_19] [i_15] [i_12]));
                        var_36 ^= ((/* implicit */unsigned long long int) arr_49 [i_12] [i_13] [i_12] [i_15] [i_12]);
                        arr_63 [i_19] = ((short) min((((/* implicit */int) max((arr_15 [i_19] [(unsigned short)21] [i_12] [i_12]), (var_11)))), ((+(((/* implicit */int) var_12))))));
                        /* LoopSeq 3 */
                        for (unsigned char i_20 = 0; i_20 < 14; i_20 += 1) 
                        {
                            arr_67 [i_19] = ((/* implicit */unsigned int) var_4);
                            var_37 |= ((/* implicit */unsigned int) var_10);
                            var_38 = ((/* implicit */short) var_3);
                            arr_68 [i_20] [i_19] [i_19] [i_19] [i_13] [i_12] [i_12] = ((/* implicit */unsigned short) var_5);
                            var_39 = ((/* implicit */int) min((var_39), ((+(((/* implicit */int) max((arr_18 [i_12] [i_12 - 1] [i_13]), (arr_18 [i_12] [i_12 - 1] [i_13]))))))));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_21 = 1; i_21 < 12; i_21 += 3) 
                        {
                            arr_71 [i_13] [i_13] |= ((/* implicit */int) var_3);
                            arr_72 [i_12] [i_13] [i_15] [i_19] [i_19] [i_19] = ((/* implicit */unsigned int) var_6);
                            var_40 = ((/* implicit */long long int) max((var_40), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_36 [i_19] [i_19] [i_19])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) >= (15210462484103247889ULL))))) : (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (arr_41 [i_12] [i_12] [i_12]) : (var_5))))))));
                            arr_73 [i_12] [i_13] [i_19] [i_15] [i_19] [i_21] = ((/* implicit */unsigned char) (+(arr_65 [i_12 - 2] [i_19] [i_21 + 1])));
                        }
                        for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                        {
                            var_41 = ((/* implicit */_Bool) min((var_41), (arr_40 [i_12])));
                            var_42 = ((/* implicit */unsigned char) min((var_42), (((/* implicit */unsigned char) max((max(((short)27455), ((short)1023))), (((/* implicit */short) ((((/* implicit */int) ((short) var_5))) >= (((/* implicit */int) arr_10 [i_22] [i_19] [i_15] [(unsigned char)8] [i_13] [i_12 - 1]))))))))));
                            var_43 = ((/* implicit */_Bool) max((var_43), (((/* implicit */_Bool) min((((/* implicit */unsigned short) min(((short)-32762), ((short)25232)))), (arr_66 [i_13] [i_13]))))));
                            arr_76 [i_22] [i_22] [i_12] [i_13] [i_22] [i_15] |= ((/* implicit */unsigned char) arr_52 [i_12 - 1] [i_13] [i_15] [(unsigned char)0] [i_13] [i_12 - 1]);
                        }
                    }
                    arr_77 [i_12] [i_13] = ((/* implicit */unsigned char) (((((-(((/* implicit */int) arr_20 [i_15] [i_12] [i_12] [i_12] [i_12])))) + (((/* implicit */int) max((arr_61 [i_12] [i_12] [7ULL]), (((/* implicit */short) var_3))))))) + (((/* implicit */int) arr_36 [i_12 - 1] [i_13] [i_15]))));
                    var_44 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_70 [i_12 - 3] [i_12] [i_12 - 1] [i_12 - 3] [i_12 - 2])) : (((/* implicit */int) arr_70 [i_12 - 1] [i_12 - 2] [i_12 - 2] [i_12] [i_12 - 2]))))) ? (((/* implicit */int) arr_70 [i_12 - 2] [i_12 - 3] [i_12 - 3] [i_12 - 3] [i_12 - 3])) : (((/* implicit */int) max((arr_70 [i_12 - 1] [i_12 + 1] [i_12 - 2] [i_12] [i_12 - 1]), (((/* implicit */unsigned short) var_11)))))));
                }
            }
        } 
    } 
    /* LoopSeq 4 */
    for (unsigned long long int i_23 = 1; i_23 < 21; i_23 += 2) 
    {
        var_45 -= ((/* implicit */signed char) ((min((15210462484103247889ULL), (13785084161162216643ULL))) + (((/* implicit */unsigned long long int) ((unsigned int) var_5)))));
        var_46 = ((/* implicit */unsigned long long int) max((var_46), (((/* implicit */unsigned long long int) (+(((/* implicit */int) min((arr_13 [i_23] [i_23] [i_23 - 1]), (arr_13 [i_23 - 1] [i_23 - 1] [i_23 + 1])))))))));
        arr_81 [i_23] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) var_4)), (4661659912547334972ULL)));
        var_47 *= ((/* implicit */unsigned long long int) min((((long long int) var_8)), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_78 [i_23 - 1] [i_23 + 2])))))));
    }
    /* vectorizable */
    for (unsigned int i_24 = 0; i_24 < 13; i_24 += 2) 
    {
        var_48 = ((/* implicit */short) min((var_48), (((/* implicit */short) ((((/* implicit */unsigned long long int) arr_69 [i_24] [i_24] [i_24] [i_24] [i_24] [i_24] [i_24])) % (arr_65 [i_24] [i_24] [i_24]))))));
        arr_84 [i_24] = (_Bool)0;
    }
    /* vectorizable */
    for (unsigned char i_25 = 0; i_25 < 12; i_25 += 3) 
    {
        arr_87 [i_25] [i_25] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_33 [i_25] [i_25] [i_25] [(short)22] [6ULL] [i_25]))));
        /* LoopNest 2 */
        for (short i_26 = 1; i_26 < 11; i_26 += 4) 
        {
            for (short i_27 = 4; i_27 < 11; i_27 += 3) 
            {
                {
                    arr_94 [(_Bool)1] [(_Bool)1] [i_26] [i_26] = ((/* implicit */unsigned int) ((((/* implicit */int) (short)-32752)) % (((/* implicit */int) (short)25244))));
                    var_49 = ((/* implicit */signed char) arr_14 [i_26 - 1] [i_26] [(short)8] [i_26 + 1]);
                    arr_95 [i_25] [(unsigned char)6] [i_25] |= ((/* implicit */unsigned char) (((+(var_5))) >= (((/* implicit */unsigned int) ((/* implicit */int) (short)24931)))));
                }
            } 
        } 
        arr_96 [i_25] [i_25] = arr_48 [i_25] [i_25] [i_25] [i_25];
    }
    for (long long int i_28 = 0; i_28 < 16; i_28 += 2) 
    {
        var_50 -= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_8 [(_Bool)0] [i_28] [i_28] [i_28])) ? (((/* implicit */int) arr_13 [i_28] [i_28] [i_28])) : (((/* implicit */int) arr_8 [i_28] [i_28] [i_28] [(short)24])))) <= (((/* implicit */int) ((short) (short)-3672)))));
        var_51 |= ((/* implicit */_Bool) ((unsigned char) (short)-32767));
        arr_99 [i_28] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_11))))) ? ((-((+(((/* implicit */int) var_3)))))) : (((/* implicit */int) var_7))));
    }
}
