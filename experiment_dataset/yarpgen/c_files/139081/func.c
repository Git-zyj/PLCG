/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139081
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
    var_19 = ((/* implicit */short) (~(var_16)));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((_Bool)1) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) max((arr_0 [i_0]), (arr_0 [3ULL])))) : (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))));
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                for (unsigned char i_3 = 0; i_3 < 10; i_3 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_4 = 0; i_4 < 10; i_4 += 3) 
                        {
                            arr_15 [i_1] [i_0] [i_2] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (arr_7 [i_0] [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0])))))) ? (((/* implicit */int) (short)17168)) : ((+(((/* implicit */int) var_8))))))));
                            var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) arr_10 [i_1] [i_3] [i_1]))));
                            var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) arr_10 [(signed char)9] [i_0] [1])) ? (0ULL) : (arr_7 [i_0] [(_Bool)1] [(signed char)9]))))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (max((arr_7 [1LL] [i_3] [(short)7]), (((/* implicit */unsigned long long int) arr_0 [8U])))) : (((/* implicit */unsigned long long int) ((int) arr_4 [i_1] [i_0]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-26797)))));
                        }
                        arr_16 [i_0] [i_2] [i_2] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_2])) ? (((/* implicit */int) arr_5 [(signed char)0] [(signed char)8] [(short)6])) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_0])))) > (((/* implicit */int) max((((/* implicit */unsigned short) arr_4 [i_0] [i_0])), (var_15))))));
                        var_22 &= ((/* implicit */unsigned short) ((((arr_7 [(unsigned char)4] [3ULL] [i_2]) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_8 [i_1] [i_2]) < (((/* implicit */long long int) var_11)))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(arr_10 [(unsigned char)2] [i_2] [i_2])))) ? (((((/* implicit */_Bool) (unsigned char)41)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-29020)))) : (((/* implicit */int) var_8))))) : (((((/* implicit */_Bool) ((unsigned short) arr_3 [i_3]))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (short)22137))))) : (max((((/* implicit */unsigned int) arr_1 [i_2])), (arr_9 [i_0] [(unsigned short)2] [i_2] [i_1] [i_3])))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned char i_5 = 0; i_5 < 10; i_5 += 3) 
        {
            /* LoopSeq 3 */
            for (long long int i_6 = 0; i_6 < 10; i_6 += 2) 
            {
                var_23 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_6] [i_5] [i_6])) ? (((unsigned long long int) arr_20 [i_6] [i_5] [i_0])) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9286983798617244868ULL)) ? (arr_9 [4U] [i_6] [i_6] [i_6] [i_0]) : (((/* implicit */unsigned int) var_16)))))))) ? (((arr_9 [i_5] [i_5] [i_6] [i_6] [(signed char)0]) / (var_11))) : ((+(arr_13 [i_0] [i_0])))));
                arr_22 [i_5] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((int) ((unsigned long long int) 9159760275092306748ULL))))));
                var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((unsigned long long int) 0ULL))))) ? (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) var_18)) : (arr_3 [i_5]))) : (arr_10 [i_6] [i_6] [i_6]))))));
            }
            /* vectorizable */
            for (unsigned short i_7 = 0; i_7 < 10; i_7 += 4) 
            {
                arr_27 [i_0] [(unsigned short)8] [7] [i_0] = ((/* implicit */unsigned int) (short)-26797);
                var_25 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)120)) >= (((/* implicit */int) (short)-26782))));
                arr_28 [i_0] [i_5] = ((((/* implicit */_Bool) arr_6 [i_0] [i_7])) ? (9159760275092306748ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_7] [i_5] [3LL] [i_5] [i_0] [7U]))));
            }
            for (unsigned int i_8 = 0; i_8 < 10; i_8 += 2) 
            {
                /* LoopSeq 4 */
                /* vectorizable */
                for (signed char i_9 = 0; i_9 < 10; i_9 += 2) 
                {
                    var_26 = ((unsigned char) arr_24 [i_9] [i_0]);
                    arr_34 [i_8] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((_Bool) (+(var_13))));
                }
                for (int i_10 = 0; i_10 < 10; i_10 += 2) 
                {
                    arr_39 [i_0] [i_5] [i_8] [i_0] = ((/* implicit */_Bool) (+(((arr_32 [i_0] [0U] [i_8] [i_10]) ? ((+(((/* implicit */int) (_Bool)1)))) : (((((/* implicit */int) (unsigned short)15954)) / (((/* implicit */int) arr_29 [i_0] [4LL] [i_8] [i_10]))))))));
                    arr_40 [i_0] [(unsigned char)6] [0ULL] [i_0] = ((/* implicit */long long int) 0ULL);
                }
                for (signed char i_11 = 0; i_11 < 10; i_11 += 1) /* same iter space */
                {
                    var_27 = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_36 [i_0])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 9159760275092306748ULL)) ? (((/* implicit */int) (unsigned short)8064)) : (var_16)))) : (((((/* implicit */_Bool) arr_10 [i_11] [i_0] [i_11])) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_0]))) : (arr_38 [0U] [i_5] [i_5] [i_5] [i_5] [(short)1])))))), (((((/* implicit */_Bool) (short)-32760)) ? (8578140488532565496ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))));
                    var_28 = ((/* implicit */unsigned short) var_5);
                }
                for (signed char i_12 = 0; i_12 < 10; i_12 += 1) /* same iter space */
                {
                    var_29 = ((/* implicit */signed char) arr_8 [i_5] [i_8]);
                    arr_45 [i_0] [i_5] = ((/* implicit */unsigned int) (~(9286983798617244848ULL)));
                    var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_43 [i_0])))) ? (max((9159760275092306767ULL), (((/* implicit */unsigned long long int) 4294967278U)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_0])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (short)-26782)) : (((/* implicit */int) arr_4 [i_0] [i_0])))) == ((+(((/* implicit */int) arr_11 [i_0] [i_0])))))))) : (((((/* implicit */_Bool) var_12)) ? ((-(arr_7 [i_0] [i_5] [i_0]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9159760275092306767ULL)) ? (arr_10 [i_0] [i_0] [i_0]) : (((/* implicit */int) (unsigned short)55276)))))))));
                    var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) max(((signed char)52), (arr_24 [i_0] [i_8])))), ((~(328268571U)))))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) arr_30 [i_0] [i_8] [(signed char)7] [i_0])) : (((((/* implicit */_Bool) arr_30 [i_0] [i_5] [i_8] [i_12])) ? (((/* implicit */unsigned long long int) -1LL)) : (arr_35 [i_0]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_31 [(unsigned char)9] [i_5] [i_0] [i_12])) ? (((/* implicit */int) arr_37 [i_0] [i_5] [i_12])) : (((/* implicit */int) arr_36 [i_0])))))))));
                    arr_46 [i_12] [i_0] [i_8] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -950320406)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_37 [i_0] [i_0] [(signed char)1])) ? (((/* implicit */int) arr_12 [i_0] [i_5] [i_8] [i_12] [i_0] [6ULL])) : (((/* implicit */int) arr_12 [i_8] [i_5] [(short)1] [i_12] [i_8] [i_5]))))) : (((((/* implicit */_Bool) min((4294967295U), (((/* implicit */unsigned int) var_14))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_0] [i_8] [i_12]))) : (9159760275092306747ULL)))));
                }
                /* LoopSeq 1 */
                for (unsigned short i_13 = 0; i_13 < 10; i_13 += 2) 
                {
                    /* LoopSeq 4 */
                    for (unsigned long long int i_14 = 0; i_14 < 10; i_14 += 4) 
                    {
                        var_32 &= ((/* implicit */unsigned long long int) ((short) (~(((((/* implicit */_Bool) (short)11651)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-4))))))));
                        var_33 = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)15954))));
                    }
                    for (unsigned int i_15 = 0; i_15 < 10; i_15 += 4) 
                    {
                        var_34 = ((/* implicit */unsigned long long int) arr_43 [i_0]);
                        var_35 = ((/* implicit */unsigned char) min((((/* implicit */long long int) arr_30 [i_0] [(_Bool)1] [i_0] [i_0])), (min((arr_43 [i_0]), (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)0)))))))));
                    }
                    /* vectorizable */
                    for (int i_16 = 0; i_16 < 10; i_16 += 4) 
                    {
                        arr_56 [i_0] [(signed char)7] [i_0] [i_0] = ((unsigned char) var_13);
                        arr_57 [5U] [i_0] [i_5] [(short)5] [i_8] [2ULL] [(signed char)9] = ((/* implicit */_Bool) (+(((((/* implicit */int) arr_44 [(unsigned short)7])) | (((/* implicit */int) (unsigned char)0))))));
                    }
                    for (unsigned int i_17 = 0; i_17 < 10; i_17 += 4) 
                    {
                        arr_61 [1ULL] [i_5] [i_8] [i_0] [i_17] = ((/* implicit */unsigned char) (((_Bool)1) ? (((((/* implicit */_Bool) ((unsigned short) arr_12 [8] [3ULL] [8] [4] [8] [i_17]))) ? (min((arr_38 [i_0] [3] [6LL] [(signed char)6] [(unsigned short)0] [i_17]), (((/* implicit */long long int) arr_29 [i_0] [(short)2] [1] [i_0])))) : (((/* implicit */long long int) ((((/* implicit */int) (short)-27355)) * (((/* implicit */int) (_Bool)1))))))) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_0] [i_5] [4ULL] [i_13] [i_0] [i_5] [(signed char)2])))));
                        arr_62 [i_17] [0] [i_17] [i_0] [5LL] [i_17] = ((/* implicit */long long int) min((((((/* implicit */_Bool) arr_42 [i_0] [i_5] [i_0] [i_17])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_42 [i_0] [i_5] [i_0] [i_17]))) : (arr_13 [i_8] [i_17]))), (((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_23 [i_0] [i_5] [i_13] [i_0]))))))))));
                    }
                    var_36 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(4294967295U)))) ? (((/* implicit */int) min((arr_49 [0ULL] [2] [0ULL] [3LL] [2]), (((/* implicit */unsigned short) arr_1 [i_0]))))) : ((+(((/* implicit */int) (short)-27351))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_53 [i_0] [(short)9] [i_5] [i_8] [i_0]))) : (9159760275092306767ULL));
                    arr_63 [i_0] [i_0] [i_8] [i_13] = ((/* implicit */signed char) min((arr_23 [i_0] [i_0] [i_8] [i_0]), (((/* implicit */unsigned long long int) (+(arr_17 [i_0]))))));
                    var_37 -= ((/* implicit */long long int) var_0);
                }
                arr_64 [i_0] = ((/* implicit */unsigned int) (~(min((arr_51 [i_8] [i_5] [i_0] [i_5] [i_0]), (((/* implicit */int) var_0))))));
            }
            /* LoopNest 2 */
            for (unsigned long long int i_18 = 0; i_18 < 10; i_18 += 3) 
            {
                for (unsigned char i_19 = 0; i_19 < 10; i_19 += 2) 
                {
                    {
                        var_38 |= ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) arr_24 [(unsigned char)2] [(unsigned char)2]))) ? (max((arr_69 [i_19] [i_0] [i_0]), (((/* implicit */int) arr_37 [i_19] [i_18] [0])))) : (((/* implicit */int) arr_32 [i_0] [i_5] [i_18] [i_19]))))), (((((/* implicit */_Bool) 9286983798617244838ULL)) ? (arr_7 [i_0] [i_0] [i_18]) : (arr_7 [i_0] [i_18] [4LL])))));
                        arr_70 [i_0] [i_0] [5] [(unsigned short)9] [8ULL] [i_19] = ((/* implicit */unsigned long long int) ((short) (-(arr_38 [4ULL] [i_5] [i_5] [i_18] [i_19] [i_19]))));
                        /* LoopSeq 1 */
                        for (unsigned short i_20 = 0; i_20 < 10; i_20 += 3) 
                        {
                            var_39 = ((/* implicit */signed char) max((var_39), (((/* implicit */signed char) (+((~(max((((/* implicit */unsigned int) arr_29 [i_19] [i_19] [(_Bool)1] [i_20])), (arr_9 [6U] [i_5] [i_18] [i_19] [i_19]))))))))));
                            arr_73 [i_0] [i_0] = ((/* implicit */unsigned int) arr_1 [i_0]);
                            arr_74 [i_0] [i_0] [i_18] [0LL] [i_20] = ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) (-(arr_41 [i_0] [i_5] [i_18])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) arr_12 [0ULL] [i_19] [(short)2] [(signed char)8] [1U] [i_0])), ((short)32767))))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)8345))) : (9159760275092306747ULL))))));
                        }
                    }
                } 
            } 
        }
    }
    /* vectorizable */
    for (unsigned char i_21 = 0; i_21 < 10; i_21 += 3) /* same iter space */
    {
        arr_77 [i_21] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) 1783037632U))) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_12 [(unsigned short)3] [(unsigned short)3] [i_21] [(unsigned short)2] [7ULL] [i_21]))))) : (((((/* implicit */_Bool) arr_71 [(signed char)4] [i_21] [i_21])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_2)))));
        arr_78 [i_21] = ((/* implicit */short) ((((/* implicit */_Bool) (short)-27351)) ? (arr_71 [i_21] [i_21] [i_21]) : (((/* implicit */long long int) (+(((/* implicit */int) arr_47 [(_Bool)1] [i_21] [0U] [i_21] [(_Bool)1])))))));
        var_40 = ((/* implicit */signed char) arr_10 [i_21] [0] [i_21]);
        arr_79 [(unsigned short)9] = ((/* implicit */signed char) (+(((unsigned long long int) (short)11651))));
    }
    var_41 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-((+(var_7)))))) ? (var_11) : (((/* implicit */unsigned int) var_12))));
    var_42 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_5))));
}
