/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177936
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
    var_18 = max((var_9), (((((/* implicit */_Bool) ((unsigned char) var_13))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) var_15);
        var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0]))))) : (((/* implicit */int) arr_1 [i_0] [i_0]))))) ? (((/* implicit */int) arr_0 [i_0])) : (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_1 [i_0] [i_0])))))))));
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_3)) % (((/* implicit */int) arr_1 [i_0] [i_0]))))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0])))) : ((~((~(((/* implicit */int) arr_1 [i_0] [i_0]))))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] [i_1] = ((/* implicit */int) ((min((var_12), (((/* implicit */unsigned int) var_7)))) | (((/* implicit */unsigned int) ((/* implicit */int) var_6)))));
        var_20 += var_8;
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
    {
        var_21 += ((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */int) (signed char)96)) > (((((/* implicit */_Bool) var_15)) ? (-1058374799) : (arr_9 [i_2] [i_2]))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_3 = 2; i_3 < 10; i_3 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 1) 
            {
                for (unsigned char i_5 = 0; i_5 < 12; i_5 += 1) 
                {
                    {
                        arr_20 [i_5] [i_4] [i_3] [i_2] [i_2] &= ((/* implicit */unsigned int) ((arr_17 [i_3] [i_3] [i_3 + 2] [i_3]) >= (arr_17 [i_2] [i_2] [i_3 - 2] [i_2])));
                        /* LoopSeq 3 */
                        for (unsigned short i_6 = 0; i_6 < 12; i_6 += 2) 
                        {
                            var_22 *= ((/* implicit */unsigned short) var_6);
                            var_23 += ((/* implicit */signed char) ((((/* implicit */int) arr_22 [i_3 - 2] [i_3 - 2] [i_3] [i_3] [i_3 - 2] [i_3] [i_3])) / (var_9)));
                            arr_25 [i_2] [i_3] [i_4] [i_4] [i_6] = ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned char)30)) : (((/* implicit */int) (unsigned char)116)))) * (((/* implicit */int) var_6)));
                            arr_26 [i_3] [i_3] [i_3] [i_5] [i_3] [i_3] [i_2] = ((/* implicit */int) var_8);
                        }
                        for (int i_7 = 0; i_7 < 12; i_7 += 2) 
                        {
                            var_24 -= ((/* implicit */_Bool) (~(arr_12 [i_3 - 2] [i_3 - 2] [i_3 - 2])));
                            var_25 = ((/* implicit */long long int) (-2147483647 - 1));
                            var_26 ^= ((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-51))) * (var_2))) * (((/* implicit */unsigned int) ((/* implicit */int) var_8)))));
                            var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_30 [i_3 + 2] [i_3] [i_3 - 2])) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) arr_30 [i_3 + 2] [i_3 + 2] [i_3 + 1])))));
                        }
                        for (signed char i_8 = 3; i_8 < 9; i_8 += 4) 
                        {
                            arr_33 [i_3] [i_3] [i_3] [i_3] [i_2] = ((/* implicit */unsigned char) arr_22 [i_3] [i_3 + 2] [i_4] [i_8 + 2] [i_8] [i_8] [i_8]);
                            var_28 = ((((/* implicit */_Bool) arr_5 [i_3])) ? (arr_28 [i_3] [i_3] [i_3] [i_3 - 1] [i_3]) : (((/* implicit */int) (signed char)-77)));
                            arr_34 [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */int) ((((/* implicit */int) arr_32 [i_8] [i_5] [i_4] [i_2] [i_2])) < (((var_11) ^ (((/* implicit */int) (unsigned char)29))))));
                        }
                        var_29 = ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_3])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_4 [i_4]))))) : (((long long int) var_16))));
                        arr_35 [i_5] [i_5] [i_5] [i_5] |= ((/* implicit */signed char) ((((_Bool) var_15)) || (((/* implicit */_Bool) (signed char)-127))));
                    }
                } 
            } 
            arr_36 [i_3] [i_2] |= ((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_2] [i_3] [i_2] [i_3] [i_3] [i_2] [i_2]))))));
            var_30 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_3] [i_2])))))) || (((_Bool) arr_0 [i_2]))));
        }
        arr_37 [i_2] = ((/* implicit */int) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]))) : (var_2)));
        var_31 -= ((/* implicit */int) arr_14 [i_2] [i_2]);
    }
    /* LoopSeq 4 */
    for (short i_9 = 0; i_9 < 12; i_9 += 2) 
    {
        var_32 = ((int) var_16);
        arr_40 [i_9] [i_9] = ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_8 [i_9])) ? ((((_Bool)0) ? (((/* implicit */int) var_8)) : (var_9))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_9]))))))));
        var_33 = ((/* implicit */int) max((var_33), (((/* implicit */int) (!(((/* implicit */_Bool) ((((((/* implicit */int) (unsigned char)234)) < (1866151202))) ? (((((/* implicit */int) var_14)) >> (((((/* implicit */int) var_10)) - (11))))) : ((-(var_11)))))))))));
    }
    for (unsigned short i_10 = 1; i_10 < 14; i_10 += 4) 
    {
        var_34 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (+(var_5)))) ? (((((/* implicit */_Bool) var_9)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_16))))) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_10 + 2]))))) > (((((((/* implicit */_Bool) arr_1 [i_10] [i_10])) ? (0LL) : (((/* implicit */long long int) var_2)))) + (((/* implicit */long long int) ((((/* implicit */_Bool) arr_41 [i_10])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_10)))))))));
        arr_43 [i_10] = ((/* implicit */unsigned long long int) (-(max((((/* implicit */int) max((arr_41 [i_10]), (arr_41 [i_10])))), (1377968033)))));
        /* LoopNest 2 */
        for (long long int i_11 = 1; i_11 < 14; i_11 += 2) 
        {
            for (int i_12 = 0; i_12 < 16; i_12 += 4) 
            {
                {
                    var_35 = 1058374815;
                    arr_48 [i_10] [i_10] [i_10] [i_10] = min((var_12), (((/* implicit */unsigned int) var_17)));
                    /* LoopSeq 3 */
                    for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
                    {
                        arr_51 [i_10] [i_10] [i_11] [i_11] [i_10] = ((/* implicit */int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_10] [i_11])) ? (2619324891U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_46 [i_10] [i_10] [i_12] [i_13])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_46 [i_11 + 1] [i_11] [i_11 + 1] [i_11]))) : (arr_50 [i_10] [i_10] [i_10 + 1] [i_10 + 1]))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_44 [i_13 - 1] [i_10 + 2] [i_12])), (var_1))))));
                        var_36 = ((/* implicit */signed char) min((var_36), (((/* implicit */signed char) var_12))));
                    }
                    for (int i_14 = 0; i_14 < 16; i_14 += 4) 
                    {
                        arr_55 [i_10] [i_10] [i_12] [i_14] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((var_2) >> (((((/* implicit */int) arr_44 [i_10] [i_10] [i_10])) - (53212)))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-119)) ? (-1866151203) : (var_17)))) ? (((/* implicit */int) arr_52 [i_10] [i_11 + 1] [i_10 + 1])) : (((((/* implicit */_Bool) arr_0 [i_11])) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_16))))))) : (((((/* implicit */unsigned int) ((((/* implicit */int) var_8)) | (((/* implicit */int) var_7))))) * (var_12)))));
                        var_37 = ((/* implicit */int) min((var_37), (((/* implicit */int) min((((/* implicit */unsigned long long int) (-(1873358166)))), (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) / (var_15)))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_46 [i_10] [i_11] [i_12] [i_11]))) : (var_15))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) / (((/* implicit */int) (signed char)-90))))))))))));
                        arr_56 [i_10] [i_11] [i_12] |= ((/* implicit */_Bool) ((var_4) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_54 [i_10] [i_11] [i_11]))))) : (((((((/* implicit */unsigned int) ((/* implicit */int) var_8))) == (var_2))) ? (((1675642405U) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))));
                        arr_57 [i_10] [i_12] [i_10] [i_10] = ((/* implicit */int) ((signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_45 [i_14] [i_14] [i_14]))) <= (var_2))));
                    }
                    for (unsigned char i_15 = 4; i_15 < 15; i_15 += 2) 
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned short i_16 = 0; i_16 < 16; i_16 += 2) 
                        {
                            arr_63 [i_10] [i_10] [i_10] |= ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_6))));
                            arr_64 [i_11] [i_15] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_52 [i_10 - 1] [i_11 + 2] [i_15 - 4])) : (((/* implicit */int) (_Bool)1))));
                        }
                        for (signed char i_17 = 0; i_17 < 16; i_17 += 2) 
                        {
                            arr_69 [i_17] [i_10] [i_12] [i_10] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_52 [i_11] [i_12] [i_12]))) : (var_2))), (((/* implicit */unsigned int) min((((/* implicit */int) (signed char)127)), (-1434593021))))))) && (((/* implicit */_Bool) arr_41 [i_17]))));
                            var_38 *= ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) arr_54 [i_17] [i_10] [i_10])))))));
                            arr_70 [i_17] [i_12] [i_12] [i_10] &= ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) - (max((((/* implicit */int) var_3)), (var_5)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */unsigned long long int) arr_61 [i_10] [i_10] [i_10] [i_10] [i_10])) : (arr_59 [i_15] [i_12] [i_10] [i_10])))) ? (((unsigned long long int) var_6)) : (((/* implicit */unsigned long long int) (~(var_1))))))));
                            arr_71 [i_10] [i_10] [i_10] [i_10] [i_15] [i_17] = ((/* implicit */signed char) var_7);
                            var_39 = ((/* implicit */unsigned long long int) min((var_39), (((/* implicit */unsigned long long int) ((int) (-(arr_42 [i_10 + 2])))))));
                        }
                        arr_72 [i_12] &= ((/* implicit */unsigned long long int) arr_49 [i_10 - 1] [i_15 - 1] [i_11 + 1] [i_11]);
                        arr_73 [i_10] [i_10] [i_10] [i_15] = ((/* implicit */signed char) min((((((/* implicit */_Bool) (+(1430571054)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-16)))))) : (max((((/* implicit */unsigned int) 929570907)), (arr_62 [i_15] [i_15] [i_15] [i_15] [i_15]))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 6153016413270276465ULL)))))));
                        arr_74 [i_10] [i_10] [i_10] = ((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) var_15)) ? (((((/* implicit */_Bool) arr_54 [i_10] [i_11] [i_10])) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_15] [i_12])) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_0 [i_10]))))))));
                    }
                    arr_75 [i_10] [i_10] [i_12] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)226)) || (((/* implicit */_Bool) (-(var_1))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned long long int i_18 = 1; i_18 < 11; i_18 += 1) 
    {
        /* LoopSeq 1 */
        for (signed char i_19 = 4; i_19 < 10; i_19 += 1) 
        {
            var_40 = ((/* implicit */long long int) min((var_40), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)0)) ? (((var_7) ? (((/* implicit */unsigned long long int) var_11)) : (var_15))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_8)) >= (((/* implicit */int) var_16)))))))))));
            arr_82 [6] [6] |= ((/* implicit */short) ((((/* implicit */_Bool) (signed char)108)) ? (((/* implicit */unsigned int) var_9)) : (var_12)));
            var_41 = ((/* implicit */short) min((var_41), (((/* implicit */short) ((((/* implicit */_Bool) ((arr_12 [i_18] [i_18] [i_18]) | (((/* implicit */int) (unsigned short)65515))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (var_17) : (var_5)))) : (((((/* implicit */_Bool) var_12)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))))));
            arr_83 [(unsigned short)4] [i_18] [(unsigned short)4] &= var_5;
            arr_84 [i_18] = ((/* implicit */long long int) var_6);
        }
        arr_85 [8U] [i_18] |= ((/* implicit */unsigned long long int) arr_46 [i_18] [i_18] [i_18] [i_18]);
    }
    for (int i_20 = 0; i_20 < 17; i_20 += 1) 
    {
        arr_88 [i_20] = ((/* implicit */int) (~(((((/* implicit */_Bool) ((int) var_8))) ? (1675642405U) : (((/* implicit */unsigned int) ((/* implicit */int) max((arr_87 [i_20]), (((/* implicit */short) arr_1 [i_20] [i_20]))))))))));
        var_42 ^= ((/* implicit */unsigned char) min((((((/* implicit */int) arr_1 [i_20] [i_20])) - (((/* implicit */int) arr_1 [i_20] [i_20])))), (((/* implicit */int) arr_87 [12ULL]))));
        /* LoopSeq 1 */
        for (unsigned char i_21 = 4; i_21 < 14; i_21 += 2) 
        {
            arr_91 [i_20] [i_21] [i_20] = (_Bool)1;
            arr_92 [i_20] [i_20] [i_21] = ((/* implicit */unsigned char) ((((/* implicit */long long int) min((((/* implicit */int) ((((/* implicit */_Bool) arr_86 [i_20])) && (((/* implicit */_Bool) var_2))))), ((+(((/* implicit */int) arr_87 [i_20]))))))) & ((~(((((/* implicit */_Bool) arr_90 [i_20] [i_20] [i_20])) ? (6165070603451710949LL) : (((/* implicit */long long int) ((/* implicit */int) arr_90 [i_20] [i_20] [i_20])))))))));
            var_43 = ((/* implicit */int) ((var_1) - (((/* implicit */long long int) (-(((/* implicit */int) arr_87 [i_21])))))));
            arr_93 [i_20] [i_20] [i_21] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) < (2619324891U)))), (max((var_1), (((/* implicit */long long int) var_13))))))) && (((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_90 [i_20] [i_21] [i_21])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_0 [i_20])))))))));
            arr_94 [i_20] [i_20] [i_20] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) ((_Bool) var_8)))) || (((/* implicit */_Bool) arr_1 [i_21 + 3] [i_21 + 3]))));
        }
    }
}
