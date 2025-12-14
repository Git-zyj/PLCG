/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151490
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151490 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151490
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
    var_11 = ((/* implicit */long long int) min((var_11), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 543437834U)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (((var_6) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (4415756793959257355LL)))))))))));
    var_12 = ((/* implicit */_Bool) ((long long int) min(((~(((/* implicit */int) var_1)))), (((/* implicit */int) ((unsigned short) var_9))))));
    var_13 = ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) (+(((/* implicit */int) var_5)))))) << ((((~(((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (3751529461U))))) - (4294958502U)))));
    /* LoopSeq 2 */
    for (short i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        var_14 -= ((/* implicit */_Bool) ((unsigned long long int) min((2976621633U), (((/* implicit */unsigned int) arr_0 [i_0 + 1] [i_0 + 3])))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) ((((((/* implicit */int) ((((/* implicit */int) arr_4 [i_0] [i_0 - 1] [(_Bool)1])) < (((/* implicit */int) arr_1 [i_0] [(unsigned short)11]))))) < (((/* implicit */int) arr_0 [i_0] [(_Bool)1])))) ? (((/* implicit */unsigned long long int) (~(((((/* implicit */int) arr_4 [i_0 + 2] [i_1] [(short)7])) << (((/* implicit */int) arr_6 [i_0 + 3] [i_1] [i_1] [(_Bool)1]))))))) : (min((((/* implicit */unsigned long long int) arr_6 [i_0] [i_1] [i_2] [i_1])), (((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (unsigned short i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        arr_13 [i_3] &= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))) < (var_4)));
                        arr_14 [i_0] [i_0 - 1] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) (unsigned char)127)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_7 [8U] [i_2] [i_0] [i_0]))))));
                        var_15 |= ((/* implicit */long long int) ((((/* implicit */int) arr_10 [i_3] [i_2] [i_1])) + (((/* implicit */int) arr_2 [i_2]))));
                    }
                    for (unsigned char i_4 = 0; i_4 < 20; i_4 += 4) 
                    {
                        var_16 = ((/* implicit */unsigned int) arr_2 [i_2]);
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 1) 
                        {
                            arr_21 [i_1] [i_2] [i_0] [(_Bool)1] [4LL] |= ((/* implicit */long long int) ((((/* implicit */_Bool) -7383894468316820089LL)) ? (-1959371470) : (((/* implicit */int) var_9))));
                            var_17 = ((/* implicit */long long int) arr_1 [i_0 - 1] [i_0 - 1]);
                            var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) arr_17 [i_0 - 1] [i_1] [i_4] [i_4]))));
                            arr_22 [i_0] [i_0] [i_0] [i_2] [i_2] [i_4] [i_5] = ((/* implicit */unsigned long long int) ((arr_18 [i_0] [i_0 + 3] [(short)2] [(_Bool)1] [(_Bool)1] [i_4]) < (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_0 + 3] [i_0] [i_2] [i_5] [i_5] [11LL]))) : (var_0)))));
                        }
                        var_19 = ((/* implicit */_Bool) arr_0 [i_2] [i_1]);
                    }
                    for (short i_6 = 0; i_6 < 20; i_6 += 2) /* same iter space */
                    {
                        var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) (!(((_Bool) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_10 [i_0 - 1] [i_1] [i_0 - 1]))))))))));
                        var_21 -= ((/* implicit */short) (~(min((((/* implicit */unsigned int) (unsigned short)65523)), (min((((/* implicit */unsigned int) (unsigned char)250)), (3751529477U)))))));
                        var_22 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((arr_23 [i_2] [i_0 + 1]) < (arr_23 [i_1] [i_0 + 2])))), (min((arr_23 [i_2] [i_0 + 2]), (((/* implicit */unsigned int) (_Bool)1))))));
                    }
                    for (short i_7 = 0; i_7 < 20; i_7 += 2) /* same iter space */
                    {
                        arr_27 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 2322355735471923234ULL)) ? (((/* implicit */int) arr_19 [i_0 + 3] [i_1] [i_2])) : (((/* implicit */int) arr_19 [i_0 + 3] [17ULL] [17ULL])))) << (((((/* implicit */int) var_6)) << (((/* implicit */int) (_Bool)1))))));
                        var_23 = ((/* implicit */unsigned short) max((max((((/* implicit */long long int) 1318345650U)), (arr_9 [i_0] [i_0] [i_2] [18ULL]))), (((/* implicit */long long int) var_1))));
                        var_24 = ((/* implicit */unsigned int) max((var_24), ((((+(543437818U))) << (((/* implicit */int) arr_6 [i_1] [i_2] [i_1] [i_1]))))));
                    }
                    var_25 -= arr_23 [i_2] [i_1];
                    var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) ((min((arr_20 [i_0 - 1] [i_0 + 3] [i_0 - 1] [i_2] [i_0] [i_0 + 1]), (arr_20 [i_0 + 2] [i_0 + 1] [i_0 + 2] [i_2] [i_0 + 2] [i_0]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_20 [i_0 + 2] [i_0 + 3] [i_0] [i_2] [i_0] [i_0]), (arr_20 [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_2] [i_0 - 1] [i_0]))))) : ((+(var_10))))))));
                }
            } 
        } 
    }
    for (unsigned long long int i_8 = 0; i_8 < 21; i_8 += 3) 
    {
        /* LoopSeq 1 */
        for (signed char i_9 = 0; i_9 < 21; i_9 += 4) 
        {
            arr_34 [i_9] [i_9] [i_8] = ((/* implicit */short) ((((/* implicit */int) ((((var_6) ? (arr_32 [i_9] [i_8] [i_8]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_9]))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_8] [i_8] [i_8])))))) << ((((-(((15939605812700464985ULL) + (((/* implicit */unsigned long long int) arr_29 [i_8] [i_9])))))) - (6904618487849087028ULL)))));
            var_27 = ((/* implicit */signed char) ((((/* implicit */int) var_5)) << (((/* implicit */int) max((((((/* implicit */int) arr_30 [i_9])) < (((/* implicit */int) (signed char)6)))), (((((/* implicit */int) var_2)) < (((/* implicit */int) arr_31 [i_8] [i_9] [i_9])))))))));
            arr_35 [i_8] [i_8] [i_9] = ((/* implicit */unsigned short) (+(min((min((var_10), (1428463348791919256ULL))), (((/* implicit */unsigned long long int) arr_28 [i_8] [i_8]))))));
        }
        arr_36 [i_8] = ((/* implicit */_Bool) arr_32 [i_8] [i_8] [i_8]);
        /* LoopNest 2 */
        for (unsigned short i_10 = 3; i_10 < 20; i_10 += 3) 
        {
            for (unsigned int i_11 = 1; i_11 < 18; i_11 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) 
                    {
                        arr_47 [i_8] [i_8] [i_8] [i_11] [i_8] [i_11] = ((/* implicit */signed char) ((((unsigned int) (~(((/* implicit */int) var_6))))) < (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 18202417126558762878ULL))))))));
                        arr_48 [i_11] [i_10] [i_10] [(short)17] [i_12] = ((unsigned short) ((((/* implicit */int) arr_30 [(signed char)1])) << (((/* implicit */int) (_Bool)1))));
                        arr_49 [i_8] [i_11] [16U] [i_11] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) arr_37 [i_12 + 1] [i_11 + 3]))) ? (min((var_10), (((/* implicit */unsigned long long int) var_5)))) : (((/* implicit */unsigned long long int) max((arr_37 [i_12 + 1] [i_11 + 1]), (arr_37 [i_12 + 1] [i_11 + 1]))))));
                    }
                    for (unsigned long long int i_13 = 0; i_13 < 21; i_13 += 3) 
                    {
                        arr_52 [i_11] [i_10] [i_11] = (i_11 % 2 == 0) ? (((/* implicit */unsigned short) max((((((/* implicit */int) arr_42 [i_8] [i_10] [i_8] [i_11])) << (((((/* implicit */int) arr_42 [i_10 - 1] [i_10 - 2] [i_10] [i_11])) - (24))))), (((/* implicit */int) (!(arr_39 [i_8] [i_8]))))))) : (((/* implicit */unsigned short) max((((((/* implicit */int) arr_42 [i_8] [i_10] [i_8] [i_11])) << (((((((/* implicit */int) arr_42 [i_10 - 1] [i_10 - 2] [i_10] [i_11])) - (24))) - (40))))), (((/* implicit */int) (!(arr_39 [i_8] [i_8])))))));
                        arr_53 [i_13] [i_11] [i_13] [i_13] = ((/* implicit */_Bool) ((unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) 3751529463U))))))));
                    }
                    arr_54 [i_11] [i_11 + 2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_50 [i_10 - 3] [i_10] [i_10 - 3] [i_10 - 2] [i_11] [(short)13]))))) << (((((long long int) var_8)) << (((/* implicit */int) (_Bool)1))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_14 = 0; i_14 < 21; i_14 += 3) 
                    {
                        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                        {
                            {
                                arr_59 [i_11] [i_11] [(_Bool)1] [i_14] [i_15] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((arr_41 [i_8] [i_11 - 1] [i_10 + 1]), (((/* implicit */long long int) (_Bool)1)))))));
                                arr_60 [i_11] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) min((((/* implicit */int) ((16229561497351022498ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))), ((+(((/* implicit */int) var_8))))))) < (((((/* implicit */_Bool) arr_56 [i_15] [i_11 + 2] [i_10 - 3] [i_8])) ? (((/* implicit */unsigned int) ((/* implicit */int) min((var_2), ((unsigned short)23008))))) : (1318345650U)))));
                                var_28 = ((/* implicit */int) ((long long int) ((((/* implicit */int) arr_42 [(_Bool)1] [i_10 - 2] [i_10 - 2] [(_Bool)1])) + (((/* implicit */int) arr_42 [20] [i_10 - 1] [(_Bool)1] [20])))));
                                arr_61 [i_11] [i_10 + 1] [i_10 + 1] = var_1;
                            }
                        } 
                    } 
                    var_29 = ((/* implicit */long long int) (short)-6167);
                }
            } 
        } 
        arr_62 [i_8] [i_8] &= ((/* implicit */signed char) (~(max((((/* implicit */long long int) arr_33 [i_8])), (((((/* implicit */_Bool) var_10)) ? (arr_40 [i_8] [i_8] [i_8]) : (((/* implicit */long long int) ((/* implicit */int) arr_33 [i_8])))))))));
    }
    /* LoopSeq 1 */
    for (int i_16 = 4; i_16 < 13; i_16 += 1) 
    {
        var_30 |= ((/* implicit */long long int) ((((/* implicit */int) arr_42 [16LL] [i_16 + 3] [i_16] [16LL])) << (((((/* implicit */int) arr_42 [(_Bool)1] [i_16 - 1] [(_Bool)1] [(_Bool)1])) - (56)))));
        arr_66 [12LL] = ((/* implicit */signed char) arr_38 [i_16] [(signed char)18] [(signed char)18]);
        arr_67 [i_16] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) -1)) < (arr_56 [i_16 + 3] [i_16] [i_16 + 3] [i_16])))) < (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_37 [i_16] [i_16])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_6))))) ? ((-(((/* implicit */int) arr_15 [i_16] [16U] [i_16] [i_16 - 2] [i_16] [i_16 + 2])))) : (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) arr_10 [i_16] [i_16] [i_16])) : (((/* implicit */int) var_1))))))));
        arr_68 [i_16] [i_16 + 1] = ((/* implicit */_Bool) var_9);
    }
}
