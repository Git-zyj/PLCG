/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127285
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
    var_18 = ((/* implicit */long long int) var_8);
    var_19 = ((/* implicit */_Bool) 1899871543407311577ULL);
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    var_20 = ((/* implicit */int) arr_5 [i_0] [i_0] [i_0]);
                    var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) 3835226248U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
                }
            } 
        } 
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned short i_3 = 0; i_3 < 20; i_3 += 3) 
        {
            var_22 = ((/* implicit */unsigned short) ((arr_11 [i_0]) / (((/* implicit */long long int) var_11))));
            /* LoopSeq 2 */
            for (unsigned int i_4 = 3; i_4 < 16; i_4 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 1) 
                {
                    var_23 = ((/* implicit */unsigned int) arr_13 [i_5] [i_4] [i_4 + 4] [i_4 - 3]);
                    var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_4] [i_3] [i_4 + 1])) ? (((/* implicit */int) arr_6 [i_3] [i_3] [i_4 + 3])) : (((/* implicit */int) arr_6 [i_0] [i_3] [i_4 - 2]))));
                    var_25 = ((/* implicit */short) arr_15 [i_4 + 4] [i_4] [i_4] [i_4] [i_4] [i_4]);
                    /* LoopSeq 4 */
                    for (unsigned long long int i_6 = 1; i_6 < 17; i_6 += 1) 
                    {
                        var_26 = ((/* implicit */long long int) -1954938584);
                        var_27 = ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_4 + 1] [i_6] [i_6] [i_4 + 1]))) <= (((var_8) / (((/* implicit */unsigned long long int) 2946107587U)))));
                    }
                    for (unsigned char i_7 = 2; i_7 < 18; i_7 += 2) 
                    {
                        var_28 = (-2147483647 - 1);
                        var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)114)) && (((/* implicit */_Bool) arr_17 [i_7 + 2] [i_4 + 1]))));
                        var_30 = ((/* implicit */unsigned char) arr_0 [i_0]);
                    }
                    for (unsigned long long int i_8 = 2; i_8 < 17; i_8 += 4) 
                    {
                        var_31 -= ((/* implicit */unsigned char) ((arr_21 [i_4] [i_4 - 3] [i_4 - 2] [i_4 - 3] [i_5]) << (((((/* implicit */int) arr_14 [i_0] [i_4 + 1] [i_4 - 1] [i_4 + 2])) - (6429)))));
                        var_32 = ((/* implicit */unsigned long long int) ((signed char) (~(2946107596U))));
                        var_33 = ((/* implicit */signed char) ((((/* implicit */int) arr_16 [i_8] [i_5] [i_4] [i_3] [i_0])) & (((/* implicit */int) (!(((/* implicit */_Bool) 8529285449081313536ULL)))))));
                    }
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        var_34 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_16 [i_9] [i_5] [i_4] [i_3] [18U])) ? (arr_23 [i_9] [i_5] [i_5] [i_4 + 4] [i_3] [i_3] [i_0]) : (arr_23 [i_9] [(unsigned char)14] [i_5] [i_4] [i_4] [i_3] [i_0])));
                        var_35 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_5] [i_5] [i_4] [i_4 + 2] [i_9] [i_5])) ? (((/* implicit */int) arr_15 [(signed char)15] [i_0] [i_0] [i_4 - 3] [i_9] [i_5])) : (((/* implicit */int) arr_15 [i_9] [i_3] [i_3] [i_4 - 2] [i_3] [i_9]))));
                        var_36 = ((/* implicit */unsigned short) arr_16 [i_4 + 3] [i_3] [i_4] [i_4] [i_3]);
                        var_37 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_21 [i_0] [i_0] [i_4] [i_4] [i_4 - 3])) ? (2946107605U) : (((/* implicit */unsigned int) arr_26 [i_0] [i_3] [i_4] [12U] [i_4 + 1]))));
                    }
                }
                /* LoopSeq 1 */
                for (unsigned long long int i_10 = 1; i_10 < 17; i_10 += 1) 
                {
                    var_38 = ((/* implicit */int) arr_31 [i_0]);
                    var_39 &= ((/* implicit */long long int) ((((/* implicit */int) arr_3 [i_3] [i_3])) + (((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_0] [i_0])) && (((/* implicit */_Bool) 129024)))))));
                }
                /* LoopSeq 1 */
                for (signed char i_11 = 0; i_11 < 20; i_11 += 2) 
                {
                    var_40 *= ((/* implicit */unsigned int) ((unsigned long long int) 4294967293U));
                    var_41 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_17))) * (459741057U)))) ? (arr_11 [i_4 + 1]) : (((/* implicit */long long int) ((/* implicit */int) ((arr_28 [i_11] [(unsigned char)18]) > (((/* implicit */unsigned long long int) 3034891111U))))))));
                    arr_34 [i_11] [i_3] [i_3] [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_9))));
                    var_42 -= ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_0] [i_3] [i_4] [i_3] [i_11] [i_11])))))));
                    var_43 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [i_4] [i_3] [i_4 - 1])) ? (((/* implicit */int) arr_6 [i_3] [i_3] [i_4 + 4])) : (((/* implicit */int) arr_22 [i_0] [i_4] [i_3] [i_4 + 3] [i_11]))));
                }
            }
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                /* LoopSeq 3 */
                for (unsigned char i_13 = 0; i_13 < 20; i_13 += 1) 
                {
                    var_44 = ((/* implicit */unsigned int) (+(arr_27 [i_0] [i_0] [i_0] [i_0] [12ULL])));
                    var_45 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)37))) != (((unsigned int) var_17))));
                    var_46 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_37 [i_0] [i_12] [i_13])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_13] [i_12] [i_0] [i_0] [i_0])) ? (85559214U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [(short)16] [i_3]))))))));
                    var_47 = ((/* implicit */long long int) ((((/* implicit */_Bool) 2946107559U)) ? (((9223372036854775807ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_0] [i_3] [i_12] [12ULL] [i_13]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_18 [i_0] [i_0])) ? (arr_26 [i_0] [i_0] [i_0] [i_0] [(short)10]) : (((/* implicit */int) var_2)))))));
                    var_48 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_17 [i_0] [i_0])) * (((/* implicit */int) ((arr_23 [8LL] [8LL] [i_3] [i_12] [i_12] [i_13] [15]) == (((/* implicit */unsigned long long int) 2946107583U)))))));
                }
                for (signed char i_14 = 0; i_14 < 20; i_14 += 4) 
                {
                    var_49 = ((((/* implicit */int) arr_15 [(signed char)16] [i_0] [i_0] [i_3] [i_0] [i_0])) >> (((((/* implicit */int) arr_15 [i_0] [i_0] [i_12] [i_14] [i_12] [i_12])) - (140))));
                    var_50 = ((/* implicit */signed char) max((var_50), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0]))) : (arr_2 [i_12] [i_14]))))));
                    var_51 = ((/* implicit */signed char) max((var_51), (var_17)));
                }
                for (signed char i_15 = 0; i_15 < 20; i_15 += 4) 
                {
                    arr_46 [i_0] [i_3] = ((/* implicit */short) ((long long int) arr_18 [i_3] [i_3]));
                    var_52 = ((/* implicit */long long int) max((var_52), (((/* implicit */long long int) arr_33 [i_0] [i_0] [i_0] [i_0]))));
                }
                /* LoopNest 2 */
                for (unsigned char i_16 = 0; i_16 < 20; i_16 += 1) 
                {
                    for (long long int i_17 = 0; i_17 < 20; i_17 += 4) 
                    {
                        {
                            var_53 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_17] [i_16])) ? (arr_27 [i_0] [i_0] [i_0] [i_0] [10U]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3835226228U)) ? (arr_45 [i_0] [i_0] [(signed char)8]) : (((/* implicit */long long int) 2946107581U)))))));
                            var_54 = ((/* implicit */long long int) arr_3 [i_0] [i_16]);
                        }
                    } 
                } 
                var_55 = ((/* implicit */unsigned int) arr_26 [i_0] [i_0] [i_3] [i_12] [i_12]);
            }
        }
        /* vectorizable */
        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
        {
            /* LoopSeq 2 */
            for (int i_19 = 0; i_19 < 20; i_19 += 1) 
            {
                var_56 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_16 [i_0] [11ULL] [i_0] [i_0] [i_0])) ? (536870911) : (((/* implicit */int) arr_16 [i_19] [i_18] [(_Bool)1] [i_19] [i_0]))));
                arr_60 [i_18] [i_18] = ((/* implicit */long long int) arr_1 [i_0]);
                var_57 *= ((/* implicit */unsigned int) (-(((/* implicit */int) ((arr_30 [(signed char)4] [(signed char)4] [i_18] [(unsigned char)19] [(signed char)4] [i_19]) != (((/* implicit */long long int) ((/* implicit */int) arr_39 [i_19] [i_18] [i_18] [i_0]))))))));
            }
            for (unsigned char i_20 = 2; i_20 < 17; i_20 += 2) 
            {
                arr_63 [i_18] = ((/* implicit */int) ((((/* implicit */_Bool) arr_57 [i_20 + 2] [i_20 + 1] [10U] [i_20])) && (((/* implicit */_Bool) arr_37 [i_0] [i_18] [i_20 + 1]))));
                var_58 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 1348859729U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (((((/* implicit */_Bool) (short)1737)) ? (896936081U) : (1302640313U)))));
            }
            var_59 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) -1954938579))));
            /* LoopSeq 1 */
            for (unsigned short i_21 = 0; i_21 < 20; i_21 += 3) 
            {
                var_60 = ((/* implicit */signed char) arr_3 [i_21] [2ULL]);
                /* LoopNest 2 */
                for (unsigned long long int i_22 = 2; i_22 < 18; i_22 += 2) 
                {
                    for (unsigned int i_23 = 1; i_23 < 18; i_23 += 2) 
                    {
                        {
                            var_61 = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-76)) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_48 [i_18]))))) : ((+(1299020032U)))));
                            var_62 = ((((arr_28 [i_18] [i_22]) - (arr_21 [i_0] [i_0] [i_22] [i_0] [i_18]))) + (((/* implicit */unsigned long long int) arr_26 [i_22 - 2] [i_22] [i_22 - 1] [i_22 + 2] [i_22])));
                            var_63 = ((/* implicit */unsigned char) (-(arr_28 [i_18] [i_18])));
                        }
                    } 
                } 
            }
            /* LoopNest 2 */
            for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
            {
                for (short i_25 = 0; i_25 < 20; i_25 += 4) 
                {
                    {
                        var_64 = ((/* implicit */unsigned char) ((((((int) 16546872530302240032ULL)) + (2147483647))) >> (((((((/* implicit */int) (unsigned short)65534)) + (((/* implicit */int) arr_20 [i_0] [i_18] [12ULL] [i_25] [i_0])))) - (65764)))));
                        /* LoopSeq 2 */
                        for (signed char i_26 = 3; i_26 < 18; i_26 += 4) 
                        {
                            var_65 *= ((/* implicit */unsigned int) ((((((/* implicit */int) (signed char)67)) & (((/* implicit */int) arr_3 [i_18] [i_25])))) > (((((/* implicit */_Bool) 1999526585)) ? (((/* implicit */int) (short)-1166)) : (((/* implicit */int) arr_0 [i_0]))))));
                            var_66 = ((/* implicit */short) ((((/* implicit */int) arr_58 [i_26 + 1] [i_26 + 1] [i_26 - 3] [i_18])) - (((/* implicit */int) (short)32766))));
                            var_67 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_9 [i_26 - 3]))));
                            var_68 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_55 [i_0]))));
                            var_69 *= ((/* implicit */unsigned long long int) (+(arr_61 [i_18] [i_18] [i_25] [i_18])));
                        }
                        for (unsigned char i_27 = 1; i_27 < 18; i_27 += 1) 
                        {
                            var_70 = ((/* implicit */signed char) (+(arr_30 [i_0] [i_27] [i_27 + 2] [i_27 + 2] [i_27] [i_27 - 1])));
                            var_71 -= ((/* implicit */signed char) ((((((/* implicit */int) arr_16 [i_0] [i_18] [i_24] [i_25] [i_27 + 2])) + (2147483647))) << (((1954938562) - (1954938562)))));
                        }
                    }
                } 
            } 
            var_72 *= ((/* implicit */signed char) arr_68 [i_0] [i_0] [i_18] [i_18]);
        }
        var_73 = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) 1892986397907531555ULL)) ? ((+(2852767452019709740ULL))) : (arr_68 [i_0] [i_0] [i_0] [i_0]))));
    }
    for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) 
    {
        var_74 = ((/* implicit */signed char) 3835226235U);
        var_75 = ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_16 [0] [i_28] [i_28] [(signed char)3] [i_28])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (18182377736654820224ULL)))))) ? (((((((/* implicit */long long int) ((/* implicit */int) arr_65 [(unsigned short)6]))) < (arr_45 [i_28] [i_28] [i_28]))) ? (((/* implicit */int) var_2)) : (((((/* implicit */int) (unsigned short)46585)) & (((/* implicit */int) (unsigned short)60238)))))) : (((/* implicit */int) (short)-32745)));
        var_76 = ((/* implicit */unsigned short) min((var_76), (((/* implicit */unsigned short) arr_41 [i_28] [i_28] [i_28] [i_28]))));
    }
}
