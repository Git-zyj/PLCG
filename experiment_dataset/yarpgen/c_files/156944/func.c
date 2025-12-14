/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156944
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156944 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156944
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned short i_1 = 2; i_1 < 20; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_20 -= ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_5 [i_2]), (((/* implicit */unsigned int) (short)256))))) ? (((/* implicit */long long int) ((/* implicit */int) min(((short)-276), ((short)276))))) : (((arr_3 [i_0] [i_0]) / (((/* implicit */long long int) ((/* implicit */int) var_12)))))))), (max((((((/* implicit */_Bool) var_0)) ? (arr_6 [i_0] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)7525))))), (((/* implicit */unsigned long long int) arr_9 [i_3 - 1] [i_2] [i_1] [i_0]))))));
                        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_10 [i_1 + 1] [i_1 - 2]), (((/* implicit */unsigned short) (short)268))))) ? ((-(((/* implicit */int) arr_10 [i_1 - 2] [i_1 + 1])))) : (((/* implicit */int) arr_1 [i_3 - 1]))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 3) 
                        {
                            arr_13 [i_2] [i_1] [i_3] &= ((/* implicit */_Bool) ((((arr_12 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3] [i_3 - 1]) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3] [i_3 - 1]))))) + ((+(var_18)))));
                            var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(var_6)))) ? (((/* implicit */unsigned int) max((((/* implicit */int) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) arr_4 [i_4] [i_2] [i_2]))))), (((((/* implicit */int) arr_8 [i_0])) | (((/* implicit */int) arr_1 [i_1 + 3]))))))) : (((((/* implicit */_Bool) min((((/* implicit */short) arr_4 [i_0] [i_2] [i_2])), (arr_1 [i_1 + 3])))) ? (min((arr_5 [i_2]), (((/* implicit */unsigned int) var_12)))) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_15))))))))))));
                        }
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            arr_16 [i_0] [i_0] [i_2] [i_1] [i_0] = ((/* implicit */unsigned short) arr_11 [i_1 - 1] [i_1 + 3] [i_2] [i_1 + 3] [i_3 - 1] [i_3 - 1] [i_3 - 1]);
                            var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (~(((/* implicit */int) var_1))))), (arr_5 [i_0])))) ? ((~(((((/* implicit */int) var_0)) & (var_2))))) : (((/* implicit */int) (_Bool)1))));
                        }
                    }
                } 
            } 
        } 
        arr_17 [i_0] [4LL] |= ((/* implicit */_Bool) ((unsigned char) (~((~(((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0])))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_6 = 0; i_6 < 23; i_6 += 1) /* same iter space */
        {
            var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) arr_9 [i_0] [i_0] [i_6] [i_6]))));
            var_25 &= ((/* implicit */short) (-(((((((/* implicit */int) arr_11 [i_6] [i_0] [i_6] [i_6] [i_6] [i_6] [i_6])) + (2147483647))) << (((((((/* implicit */int) arr_11 [i_6] [i_0] [i_6] [i_6] [i_0] [i_0] [i_0])) + (16251))) - (24)))))));
            var_26 = ((/* implicit */long long int) min((((/* implicit */int) (short)32766)), (((arr_18 [i_0] [i_0] [i_0]) * (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))))));
        }
        for (unsigned long long int i_7 = 0; i_7 < 23; i_7 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (long long int i_8 = 4; i_8 < 22; i_8 += 2) 
            {
                for (unsigned long long int i_9 = 0; i_9 < 23; i_9 += 3) 
                {
                    {
                        arr_31 [i_0] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_28 [i_8 - 1] [i_8 + 1] [i_8])) / (min((min((((/* implicit */int) var_0)), (86273491))), (((((/* implicit */int) (unsigned char)20)) - (((/* implicit */int) arr_23 [i_7]))))))));
                        /* LoopSeq 1 */
                        for (int i_10 = 1; i_10 < 22; i_10 += 3) 
                        {
                            arr_36 [i_7] [i_0] [i_7] = ((/* implicit */short) arr_29 [i_10 + 1] [i_9] [i_9] [i_7] [i_7] [i_0]);
                            var_27 -= ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_15 [i_10] [i_10] [i_10 + 1] [i_0] [i_0])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_15 [i_10] [i_10] [i_10 + 1] [i_9] [i_9])))), (((/* implicit */int) var_16))));
                        }
                    }
                } 
            } 
            var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_21 [i_0])) ? (((/* implicit */long long int) min((var_17), (((/* implicit */int) var_12))))) : (((long long int) var_17)))) / (((/* implicit */long long int) (+(arr_33 [i_0] [i_0] [(short)10] [i_0] [i_7])))))))));
            var_29 = ((/* implicit */int) (unsigned char)0);
            arr_37 [i_0] [i_7] = max((max((((((/* implicit */long long int) ((/* implicit */int) (short)-269))) / (var_3))), (((/* implicit */long long int) (-(arr_7 [i_0] [i_0] [i_7])))))), ((+(((var_18) - (var_18))))));
        }
    }
    for (short i_11 = 0; i_11 < 22; i_11 += 1) 
    {
        arr_42 [i_11] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((min((-778753260731713165LL), (var_6))) == (((/* implicit */long long int) ((/* implicit */int) min((var_7), (var_13))))))))) % (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)26)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)-281))))) ? (((((/* implicit */_Bool) -5517318850200476415LL)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-32766))))) : (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)249)))))))));
        arr_43 [(unsigned short)14] |= ((/* implicit */long long int) max((((((/* implicit */int) arr_38 [i_11] [i_11])) & (((/* implicit */int) (!(arr_29 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11])))))), (((/* implicit */int) arr_21 [i_11]))));
    }
    /* vectorizable */
    for (signed char i_12 = 4; i_12 < 19; i_12 += 4) 
    {
        var_30 = ((/* implicit */int) min((var_30), ((~(((/* implicit */int) (unsigned short)7512))))));
        /* LoopSeq 1 */
        for (unsigned short i_13 = 0; i_13 < 20; i_13 += 2) 
        {
            var_31 = ((/* implicit */unsigned char) ((arr_29 [i_12] [i_12 + 1] [i_12] [i_12 - 1] [i_12] [i_12]) ? (((/* implicit */int) arr_14 [i_12 - 3] [i_13] [i_12 - 3] [i_12 - 1] [i_12 - 1])) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_25 [i_12]))))));
            arr_49 [i_12] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_40 [i_12]))));
            var_32 = arr_32 [i_12 - 2] [i_12] [i_13] [i_13] [i_12 - 2];
        }
    }
    /* vectorizable */
    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
    {
        var_33 = ((/* implicit */int) ((((/* implicit */_Bool) (short)-259)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (arr_19 [i_14] [i_14] [i_14])));
        arr_52 [i_14] = ((/* implicit */unsigned short) arr_0 [i_14]);
        arr_53 [i_14] [i_14] = ((/* implicit */unsigned char) (-(-7157706535671505593LL)));
        /* LoopSeq 1 */
        for (unsigned char i_15 = 3; i_15 < 19; i_15 += 1) 
        {
            var_34 = ((/* implicit */unsigned char) min((var_34), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_10 [i_14] [i_14])) ? (((/* implicit */int) arr_54 [i_14] [i_14])) : (arr_18 [i_15] [i_15 - 3] [12ULL]))))));
            /* LoopSeq 2 */
            for (unsigned short i_16 = 0; i_16 < 20; i_16 += 3) /* same iter space */
            {
                /* LoopSeq 2 */
                for (unsigned short i_17 = 0; i_17 < 20; i_17 += 1) 
                {
                    var_35 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_54 [i_15 + 1] [i_15 - 1]))));
                    var_36 = ((/* implicit */short) ((((/* implicit */_Bool) -2280503187878999883LL)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)68)))));
                }
                for (int i_18 = 0; i_18 < 20; i_18 += 3) 
                {
                    var_37 = ((/* implicit */unsigned char) arr_18 [i_14] [i_14] [i_18]);
                    var_38 |= ((/* implicit */int) ((((/* implicit */int) (unsigned char)76)) >= (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (short)-276)) : (((/* implicit */int) var_12))))));
                    var_39 = ((/* implicit */unsigned int) min((var_39), (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)0)))))));
                }
                arr_62 [i_14] [i_15 - 2] [i_16] &= ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_41 [(_Bool)1])) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_15)))))));
                arr_63 [i_14] [i_14] [i_16] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_54 [i_14] [i_15 + 1]))) / (((unsigned int) var_11))));
                var_40 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_41 [(unsigned short)14])))) != (((((/* implicit */_Bool) arr_51 [i_14])) ? (arr_55 [i_14] [i_15 + 1]) : (arr_6 [i_15] [(unsigned short)16])))));
            }
            for (unsigned short i_19 = 0; i_19 < 20; i_19 += 3) /* same iter space */
            {
                var_41 = ((/* implicit */unsigned int) (((+(arr_18 [i_14] [i_14] [(unsigned short)10]))) * (((/* implicit */int) ((var_14) == (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_14] [(_Bool)1] [i_19]))))))));
                /* LoopSeq 3 */
                for (unsigned int i_20 = 1; i_20 < 19; i_20 += 4) 
                {
                    arr_68 [i_14] [i_14] [i_14] [i_14] [i_14] = ((/* implicit */unsigned int) var_7);
                    arr_69 [i_14] [i_15] [i_19] [i_14] = ((/* implicit */unsigned char) ((var_18) <= ((~(var_18)))));
                    var_42 = ((/* implicit */unsigned char) var_12);
                }
                for (_Bool i_21 = 0; i_21 < 0; i_21 += 1) 
                {
                    var_43 = ((/* implicit */_Bool) max((var_43), (((/* implicit */_Bool) ((((/* implicit */int) (signed char)5)) | (((/* implicit */int) ((18294550922411116275ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))))))));
                    var_44 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned short)65522)) : (arr_56 [i_15 + 1])));
                    var_45 = ((/* implicit */unsigned char) max((var_45), (((/* implicit */unsigned char) ((((/* implicit */int) arr_14 [i_15 + 1] [i_19] [i_21] [i_21 + 1] [i_21])) / (var_2))))));
                }
                for (unsigned char i_22 = 0; i_22 < 20; i_22 += 3) 
                {
                    var_46 = ((short) (short)32756);
                    var_47 = ((/* implicit */short) max((var_47), (((/* implicit */short) ((((((/* implicit */_Bool) arr_46 [i_14])) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (unsigned char)85)))) ^ (((/* implicit */int) ((((/* implicit */int) var_4)) <= (((/* implicit */int) arr_14 [i_14] [i_15] [i_15] [i_15] [i_15]))))))))));
                }
            }
            var_48 = ((/* implicit */unsigned short) ((((/* implicit */long long int) (+(((/* implicit */int) arr_39 [i_14] [i_14]))))) % (var_18)));
        }
    }
    var_49 = ((((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? ((+(((/* implicit */int) var_11)))) : ((-(var_2)))))) * (min((((((/* implicit */long long int) ((/* implicit */int) (short)-32766))) / (var_3))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_10)) : (var_2)))))));
    var_50 |= ((/* implicit */unsigned long long int) var_0);
    /* LoopSeq 1 */
    for (int i_23 = 1; i_23 < 21; i_23 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned char i_24 = 0; i_24 < 22; i_24 += 2) 
        {
            for (short i_25 = 2; i_25 < 21; i_25 += 4) 
            {
                for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
                {
                    {
                        arr_85 [i_26] [i_25 - 1] [i_25] [i_23] [i_23] [i_23] = ((/* implicit */unsigned char) min((arr_24 [i_23] [i_25 + 1] [i_25 - 2]), (((/* implicit */unsigned short) ((unsigned char) (short)32758)))));
                        var_51 = ((/* implicit */int) max((var_51), (((/* implicit */int) arr_12 [i_23] [i_23] [i_25] [i_23] [i_26]))));
                    }
                } 
            } 
        } 
        var_52 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((12) ^ (((/* implicit */int) (unsigned char)164))))) ? (((((/* implicit */_Bool) arr_14 [i_23 + 1] [i_23] [i_23 + 1] [i_23] [i_23 + 1])) ? (((/* implicit */int) arr_14 [i_23 - 1] [i_23 - 1] [i_23 - 1] [i_23] [i_23 + 1])) : (((/* implicit */int) arr_14 [i_23] [i_23] [i_23] [i_23] [i_23 - 1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [(_Bool)1])))))));
        arr_86 [i_23] [i_23 + 1] &= ((/* implicit */unsigned int) (unsigned short)25056);
    }
    /* LoopNest 3 */
    for (unsigned char i_27 = 0; i_27 < 22; i_27 += 1) 
    {
        for (short i_28 = 0; i_28 < 22; i_28 += 2) 
        {
            for (signed char i_29 = 0; i_29 < 22; i_29 += 4) 
            {
                {
                    arr_96 [i_29] [i_27] = ((/* implicit */int) (unsigned char)159);
                    arr_97 [i_27] [i_27] [i_27] |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(743223841))))));
                    /* LoopNest 2 */
                    for (signed char i_30 = 2; i_30 < 20; i_30 += 3) 
                    {
                        for (unsigned char i_31 = 1; i_31 < 21; i_31 += 4) 
                        {
                            {
                                var_53 = min((((((/* implicit */_Bool) arr_34 [i_27] [i_29] [i_29] [i_30] [i_30] [i_28])) ? (max((152193151298435314ULL), (((/* implicit */unsigned long long int) var_12)))) : (((/* implicit */unsigned long long int) ((int) var_3))))), (((/* implicit */unsigned long long int) arr_27 [i_27] [i_29] [i_30])));
                                arr_105 [i_30] [i_28] [i_29] [i_28] [i_28] [i_28] [i_30] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((short) arr_87 [i_27])))));
                            }
                        } 
                    } 
                    var_54 |= ((/* implicit */unsigned short) min(((-(((/* implicit */int) var_7)))), ((~(var_5)))));
                }
            } 
        } 
    } 
}
