/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112513
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112513 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112513
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
    var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) min(((((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)114)))), (((/* implicit */int) min(((_Bool)1), ((_Bool)0))))))) ? (var_3) : (max((min((((/* implicit */unsigned long long int) var_6)), (16503689470219137245ULL))), (((/* implicit */unsigned long long int) (_Bool)1))))));
    var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), (var_10))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-110))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)7))) : (max((2706610844U), (2706610844U))))))))));
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            arr_4 [i_0] = ((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */_Bool) max(((signed char)-46), (((/* implicit */signed char) (_Bool)1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (928140537U)))), ((((_Bool)1) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)115)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (signed char)54))))) : (((((/* implicit */long long int) ((/* implicit */int) (signed char)-1))) + (-7719568446071612942LL)))))));
            var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_1])) && (((/* implicit */_Bool) arr_3 [i_1] [i_0] [i_0]))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)57))) : (arr_1 [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_1])))))) : ((((_Bool)0) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) var_0)))))))))));
        }
        /* LoopSeq 1 */
        for (unsigned short i_2 = 0; i_2 < 19; i_2 += 4) 
        {
            var_16 = ((/* implicit */unsigned char) (+(((((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned short)9364), (((/* implicit */unsigned short) (_Bool)1)))))) ^ (2879159247U)))));
            arr_8 [i_0] [i_2] [i_0] = ((/* implicit */unsigned short) var_12);
        }
        arr_9 [i_0] [i_0] = ((unsigned long long int) ((2879159227U) / (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
        var_17 = ((/* implicit */_Bool) 4017820395131940874LL);
    }
    for (unsigned char i_3 = 1; i_3 < 18; i_3 += 4) 
    {
        /* LoopNest 3 */
        for (short i_4 = 1; i_4 < 20; i_4 += 1) 
        {
            for (unsigned short i_5 = 0; i_5 < 21; i_5 += 3) 
            {
                for (long long int i_6 = 0; i_6 < 21; i_6 += 1) 
                {
                    {
                        arr_21 [i_5] [i_4] [i_5] [i_3] [i_3] [i_6] = ((/* implicit */unsigned long long int) max((min((arr_17 [i_3] [i_4 + 1] [i_3 + 1] [i_6]), (arr_12 [i_3 + 2] [i_4 + 1]))), (arr_12 [i_3 + 3] [i_4 + 1])));
                        var_18 = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) (unsigned short)9351)) ? (((/* implicit */int) (signed char)-98)) : (((/* implicit */int) ((short) 1415808076U))))));
                    }
                } 
            } 
        } 
        var_19 = ((/* implicit */unsigned short) max((var_19), (arr_13 [i_3 + 1] [i_3 + 3] [i_3 + 2])));
    }
    /* vectorizable */
    for (unsigned int i_7 = 1; i_7 < 9; i_7 += 3) 
    {
        arr_25 [i_7] = ((/* implicit */unsigned short) arr_18 [i_7 + 2] [i_7] [i_7] [i_7] [i_7]);
        arr_26 [(unsigned short)2] [i_7] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) arr_20 [i_7] [i_7 + 1] [i_7] [i_7]))) ? (((((/* implicit */_Bool) (signed char)113)) ? (((/* implicit */int) arr_18 [12ULL] [i_7] [(_Bool)1] [i_7 + 2] [i_7])) : (((/* implicit */int) (_Bool)1)))) : ((((_Bool)1) ? (((/* implicit */int) arr_24 [i_7 + 2])) : (((/* implicit */int) (_Bool)1))))));
    }
    /* vectorizable */
    for (unsigned short i_8 = 0; i_8 < 12; i_8 += 4) 
    {
        /* LoopSeq 3 */
        for (unsigned char i_9 = 1; i_9 < 10; i_9 += 3) 
        {
            arr_33 [i_9] [i_9 - 1] = arr_14 [1LL] [(_Bool)1];
            /* LoopNest 2 */
            for (signed char i_10 = 1; i_10 < 11; i_10 += 4) 
            {
                for (unsigned char i_11 = 0; i_11 < 12; i_11 += 1) 
                {
                    {
                        var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) (unsigned char)240))));
                        arr_39 [4LL] [i_9] [i_9] [(_Bool)1] [i_9] [i_11] = ((/* implicit */unsigned long long int) var_0);
                    }
                } 
            } 
            arr_40 [i_8] [i_9] = ((/* implicit */_Bool) ((unsigned char) arr_14 [i_8] [i_9]));
            /* LoopNest 2 */
            for (unsigned long long int i_12 = 0; i_12 < 12; i_12 += 2) 
            {
                for (long long int i_13 = 1; i_13 < 11; i_13 += 4) 
                {
                    {
                        var_21 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_16 [i_9 + 2] [i_9 - 1] [i_13 + 1] [i_13 - 1])) ? (((/* implicit */int) arr_13 [i_13] [i_13 - 1] [i_13 - 1])) : ((-(((/* implicit */int) arr_44 [i_8] [i_8] [i_9] [i_12] [i_12] [i_13]))))));
                        arr_47 [i_8] [i_9] [i_9] [i_13] = ((/* implicit */unsigned char) var_8);
                        var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) (+(928140537U))))));
                    }
                } 
            } 
            arr_48 [i_9] [i_9] = ((/* implicit */signed char) (~(((/* implicit */int) arr_11 [i_9 + 1]))));
        }
        for (unsigned char i_14 = 3; i_14 < 11; i_14 += 1) 
        {
            /* LoopNest 2 */
            for (signed char i_15 = 2; i_15 < 11; i_15 += 4) 
            {
                for (unsigned char i_16 = 2; i_16 < 10; i_16 += 2) 
                {
                    {
                        arr_58 [i_16] [i_15] [(unsigned short)1] [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)244)) ? (-5037221065303018449LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                        arr_59 [i_15] [i_14] [i_16] [(short)1] = ((/* implicit */short) ((int) (-(((/* implicit */int) var_4)))));
                        var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned char)232)) : (((/* implicit */int) arr_12 [i_8] [i_16])))))))));
                    }
                } 
            } 
            var_24 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_38 [i_8] [i_14 + 1] [i_14 - 2] [i_14] [i_14 - 1] [i_14]))));
            arr_60 [(unsigned short)9] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)127))))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-69))) : (((((/* implicit */_Bool) (signed char)-46)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-54))) : (-4813545898010323735LL)))));
        }
        for (unsigned long long int i_17 = 2; i_17 < 9; i_17 += 2) 
        {
            /* LoopNest 3 */
            for (long long int i_18 = 1; i_18 < 8; i_18 += 3) 
            {
                for (unsigned char i_19 = 0; i_19 < 12; i_19 += 4) 
                {
                    for (signed char i_20 = 2; i_20 < 8; i_20 += 1) 
                    {
                        {
                            var_25 += arr_67 [i_8] [i_17] [i_18] [(signed char)1] [i_20 - 1];
                            var_26 = ((/* implicit */unsigned short) ((arr_38 [i_18] [10ULL] [i_17] [9LL] [i_17 + 3] [i_17 + 2]) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) arr_38 [i_18] [i_17] [i_17] [i_17] [i_17 + 2] [i_17 + 2])))));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (unsigned short i_21 = 1; i_21 < 10; i_21 += 1) 
            {
                for (long long int i_22 = 2; i_22 < 11; i_22 += 1) 
                {
                    {
                        var_27 = ((/* implicit */_Bool) (signed char)63);
                        var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)126)))))));
                    }
                } 
            } 
            arr_77 [i_8] [(unsigned short)11] = ((/* implicit */long long int) ((-6543776506931840988LL) != (arr_20 [i_17] [i_17] [i_17 + 2] [i_17])));
        }
        /* LoopNest 2 */
        for (int i_23 = 0; i_23 < 12; i_23 += 3) 
        {
            for (signed char i_24 = 0; i_24 < 12; i_24 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_25 = 4; i_25 < 11; i_25 += 1) 
                    {
                        for (unsigned short i_26 = 1; i_26 < 11; i_26 += 1) 
                        {
                            {
                                arr_90 [i_23] [i_23] [i_24] [i_25] [5ULL] = ((/* implicit */unsigned char) arr_67 [i_8] [i_23] [i_8] [i_25] [i_26 - 1]);
                                arr_91 [i_8] [i_8] [i_23] [i_23] [i_23] [i_25] [i_26 + 1] = ((/* implicit */_Bool) ((short) arr_57 [i_25 - 1] [i_25] [i_26 - 1] [i_26 + 1] [i_26 - 1] [i_26]));
                            }
                        } 
                    } 
                    arr_92 [i_8] [i_23] = ((/* implicit */short) arr_66 [i_24] [i_23] [i_24] [i_24] [i_23] [i_8]);
                }
            } 
        } 
    }
    var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (min((var_9), (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (unsigned char)233))))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-6375))))))))));
}
