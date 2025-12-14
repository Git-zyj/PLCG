/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182258
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182258 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182258
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
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (int i_1 = 2; i_1 < 20; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 2; i_2 < 17; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 20; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 2 */
                            /* vectorizable */
                            for (unsigned int i_4 = 0; i_4 < 21; i_4 += 1) /* same iter space */
                            {
                                var_10 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_1 - 1])) ? (((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_9 [i_2 + 2] [i_1]))));
                                arr_15 [i_0] [i_3] [i_3] [i_0] [i_4] = ((((/* implicit */_Bool) arr_8 [i_2 - 2] [i_1 + 1] [i_1 + 1] [i_0])) ? (arr_6 [i_1 - 1] [i_1 - 1] [i_1]) : (((/* implicit */long long int) arr_4 [i_4])));
                                arr_16 [i_0] [i_0] [i_3 - 1] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_3 + 1])) ? (2404301140U) : (arr_7 [i_4] [i_0] [i_0])));
                            }
                            /* vectorizable */
                            for (unsigned int i_5 = 0; i_5 < 21; i_5 += 1) /* same iter space */
                            {
                                var_11 = ((/* implicit */unsigned int) (((+(697892907))) == (((/* implicit */int) arr_2 [i_0]))));
                                var_12 -= 4294966272U;
                            }
                            var_13 = ((/* implicit */unsigned int) max((var_13), (max((((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_3 [i_1])), (1129503484U)))) ? (arr_12 [i_2] [i_1] [i_2 + 4] [i_3] [i_3 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_2]))))), (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)6))) - (98032265U)))))));
                            var_14 = (signed char)48;
                            var_15 = ((/* implicit */unsigned int) (~((+(((/* implicit */int) (signed char)24))))));
                            arr_20 [i_0] [i_1] [i_2] [10U] = ((/* implicit */unsigned char) (+((-(((/* implicit */int) arr_0 [i_1 + 1]))))));
                        }
                    } 
                } 
                arr_21 [i_1] = ((/* implicit */unsigned char) 4294967283U);
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_6 = 1; i_6 < 12; i_6 += 1) 
    {
        for (unsigned int i_7 = 0; i_7 < 14; i_7 += 3) 
        {
            for (short i_8 = 0; i_8 < 14; i_8 += 2) 
            {
                {
                    var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_6])) ? ((((_Bool)1) ? (((/* implicit */unsigned long long int) arr_7 [i_6 + 2] [(_Bool)1] [i_6 + 2])) : (7398017599447492290ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_6 + 2] [i_7] [i_7])))))))))));
                    var_17 = ((/* implicit */int) arr_2 [i_6 + 1]);
                    var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) (-((~(((/* implicit */int) arr_29 [i_6] [i_8] [i_8])))))))));
                }
            } 
        } 
    } 
    var_19 = var_1;
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_9 = 0; i_9 < 14; i_9 += 4) 
    {
        var_20 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_9]))));
        var_21 = ((/* implicit */int) (unsigned short)39999);
    }
    /* vectorizable */
    for (unsigned long long int i_10 = 3; i_10 < 21; i_10 += 1) 
    {
        /* LoopSeq 2 */
        for (short i_11 = 0; i_11 < 23; i_11 += 1) 
        {
            var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_37 [i_10] [i_11] [i_10 + 2])) ? (((/* implicit */long long int) arr_33 [i_10])) : (arr_36 [i_11] [i_11])));
            arr_38 [i_11] [i_11] = ((/* implicit */unsigned int) arr_37 [(signed char)3] [i_11] [(signed char)3]);
        }
        for (unsigned int i_12 = 4; i_12 < 19; i_12 += 4) 
        {
            var_23 = ((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)56))));
            /* LoopNest 3 */
            for (unsigned char i_13 = 1; i_13 < 21; i_13 += 2) 
            {
                for (unsigned int i_14 = 1; i_14 < 22; i_14 += 4) 
                {
                    for (unsigned int i_15 = 0; i_15 < 23; i_15 += 1) 
                    {
                        {
                            arr_51 [i_14 - 1] [i_13] [i_14] = ((/* implicit */short) ((arr_43 [i_10] [i_12 + 4] [i_10 - 1] [i_13]) == (arr_43 [i_15] [i_12 + 4] [i_10 - 2] [i_10 - 2])));
                            arr_52 [i_10] [i_13] [i_13] [i_14] [i_15] = ((/* implicit */short) ((((/* implicit */_Bool) 2404301137U)) ? (arr_35 [i_10 - 1] [i_10]) : (arr_35 [i_10] [i_10 - 3])));
                            var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_35 [i_14 - 1] [i_13])) ? (arr_35 [12U] [i_12 - 4]) : (arr_35 [i_14 - 1] [i_15])));
                        }
                    } 
                } 
            } 
            var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_42 [i_10 + 1] [i_12 - 4] [i_12 - 1] [i_12 - 4])) ? (arr_42 [i_10 - 2] [i_10] [i_10] [i_12]) : (((((/* implicit */_Bool) arr_49 [i_10] [i_10])) ? (-9) : (((/* implicit */int) arr_47 [i_10] [i_10] [i_10] [i_12]))))));
            arr_53 [i_10] [i_12] [i_10] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_42 [i_12 + 1] [i_12 - 3] [i_12] [i_12 - 1])) ? (arr_36 [i_12] [i_12 - 1]) : (((/* implicit */long long int) (+(((/* implicit */int) (short)6392)))))));
            /* LoopSeq 1 */
            for (signed char i_16 = 0; i_16 < 23; i_16 += 3) 
            {
                /* LoopSeq 2 */
                for (short i_17 = 2; i_17 < 19; i_17 += 3) /* same iter space */
                {
                    arr_58 [i_10] [i_10] [i_16] [i_16] [i_12] [i_10] = ((/* implicit */unsigned int) ((arr_54 [i_12 + 2] [i_17 + 4]) | (arr_35 [i_12 - 2] [i_17 - 1])));
                    var_26 = ((/* implicit */unsigned short) (~(((926554533) + (((/* implicit */int) arr_56 [i_10] [i_10] [i_10] [i_10]))))));
                    arr_59 [i_16] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_44 [i_10] [i_10 - 3] [i_12 + 1] [i_10 - 3] [i_12 + 3] [i_16]))));
                    var_27 -= ((/* implicit */unsigned int) (~((+(((/* implicit */int) (signed char)114))))));
                }
                for (short i_18 = 2; i_18 < 19; i_18 += 3) /* same iter space */
                {
                    var_28 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-11578))) | (13746819773197578020ULL)));
                    arr_64 [i_10] [i_16] [i_16] [i_16] = (!(((/* implicit */_Bool) arr_56 [i_18 + 3] [i_12 - 3] [i_10 - 2] [i_10])));
                    /* LoopSeq 1 */
                    for (unsigned int i_19 = 0; i_19 < 23; i_19 += 4) 
                    {
                        var_29 = ((/* implicit */unsigned char) arr_33 [i_10 - 1]);
                        var_30 = ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)22))) | (16946108892493981647ULL));
                    }
                }
                arr_68 [i_16] [i_16] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_57 [i_10 - 2] [i_10 - 2] [i_12 + 3] [i_10 - 2])) ? (((/* implicit */int) arr_57 [i_12] [i_12] [i_12 - 2] [i_10 - 1])) : (((/* implicit */int) arr_57 [i_10] [i_12 - 1] [i_12 - 4] [i_10 - 1]))));
            }
        }
        var_31 = 219804419;
    }
    /* vectorizable */
    for (unsigned int i_20 = 0; i_20 < 10; i_20 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_21 = 0; i_21 < 10; i_21 += 4) 
        {
            arr_73 [(unsigned short)1] [i_20] [i_20] = (-(arr_46 [i_20] [i_20] [i_20] [i_20] [i_20]));
            arr_74 [i_20] [i_21] [i_20] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)221)) == (((/* implicit */int) (signed char)23))));
            /* LoopNest 2 */
            for (unsigned int i_22 = 0; i_22 < 10; i_22 += 3) 
            {
                for (signed char i_23 = 0; i_23 < 10; i_23 += 2) 
                {
                    {
                        var_32 = ((/* implicit */signed char) (!(((/* implicit */_Bool) 3174144277781579093LL))));
                        var_33 = ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_72 [i_20] [i_21] [i_21])) | (arr_31 [i_21] [i_23])));
                        /* LoopSeq 1 */
                        for (signed char i_24 = 0; i_24 < 10; i_24 += 4) 
                        {
                            var_34 = ((/* implicit */signed char) max((var_34), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_80 [i_20] [i_21])) ? (((/* implicit */long long int) ((/* implicit */int) arr_80 [i_21] [i_20]))) : (2137735290031331886LL))))));
                            var_35 += ((/* implicit */signed char) (~(arr_8 [i_20] [i_21] [i_22] [i_23])));
                            var_36 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_32 [i_21] [i_20])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_20] [i_23]))) : (68719476736ULL)));
                            var_37 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_5 [i_20] [i_22]))));
                            var_38 = ((/* implicit */int) (-(arr_35 [i_22] [i_23])));
                        }
                    }
                } 
            } 
        }
        var_39 = ((/* implicit */long long int) ((((/* implicit */unsigned int) arr_17 [i_20] [i_20] [i_20] [i_20] [i_20])) == (33550336U)));
        var_40 = ((/* implicit */short) min((var_40), (((/* implicit */short) (+(arr_4 [i_20]))))));
        var_41 = ((/* implicit */long long int) arr_31 [i_20] [i_20]);
    }
}
