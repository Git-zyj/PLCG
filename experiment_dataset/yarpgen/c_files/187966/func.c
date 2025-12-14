/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187966
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
    var_17 = ((/* implicit */unsigned int) ((signed char) ((unsigned char) var_1)));
    var_18 *= ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) min(((unsigned char)19), ((unsigned char)0))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) (unsigned char)251);
        var_19 = arr_1 [i_0];
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopSeq 2 */
        for (signed char i_2 = 2; i_2 < 8; i_2 += 1) 
        {
            /* LoopNest 3 */
            for (long long int i_3 = 0; i_3 < 10; i_3 += 1) 
            {
                for (signed char i_4 = 0; i_4 < 10; i_4 += 3) 
                {
                    for (unsigned int i_5 = 0; i_5 < 10; i_5 += 2) 
                    {
                        {
                            arr_16 [i_1] [i_2 - 1] [i_2] [i_2] [i_2 - 1] [i_2] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((15U), (((/* implicit */unsigned int) var_10))))) ? (max((134217664ULL), (((/* implicit */unsigned long long int) (unsigned char)0)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_16))))))))));
                            arr_17 [i_5] [i_1] [i_3] [i_1] [i_1] = ((/* implicit */signed char) (+(((/* implicit */int) arr_7 [i_1] [i_2 - 1] [i_2 + 2]))));
                            var_20 = ((/* implicit */unsigned int) arr_14 [i_3] [i_4]);
                        }
                    } 
                } 
            } 
            arr_18 [i_1] [i_1] = ((/* implicit */short) arr_4 [i_1] [i_2 + 1]);
            /* LoopSeq 1 */
            for (short i_6 = 2; i_6 < 9; i_6 += 1) 
            {
                var_21 *= ((/* implicit */signed char) arr_3 [i_2] [i_6 - 1]);
                /* LoopSeq 1 */
                for (unsigned char i_7 = 0; i_7 < 10; i_7 += 1) 
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_8 = 0; i_8 < 10; i_8 += 2) 
                    {
                        var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) var_11))));
                        var_23 *= ((/* implicit */long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (unsigned char)255)))) >= (4294967295U))) ? (arr_0 [i_2 - 2] [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_7] [i_2 - 2] [i_6 - 2] [i_7] [i_8] [i_8] [i_2])) ? (2446062868U) : (((/* implicit */unsigned int) ((/* implicit */int) var_15))))))))))));
                    }
                    for (unsigned int i_9 = 0; i_9 < 10; i_9 += 4) 
                    {
                        arr_30 [i_1] = ((/* implicit */unsigned char) max((((arr_8 [i_1] [i_6] [i_7]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1] [i_9])))))))), (((/* implicit */unsigned long long int) (unsigned char)0))));
                        arr_31 [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((/* implicit */int) arr_5 [i_6 - 2])), (arr_6 [i_6 - 2]))))));
                        arr_32 [i_1] [i_6] [i_1] = ((/* implicit */int) min((arr_9 [i_1] [i_2] [i_6] [i_7]), (((/* implicit */short) (unsigned char)0))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned char i_10 = 0; i_10 < 10; i_10 += 4) /* same iter space */
                    {
                        var_24 = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) arr_34 [i_2 + 2] [i_10] [i_1] [i_10] [i_10] [i_10] [i_10])) ? (arr_34 [i_2 - 1] [i_2 - 1] [i_1] [i_2] [i_7] [i_7] [i_10]) : (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_1] [i_2 + 1] [i_2] [i_6 - 1] [i_6] [i_6 - 2] [i_6 - 1]))))));
                        var_25 *= ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((unsigned short) arr_28 [i_1] [i_2] [i_2 - 2] [i_7] [i_10]))), (((((/* implicit */_Bool) 1848904406U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) : (var_6)))));
                    }
                    for (unsigned char i_11 = 0; i_11 < 10; i_11 += 4) /* same iter space */
                    {
                        var_26 = ((/* implicit */unsigned long long int) arr_28 [i_1] [i_2] [i_6] [i_7] [i_11]);
                        arr_38 [i_1] [i_2 - 2] [i_7] [i_7] [i_11] [i_7] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_33 [i_1] [i_1] [i_2] [i_6 - 2] [i_11] [i_11])) ? (-4717815971596814522LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)3)))))) ? (((/* implicit */long long int) (~(3509160736U)))) : (max((-1LL), (((/* implicit */long long int) (unsigned char)242))))));
                    }
                }
                arr_39 [i_1] [i_2] [i_1] = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((signed char) arr_3 [i_1] [i_1]))), (((((/* implicit */_Bool) var_11)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_1] [i_2 - 2] [i_6] [i_2 - 1] [i_6] [i_6 - 1] [i_2 - 1])))))));
            }
        }
        for (unsigned char i_12 = 0; i_12 < 10; i_12 += 4) 
        {
            var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) (((-(arr_6 [i_1]))) % (((/* implicit */int) var_16))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (short)-8565)))))))) : (((int) ((signed char) arr_42 [i_1])))));
            /* LoopNest 3 */
            for (int i_13 = 0; i_13 < 10; i_13 += 3) 
            {
                for (unsigned int i_14 = 0; i_14 < 10; i_14 += 4) 
                {
                    for (int i_15 = 0; i_15 < 10; i_15 += 1) 
                    {
                        {
                            var_28 = max((((/* implicit */unsigned int) ((((/* implicit */int) ((_Bool) arr_48 [i_1] [i_13] [i_15]))) | (((/* implicit */int) ((1489306810) > (((/* implicit */int) var_13)))))))), (var_6));
                            arr_50 [i_1] [i_12] [i_13] [i_14] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)51535)) ^ (((/* implicit */int) var_8))));
                            var_29 = ((/* implicit */unsigned char) max((arr_23 [i_13] [i_13] [i_13]), ((signed char)-87)));
                            arr_51 [i_1] [i_12] [i_13] [i_14] [i_1] = ((/* implicit */unsigned int) (!(((((/* implicit */_Bool) arr_35 [i_15] [i_14] [i_1] [i_1] [i_1] [i_1])) || (((/* implicit */_Bool) arr_35 [i_1] [i_1] [i_13] [i_1] [i_14] [i_15]))))));
                            var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)0)) > (((/* implicit */int) (unsigned short)11330))))) & (((/* implicit */int) (!(((/* implicit */_Bool) 7824769206367095193ULL)))))))) ? (((/* implicit */int) ((995526995) > (((/* implicit */int) (unsigned char)174))))) : ((~(((/* implicit */int) ((((/* implicit */int) (signed char)-127)) > (((/* implicit */int) var_10)))))))));
                        }
                    } 
                } 
            } 
            arr_52 [i_1] = ((/* implicit */short) min((((/* implicit */unsigned long long int) var_8)), (min((min((var_9), (((/* implicit */unsigned long long int) var_8)))), (((/* implicit */unsigned long long int) (unsigned char)251))))));
        }
        /* LoopNest 3 */
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
        {
            for (signed char i_17 = 0; i_17 < 10; i_17 += 4) 
            {
                for (long long int i_18 = 1; i_18 < 7; i_18 += 1) 
                {
                    {
                        var_31 = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((((/* implicit */int) arr_33 [i_1] [i_16] [i_1] [i_18 + 1] [i_16] [i_16])) / (arr_29 [i_1] [i_1] [i_1] [i_18 + 2])))), (((long long int) (~(var_3))))));
                        /* LoopSeq 1 */
                        for (signed char i_19 = 0; i_19 < 10; i_19 += 2) 
                        {
                            var_32 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? ((+(((/* implicit */int) var_0)))) : (min((((/* implicit */int) arr_47 [i_1] [i_16] [i_16] [i_17] [i_16] [i_18 + 2] [i_19])), (((((/* implicit */_Bool) 1848904422U)) ? (((/* implicit */int) (unsigned char)15)) : (((/* implicit */int) arr_19 [i_1] [i_1] [i_1]))))))));
                            var_33 = ((/* implicit */long long int) max((((unsigned short) 9223372036854775807LL)), (((/* implicit */unsigned short) ((max((1270712284U), (((/* implicit */unsigned int) (_Bool)1)))) > (max((var_6), (2446062864U))))))));
                        }
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (long long int i_20 = 0; i_20 < 10; i_20 += 1) 
                        {
                            arr_66 [i_20] [i_20] [i_1] = ((/* implicit */long long int) (~(((((/* implicit */int) var_2)) ^ (((/* implicit */int) arr_22 [i_1] [i_1] [i_18 + 2] [i_20]))))));
                            var_34 = ((/* implicit */signed char) ((short) arr_20 [i_1]));
                            arr_67 [i_1] [i_16] [i_1] [i_18 + 2] [i_18 + 2] = ((unsigned char) arr_11 [i_1]);
                        }
                        for (unsigned char i_21 = 1; i_21 < 8; i_21 += 1) 
                        {
                            var_35 *= ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((signed char) ((unsigned short) arr_41 [i_17] [i_17])))), (((unsigned long long int) arr_61 [i_21] [i_21 - 1] [i_21 + 2] [i_21 - 1] [i_21 + 2]))));
                            var_36 *= ((/* implicit */unsigned char) ((unsigned short) arr_4 [i_17] [i_18 + 3]));
                        }
                        /* LoopSeq 4 */
                        for (_Bool i_22 = 1; i_22 < 1; i_22 += 1) 
                        {
                            var_37 = ((/* implicit */unsigned int) var_9);
                            arr_73 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_18 + 1] [i_18] [i_18 - 1] [i_18] [i_18 + 1] [i_18 + 3])) ? (arr_12 [i_18 + 1] [i_18 + 1] [i_18 + 1] [i_18 + 1] [i_18] [i_18]) : (arr_12 [i_18 + 2] [i_18] [i_18 + 2] [i_18] [i_18 + 2] [i_18])))) ? (((arr_12 [i_18 + 1] [i_18] [i_18] [i_18] [i_18 - 1] [i_18 + 1]) ^ (arr_12 [i_18 - 1] [i_18] [i_18 + 3] [i_18] [i_18 - 1] [i_18]))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_8)) > (((/* implicit */int) var_8))))))));
                            var_38 = ((/* implicit */signed char) ((max((((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-1))))), ((~(var_3))))) & (arr_13 [i_1] [i_1] [i_17] [i_18] [i_22 - 1] [i_17])));
                        }
                        for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                        {
                            var_39 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_21 [i_1] [i_18 + 2])) & (((/* implicit */int) var_8))));
                            arr_77 [i_1] = ((/* implicit */unsigned char) (((~(((/* implicit */int) min(((short)2980), (((/* implicit */short) arr_3 [i_16] [i_1]))))))) % (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!((_Bool)1))))) != (((long long int) (signed char)-11)))))));
                            var_40 = ((/* implicit */signed char) var_2);
                            arr_78 [i_1] [i_16] [i_16] [i_23] = ((/* implicit */unsigned int) ((((((/* implicit */int) var_8)) | (((/* implicit */int) arr_15 [i_1] [i_1] [i_16] [i_17] [i_17] [i_18] [i_23])))) > (((/* implicit */int) min((arr_48 [i_1] [i_18 + 1] [i_18 + 2]), (arr_48 [i_1] [i_18 + 1] [i_18]))))));
                            arr_79 [i_1] [i_16] [i_17] [i_17] [i_1] = (!(((/* implicit */_Bool) ((((/* implicit */int) ((arr_34 [i_1] [i_16] [i_1] [i_18] [i_18 + 3] [i_23] [i_23]) >= (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_1] [i_16])))))) * (((/* implicit */int) var_4))))));
                        }
                        /* vectorizable */
                        for (unsigned char i_24 = 0; i_24 < 10; i_24 += 4) 
                        {
                            var_41 = ((/* implicit */int) max((var_41), (((/* implicit */int) arr_14 [i_17] [i_18]))));
                            var_42 = ((/* implicit */unsigned char) max((var_42), (((/* implicit */unsigned char) ((signed char) ((((/* implicit */int) arr_35 [i_1] [i_16] [i_17] [i_24] [i_18 + 1] [i_24])) == (((/* implicit */int) (signed char)66))))))));
                        }
                        for (unsigned char i_25 = 3; i_25 < 7; i_25 += 2) 
                        {
                            var_43 = ((/* implicit */unsigned char) (~((-((~(arr_54 [i_1])))))));
                            arr_86 [i_18] [i_16] [i_1] [i_18 + 1] [i_25] = ((((/* implicit */_Bool) min((arr_9 [i_1] [i_16] [i_17] [i_18 + 3]), (arr_9 [i_1] [i_17] [i_18 + 1] [i_25 + 1])))) ? (((((/* implicit */int) var_2)) ^ (((/* implicit */int) arr_9 [i_1] [i_17] [i_18 + 2] [i_25])))) : (((/* implicit */int) ((signed char) arr_9 [i_1] [i_16] [i_17] [i_25]))));
                        }
                    }
                } 
            } 
        } 
        arr_87 [i_1] [i_1] = ((/* implicit */short) min((((unsigned char) var_16)), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_60 [i_1] [i_1])))))));
    }
}
