/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145392
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145392 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145392
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
    var_20 = ((((/* implicit */long long int) var_16)) | (9223372036854775807LL));
    /* LoopSeq 2 */
    for (long long int i_0 = 2; i_0 < 22; i_0 += 2) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned char) max((min(((unsigned short)32134), ((unsigned short)32134))), (((/* implicit */unsigned short) arr_0 [i_0 - 1]))));
        var_22 = ((/* implicit */unsigned short) arr_1 [i_0]);
        arr_4 [i_0] [(unsigned short)11] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_5))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 4; i_1 < 21; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 23; i_2 += 3) 
            {
                {
                    arr_10 [i_0] [14U] [i_2] [14U] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */int) arr_9 [i_0] [i_1 + 2] [i_2])), ((-(((/* implicit */int) (short)-19643))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-22560))) : ((-(((((/* implicit */_Bool) var_3)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1])))))))));
                    /* LoopSeq 3 */
                    for (long long int i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        var_23 = ((/* implicit */int) arr_3 [i_0]);
                        arr_15 [i_0] [i_0] [i_0] = ((/* implicit */short) max(((unsigned short)1), ((unsigned short)19928)));
                        var_24 = ((/* implicit */_Bool) ((long long int) ((var_17) < (((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (arr_6 [19U] [3]))))));
                    }
                    for (unsigned short i_4 = 0; i_4 < 24; i_4 += 4) /* same iter space */
                    {
                        arr_18 [i_2] [i_2] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (+(var_12)))), (arr_12 [i_0] [i_0] [i_0 + 1] [i_1 - 2] [i_2 - 1] [i_2 - 2])));
                        arr_19 [i_0 - 2] = ((short) min((((/* implicit */unsigned short) arr_3 [i_0 - 1])), (var_1)));
                    }
                    /* vectorizable */
                    for (unsigned short i_5 = 0; i_5 < 24; i_5 += 4) /* same iter space */
                    {
                        var_25 = arr_1 [i_0];
                        var_26 = ((unsigned short) arr_12 [i_0 + 2] [i_0] [i_0 + 1] [i_0] [i_0] [i_0]);
                        /* LoopSeq 1 */
                        for (unsigned long long int i_6 = 1; i_6 < 23; i_6 += 4) 
                        {
                            arr_24 [12LL] [i_1] [i_2 + 1] [i_1] [i_0 + 2] = ((/* implicit */short) arr_5 [i_6]);
                            arr_25 [i_0] [i_1] [13LL] [13LL] [i_2 + 1] [3ULL] [i_6] = ((/* implicit */unsigned long long int) var_13);
                            var_27 = ((/* implicit */int) arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                            arr_26 [i_0] [i_0] [i_2] [i_5] [i_2] [i_6 + 1] = ((/* implicit */unsigned short) arr_20 [i_0] [i_0 + 2] [i_1 + 3] [i_1] [i_2 - 1] [i_6 - 1]);
                        }
                    }
                    var_28 = ((/* implicit */unsigned long long int) min((max((((/* implicit */unsigned int) (unsigned short)33401)), (var_13))), (((/* implicit */unsigned int) ((unsigned short) var_19)))));
                    /* LoopNest 2 */
                    for (signed char i_7 = 0; i_7 < 24; i_7 += 2) 
                    {
                        for (long long int i_8 = 3; i_8 < 22; i_8 += 1) 
                        {
                            {
                                arr_34 [i_0] [i_0 + 1] [i_0] [(_Bool)1] [i_0 - 1] [i_8] = ((/* implicit */unsigned char) ((var_6) || (((/* implicit */_Bool) min(((~(((/* implicit */int) arr_5 [i_7])))), (((/* implicit */int) min(((unsigned short)45623), ((unsigned short)45607)))))))));
                                var_29 = ((/* implicit */unsigned short) -1701405621);
                                var_30 = ((/* implicit */unsigned short) (-(min((arr_22 [i_1 + 1]), (arr_22 [i_1 - 2])))));
                            }
                        } 
                    } 
                    arr_35 [i_0 - 1] [i_0 - 1] [i_0] = ((/* implicit */signed char) min((((/* implicit */int) arr_5 [i_0])), ((+(((/* implicit */int) (!(((/* implicit */_Bool) 249206038187700610ULL)))))))));
                }
            } 
        } 
    }
    for (long long int i_9 = 2; i_9 < 22; i_9 += 2) /* same iter space */
    {
        var_31 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) (short)-7013)) ? (2147483647) : (((/* implicit */int) (unsigned short)46958))))));
        var_32 = ((/* implicit */unsigned char) (+(min((arr_33 [i_9] [i_9] [i_9]), (((/* implicit */long long int) arr_28 [(_Bool)1] [i_9 - 2] [i_9 + 2]))))));
        arr_38 [i_9] [i_9] = (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [i_9]))))));
        /* LoopNest 2 */
        for (long long int i_10 = 0; i_10 < 24; i_10 += 1) 
        {
            for (unsigned int i_11 = 0; i_11 < 24; i_11 += 3) 
            {
                {
                    arr_43 [i_9 + 1] [i_10] [i_11] [i_11] = ((/* implicit */unsigned short) min((((/* implicit */int) (unsigned short)33401)), ((+((~(((/* implicit */int) (signed char)-1))))))));
                    /* LoopSeq 4 */
                    for (unsigned char i_12 = 1; i_12 < 23; i_12 += 4) 
                    {
                        var_33 = ((/* implicit */long long int) arr_1 [i_11]);
                        /* LoopSeq 3 */
                        for (unsigned int i_13 = 0; i_13 < 24; i_13 += 1) 
                        {
                            var_34 = ((/* implicit */long long int) ((max((var_13), (((/* implicit */unsigned int) arr_17 [i_11] [i_11] [(unsigned char)0] [(unsigned char)0] [i_9 - 1] [(unsigned char)0])))) % (((/* implicit */unsigned int) (+(((/* implicit */int) var_1)))))));
                            var_35 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) min((max((arr_33 [i_10] [i_10] [19LL]), (((/* implicit */long long int) var_13)))), (((/* implicit */long long int) var_1))))), ((+(arr_16 [i_9 - 1] [i_9 - 1])))));
                            var_36 = ((/* implicit */short) var_0);
                            arr_48 [2U] [2U] [i_10] [i_11] [i_10] [i_12] [i_12] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(var_16)))) || (((/* implicit */_Bool) (+(((/* implicit */int) arr_11 [i_9] [i_9] [i_11] [i_9 - 1])))))));
                        }
                        for (unsigned long long int i_14 = 0; i_14 < 24; i_14 += 4) 
                        {
                            arr_53 [i_10] [12U] = min(((~(((/* implicit */int) arr_41 [i_9] [i_12 - 1] [i_9 + 2] [i_12])))), ((+(arr_51 [i_10]))));
                            arr_54 [i_9] [i_9 + 2] [i_9 - 2] [i_9 - 1] [i_10] [i_9 - 1] = ((/* implicit */short) var_11);
                            arr_55 [i_9] [(unsigned short)23] [i_11] [i_12] [i_14] [i_12] [i_10] = var_13;
                            var_37 = ((/* implicit */unsigned char) arr_33 [i_10] [i_10] [20LL]);
                        }
                        for (unsigned short i_15 = 0; i_15 < 24; i_15 += 1) 
                        {
                            var_38 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_0 [i_9 - 2]))))), ((+(arr_50 [i_9 - 2] [i_10] [i_10] [i_12 - 1] [i_10])))));
                            arr_58 [i_9] [i_10] [i_10] [i_10] [i_10] [i_15] = ((/* implicit */unsigned short) arr_50 [i_9 + 1] [i_10] [i_9 + 1] [i_9 + 1] [i_10]);
                        }
                    }
                    for (unsigned long long int i_16 = 1; i_16 < 22; i_16 += 1) 
                    {
                        var_39 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned long long int) arr_16 [i_9 - 1] [i_10])))));
                        var_40 = ((/* implicit */unsigned long long int) 3024043576U);
                    }
                    for (unsigned long long int i_17 = 2; i_17 < 23; i_17 += 2) 
                    {
                        var_41 = ((/* implicit */long long int) ((short) (~(((/* implicit */int) arr_45 [i_9 + 1] [i_9 - 2] [i_17 + 1] [i_10])))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_18 = 0; i_18 < 24; i_18 += 3) 
                        {
                            arr_69 [i_9] [i_10] [i_9] [i_9] [i_10] = ((/* implicit */short) min((-131072), (((/* implicit */int) (unsigned short)29994))));
                            var_42 = max((arr_29 [i_17 - 1] [i_9 + 1]), (((/* implicit */unsigned short) (short)7022)));
                            arr_70 [i_9 + 2] [i_10] [i_10] [i_11] [i_10] [i_18] [1] = ((/* implicit */unsigned int) arr_30 [i_9] [i_9 + 2] [i_10] [i_17 - 2]);
                        }
                    }
                    /* vectorizable */
                    for (unsigned short i_19 = 0; i_19 < 24; i_19 += 1) 
                    {
                        arr_73 [i_9] [16] [i_10] [(signed char)15] = ((/* implicit */short) ((((/* implicit */_Bool) arr_31 [i_9] [i_9] [i_10] [i_10] [i_10] [i_11] [i_19])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)32134))) : (var_11)));
                        arr_74 [i_9] [i_9] [i_9] [i_10] = ((/* implicit */long long int) var_15);
                        arr_75 [i_9] [22U] [i_10] [(unsigned short)2] = ((/* implicit */short) arr_9 [(unsigned char)19] [i_9 + 2] [i_9 + 2]);
                    }
                }
            } 
        } 
    }
    var_43 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */int) (_Bool)1)), (((((/* implicit */int) var_6)) ^ (((/* implicit */int) var_3))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (max((((long long int) var_3)), (((/* implicit */long long int) (~(((/* implicit */int) var_15)))))))));
}
