/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112082
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
    var_13 = ((/* implicit */short) min((min((var_0), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_10))))))), (((/* implicit */unsigned long long int) (~(((((/* implicit */int) (short)5)) << (((/* implicit */int) var_11)))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 2; i_0 < 12; i_0 += 4) /* same iter space */
    {
        arr_3 [i_0 + 2] [i_0 + 2] = ((_Bool) ((((/* implicit */_Bool) (unsigned short)29)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (var_2)));
        arr_4 [i_0] [i_0] = ((/* implicit */int) var_0);
        var_14 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_0]))));
        var_15 ^= ((/* implicit */signed char) ((((_Bool) (_Bool)0)) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_9))))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_2)))));
    }
    for (signed char i_1 = 2; i_1 < 12; i_1 += 4) /* same iter space */
    {
        var_16 ^= ((((arr_5 [i_1 - 2]) ? (((/* implicit */int) arr_7 [i_1])) : (((/* implicit */int) (_Bool)1)))) / (((((/* implicit */_Bool) arr_2 [i_1 - 2] [i_1 + 2])) ? (((/* implicit */int) (unsigned char)40)) : (((/* implicit */int) arr_6 [i_1])))));
        var_17 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_1])) ? (((/* implicit */int) arr_0 [i_1 - 1])) : (((/* implicit */int) arr_7 [i_1 + 1]))))) ? ((~(976683428251675605ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_1 - 1])) + (((/* implicit */int) arr_0 [i_1 + 2])))))));
    }
    for (unsigned long long int i_2 = 3; i_2 < 9; i_2 += 1) 
    {
        arr_11 [8ULL] [i_2 + 2] &= ((/* implicit */unsigned char) min((((/* implicit */int) arr_5 [i_2 + 3])), (((((/* implicit */int) (unsigned char)12)) * (((/* implicit */int) (_Bool)1))))));
        var_18 += ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_10 [i_2]))));
    }
    /* LoopSeq 2 */
    for (short i_3 = 1; i_3 < 21; i_3 += 4) /* same iter space */
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_4 = 1; i_4 < 18; i_4 += 1) 
        {
            arr_18 [i_4] [i_4] [i_3 + 1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_14 [i_3 + 1] [i_3 + 1]))))) * (((unsigned long long int) 808321882))));
            var_19 = ((/* implicit */_Bool) max((var_19), (arr_12 [i_3] [i_4])));
            /* LoopSeq 3 */
            for (int i_5 = 2; i_5 < 20; i_5 += 4) 
            {
                arr_21 [i_3 + 1] [i_4 + 3] [i_4] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_19 [(unsigned short)17] [i_5 - 2]) ? (((/* implicit */int) arr_17 [i_3])) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) arr_16 [i_5])) : (((/* implicit */int) arr_19 [i_4 + 2] [i_4]))));
                /* LoopNest 2 */
                for (short i_6 = 0; i_6 < 22; i_6 += 4) 
                {
                    for (unsigned long long int i_7 = 1; i_7 < 18; i_7 += 4) 
                    {
                        {
                            var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) (unsigned char)14)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned char)22))))))));
                            var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) (+(((/* implicit */int) arr_20 [i_3] [i_5 - 1] [i_4])))))));
                        }
                    } 
                } 
            }
            for (unsigned char i_8 = 2; i_8 < 18; i_8 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_9 = 0; i_9 < 22; i_9 += 1) 
                {
                    for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned char) ((_Bool) arr_20 [i_4 + 2] [i_4] [i_10]));
                            var_23 = ((/* implicit */unsigned char) ((unsigned long long int) (_Bool)1));
                            var_24 = ((/* implicit */signed char) (~(((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (_Bool)1))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_11 = 1; i_11 < 19; i_11 += 2) 
                {
                    for (short i_12 = 4; i_12 < 21; i_12 += 2) 
                    {
                        {
                            arr_39 [i_3 - 1] [(unsigned char)12] [i_11] [i_11] = ((/* implicit */unsigned short) arr_24 [i_3] [i_4 + 3] [i_8] [i_11] [(unsigned short)3]);
                            arr_40 [(short)0] [i_11] [i_8] [i_11] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_22 [(unsigned short)12] [i_4] [i_8] [i_11])) * (((/* implicit */int) arr_32 [5ULL]))))) ? ((~(arr_36 [i_11]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)132)))));
                        }
                    } 
                } 
            }
            for (int i_13 = 0; i_13 < 22; i_13 += 1) 
            {
                arr_43 [i_3] [i_4 - 1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_25 [(unsigned char)19] [10] [i_3] [i_4 + 3] [(signed char)11])) ? (((((/* implicit */int) (unsigned char)255)) | (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (!((_Bool)1))))));
                /* LoopNest 2 */
                for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
                {
                    for (signed char i_15 = 0; i_15 < 22; i_15 += 4) 
                    {
                        {
                            var_25 = ((/* implicit */_Bool) ((unsigned short) ((arr_20 [2ULL] [i_13] [i_14]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_42 [(_Bool)1] [i_3] [i_3 - 1]))) : (13436409581553792507ULL))));
                            arr_48 [i_3] [i_14] [i_4] [i_13] [i_14] [(signed char)13] [i_13] = ((/* implicit */unsigned char) ((unsigned long long int) ((arr_36 [i_14]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [9ULL]))))));
                        }
                    } 
                } 
                var_26 += ((/* implicit */short) (_Bool)1);
            }
            var_27 = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) 11189500936815900254ULL))))));
        }
        /* vectorizable */
        for (unsigned char i_16 = 0; i_16 < 22; i_16 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned short i_17 = 4; i_17 < 20; i_17 += 4) 
            {
                for (unsigned short i_18 = 1; i_18 < 19; i_18 += 1) 
                {
                    {
                        arr_58 [i_3 + 1] [i_16] = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)66)) || (arr_20 [i_17] [i_16] [i_3]))))) < ((~(var_2))));
                        /* LoopSeq 1 */
                        for (int i_19 = 1; i_19 < 21; i_19 += 1) 
                        {
                            var_28 = ((/* implicit */unsigned short) (unsigned char)12);
                            arr_63 [i_3 + 1] [i_3 + 1] [i_17] [i_16] [i_3 + 1] = ((/* implicit */unsigned char) (~((~(((/* implicit */int) arr_32 [i_17]))))));
                            arr_64 [i_16] [i_16] [i_17] [i_17] = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_50 [i_16] [i_16] [i_17])) | (((/* implicit */int) (_Bool)1)))) | (((arr_46 [17] [17] [i_17 + 1] [(_Bool)1] [i_17] [i_17]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))));
                        }
                    }
                } 
            } 
            var_29 = ((/* implicit */signed char) max((var_29), (((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_19 [i_3] [(_Bool)1]))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) var_1)) == (arr_61 [(signed char)17] [i_3 - 1] [i_16] [i_16] [(signed char)17])))) : (((/* implicit */int) (_Bool)0)))))));
            var_30 = ((/* implicit */unsigned char) (signed char)116);
        }
        var_31 = min((127492266), (((/* implicit */int) (unsigned char)7)));
    }
    for (short i_20 = 1; i_20 < 21; i_20 += 4) /* same iter space */
    {
        var_32 -= ((/* implicit */unsigned char) 13436409581553792507ULL);
        arr_69 [i_20 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (unsigned char)85))))) ? (min((((arr_19 [(unsigned char)17] [4]) ? (((/* implicit */int) (unsigned char)122)) : (((/* implicit */int) arr_19 [12] [(signed char)10])))), (((((/* implicit */int) (unsigned short)63836)) ^ (((/* implicit */int) arr_49 [i_20] [i_20])))))) : ((((~(((/* implicit */int) (unsigned char)190)))) | (((((/* implicit */_Bool) arr_26 [i_20] [13ULL] [i_20 - 1] [(unsigned short)11] [i_20 + 1])) ? (-1642409499) : (((/* implicit */int) (unsigned short)63))))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_21 = 2; i_21 < 20; i_21 += 1) /* same iter space */
        {
            arr_74 [i_21 - 2] [(_Bool)1] [i_20] = ((/* implicit */signed char) (unsigned char)194);
            var_33 = ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (unsigned short)27580)) ? (arr_28 [i_21]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_21] [i_20]))))));
            /* LoopNest 2 */
            for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
            {
                for (int i_23 = 1; i_23 < 21; i_23 += 4) 
                {
                    {
                        var_34 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) > (22ULL)))) == (((/* implicit */int) ((((/* implicit */int) (unsigned short)63)) >= (((/* implicit */int) var_6)))))));
                        var_35 = arr_54 [i_20] [i_21] [i_21 + 1] [i_22] [6];
                        var_36 = ((/* implicit */int) ((_Bool) (_Bool)0));
                    }
                } 
            } 
        }
        for (int i_24 = 2; i_24 < 20; i_24 += 1) /* same iter space */
        {
            arr_85 [i_20 - 1] [(short)2] [i_24] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_19 [i_20 + 1] [i_20 - 1])) - (((/* implicit */int) (unsigned char)85))))) * ((~(var_0)))));
            var_37 -= ((((/* implicit */unsigned long long int) (~(((/* implicit */int) ((unsigned char) var_7)))))) & (((var_5) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_84 [i_20]))))));
        }
        arr_86 [i_20] = ((/* implicit */unsigned long long int) (_Bool)0);
    }
    var_38 = ((/* implicit */unsigned char) (((_Bool)1) || ((_Bool)1)));
}
