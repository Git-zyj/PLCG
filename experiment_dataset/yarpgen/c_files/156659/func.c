/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156659
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156659 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156659
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
    var_19 = ((/* implicit */unsigned short) (_Bool)1);
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 10; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 3) 
                            {
                                arr_15 [i_0] [i_4] [i_2] [i_3] [i_0] [i_0] [i_4] = ((/* implicit */unsigned char) max((max((min((825376453U), (((/* implicit */unsigned int) (unsigned char)37)))), (((/* implicit */unsigned int) (unsigned short)32738)))), (((/* implicit */unsigned int) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_2] [i_3] [i_4]))))), (arr_4 [i_0 - 1] [i_1] [i_2]))))));
                                var_20 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)11844)) && (((/* implicit */_Bool) min(((unsigned short)9881), (((/* implicit */unsigned short) arr_9 [i_4] [i_1] [i_1] [i_1] [i_0])))))));
                            }
                            arr_16 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_12)) : (((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_14)), ((unsigned short)32798)))) ? (((((/* implicit */_Bool) (unsigned char)167)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) (signed char)90)))) : (((/* implicit */int) arr_2 [i_0]))))));
                        }
                    } 
                } 
                arr_17 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0 - 1])) * (((/* implicit */int) (unsigned char)73))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) var_1))))), ((unsigned char)79))))) : (max((((/* implicit */unsigned long long int) ((unsigned int) arr_5 [i_0] [7LL]))), (((unsigned long long int) arr_5 [(unsigned char)9] [(signed char)3]))))));
                var_21 ^= ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_1 [i_0 - 2] [i_0 - 2])))) ? (((((/* implicit */_Bool) arr_6 [i_0] [i_0 - 2] [i_0 + 1] [i_0 + 3])) ? (((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_1] [i_0] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_1] [i_1]))) : (arr_0 [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (_Bool)1)))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) ((_Bool) var_9)))))));
                var_22 = ((/* implicit */unsigned long long int) min((var_22), (var_11)));
                var_23 = ((/* implicit */signed char) min(((~(((/* implicit */int) var_0)))), (((/* implicit */int) var_2))));
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned char) max(((~(-7182384645620793124LL))), (((/* implicit */long long int) (unsigned short)32738))));
    var_25 = ((/* implicit */long long int) min(((unsigned char)124), (((/* implicit */unsigned char) var_14))));
    /* LoopSeq 3 */
    for (unsigned char i_5 = 0; i_5 < 19; i_5 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned char i_6 = 1; i_6 < 17; i_6 += 4) 
        {
            for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
            {
                {
                    arr_26 [i_5] [(_Bool)1] |= max((((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) var_6))))))), (((unsigned char) (unsigned char)158)));
                    /* LoopSeq 1 */
                    for (unsigned char i_8 = 0; i_8 < 19; i_8 += 4) 
                    {
                        var_26 = ((/* implicit */unsigned int) ((max((((/* implicit */unsigned long long int) (unsigned char)98)), (((((/* implicit */_Bool) (unsigned char)198)) ? (12555596291364141072ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) ((unsigned char) arr_27 [i_8] [i_5] [i_5] [i_5]))) > (((/* implicit */int) var_7))))))));
                        var_27 |= ((/* implicit */unsigned char) max(((-(((((/* implicit */_Bool) 5891147782345410560ULL)) ? (((/* implicit */int) (unsigned short)32786)) : (((/* implicit */int) (unsigned char)0)))))), (((((/* implicit */_Bool) arr_25 [i_6 - 1])) ? (((/* implicit */int) arr_19 [i_7 + 1] [i_6 + 2])) : (((/* implicit */int) arr_22 [i_7 + 1] [i_6 + 2] [i_6]))))));
                        var_28 = ((/* implicit */unsigned char) arr_27 [i_8] [i_5] [i_5] [i_5]);
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_9 = 2; i_9 < 17; i_9 += 3) 
                    {
                        for (unsigned char i_10 = 0; i_10 < 19; i_10 += 4) 
                        {
                            {
                                var_29 = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)49)) : (((((/* implicit */int) var_5)) / (((/* implicit */int) (unsigned char)181)))))));
                                var_30 = ((/* implicit */_Bool) ((arr_21 [i_9] [i_6]) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)16105)) <= (((/* implicit */int) min(((unsigned char)173), (((/* implicit */unsigned char) (_Bool)1)))))))) : ((~(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-28)))))))));
                                var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned short)26953)) : (((/* implicit */int) max(((_Bool)1), ((_Bool)0))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_11 = 0; i_11 < 19; i_11 += 4) 
                    {
                        for (unsigned short i_12 = 0; i_12 < 19; i_12 += 3) 
                        {
                            {
                                arr_41 [7U] [i_6] [i_7] [i_11] [i_5] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (~(((/* implicit */int) var_14))))), (((var_1) >> (((/* implicit */int) var_3))))))), (((((/* implicit */_Bool) max((var_8), (var_11)))) ? (((/* implicit */unsigned long long int) max((2194118631U), (((/* implicit */unsigned int) (unsigned char)92))))) : (((5891147782345410551ULL) | (((/* implicit */unsigned long long int) var_1))))))));
                                var_32 = ((/* implicit */signed char) max((var_32), (((/* implicit */signed char) (-((-(((/* implicit */int) ((unsigned short) arr_40 [i_5] [i_5] [i_5] [(_Bool)1] [i_5] [i_5]))))))))));
                                var_33 = ((((/* implicit */_Bool) (unsigned short)19458)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)51))) : (48U));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_34 = ((/* implicit */signed char) ((unsigned char) (unsigned short)0));
    }
    for (unsigned short i_13 = 1; i_13 < 11; i_13 += 4) /* same iter space */
    {
        var_35 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_13 - 1] [i_13] [i_13 + 1] [i_13 + 1])) ? (((/* implicit */int) (unsigned char)249)) : (((/* implicit */int) arr_7 [i_13 + 2] [i_13] [i_13 - 1] [i_13 - 1])))))));
        var_36 |= ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)29222)) != (((/* implicit */int) (unsigned char)245))));
        var_37 = ((/* implicit */unsigned int) min((var_37), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 2147483627)))))));
        var_38 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((unsigned int) (unsigned short)42642)), (arr_13 [i_13] [i_13] [i_13 + 2] [i_13] [i_13]))))));
        arr_46 [0LL] |= ((/* implicit */long long int) ((_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_13] [(unsigned char)5] [(_Bool)1]))) != (((-5893618832713477459LL) + (((/* implicit */long long int) ((/* implicit */int) (unsigned char)163))))))));
    }
    for (unsigned short i_14 = 1; i_14 < 11; i_14 += 4) /* same iter space */
    {
        var_39 = ((/* implicit */unsigned short) ((((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-120)), ((unsigned char)57)))) + ((+(((/* implicit */int) var_12))))));
        arr_50 [i_14] [i_14] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_10 [(unsigned char)12] [i_14] [i_14] [i_14 - 1]))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_14))))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)60))) : (arr_1 [i_14 - 1] [i_14])))))), (((((/* implicit */_Bool) arr_30 [i_14 + 1] [i_14 + 1])) ? (max((((/* implicit */unsigned long long int) var_16)), (var_11))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)247)), ((unsigned short)21476)))))))));
        /* LoopNest 3 */
        for (signed char i_15 = 0; i_15 < 13; i_15 += 4) 
        {
            for (unsigned short i_16 = 0; i_16 < 13; i_16 += 4) 
            {
                for (unsigned long long int i_17 = 2; i_17 < 12; i_17 += 3) 
                {
                    {
                        var_40 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((var_8), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_0)))))))) ? ((~(((/* implicit */int) (unsigned short)23225)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_17] [i_16] [i_14] [i_14])) ? (((/* implicit */int) arr_20 [i_14])) : (((/* implicit */int) (unsigned short)44071))))) ? (((/* implicit */int) (unsigned short)44048)) : (((/* implicit */int) min(((unsigned char)154), (((/* implicit */unsigned char) var_16)))))))));
                        /* LoopSeq 1 */
                        for (unsigned char i_18 = 1; i_18 < 12; i_18 += 3) 
                        {
                            var_41 = ((/* implicit */signed char) min((((unsigned short) arr_59 [i_14])), (((/* implicit */unsigned short) ((((/* implicit */int) var_9)) == (((/* implicit */int) arr_5 [i_18 + 1] [i_14 + 1])))))));
                            var_42 = ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_14 + 2] [i_14 + 2] [i_14] [i_14] [i_14]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)60)))))));
                            var_43 |= ((/* implicit */unsigned int) arr_42 [i_16]);
                            var_44 = ((/* implicit */unsigned char) max((var_44), (((/* implicit */unsigned char) ((signed char) (-(((/* implicit */int) (signed char)127))))))));
                        }
                    }
                } 
            } 
        } 
        /* LoopSeq 3 */
        for (unsigned char i_19 = 2; i_19 < 9; i_19 += 4) 
        {
            arr_66 [i_19] |= ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */int) var_3)) + (((/* implicit */int) (unsigned char)198)))));
            var_45 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_9 [i_19 - 2] [i_19] [i_19] [i_14 + 2] [i_14 + 2])), ((unsigned short)21456))))));
            arr_67 [i_14] [(unsigned short)10] = min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)247))) * (2850216487524430956ULL))))))), (((unsigned char) var_15)));
        }
        /* vectorizable */
        for (unsigned short i_20 = 2; i_20 < 9; i_20 += 3) 
        {
            arr_71 [i_14] [i_14] [i_20] = ((/* implicit */unsigned long long int) (-(9223372036854775807LL)));
            var_46 = ((/* implicit */unsigned char) ((((/* implicit */int) var_14)) != (((/* implicit */int) arr_57 [i_14 + 1] [i_14 + 2] [i_14] [(short)4]))));
            /* LoopNest 3 */
            for (unsigned int i_21 = 0; i_21 < 13; i_21 += 3) 
            {
                for (unsigned short i_22 = 2; i_22 < 12; i_22 += 3) 
                {
                    for (unsigned int i_23 = 2; i_23 < 9; i_23 += 4) 
                    {
                        {
                            var_47 = ((/* implicit */signed char) ((unsigned int) ((15596527586185120657ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)60))))));
                            var_48 = ((/* implicit */unsigned char) min((var_48), (((/* implicit */unsigned char) ((signed char) arr_73 [i_14 + 1] [i_14 + 2] [i_14 - 1] [i_14])))));
                        }
                    } 
                } 
            } 
        }
        for (int i_24 = 2; i_24 < 11; i_24 += 3) 
        {
            var_49 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (~(((unsigned int) 12412079477538609191ULL))))), (2850216487524430966ULL)));
            /* LoopNest 2 */
            for (long long int i_25 = 2; i_25 < 11; i_25 += 3) 
            {
                for (unsigned char i_26 = 0; i_26 < 13; i_26 += 4) 
                {
                    {
                        var_50 |= var_5;
                        var_51 = ((/* implicit */signed char) min((max((((/* implicit */unsigned short) ((((/* implicit */int) var_12)) >= (((/* implicit */int) var_0))))), (min((var_0), (((/* implicit */unsigned short) var_6)))))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned char)111)))))));
                        var_52 = ((/* implicit */unsigned char) (+((-((-(((/* implicit */int) var_17))))))));
                        var_53 = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned short)2048))));
                        var_54 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_33 [i_25] [i_14] [i_14] [i_14])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_10))))));
                    }
                } 
            } 
        }
    }
}
