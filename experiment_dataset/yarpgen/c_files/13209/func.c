/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13209
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
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 4; i_1 < 17; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 20; i_2 += 4) 
                {
                    for (signed char i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        {
                            var_16 *= ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)106)))))))), (arr_3 [i_0])));
                            arr_12 [i_3] [i_3] [i_3] [i_3] [(signed char)14] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) (-(8867214650007562041LL))))) ? ((+(8867214650007562037LL))) : (((/* implicit */long long int) ((int) arr_1 [i_2])))));
                            var_17 = ((/* implicit */signed char) (unsigned short)47503);
                        }
                    } 
                } 
                var_18 = ((/* implicit */unsigned char) (~(arr_0 [i_0])));
            }
        } 
    } 
    /* LoopSeq 4 */
    for (signed char i_4 = 1; i_4 < 8; i_4 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_5 = 0; i_5 < 11; i_5 += 1) 
        {
            for (signed char i_6 = 3; i_6 < 9; i_6 += 4) 
            {
                {
                    arr_19 [i_4] [i_6 + 2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_4 [(unsigned char)10] [i_4])), (arr_10 [i_4] [i_4] [i_4 + 3] [i_6 - 2] [i_6 - 3])))) ? ((+(arr_10 [i_4] [i_4] [i_4 + 3] [i_6 - 2] [i_6 - 3]))) : (max((((/* implicit */long long int) arr_4 [i_4] [i_4])), (arr_13 [i_4])))));
                    arr_20 [i_4 + 2] [i_4 + 2] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_5])) ? (((/* implicit */int) arr_1 [(signed char)13])) : (((/* implicit */int) (unsigned short)47505))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_4])))))) : ((-(arr_3 [i_4 - 1])))))) ? (max((((((/* implicit */_Bool) arr_3 [i_4])) ? (((/* implicit */int) arr_4 [(_Bool)1] [i_6])) : (((/* implicit */int) arr_17 [i_4] [(short)5] [i_6] [i_4 - 1])))), ((-(((/* implicit */int) (unsigned short)57605)))))) : (((((/* implicit */_Bool) ((((/* implicit */int) arr_8 [16LL] [16LL] [i_4] [i_4] [i_4] [i_4])) + (arr_16 [i_6 + 2] [i_5] [1])))) ? (arr_5 [i_6] [i_6 - 2]) : (((((/* implicit */_Bool) arr_3 [i_6])) ? (arr_16 [i_4] [i_5] [i_5]) : (((/* implicit */int) arr_14 [i_6 - 1]))))))));
                }
            } 
        } 
        arr_21 [(short)2] |= ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_4 + 3] [i_4 + 3] [i_4 - 1] [i_4 + 3])))))));
    }
    for (signed char i_7 = 1; i_7 < 8; i_7 += 4) /* same iter space */
    {
        arr_24 [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((unsigned int) (signed char)-26))))) ? (arr_7 [i_7] [i_7] [i_7 - 1] [i_7]) : (((/* implicit */unsigned long long int) arr_0 [i_7 - 1]))));
        var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) (-(((/* implicit */int) ((short) (!(((/* implicit */_Bool) arr_23 [i_7 + 1])))))))))));
    }
    for (signed char i_8 = 0; i_8 < 18; i_8 += 4) 
    {
        var_20 = ((/* implicit */signed char) (unsigned short)47498);
        arr_28 [i_8] [i_8] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_26 [i_8] [i_8]))));
    }
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_10 = 0; i_10 < 14; i_10 += 3) 
        {
            for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) 
                        {
                            {
                                var_21 |= ((/* implicit */unsigned short) (-(((int) arr_35 [i_11 - 1] [i_13 + 1]))));
                                var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) (~(((long long int) arr_26 [i_9] [i_10])))))));
                                var_23 |= ((/* implicit */unsigned char) arr_6 [i_13] [i_9]);
                                var_24 |= ((/* implicit */int) max(((+(arr_30 [i_11 - 1] [i_11 - 1]))), (((/* implicit */unsigned long long int) max((arr_36 [(signed char)12] [i_10]), (arr_36 [(_Bool)0] [i_10]))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_14 = 3; i_14 < 10; i_14 += 2) 
                    {
                        for (unsigned char i_15 = 3; i_15 < 13; i_15 += 1) 
                        {
                            {
                                arr_48 [i_9] [i_10] [i_10] [2ULL] [i_9] [5ULL] = ((/* implicit */unsigned long long int) 2412193576164572509LL);
                                var_25 = ((/* implicit */long long int) (~((-(((/* implicit */int) arr_9 [i_9] [i_10] [i_14 + 2] [i_14] [i_15] [i_9]))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_16 = 3; i_16 < 12; i_16 += 3) 
                    {
                        for (unsigned char i_17 = 0; i_17 < 14; i_17 += 2) 
                        {
                            {
                                var_26 += ((/* implicit */_Bool) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_49 [i_11] [i_11 - 1] [(_Bool)0] [i_11] [i_11 - 1] [i_11]))))), ((-(arr_49 [i_11 - 1] [i_11 - 1] [i_11 - 1] [i_11] [i_11 - 1] [i_11 - 1])))));
                                var_27 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_16 + 1] [i_10] [i_11 - 1] [15U] [i_17] [i_17])) ? (((/* implicit */int) (short)-15266)) : (((/* implicit */int) (unsigned short)18020)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_28 = ((/* implicit */int) max((var_28), (((/* implicit */int) 33554432U))));
        /* LoopSeq 1 */
        for (unsigned short i_18 = 3; i_18 < 11; i_18 += 4) 
        {
            /* LoopSeq 2 */
            for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
            {
                /* LoopSeq 2 */
                for (signed char i_20 = 2; i_20 < 13; i_20 += 2) /* same iter space */
                {
                    var_29 += ((/* implicit */_Bool) arr_4 [i_9] [(unsigned short)14]);
                    arr_60 [i_18] = ((((/* implicit */_Bool) arr_47 [i_9] [i_9] [i_9] [i_20] [(unsigned char)11] [i_19] [i_9])) ? ((-(((((/* implicit */_Bool) -8867214650007562037LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_9] [i_18 + 1]))) : (arr_3 [i_9]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_31 [i_9] [2U])))));
                    /* LoopSeq 1 */
                    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                    {
                        var_30 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) 8867214650007562046LL))))), (max((((/* implicit */unsigned int) arr_53 [i_20] [i_20 - 2])), (171372396U)))));
                        var_31 = arr_40 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9];
                    }
                }
                for (signed char i_22 = 2; i_22 < 13; i_22 += 2) /* same iter space */
                {
                    var_32 = ((/* implicit */unsigned int) ((unsigned char) (-((-(-8867214650007562038LL))))));
                    var_33 = ((/* implicit */unsigned long long int) (-((((!(((/* implicit */_Bool) arr_38 [i_9] [i_18] [i_18] [i_19] [i_22 - 1])))) ? (max((((/* implicit */unsigned int) arr_53 [i_19] [i_18])), (arr_6 [i_9] [i_9]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_64 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9])))))));
                }
                arr_66 [i_9] [i_18] = ((/* implicit */short) arr_56 [i_18]);
                /* LoopNest 2 */
                for (int i_23 = 3; i_23 < 13; i_23 += 2) 
                {
                    for (unsigned int i_24 = 0; i_24 < 14; i_24 += 4) 
                    {
                        {
                            arr_72 [i_9] [i_18] [i_19] [i_23] [i_18] = ((/* implicit */short) ((_Bool) max((((/* implicit */unsigned long long int) (short)-5305)), (max((((/* implicit */unsigned long long int) arr_34 [i_18])), (arr_2 [i_23]))))));
                            var_34 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_70 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]))))) ? (((/* implicit */int) (short)-5315)) : (((/* implicit */int) ((_Bool) max((((/* implicit */long long int) (unsigned short)47503)), (6225113022710302626LL)))))));
                            var_35 += ((/* implicit */unsigned char) 4294967295U);
                            var_36 = ((/* implicit */unsigned long long int) (~((~(((/* implicit */int) arr_57 [i_18] [i_18] [2LL] [i_18]))))));
                        }
                    } 
                } 
                var_37 = ((/* implicit */int) arr_33 [i_18 + 3] [i_18] [i_18 - 2]);
            }
            for (unsigned char i_25 = 0; i_25 < 14; i_25 += 1) 
            {
                var_38 = ((/* implicit */unsigned short) arr_7 [i_9] [i_9] [i_9] [i_9]);
                arr_75 [i_18] [i_25] [(short)11] = ((/* implicit */signed char) ((unsigned long long int) (-((+(arr_39 [i_25] [(_Bool)1] [i_18] [i_9]))))));
                var_39 = ((/* implicit */unsigned long long int) (+((+((-(((/* implicit */int) arr_9 [(_Bool)1] [(unsigned short)10] [(_Bool)1] [i_25] [i_25] [i_9]))))))));
                var_40 &= ((/* implicit */_Bool) 6144763018930301468ULL);
            }
            var_41 = ((((/* implicit */_Bool) max((((arr_50 [i_9] [i_9] [(_Bool)1] [i_9]) | (arr_7 [8ULL] [i_18] [i_9] [i_18]))), (((((/* implicit */_Bool) arr_25 [(_Bool)1])) ? (arr_27 [i_9]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)6911)))))))) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) ((short) (unsigned short)49205))), (arr_51 [i_9] [i_9] [i_18 - 1] [(unsigned short)11] [i_18 + 3] [i_18 - 3] [i_18])))) : (arr_10 [i_9] [i_9] [i_9] [i_18] [i_18]));
            /* LoopNest 2 */
            for (long long int i_26 = 0; i_26 < 14; i_26 += 4) 
            {
                for (unsigned char i_27 = 1; i_27 < 11; i_27 += 3) 
                {
                    {
                        var_42 = ((/* implicit */short) (((!((!(((/* implicit */_Bool) arr_77 [(unsigned short)11] [12U])))))) ? (((((/* implicit */_Bool) arr_9 [i_9] [i_18] [i_18 + 3] [i_18] [i_18] [i_27 + 1])) ? (((/* implicit */int) (unsigned char)68)) : (((/* implicit */int) arr_9 [i_9] [i_18] [i_18 + 1] [i_27] [i_27] [i_27 + 2])))) : (((/* implicit */int) (!((!(((/* implicit */_Bool) arr_68 [12] [12] [i_26] [i_18] [i_18 + 1] [i_26])))))))));
                        arr_82 [i_18] [i_18] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(-8867214650007562038LL)))) ? (((/* implicit */unsigned int) (-(arr_38 [i_9] [i_18] [i_18] [12U] [i_27 + 3])))) : (((((/* implicit */_Bool) arr_37 [(unsigned short)11] [i_18] [i_26] [11U])) ? (arr_0 [i_9]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-6865)))))))) ? (((/* implicit */int) arr_44 [i_9] [7ULL] [i_18] [(unsigned short)9] [i_26] [i_27])) : ((-(((/* implicit */int) ((_Bool) -270965179)))))));
                    }
                } 
            } 
            var_43 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) max(((short)20272), (((/* implicit */short) (_Bool)1))))))) ? (((/* implicit */int) ((unsigned char) arr_45 [i_18 + 2] [i_18] [i_18] [i_18 + 2] [7LL] [i_18 + 2] [i_18 - 3]))) : (((((/* implicit */_Bool) arr_65 [i_9] [i_18] [i_18] [i_18] [i_18 - 3] [i_18 + 2])) ? (((/* implicit */int) arr_78 [i_9] [i_18])) : ((+(((/* implicit */int) (_Bool)1))))))));
            var_44 = ((/* implicit */int) ((unsigned int) ((int) (!(((/* implicit */_Bool) 4294967279U))))));
        }
        /* LoopNest 2 */
        for (unsigned long long int i_28 = 0; i_28 < 14; i_28 += 1) 
        {
            for (short i_29 = 0; i_29 < 14; i_29 += 3) 
            {
                {
                    var_45 = ((/* implicit */unsigned long long int) max((arr_0 [i_9]), (((/* implicit */unsigned int) (+(arr_5 [i_9] [i_9]))))));
                    var_46 = ((/* implicit */unsigned short) (-((-(((/* implicit */int) ((short) (unsigned short)9599)))))));
                    var_47 = ((/* implicit */short) arr_6 [i_28] [18U]);
                }
            } 
        } 
        var_48 = ((short) max(((-(arr_61 [i_9] [i_9] [i_9] [i_9] [1ULL] [i_9]))), (((/* implicit */long long int) arr_86 [2LL] [(short)6] [10ULL]))));
    }
    var_49 = ((/* implicit */unsigned int) var_1);
}
