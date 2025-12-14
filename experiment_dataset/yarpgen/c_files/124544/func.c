/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124544
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
    var_16 |= ((/* implicit */unsigned int) var_11);
    /* LoopSeq 3 */
    for (unsigned char i_0 = 2; i_0 < 9; i_0 += 2) 
    {
        var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) min(((+(((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_0 [8ULL])) : (((/* implicit */int) arr_0 [i_0])))))), (((/* implicit */int) (unsigned char)95)))))));
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            /* LoopSeq 4 */
            for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                /* LoopNest 2 */
                for (short i_3 = 0; i_3 < 11; i_3 += 1) 
                {
                    for (unsigned int i_4 = 2; i_4 < 7; i_4 += 1) 
                    {
                        {
                            arr_14 [i_0] [i_1] [i_0] [i_0] [i_3] [i_4 - 1] &= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) var_3)), (max((((((/* implicit */unsigned long long int) -459743777)) & (var_14))), (max((6982362771382327336ULL), (((/* implicit */unsigned long long int) var_6))))))));
                            var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(arr_1 [(short)3])))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (1759196322U))))));
                            var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((var_9), (((/* implicit */unsigned long long int) arr_0 [i_0 + 1]))))) ? ((+(((/* implicit */int) arr_10 [i_0 - 1] [i_0 + 1] [i_0 + 2] [i_4])))) : (((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)18054))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    var_20 += ((/* implicit */_Bool) arr_4 [i_0] [i_1] [(_Bool)1] [i_1]);
                    var_21 |= ((/* implicit */unsigned long long int) ((short) 459743777));
                }
                arr_18 [i_0 - 1] [i_0 - 1] [i_2] = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) max((var_6), (((/* implicit */unsigned short) var_8))))))))));
                var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_15 [i_0 - 1] [i_0 + 2]))))), (arr_2 [i_0 + 2] [i_0]))))));
            }
            for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 3) 
            {
                var_23 = ((/* implicit */short) min((((/* implicit */unsigned int) (unsigned short)12)), (4294967295U)));
                arr_22 [i_0 + 2] [i_0] [i_0] = ((/* implicit */signed char) max((9079256848778919936ULL), (((/* implicit */unsigned long long int) -459743777))));
                var_24 = ((/* implicit */unsigned short) (+(var_14)));
            }
            for (unsigned long long int i_7 = 0; i_7 < 11; i_7 += 1) 
            {
                arr_27 [i_0 + 2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((arr_19 [i_0] [i_0]) >> (((11464381302327224281ULL) - (11464381302327224269ULL))))) << (((((/* implicit */int) var_8)) + (142)))))) ? (((/* implicit */unsigned long long int) (+(2252781540U)))) : (min((((/* implicit */unsigned long long int) max(((unsigned char)188), ((unsigned char)162)))), (max((((/* implicit */unsigned long long int) (_Bool)0)), (arr_2 [i_0] [i_1])))))));
                var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned short)2)), (536862720U)))) ? (arr_17 [i_7] [i_0]) : (arr_17 [i_7] [i_1])))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((var_12), (((/* implicit */unsigned long long int) (unsigned short)29714))))))))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_5)), (var_10)))) ? (((/* implicit */long long int) arr_19 [i_0 - 1] [i_0 + 2])) : (((long long int) var_6)))))))));
                /* LoopSeq 2 */
                for (long long int i_8 = 1; i_8 < 8; i_8 += 3) 
                {
                    var_26 = ((/* implicit */short) var_9);
                    var_27 = (+(((/* implicit */int) arr_9 [3LL] [i_1] [i_7] [i_7] [i_7] [i_1])));
                    var_28 = ((/* implicit */short) arr_29 [i_0] [i_1] [i_7] [i_8] [i_0] [(unsigned short)0]);
                    var_29 &= ((/* implicit */_Bool) var_2);
                    var_30 = ((/* implicit */short) ((unsigned short) (-((((_Bool)1) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))));
                }
                for (unsigned short i_9 = 0; i_9 < 11; i_9 += 3) 
                {
                    var_31 = ((/* implicit */long long int) arr_23 [i_0] [i_1] [i_7]);
                    /* LoopSeq 4 */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        var_32 = ((/* implicit */long long int) max((var_32), (arr_31 [i_9] [i_10] [i_10] [i_9] [i_7])));
                        var_33 = ((/* implicit */_Bool) (~(((var_9) - (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-40)))))));
                        arr_36 [i_0] [i_9] [i_0] [i_0] [i_1] [i_9] [i_0] = ((/* implicit */int) max((var_0), (((/* implicit */unsigned short) var_7))));
                        var_34 = ((/* implicit */unsigned short) arr_20 [7U] [7U]);
                    }
                    for (signed char i_11 = 0; i_11 < 11; i_11 += 1) 
                    {
                        arr_39 [i_0] [i_0] [i_0] [i_0] [i_11] [i_11] &= ((/* implicit */long long int) ((((/* implicit */_Bool) 459743763)) ? (((((/* implicit */_Bool) 459743773)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (4294967271U))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)2359)))));
                        arr_40 [i_0] [i_9] [i_0] [i_0] [i_9] [i_11] [1ULL] = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_0 + 1])))))));
                        var_35 = ((/* implicit */short) ((signed char) (+(((/* implicit */int) arr_6 [i_7] [i_0 + 2] [(unsigned char)1] [i_0 + 1])))));
                        var_36 = arr_33 [i_11] [i_11] [i_11];
                    }
                    for (signed char i_12 = 0; i_12 < 11; i_12 += 4) 
                    {
                        arr_44 [i_9] [i_9] [i_9] [i_9] [i_9] = ((/* implicit */_Bool) arr_38 [i_0] [i_7] [i_12]);
                        var_37 += ((/* implicit */long long int) var_2);
                        var_38 -= ((/* implicit */unsigned int) (signed char)125);
                        var_39 = ((/* implicit */unsigned char) min((var_39), (((/* implicit */unsigned char) ((long long int) (~(((/* implicit */int) (unsigned short)0))))))));
                    }
                    for (unsigned short i_13 = 0; i_13 < 11; i_13 += 1) 
                    {
                        arr_49 [i_0] [0LL] [i_9] [i_9] [i_13] = ((/* implicit */unsigned short) max((12573965296369234940ULL), (((/* implicit */unsigned long long int) (short)32760))));
                        arr_50 [i_0] [i_0 + 1] [i_0] [i_0 - 1] [i_9] = ((/* implicit */int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_4)))) ? (((/* implicit */unsigned long long int) ((unsigned int) var_7))) : (((((/* implicit */_Bool) arr_48 [i_0] [i_1] [i_7] [(signed char)3] [i_1])) ? (var_14) : (var_1)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (arr_21 [i_0] [i_1] [i_9] [i_13])));
                        arr_51 [i_9] [i_0] [i_0] [i_9] [i_9] [i_9] [i_9] |= ((/* implicit */signed char) arr_26 [i_0] [(signed char)1] [i_7] [i_9]);
                    }
                }
            }
            for (unsigned int i_14 = 2; i_14 < 10; i_14 += 2) 
            {
                var_40 = ((/* implicit */signed char) var_9);
                var_41 = ((/* implicit */long long int) ((var_14) < (((/* implicit */unsigned long long int) (-(min((((/* implicit */int) (signed char)121)), (-459743794))))))));
                /* LoopSeq 3 */
                for (unsigned long long int i_15 = 0; i_15 < 11; i_15 += 1) /* same iter space */
                {
                    var_42 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_34 [i_0 - 2] [i_14 - 1] [i_14 - 2] [i_14 - 2] [i_0] [i_14 + 1] [i_14 + 1]), (arr_34 [i_0 + 2] [i_14 - 2] [i_14 - 1] [i_14 - 2] [i_0] [i_14 - 1] [i_14 - 2])))) ? (arr_37 [i_0] [(unsigned short)9] [i_14] [i_14] [i_15]) : (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */unsigned long long int) var_10)) + (var_14))) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)29714)))))))));
                    arr_57 [1LL] [i_1] = ((/* implicit */signed char) max(((+((-(0U))))), (((/* implicit */unsigned int) arr_20 [i_0] [i_1]))));
                }
                for (unsigned long long int i_16 = 0; i_16 < 11; i_16 += 1) /* same iter space */
                {
                    arr_62 [i_0] [i_0] [i_16] [i_0] = ((/* implicit */unsigned long long int) ((_Bool) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_8))))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) -4680681823782355038LL)) : (18446744073709551601ULL))))));
                    arr_63 [i_16] [i_1] [i_14] [4U] = ((/* implicit */signed char) ((var_14) <= ((+(((((/* implicit */_Bool) arr_33 [2U] [2U] [i_16])) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))))));
                }
                /* vectorizable */
                for (signed char i_17 = 3; i_17 < 9; i_17 += 2) 
                {
                    var_43 |= ((/* implicit */unsigned long long int) ((((arr_55 [i_0] [i_1] [i_14 - 2] [i_17]) < (((/* implicit */long long int) arr_42 [i_0] [i_0] [i_1] [i_0] [i_14] [2ULL])))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) arr_60 [i_0] [i_0] [i_14] [i_14] [i_14]))))) : (((/* implicit */int) arr_47 [i_0] [i_0] [i_1] [i_0] [i_0]))));
                    arr_66 [i_0] [i_1] [i_17] [i_17] = ((((((/* implicit */int) (unsigned char)70)) & (((/* implicit */int) arr_53 [i_14] [(signed char)10] [i_14] [i_14])))) % (((((/* implicit */int) (unsigned char)248)) | (((/* implicit */int) var_2)))));
                }
            }
            var_44 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0))))) ? ((+(((/* implicit */int) arr_48 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0] [i_0])))) : (((/* implicit */int) var_0))))) + (-8283929006451738324LL)));
            arr_67 [i_0] [i_1] = ((/* implicit */long long int) max((((/* implicit */int) (!((_Bool)1)))), (-459743777)));
            var_45 = ((/* implicit */signed char) arr_21 [(unsigned short)10] [i_1] [i_1] [i_1]);
        }
        arr_68 [i_0] = ((/* implicit */short) (+((((_Bool)1) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) arr_41 [i_0] [i_0 - 2] [i_0] [i_0]))))));
    }
    for (unsigned char i_18 = 0; i_18 < 17; i_18 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_19 = 2; i_19 < 13; i_19 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned short i_20 = 0; i_20 < 17; i_20 += 4) 
            {
                arr_79 [i_20] |= ((/* implicit */short) arr_69 [i_19] [i_19]);
                var_46 = ((/* implicit */signed char) min((var_46), (((/* implicit */signed char) arr_73 [i_18] [i_19]))));
                /* LoopSeq 1 */
                for (unsigned int i_21 = 0; i_21 < 17; i_21 += 1) 
                {
                    var_47 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) (~(((/* implicit */int) var_8))))) ? (((((/* implicit */_Bool) arr_71 [i_21] [i_20])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))) : (arr_80 [i_21] [i_20] [(signed char)8] [i_18]))) : (((/* implicit */long long int) ((/* implicit */int) arr_76 [i_18] [i_18] [i_18] [i_18]))))), (((/* implicit */long long int) max((arr_81 [i_19 - 1] [i_19 - 1] [i_19 + 4] [i_19 + 1]), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_6))))))))));
                    arr_83 [i_21] [(signed char)13] [i_18] [i_18] = ((/* implicit */unsigned char) ((min((arr_75 [i_21] [i_21]), (((/* implicit */unsigned long long int) max((459743784), (((/* implicit */int) var_5))))))) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_80 [i_18] [i_18] [i_18] [i_18])), (16337322595846730173ULL)))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */int) arr_74 [i_18] [16ULL] [i_21])) & (((/* implicit */int) arr_74 [i_18] [i_21] [i_20])))))))));
                }
            }
            /* vectorizable */
            for (signed char i_22 = 0; i_22 < 17; i_22 += 3) 
            {
                var_48 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) arr_74 [i_18] [i_19] [i_18]))) : (arr_80 [i_19] [i_19 - 2] [14LL] [i_18]))))));
                arr_87 [i_22] = ((/* implicit */signed char) (((-(var_1))) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_70 [(unsigned char)12] [i_18])))));
                var_49 = ((/* implicit */short) ((((/* implicit */_Bool) arr_73 [i_19 + 4] [i_19 + 1])) ? (((/* implicit */int) arr_78 [i_19 + 1] [i_19 + 2] [i_19 - 1] [i_22])) : (var_13)));
            }
            var_50 = (-((-(((/* implicit */int) var_6)))));
            arr_88 [i_19] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) (-(((/* implicit */int) var_6))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_73 [i_19 - 2] [i_19 + 1]))) : (((((/* implicit */_Bool) arr_69 [(signed char)12] [5LL])) ? (var_3) : (var_3)))))));
        }
        for (unsigned long long int i_23 = 0; i_23 < 17; i_23 += 1) 
        {
            var_51 = ((/* implicit */_Bool) min((var_51), (((/* implicit */_Bool) ((((((((/* implicit */_Bool) var_0)) ? (12360042295596035138ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) <= (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_13)), (-3735963070800494887LL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((((/* implicit */int) var_5)) < (((/* implicit */int) arr_76 [i_18] [i_18] [i_23] [i_23]))))))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_11)) ^ (((/* implicit */int) (unsigned short)35816))))), (arr_75 [i_18] [(short)10]))))))));
            arr_92 [i_18] = ((/* implicit */unsigned short) arr_90 [i_18] [i_18]);
            var_52 = ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) min(((_Bool)1), ((_Bool)0))))) : (((((/* implicit */long long int) ((/* implicit */int) arr_76 [i_18] [i_18] [i_23] [i_23]))) / (var_3))))) < (((/* implicit */long long int) ((unsigned int) (unsigned char)206))));
        }
        arr_93 [7LL] [i_18] &= ((/* implicit */signed char) (~(var_10)));
        arr_94 [i_18] = min((max((18446744073709551610ULL), (((/* implicit */unsigned long long int) var_3)))), (((/* implicit */unsigned long long int) arr_86 [i_18] [i_18])));
        /* LoopNest 2 */
        for (short i_24 = 1; i_24 < 15; i_24 += 2) 
        {
            for (int i_25 = 3; i_25 < 15; i_25 += 4) 
            {
                {
                    arr_100 [i_25] = arr_99 [i_24] [i_24] [i_24] [i_24];
                    var_53 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)43778)) ? (((/* implicit */unsigned long long int) -8733904138662462315LL)) : (18446744073709551612ULL)));
                }
            } 
        } 
    }
    for (unsigned int i_26 = 3; i_26 < 13; i_26 += 1) 
    {
        arr_105 [i_26] [15ULL] = ((/* implicit */long long int) ((arr_81 [i_26] [i_26] [i_26] [i_26]) / (((/* implicit */unsigned int) (~(((/* implicit */int) ((signed char) (short)24902))))))));
        var_54 = ((/* implicit */int) max((var_54), (((/* implicit */int) arr_89 [i_26]))));
        arr_106 [i_26] = ((((/* implicit */_Bool) max((((((/* implicit */int) arr_101 [i_26])) % (((/* implicit */int) arr_70 [i_26 + 1] [i_26 + 2])))), (((/* implicit */int) arr_78 [i_26] [i_26 + 1] [i_26] [i_26]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : ((+(max((arr_75 [i_26] [i_26]), (((/* implicit */unsigned long long int) var_8)))))));
    }
}
