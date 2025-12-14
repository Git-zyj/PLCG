/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165136
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165136 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165136
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
    var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) max((((((/* implicit */_Bool) (+(((/* implicit */int) var_1))))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)63198))) : (var_11))) : (var_11))), (var_2))))));
    var_14 = ((/* implicit */short) max((((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned short)58223)))) : (((/* implicit */int) ((signed char) (unsigned short)58223))))), (max(((+(((/* implicit */int) var_8)))), (((/* implicit */int) min(((unsigned short)7304), ((unsigned short)7315))))))));
    var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((((/* implicit */int) var_7)) & (((/* implicit */int) (unsigned short)7288)))), (((((/* implicit */_Bool) (unsigned short)58223)) ? (((/* implicit */int) (unsigned short)7288)) : (((/* implicit */int) var_10))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (((((/* implicit */_Bool) (~(var_5)))) ? (((((/* implicit */_Bool) var_1)) ? (var_5) : (((/* implicit */unsigned long long int) var_11)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)7324)))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min(((unsigned short)7312), ((unsigned short)58248)))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_0)))) : (arr_0 [i_0 - 1] [i_0 - 1])))) ? (arr_0 [i_0 + 1] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned short)58265)) : (((/* implicit */int) var_0)))))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 3; i_1 < 16; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 1; i_2 < 17; i_2 += 2) 
            {
                for (signed char i_3 = 3; i_3 < 18; i_3 += 2) 
                {
                    {
                        arr_12 [i_1] [i_3] = ((/* implicit */long long int) (+(((/* implicit */int) min((((/* implicit */unsigned short) arr_7 [i_1] [i_1 - 3] [i_1 - 3] [i_2 + 2])), ((unsigned short)58223))))));
                        arr_13 [i_0] [i_1] [i_1] [i_2] [i_2] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned short)7288)) : (((/* implicit */int) (unsigned short)58223))));
                        arr_14 [i_0] [i_1] [i_2] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_0 [i_0] [i_1]), (((/* implicit */long long int) arr_5 [i_0 + 1] [i_2 + 2]))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)58229)) ? (((/* implicit */int) (unsigned short)58248)) : (((/* implicit */int) (unsigned short)7286))))) : (((((/* implicit */_Bool) (unsigned short)58248)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))))), (((((/* implicit */_Bool) arr_6 [i_2 + 2] [i_1] [i_0] [i_1 - 3])) ? (((((/* implicit */_Bool) (unsigned short)58233)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)7288))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)7288)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))))));
                        arr_15 [i_0 - 1] [i_1] [i_2] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (unsigned short)58245)) ? (((/* implicit */int) (unsigned short)58233)) : (((/* implicit */int) var_1)))), (var_9)))) ? (min((((/* implicit */int) min(((unsigned short)7287), ((unsigned short)58238)))), (((((/* implicit */int) (unsigned short)7338)) + (((/* implicit */int) (unsigned short)7301)))))) : (((((/* implicit */_Bool) (unsigned short)7284)) ? (((/* implicit */int) (unsigned short)58223)) : (((/* implicit */int) (unsigned short)58252))))));
                    }
                } 
            } 
            var_17 ^= ((/* implicit */short) (((+(arr_10 [i_0] [i_1 - 3] [i_0 + 1] [i_1 + 2] [i_1]))) != (min((var_5), (((/* implicit */unsigned long long int) (unsigned short)58252))))));
            var_18 &= ((/* implicit */_Bool) (-((+(((/* implicit */int) (unsigned short)58218))))));
            /* LoopSeq 1 */
            for (short i_4 = 1; i_4 < 18; i_4 += 4) 
            {
                /* LoopSeq 2 */
                for (long long int i_5 = 3; i_5 < 18; i_5 += 3) 
                {
                    arr_22 [i_0] [i_1] [i_4] [i_1] = ((/* implicit */unsigned short) (((-(((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_2))))) > (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)7311)) ? (((/* implicit */int) (unsigned short)7271)) : (((/* implicit */int) (unsigned short)7288)))))));
                    arr_23 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */_Bool) var_12);
                    var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) ((short) ((((/* implicit */int) (unsigned short)7288)) ^ (((((/* implicit */int) var_0)) << (((((/* implicit */int) var_8)) - (5832)))))))))));
                    var_20 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)58230)) ? (((/* implicit */int) (unsigned short)7311)) : (((/* implicit */int) (unsigned short)58222))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)7303)))))) : (var_2)))) ? ((~(min((var_12), (((/* implicit */unsigned long long int) (unsigned short)7299)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1 - 2] [i_4 + 1])))));
                    var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) (~(arr_6 [i_4 - 1] [i_4 - 1] [i_1] [i_0])))) ? (var_11) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_9 [i_5] [(unsigned short)4] [(unsigned short)4] [i_0])) : (((/* implicit */int) (unsigned short)58243)))))))))));
                }
                for (unsigned char i_6 = 1; i_6 < 18; i_6 += 3) 
                {
                    arr_27 [i_0] [i_0] [i_1] [i_6] = ((/* implicit */short) (-(var_4)));
                    arr_28 [i_0 - 1] [i_1] [i_4] [i_6] = ((/* implicit */unsigned char) (+(var_2)));
                    /* LoopSeq 2 */
                    for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                    {
                        arr_31 [i_1] [i_1] [4ULL] [4ULL] |= ((/* implicit */unsigned long long int) max((((((var_2) == (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)58238))))) ? (((/* implicit */int) arr_9 [i_1 + 2] [i_1] [(_Bool)1] [i_6])) : ((+(((/* implicit */int) (unsigned short)58206)))))), (((((/* implicit */int) min(((unsigned short)58237), ((unsigned short)58236)))) * (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)7303)))))))));
                        arr_32 [i_0] [i_1] [i_4] [i_6] [i_7 + 1] = ((/* implicit */unsigned long long int) var_3);
                    }
                    for (unsigned char i_8 = 1; i_8 < 16; i_8 += 1) 
                    {
                        var_22 *= ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (unsigned short)58238)), (min((var_12), (((/* implicit */unsigned long long int) (unsigned short)58247))))));
                        arr_35 [i_0] [i_1] = ((/* implicit */long long int) (unsigned short)58248);
                        arr_36 [i_1] [i_6 + 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)58248)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_10))))) ? (((/* implicit */int) (unsigned short)58229)) : (((((/* implicit */int) var_6)) + (((/* implicit */int) var_3))))))) ? (((int) arr_4 [i_6 + 1] [i_8 + 3])) : ((+(((/* implicit */int) min((arr_3 [i_0] [i_1 + 1]), ((unsigned short)58213))))))));
                        arr_37 [i_1] = ((/* implicit */_Bool) var_3);
                    }
                }
                arr_38 [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_1)), ((unsigned short)58267)))) ? (((/* implicit */int) max((((/* implicit */unsigned short) arr_8 [i_0 + 1])), ((unsigned short)58248)))) : (arr_6 [i_0] [i_1] [i_1] [i_4])))) ? (min((((/* implicit */int) (unsigned short)58213)), ((~(((/* implicit */int) (unsigned short)7350)))))) : (((/* implicit */int) (unsigned short)7332)));
                /* LoopNest 2 */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    for (unsigned long long int i_10 = 3; i_10 < 18; i_10 += 1) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) var_9))));
                            var_24 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) (unsigned short)58234)) ? (((/* implicit */int) (unsigned short)58227)) : (((/* implicit */int) (unsigned short)7367)))))) : (arr_43 [i_1 + 3])));
                            var_25 *= ((/* implicit */unsigned char) min((arr_26 [i_0] [i_0] [i_9] [(short)18]), (((/* implicit */long long int) max((((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)7363))) : (var_2))), (((/* implicit */unsigned int) arr_4 [i_1 - 1] [i_10 - 1])))))));
                        }
                    } 
                } 
            }
        }
    }
    /* vectorizable */
    for (signed char i_11 = 3; i_11 < 17; i_11 += 3) 
    {
        arr_48 [i_11] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_8 [i_11 - 2]))));
        var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? ((+(((/* implicit */int) var_10)))) : (((/* implicit */int) ((_Bool) arr_42 [i_11] [i_11])))));
    }
    /* LoopNest 2 */
    for (unsigned short i_12 = 2; i_12 < 19; i_12 += 2) 
    {
        for (short i_13 = 3; i_13 < 19; i_13 += 1) 
        {
            {
                arr_53 [i_12 - 1] [i_13] = ((/* implicit */unsigned int) max(((~((-(((/* implicit */int) arr_52 [i_12] [i_13] [i_13])))))), ((+(((/* implicit */int) (unsigned short)7288))))));
                /* LoopNest 2 */
                for (short i_14 = 2; i_14 < 20; i_14 += 3) 
                {
                    for (unsigned short i_15 = 2; i_15 < 20; i_15 += 1) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (signed char i_16 = 2; i_16 < 18; i_16 += 2) /* same iter space */
                            {
                                arr_64 [i_12] [i_15] [i_14] = ((/* implicit */_Bool) min((((/* implicit */int) (!((!(((/* implicit */_Bool) var_10))))))), (min((((((/* implicit */_Bool) (unsigned short)7286)) ? (((/* implicit */int) (unsigned short)7274)) : (((/* implicit */int) (unsigned short)58246)))), (arr_58 [i_13 - 2])))));
                                arr_65 [i_15] [i_15] [i_15] [i_15] [i_15] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) min(((unsigned short)7318), ((unsigned short)58248)))) ? (((/* implicit */int) min(((unsigned short)7288), ((unsigned short)7307)))) : (((/* implicit */int) (unsigned short)7332)))), (((/* implicit */int) (unsigned short)7276))));
                                arr_66 [i_12] [i_15] = ((/* implicit */long long int) (+(((/* implicit */int) var_7))));
                            }
                            for (signed char i_17 = 2; i_17 < 18; i_17 += 2) /* same iter space */
                            {
                                arr_69 [i_12] [i_12] [i_14 - 2] [i_15] = ((/* implicit */unsigned short) ((long long int) ((((((/* implicit */int) min((((/* implicit */short) arr_52 [i_12] [i_12] [i_12])), (var_7)))) + (2147483647))) >> (((((((/* implicit */_Bool) arr_62 [i_14 - 1] [i_13] [i_15] [i_15 - 2] [i_14] [i_17] [i_15])) ? (((/* implicit */int) (unsigned short)7266)) : (((/* implicit */int) (unsigned short)58246)))) - (7237))))));
                                arr_70 [i_12] [i_12 + 2] [i_15] [i_12] [i_12] [i_15] = ((/* implicit */_Bool) (unsigned short)7288);
                                var_27 -= (~(((((/* implicit */_Bool) (unsigned short)58237)) ? (((/* implicit */int) (unsigned short)7304)) : (((/* implicit */int) (unsigned short)7343)))));
                                arr_71 [i_15] [i_15] [i_14 - 1] = ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)58225))));
                            }
                            arr_72 [i_15] [i_15] [i_14 - 1] [i_15 - 1] = ((/* implicit */unsigned int) max(((~(min((((/* implicit */unsigned long long int) var_3)), (var_4))))), (max((arr_67 [i_12] [i_14] [i_15] [i_15] [i_15]), (((/* implicit */unsigned long long int) var_11))))));
                            arr_73 [i_15] [i_15] [i_15] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)58207)) ? (((/* implicit */int) (unsigned short)7316)) : (((/* implicit */int) (unsigned short)58221))))) ? (((((/* implicit */_Bool) (unsigned short)58238)) ? (arr_57 [i_12 + 2] [i_13 - 1] [i_15 + 1]) : (arr_57 [i_12 + 2] [i_13 - 1] [i_15 + 1]))) : (max((((((/* implicit */_Bool) var_11)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)7274))))), (((/* implicit */unsigned int) ((var_6) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_10)))))))));
                            var_28 *= ((/* implicit */_Bool) arr_56 [i_12] [i_15 - 1]);
                            var_29 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) (unsigned short)7344)) ? (((/* implicit */int) (unsigned short)58248)) : (((/* implicit */int) (unsigned short)58209)))) : (((((/* implicit */_Bool) arr_58 [i_12])) ? (((/* implicit */int) (unsigned short)7315)) : (((/* implicit */int) var_0))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)58204)) ? (((/* implicit */int) (unsigned short)58215)) : (((/* implicit */int) (unsigned short)58233))))) ? ((-(((/* implicit */int) (unsigned short)58202)))) : (((/* implicit */int) (unsigned short)58206)))) : (((/* implicit */int) min((var_8), ((unsigned short)7290))))));
                        }
                    } 
                } 
                arr_74 [i_13] [i_12] [i_12] = (((+(((((/* implicit */_Bool) (unsigned short)58246)) ? (arr_49 [i_12]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))))) != (arr_56 [i_13] [i_12]));
                arr_75 [i_12] [i_13 - 1] [i_13 + 1] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_50 [i_13 - 3]))) : (var_11))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned short)58240)))))));
                var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned short)7289)) : ((-(((/* implicit */int) (unsigned short)7320))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */int) (unsigned short)7288)) | (var_9))) : (((/* implicit */int) var_6))))) : ((~(var_4))))))));
            }
        } 
    } 
}
