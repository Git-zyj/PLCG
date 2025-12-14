/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167221
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167221 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167221
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) var_7))))) : (min((341423287U), (((/* implicit */unsigned int) -1))))))))))));
        arr_4 [i_0] = ((/* implicit */long long int) 1548444419U);
        arr_5 [i_0] = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_3 [i_0] [i_0])))) ^ ((-(arr_3 [i_0] [i_0]))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        /* LoopSeq 3 */
        for (unsigned int i_2 = 0; i_2 < 23; i_2 += 4) 
        {
            arr_12 [i_2] = ((/* implicit */unsigned short) (~(2746522892U)));
            /* LoopNest 3 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (int i_4 = 0; i_4 < 23; i_4 += 3) 
                {
                    for (unsigned int i_5 = 0; i_5 < 23; i_5 += 4) 
                    {
                        {
                            arr_20 [i_1] [i_1] [i_4] [i_1] [i_1] [i_1] = max((3634939767U), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)18)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_8))))) > (min((((/* implicit */unsigned int) arr_13 [i_1])), (var_10)))))));
                            var_16 = ((/* implicit */int) 3833738465598953633LL);
                        }
                    } 
                } 
            } 
            var_17 = min(((-2147483647 - 1)), (122880));
        }
        /* vectorizable */
        for (unsigned int i_6 = 2; i_6 < 22; i_6 += 1) 
        {
            arr_23 [i_1] [i_6 - 2] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_1 [i_6 + 1] [i_6 - 2])) >> (((768812206U) - (768812183U)))));
            arr_24 [i_6 - 2] [i_1] [i_1] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_7 [i_6 - 2] [i_6 + 1]))));
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 23; i_7 += 3) 
            {
                for (signed char i_8 = 0; i_8 < 23; i_8 += 3) 
                {
                    {
                        /* LoopSeq 4 */
                        for (unsigned int i_9 = 0; i_9 < 23; i_9 += 4) /* same iter space */
                        {
                            var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_7]))) != (arr_22 [i_7] [i_9]))) ? (((/* implicit */int) arr_1 [i_6 + 1] [i_6 - 1])) : (((/* implicit */int) var_1)))))));
                            arr_31 [i_9] [i_8] [i_7] [i_8] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_28 [i_1] [i_6 + 1] [i_7] [i_8] [i_8] [i_7])) || (((/* implicit */_Bool) arr_28 [i_1] [i_6] [i_7] [i_8] [i_8] [i_1]))));
                            arr_32 [i_1] [i_8] [i_7] [(unsigned char)0] [i_9] [i_9] = ((/* implicit */int) ((((/* implicit */_Bool) arr_18 [i_8] [i_6 + 1] [i_7] [i_8] [i_9])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_9] [i_8] [i_7] [i_7] [i_8] [i_1]))) : (arr_18 [i_8] [i_6 - 2] [(unsigned char)11] [i_8] [i_9])));
                            arr_33 [i_8] = ((/* implicit */unsigned long long int) ((int) arr_10 [i_6 - 1] [i_6] [i_6 - 2]));
                            arr_34 [(unsigned short)14] [i_6 - 1] [i_7] [i_8] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_1] [i_6 - 1]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)65518)) <= (((/* implicit */int) (unsigned short)65529)))))) : (arr_2 [i_6 + 1] [i_6 + 1])));
                        }
                        for (unsigned int i_10 = 0; i_10 < 23; i_10 += 4) /* same iter space */
                        {
                            arr_37 [i_1] [i_1] [i_1] [i_8] = ((/* implicit */unsigned int) ((arr_8 [i_1] [i_6 - 2]) && (((/* implicit */_Bool) 768812223U))));
                            arr_38 [i_8] [i_6 + 1] [i_6 + 1] = ((unsigned char) arr_11 [i_6 - 1]);
                            var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) arr_26 [i_6 - 2] [i_6] [7] [i_6 + 1]))));
                            arr_39 [i_6 - 2] [i_8] [i_7] [i_8] [i_1] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) arr_30 [i_6 + 1] [i_6 - 1] [i_6] [i_6 + 1] [i_6 + 1] [16U]))) ^ (arr_2 [i_1] [i_1])));
                        }
                        for (unsigned short i_11 = 2; i_11 < 21; i_11 += 4) 
                        {
                            arr_42 [i_8] [i_6 - 1] [i_7] [i_8] [i_11 + 2] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (-1471576207) : (((/* implicit */int) arr_28 [i_1] [i_11 + 1] [i_7] [i_8] [i_8] [(unsigned char)11]))));
                            arr_43 [i_1] [i_6 - 2] [i_7] [i_8] [i_11 - 2] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_13 [i_6 - 1])) <= (((/* implicit */int) arr_13 [i_6 - 1]))));
                            var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((arr_6 [i_7]) ? (((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) arr_21 [i_6 + 1] [i_11 - 1])) : (-2147483638))) : (((int) 3526155090U)))))));
                        }
                        for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) 
                        {
                            var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_6 - 1] [i_12 + 1] [20LL] [i_12 + 1])) ? (((/* implicit */int) arr_45 [i_8] [i_8] [i_8] [i_12 + 1] [i_12 + 1])) : (1371983147))))));
                            var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) (-(((/* implicit */int) arr_35 [i_6] [i_6 - 1] [i_6 + 1] [2U] [i_12 + 1])))))));
                        }
                        arr_46 [i_8] = ((/* implicit */unsigned int) ((-2667645531221565300LL) / (((/* implicit */long long int) ((/* implicit */int) arr_29 [i_6 - 2] [i_8] [i_6 + 1] [i_8] [16LL])))));
                    }
                } 
            } 
            var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) ((((/* implicit */_Bool) var_14)) ? (arr_18 [0ULL] [i_6] [i_6 + 1] [i_6] [i_6 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))));
        }
        for (unsigned int i_13 = 0; i_13 < 23; i_13 += 4) 
        {
            arr_49 [i_1] [i_13] = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_13 [i_1])), (var_12)))) ? (var_4) : (((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) 3526155090U))))))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (int i_14 = 0; i_14 < 23; i_14 += 1) 
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_15 = 0; i_15 < 23; i_15 += 4) 
                {
                    var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) | (var_12))))));
                    arr_55 [i_1] [i_1] [i_13] [i_13] [i_14] [(_Bool)1] = ((/* implicit */_Bool) ((arr_30 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]) ? (((/* implicit */int) arr_1 [i_14] [i_13])) : (((/* implicit */int) var_3))));
                }
                for (unsigned int i_16 = 2; i_16 < 20; i_16 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_17 = 0; i_17 < 23; i_17 += 4) 
                    {
                        var_25 = ((/* implicit */short) ((((arr_22 [i_14] [(_Bool)1]) << (((((/* implicit */int) var_11)) + (87))))) + (((/* implicit */unsigned int) ((((/* implicit */int) var_8)) % (((/* implicit */int) arr_52 [i_1] [i_13] [i_13] [i_16])))))));
                        arr_60 [(_Bool)1] [i_13] [i_14] [(unsigned char)16] [i_17] = ((/* implicit */long long int) ((arr_53 [i_16 + 2] [i_16 + 3] [i_16 + 3] [i_16 + 2] [i_16 + 1] [i_16 + 2]) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) arr_53 [i_16 + 2] [i_16 + 3] [i_16 + 3] [i_16 + 2] [i_16 + 1] [i_16 + 2]))));
                    }
                    arr_61 [i_1] [i_13] [i_14] [i_16 - 2] [i_14] = ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)137))));
                    var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) var_14))));
                    arr_62 [i_14] = ((/* implicit */unsigned char) arr_28 [i_16 + 3] [i_16] [i_16 - 2] [10] [i_16] [i_13]);
                }
                arr_63 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_16 [i_13] [i_13] [i_14] [i_1])) > (((/* implicit */int) arr_7 [i_13] [i_14]))));
            }
            var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) ((int) ((arr_41 [i_1] [i_1] [i_1] [i_1] [i_13] [11LL] [i_13]) <= (((/* implicit */unsigned long long int) -1LL))))))));
            /* LoopNest 2 */
            for (long long int i_18 = 0; i_18 < 23; i_18 += 2) 
            {
                for (unsigned char i_19 = 2; i_19 < 20; i_19 += 4) 
                {
                    {
                        arr_71 [i_1] [i_13] [i_18] [i_19] = ((/* implicit */unsigned int) ((((/* implicit */int) var_0)) < (((((/* implicit */_Bool) arr_7 [i_1] [i_19 - 1])) ? (((/* implicit */int) arr_7 [(_Bool)1] [i_19 + 3])) : (((/* implicit */int) arr_14 [i_19 + 2]))))));
                        /* LoopSeq 2 */
                        for (int i_20 = 0; i_20 < 23; i_20 += 4) 
                        {
                            var_28 = ((/* implicit */int) min((var_28), (((/* implicit */int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) (unsigned short)127)))) ? (((arr_53 [i_1] [i_13] [i_18] [i_19 + 3] [i_20] [i_20]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_70 [i_1] [i_1] [i_1] [i_20]))) : (17179869183ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)104)))))) ? (((((/* implicit */_Bool) (-(-1371983147)))) ? ((-(arr_51 [i_1] [i_18] [i_20]))) : (((/* implicit */unsigned long long int) ((var_2) ? (((/* implicit */int) arr_64 [i_1] [i_1] [i_20])) : (((/* implicit */int) var_11))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(1371983149)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_68 [i_19] [i_19 - 1] [(_Bool)1] [i_19 + 3] [i_19] [i_19 + 2]))) : (arr_48 [i_1] [i_1] [i_1])))))))));
                            var_29 = ((((/* implicit */int) arr_67 [i_1])) < (((((/* implicit */_Bool) arr_64 [i_19 - 1] [i_19 - 1] [i_20])) ? (((/* implicit */int) arr_6 [i_19 - 2])) : (((/* implicit */int) arr_64 [i_19 - 1] [i_19 - 2] [(short)0])))));
                        }
                        for (unsigned char i_21 = 0; i_21 < 23; i_21 += 2) 
                        {
                            arr_78 [i_1] [i_13] [i_18] [i_19 - 1] [i_21] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (short)-4808)), (((((/* implicit */_Bool) min((var_12), (((/* implicit */unsigned long long int) 768812205U))))) ? (((/* implicit */unsigned long long int) 6469736012664250818LL)) : (((unsigned long long int) arr_66 [i_1] [i_13] [i_19] [i_21]))))));
                            var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_19 - 1])) ? (arr_11 [i_19 + 3]) : (((/* implicit */int) var_1))))) & (((long long int) arr_11 [i_19 + 3]))));
                        }
                    }
                } 
            } 
        }
        arr_79 [i_1] [i_1] = ((/* implicit */signed char) arr_26 [i_1] [i_1] [i_1] [i_1]);
        var_31 = ((/* implicit */unsigned int) min((var_31), (((/* implicit */unsigned int) ((((/* implicit */long long int) min((((int) arr_1 [i_1] [i_1])), (((/* implicit */int) (_Bool)0))))) - (((arr_59 [i_1] [i_1] [i_1] [i_1]) - (arr_59 [i_1] [i_1] [i_1] [i_1]))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_22 = 2; i_22 < 22; i_22 += 4) 
        {
            arr_84 [i_1] [8] [i_22 - 2] = ((/* implicit */_Bool) (+(arr_0 [i_1] [i_22 + 1])));
            var_32 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_54 [i_1])) ? (arr_51 [i_1] [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
            var_33 = ((/* implicit */unsigned long long int) min((var_33), (((/* implicit */unsigned long long int) ((signed char) arr_74 [i_22 - 2] [i_22 - 2] [i_22 - 2] [i_22 - 2] [i_22 - 2] [i_22 - 1] [17ULL])))));
            arr_85 [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -3400308329969412013LL)) ? (var_5) : (((((/* implicit */_Bool) arr_25 [i_1] [i_1] [13] [i_1])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_69 [i_1] [i_22 - 2] [6LL] [i_22 - 2]))))));
        }
    }
    var_34 = (~(((/* implicit */int) var_0)));
    /* LoopNest 2 */
    for (long long int i_23 = 1; i_23 < 10; i_23 += 4) 
    {
        for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
        {
            {
                arr_90 [i_23 - 1] [i_24] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (min((var_9), (-950264685))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_44 [(short)12] [i_23 + 1])))))));
                arr_91 [i_24] = ((/* implicit */short) max((((/* implicit */int) arr_68 [i_23] [i_23] [i_23 - 1] [i_23 + 2] [i_23 + 1] [i_24])), ((~(arr_88 [i_23 + 1])))));
            }
        } 
    } 
}
