/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127874
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127874 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127874
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
    var_14 = (((+(((/* implicit */int) max((var_2), (((/* implicit */unsigned char) var_3))))))) == (((/* implicit */int) (!(((/* implicit */_Bool) var_12))))));
    var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) var_6))));
    /* LoopSeq 1 */
    for (long long int i_0 = 3; i_0 < 18; i_0 += 2) 
    {
        arr_2 [i_0 - 2] = ((/* implicit */signed char) ((unsigned short) max((arr_1 [i_0 - 2]), (((/* implicit */unsigned int) arr_0 [i_0 - 2])))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned short i_1 = 1; i_1 < 18; i_1 += 1) /* same iter space */
        {
            arr_7 [(unsigned short)12] |= ((/* implicit */long long int) 2147483647);
            var_16 = ((_Bool) arr_3 [i_0 - 1]);
        }
        for (unsigned short i_2 = 1; i_2 < 18; i_2 += 1) /* same iter space */
        {
            var_17 = (!(((/* implicit */_Bool) max(((unsigned short)4096), (((/* implicit */unsigned short) (unsigned char)115))))));
            /* LoopSeq 1 */
            for (signed char i_3 = 2; i_3 < 18; i_3 += 3) 
            {
                arr_14 [i_2] [9ULL] [i_3] [i_2] = ((/* implicit */long long int) min((((/* implicit */unsigned int) max(((unsigned char)115), ((unsigned char)136)))), (((unsigned int) ((((/* implicit */_Bool) 7751636528738887042ULL)) ? (((/* implicit */int) arr_10 [i_0] [i_2 + 1] [(_Bool)1])) : (var_0))))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (int i_4 = 0; i_4 < 19; i_4 += 2) 
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_5 = 0; i_5 < 19; i_5 += 2) 
                    {
                        arr_19 [i_3] [i_2] [i_3] [i_4] |= ((/* implicit */int) arr_17 [i_4]);
                        var_18 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_10))) / (arr_4 [9U] [9U] [i_3])));
                        arr_20 [i_5] [i_4] [i_4] [i_0] &= ((/* implicit */unsigned char) ((_Bool) (unsigned char)120));
                    }
                    for (unsigned short i_6 = 0; i_6 < 19; i_6 += 2) 
                    {
                        arr_23 [i_0] [(_Bool)1] [i_0] [i_2] [i_0] = var_13;
                        var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) arr_4 [i_6] [i_2] [i_0 + 1]))));
                    }
                    for (unsigned short i_7 = 0; i_7 < 19; i_7 += 3) 
                    {
                        arr_27 [18U] [i_2] [i_7] [i_7] [i_7] [i_7] [i_7] = ((/* implicit */short) arr_24 [i_0 - 2] [i_2 - 1]);
                        arr_28 [(short)7] [i_2] [i_0] [i_2] [i_0] = ((/* implicit */unsigned int) ((unsigned short) (-(((/* implicit */int) arr_6 [i_0])))));
                        var_20 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) var_0)) ? (arr_16 [i_7] [i_4] [i_3 + 1] [i_0 + 1]) : (((/* implicit */int) arr_3 [7]))))));
                        var_21 = ((/* implicit */signed char) arr_26 [i_0] [i_2] [i_3] [0LL] [i_7]);
                    }
                    arr_29 [i_2] = ((unsigned int) ((_Bool) arr_3 [i_0]));
                    var_22 = ((/* implicit */unsigned int) arr_4 [i_0 - 1] [i_2 - 1] [i_2 - 1]);
                    var_23 = ((/* implicit */long long int) arr_12 [i_2] [(short)10]);
                    var_24 = ((/* implicit */short) var_12);
                }
                for (unsigned long long int i_8 = 1; i_8 < 17; i_8 += 1) 
                {
                    var_25 |= ((/* implicit */int) (!((!((!(((/* implicit */_Bool) var_13))))))));
                    arr_34 [i_8 + 2] [i_8 + 2] [i_8 + 2] [i_2] = ((1216466592) == (var_13));
                }
                /* vectorizable */
                for (int i_9 = 0; i_9 < 19; i_9 += 1) 
                {
                    arr_38 [i_2] [16U] [i_3] [i_2] = ((/* implicit */long long int) ((_Bool) arr_21 [i_2] [i_2] [i_3] [i_3 - 2] [i_3 - 2]));
                    var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (2147483648U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_9] [i_9] [(_Bool)0] [i_9]))))))));
                    var_27 = ((/* implicit */unsigned int) (unsigned short)20);
                }
            }
            /* LoopSeq 2 */
            for (short i_10 = 0; i_10 < 19; i_10 += 4) 
            {
                var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_31 [i_2] [i_2 + 1] [i_2 - 1])), (var_9)))) ? (max((((/* implicit */long long int) (unsigned char)137)), (arr_26 [i_0] [i_0 - 1] [6ULL] [i_10] [i_2 - 1]))) : (((/* implicit */long long int) ((/* implicit */int) var_1)))));
                arr_41 [i_2] [i_0] [(_Bool)1] [i_2] = ((/* implicit */_Bool) max((((/* implicit */long long int) ((_Bool) arr_3 [i_10]))), (min((35150012350464LL), (((/* implicit */long long int) (_Bool)1))))));
                var_29 = ((/* implicit */unsigned char) max((max((((/* implicit */int) ((_Bool) 3531015475559459919LL))), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_18 [(unsigned short)5] [i_2 - 1] [i_2] [i_10])))))), (((/* implicit */int) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_11))))), (arr_21 [i_2] [i_10] [i_2] [i_0] [i_2]))))));
                var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) ((signed char) (+(((/* implicit */int) arr_9 [i_10]))))))));
            }
            for (unsigned int i_11 = 0; i_11 < 19; i_11 += 2) 
            {
                var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_7)), (arr_37 [i_0 + 1] [i_0] [i_0] [i_0 - 2] [i_2 - 1])))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)140)) < (((/* implicit */int) (unsigned short)1)))))));
                /* LoopNest 2 */
                for (unsigned int i_12 = 2; i_12 < 17; i_12 += 1) 
                {
                    for (unsigned int i_13 = 0; i_13 < 19; i_13 += 4) 
                    {
                        {
                            var_32 = ((/* implicit */long long int) ((min((((/* implicit */int) (signed char)127)), (var_8))) >= (((((/* implicit */_Bool) -1216466592)) ? (((/* implicit */int) (unsigned short)23406)) : (((/* implicit */int) (unsigned short)13388))))));
                            arr_51 [i_0] [(short)4] [i_0 + 1] [i_2] = ((/* implicit */_Bool) 1637101800);
                            var_33 &= ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) -1216466594)), (10695107544970664580ULL)));
                            arr_52 [i_0] [i_2] [i_0] [i_0] [(unsigned short)12] = max((((/* implicit */unsigned long long int) ((((var_13) >= (((/* implicit */int) arr_8 [i_2])))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_17 [i_0])) == (((/* implicit */int) (unsigned short)48315)))))) : (((((/* implicit */_Bool) arr_49 [(short)8] [i_2 + 1] [i_11] [i_11] [i_13])) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)23419)))))))), ((-(((var_7) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_47 [i_2]))) : (arr_49 [i_0] [i_2] [i_0] [i_12 - 1] [i_2]))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_14 = 0; i_14 < 19; i_14 += 4) 
                {
                    for (long long int i_15 = 0; i_15 < 19; i_15 += 3) 
                    {
                        {
                            var_34 = ((/* implicit */unsigned short) (-2147483647 - 1));
                            arr_58 [i_2] [(_Bool)1] = ((/* implicit */unsigned char) max((arr_39 [i_15] [i_15] [i_2]), (((/* implicit */unsigned int) ((((/* implicit */int) arr_43 [i_2 + 1])) >= (((/* implicit */int) var_11)))))));
                            var_35 = ((/* implicit */short) max((((/* implicit */unsigned int) (unsigned char)114)), ((~(((((/* implicit */_Bool) 9223372036854775807LL)) ? (4227858432U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255)))))))));
                        }
                    } 
                } 
            }
            var_36 = ((/* implicit */unsigned char) min((var_36), (((/* implicit */unsigned char) ((signed char) min((2147483647), (((/* implicit */int) (_Bool)0))))))));
        }
        for (unsigned long long int i_16 = 2; i_16 < 17; i_16 += 2) 
        {
            var_37 = ((/* implicit */unsigned int) min((var_37), (((/* implicit */unsigned int) arr_46 [i_0] [i_16] [i_0] [i_0]))));
            /* LoopSeq 2 */
            for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned short i_18 = 0; i_18 < 19; i_18 += 3) 
                {
                    for (signed char i_19 = 2; i_19 < 16; i_19 += 1) 
                    {
                        {
                            var_38 = ((/* implicit */unsigned short) max((arr_26 [(_Bool)1] [(_Bool)1] [2] [i_18] [i_19]), (((/* implicit */long long int) arr_45 [i_17] [i_16 - 2] [i_19 + 3] [i_18]))));
                            var_39 = ((/* implicit */_Bool) (+(max((((/* implicit */long long int) ((((/* implicit */int) var_1)) | (((/* implicit */int) var_2))))), (((((/* implicit */long long int) ((/* implicit */int) var_11))) / (521367675602745614LL)))))));
                            arr_69 [i_19] [2ULL] [i_19] [i_18] [i_19] = ((/* implicit */signed char) var_6);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_20 = 0; i_20 < 19; i_20 += 1) 
                {
                    for (unsigned short i_21 = 0; i_21 < 19; i_21 += 1) 
                    {
                        {
                            var_40 = min((((unsigned short) arr_70 [i_21] [i_21] [i_21])), (arr_13 [i_0] [i_17] [i_17]));
                            var_41 = ((/* implicit */_Bool) max((var_41), (((/* implicit */_Bool) arr_37 [i_0] [i_0] [i_0] [(unsigned char)4] [i_0]))));
                            arr_75 [i_0 - 3] [i_0 - 3] |= ((/* implicit */long long int) arr_62 [i_16 + 1] [i_16 + 1] [i_16 + 1] [i_0]);
                        }
                    } 
                } 
                var_42 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_0] [i_17] [i_0 + 1] [i_0] [i_0])) ? (((/* implicit */long long int) var_13)) : (arr_26 [i_0 - 1] [6ULL] [i_0 - 3] [i_0 - 3] [i_0 - 2])))) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_26 [i_0] [i_17] [i_0 - 2] [i_0] [i_0]) >= (((/* implicit */long long int) ((/* implicit */int) var_7))))))) : ((~(arr_26 [i_17] [i_17] [i_0 - 1] [i_0 - 2] [i_0 - 2])))));
                var_43 = ((/* implicit */long long int) (~(((((/* implicit */unsigned int) -1216466598)) ^ (256550763U)))));
                var_44 = ((/* implicit */signed char) ((arr_3 [i_17]) ? (((/* implicit */int) ((_Bool) (signed char)24))) : (((/* implicit */int) var_10))));
            }
            for (unsigned short i_22 = 0; i_22 < 19; i_22 += 2) 
            {
                /* LoopNest 2 */
                for (int i_23 = 2; i_23 < 18; i_23 += 3) 
                {
                    for (unsigned long long int i_24 = 2; i_24 < 17; i_24 += 1) 
                    {
                        {
                            var_45 ^= (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned char)229)) : (((/* implicit */int) arr_13 [i_16 + 2] [i_22] [i_22]))))))) ? (max((((/* implicit */unsigned long long int) (unsigned short)4095)), (arr_67 [i_16] [i_24 + 1] [i_23 - 1] [i_23 + 1] [i_0 - 2] [i_16]))) : (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */int) var_11)) / (var_8))))));
                            var_46 = ((/* implicit */unsigned long long int) max((var_46), ((~(((((/* implicit */_Bool) arr_68 [i_16 + 1] [i_16] [i_16] [i_22] [i_16 - 2])) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))))) : (max((((/* implicit */unsigned long long int) var_3)), (arr_59 [i_0 - 3] [i_23 - 2])))))))));
                            var_47 = ((/* implicit */_Bool) (((_Bool)1) ? (-521367675602745623LL) : (((/* implicit */long long int) ((/* implicit */int) (short)16771)))));
                            var_48 ^= ((/* implicit */unsigned short) ((((/* implicit */int) arr_72 [i_0] [i_16] [i_22] [i_16] [(_Bool)1] [i_24 + 1])) != (var_13)));
                        }
                    } 
                } 
                arr_84 [i_0] [i_0] = ((/* implicit */short) arr_79 [7U]);
                /* LoopSeq 2 */
                for (long long int i_25 = 0; i_25 < 19; i_25 += 2) 
                {
                    var_49 = ((/* implicit */unsigned long long int) var_6);
                    var_50 = ((/* implicit */unsigned short) max((((var_1) ? (((/* implicit */int) arr_21 [i_25] [i_0 - 2] [i_0 - 3] [i_16 - 1] [i_16 - 1])) : (((/* implicit */int) arr_21 [i_25] [i_0 + 1] [i_0 - 3] [i_16 + 2] [i_25])))), (((((/* implicit */int) ((unsigned char) arr_37 [i_0] [(short)12] [i_22] [i_22] [(short)1]))) * (((/* implicit */int) ((_Bool) arr_0 [i_22])))))));
                }
                for (unsigned char i_26 = 0; i_26 < 19; i_26 += 2) 
                {
                    var_51 = ((int) ((signed char) ((var_1) ? (((/* implicit */int) arr_85 [(unsigned short)0] [i_0] [i_0] [i_16 + 2])) : (((/* implicit */int) (unsigned short)33517)))));
                    arr_90 [i_0 + 1] [i_0 + 1] [(signed char)14] [i_16] = ((/* implicit */unsigned short) var_10);
                    var_52 = ((/* implicit */_Bool) ((unsigned short) max((arr_46 [i_16 + 1] [i_26] [i_16 - 2] [i_16 - 1]), (arr_46 [i_16 - 1] [i_26] [i_16 + 2] [i_16 - 2]))));
                    arr_91 [i_0 - 3] [i_16 - 2] [i_22] [i_26] = ((/* implicit */unsigned long long int) var_1);
                }
                arr_92 [i_0 - 1] |= ((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (arr_61 [i_0] [i_16]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_36 [i_22] [i_22] [i_22] [i_0])))))) ? (((/* implicit */int) (unsigned short)6567)) : (var_8)))), (max((((/* implicit */long long int) (unsigned char)51)), (((((/* implicit */_Bool) arr_71 [i_0 + 1])) ? (arr_89 [i_0] [i_16] [i_16] [i_22]) : (((/* implicit */long long int) ((/* implicit */int) arr_46 [i_0] [i_16] [i_22] [i_22])))))))));
            }
            /* LoopSeq 2 */
            for (unsigned long long int i_27 = 0; i_27 < 19; i_27 += 1) 
            {
                var_53 = ((/* implicit */signed char) (_Bool)0);
                /* LoopNest 2 */
                for (short i_28 = 3; i_28 < 17; i_28 += 1) 
                {
                    for (int i_29 = 0; i_29 < 19; i_29 += 2) 
                    {
                        {
                            var_54 *= ((/* implicit */long long int) min((((_Bool) arr_32 [i_28 + 2] [i_16 - 1] [i_29] [i_28 + 2])), (((((/* implicit */_Bool) arr_66 [i_16 - 1] [i_16 - 1] [i_16 - 2] [i_16 + 2] [i_16 + 2] [i_16 + 2])) && (((/* implicit */_Bool) arr_21 [i_29] [i_16] [i_16] [i_16] [i_16]))))));
                            var_55 = ((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) arr_55 [i_29] [i_0 - 1] [i_27] [i_29])) : (458752)))) < (((((/* implicit */_Bool) 1023LL)) ? (3803044123956595669LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)229)))))))), (((max((arr_26 [i_0] [i_16] [i_27] [i_0] [i_16]), (((/* implicit */long long int) arr_78 [i_0 - 1] [i_16] [i_0 - 1] [i_28])))) / (((/* implicit */long long int) var_0))))));
                        }
                    } 
                } 
            }
            for (unsigned int i_30 = 0; i_30 < 19; i_30 += 2) 
            {
                var_56 -= ((/* implicit */short) (-(((/* implicit */int) max((((/* implicit */short) arr_5 [i_0 - 1] [i_16])), (arr_78 [i_0 - 2] [(signed char)9] [i_0] [i_0]))))));
                var_57 = ((/* implicit */_Bool) 3350472083U);
            }
        }
        /* LoopNest 2 */
        for (signed char i_31 = 1; i_31 < 18; i_31 += 1) 
        {
            for (unsigned int i_32 = 0; i_32 < 19; i_32 += 3) 
            {
                {
                    arr_111 [i_0] [i_0] = ((/* implicit */unsigned int) arr_17 [(signed char)8]);
                    var_58 = ((/* implicit */short) var_8);
                }
            } 
        } 
        arr_112 [i_0] = ((/* implicit */unsigned short) (+((+((-(-17)))))));
        arr_113 [i_0] = ((/* implicit */int) max((((/* implicit */long long int) max((arr_103 [i_0 - 2] [i_0 - 2] [i_0] [i_0 - 1]), (arr_103 [i_0 - 1] [i_0] [i_0 - 1] [i_0 + 1])))), ((+(min((-521367675602745610LL), (((/* implicit */long long int) (unsigned short)16383))))))));
    }
}
