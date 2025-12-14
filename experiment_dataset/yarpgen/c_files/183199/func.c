/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183199
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
    var_18 += ((/* implicit */_Bool) (+((~((~(var_12)))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 3) 
                {
                    {
                        var_19 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_2]))) * ((+(13962029187550852468ULL)))));
                        var_20 = ((/* implicit */long long int) max((var_20), ((~(-7053706993623773253LL)))));
                        arr_12 [i_0] [i_1] [(_Bool)1] [i_1] [(_Bool)1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_16))));
                        var_21 += ((/* implicit */short) arr_6 [(signed char)1] [i_1] [i_2] [(signed char)1]);
                    }
                } 
            } 
        } 
        arr_13 [i_0] [i_0] = arr_7 [i_0] [9U] [i_0] [i_0];
        var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) (+((-(((/* implicit */int) arr_0 [i_0] [i_0])))))))));
        arr_14 [i_0] = ((unsigned int) arr_5 [4LL] [(signed char)2]);
        var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_0])) ^ (((/* implicit */int) arr_4 [i_0] [(unsigned char)8] [i_0])))))));
    }
    for (unsigned int i_4 = 0; i_4 < 24; i_4 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                {
                    var_24 += ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_15 [i_4]))));
                    var_25 *= ((/* implicit */unsigned int) ((11768126733392683774ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))));
                    var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) (~(((((/* implicit */int) arr_20 [i_4] [i_5] [i_4])) / ((-(((/* implicit */int) var_15)))))))))));
                    var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) arr_19 [(_Bool)1]))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_7 = 0; i_7 < 24; i_7 += 3) 
                    {
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            {
                                var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((var_16), (arr_15 [i_4])))) ? ((+(((/* implicit */int) arr_15 [i_4])))) : (((/* implicit */int) min((arr_15 [i_6]), (arr_15 [i_8]))))));
                                arr_27 [i_4] [i_5] [i_8] [i_7] [i_8] [i_4] [i_7] = ((/* implicit */long long int) ((((_Bool) arr_26 [i_4] [i_4] [i_4] [i_4] [i_4] [(_Bool)1])) || (((((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), (arr_19 [i_4])))) >= (((((/* implicit */_Bool) arr_23 [(unsigned char)17] [i_5] [i_8] [i_7] [i_7])) ? (((/* implicit */int) arr_24 [i_4] [i_4] [i_4] [i_4])) : (((/* implicit */int) arr_24 [10U] [i_4] [(unsigned char)6] [i_5]))))))));
                                arr_28 [i_4] [(unsigned char)17] [17ULL] [(_Bool)1] [i_4] = ((/* implicit */unsigned char) min((((((/* implicit */int) arr_26 [i_4] [i_5] [i_5] [i_7] [i_8] [i_5])) ^ (((/* implicit */int) var_15)))), (((/* implicit */int) min((var_15), (((/* implicit */unsigned char) ((arr_21 [i_6] [i_6] [i_6] [i_6]) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_4])))))))))));
                                arr_29 [(_Bool)1] [i_5] [i_7] [i_4] [i_8] = ((/* implicit */unsigned char) (~(((((/* implicit */int) arr_16 [i_5] [i_8])) - (((((/* implicit */int) arr_26 [i_7] [i_5] [(signed char)13] [i_7] [i_8] [i_4])) + (((/* implicit */int) arr_18 [i_4] [(unsigned short)21] [i_4]))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_30 [i_4] = ((/* implicit */_Bool) min((7053706993623773253LL), (((/* implicit */long long int) (short)31284))));
        /* LoopNest 2 */
        for (short i_9 = 0; i_9 < 24; i_9 += 3) 
        {
            for (unsigned int i_10 = 4; i_10 < 21; i_10 += 3) 
            {
                {
                    arr_36 [i_4] [i_9] [(unsigned char)22] [i_4] = ((/* implicit */unsigned char) ((((min((((/* implicit */unsigned int) 1458102696)), (arr_33 [i_9]))) / (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_4] [i_4] [(unsigned short)17] [i_4] [i_9] [i_10]))))) << (((((((/* implicit */_Bool) (~(6678617340316867841ULL)))) ? ((~(((/* implicit */int) var_5)))) : (((/* implicit */int) var_16)))) + (26691)))));
                    /* LoopSeq 1 */
                    for (unsigned int i_11 = 4; i_11 < 23; i_11 += 1) 
                    {
                        var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) 6678617340316867820ULL))));
                        var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((-8656064839316801897LL), (((/* implicit */long long int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((var_3), (((/* implicit */short) var_17)))))) : (((arr_33 [i_11]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_9])))))))) | (min((13975287587669964028ULL), (((/* implicit */unsigned long long int) ((unsigned char) 7007071832574947352ULL))))))))));
                        /* LoopSeq 2 */
                        for (int i_12 = 2; i_12 < 21; i_12 += 3) /* same iter space */
                        {
                            var_31 = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_25 [i_4] [i_9] [(_Bool)1] [7ULL] [i_12])) ? (((/* implicit */unsigned int) min((var_2), (((/* implicit */int) var_14))))) : (((unsigned int) (unsigned char)31)))), (((/* implicit */unsigned int) (((+(((/* implicit */int) arr_42 [i_4] [i_9] [i_10] [i_4] [i_12] [i_12])))) << ((((~(11768126733392683795ULL))) - (6678617340316867820ULL))))))));
                            arr_43 [i_4] [(unsigned short)13] [i_10] [i_10] [i_11 - 4] [i_11 - 2] [(_Bool)1] = ((/* implicit */unsigned char) var_2);
                            arr_44 [i_4] = ((/* implicit */unsigned char) arr_34 [i_4] [i_11 - 1] [i_4] [i_12 - 2]);
                        }
                        for (int i_13 = 2; i_13 < 21; i_13 += 3) /* same iter space */
                        {
                            arr_48 [i_4] [i_11] [i_4] [i_4] [i_4] = ((/* implicit */unsigned int) ((((min((((/* implicit */int) arr_16 [i_4] [i_9])), (arr_39 [i_10 + 1] [i_11 + 1] [(signed char)11]))) + ((+(((/* implicit */int) var_14)))))) * (((/* implicit */int) ((((/* implicit */int) ((signed char) arr_47 [i_4] [i_13] [i_4] [i_4] [(_Bool)1] [i_4] [i_4]))) > ((~(((/* implicit */int) arr_23 [i_13] [i_11] [i_10] [5U] [i_4])))))))));
                            arr_49 [i_4] [i_4] [i_4] [2U] [i_13] = ((/* implicit */int) (unsigned char)40);
                            var_32 = ((/* implicit */unsigned char) ((((/* implicit */int) min((((/* implicit */short) arr_23 [i_4] [i_11 - 3] [i_10 - 3] [i_13 + 1] [i_10 - 3])), ((short)31284)))) - (((/* implicit */int) ((((/* implicit */_Bool) arr_23 [(_Bool)1] [i_11 + 1] [i_10 - 2] [i_13 - 1] [i_4])) || (((/* implicit */_Bool) arr_23 [i_4] [i_11 - 3] [i_10 - 3] [i_13 - 2] [0])))))));
                            arr_50 [i_4] [i_4] [i_9] [i_11] = ((/* implicit */long long int) (!(((((/* implicit */int) arr_40 [i_4] [i_9] [i_10] [i_11 - 2] [i_13 + 1])) > (((/* implicit */int) arr_19 [i_4]))))));
                        }
                    }
                }
            } 
        } 
        arr_51 [i_4] [i_4] = ((/* implicit */signed char) var_17);
    }
    for (unsigned short i_14 = 2; i_14 < 7; i_14 += 1) 
    {
        arr_54 [i_14 + 2] [i_14] = ((/* implicit */unsigned long long int) arr_23 [i_14] [i_14] [i_14] [i_14] [i_14]);
        arr_55 [i_14 + 3] [2LL] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_15)))) ^ (((((/* implicit */_Bool) -8656064839316801897LL)) ? (arr_35 [i_14 - 1]) : (arr_35 [i_14 + 4])))));
        /* LoopSeq 3 */
        for (unsigned int i_15 = 0; i_15 < 11; i_15 += 1) 
        {
            var_33 = ((/* implicit */unsigned char) ((min((((/* implicit */long long int) arr_41 [i_14 + 4] [i_14 + 1] [i_14 - 2] [i_14 - 1] [i_14 + 1])), (min((arr_47 [i_15] [i_15] [i_14] [i_14] [i_14] [i_14] [i_14 - 1]), (((/* implicit */long long int) arr_42 [i_14 + 4] [i_14] [i_14] [(signed char)14] [i_14] [20LL])))))) | (((/* implicit */long long int) ((/* implicit */int) arr_34 [10LL] [10LL] [i_14] [(unsigned char)4])))));
            /* LoopSeq 2 */
            for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) 
            {
                /* LoopNest 2 */
                for (signed char i_17 = 2; i_17 < 10; i_17 += 1) 
                {
                    for (short i_18 = 0; i_18 < 11; i_18 += 2) 
                    {
                        {
                            var_34 = ((/* implicit */unsigned int) min((var_34), (((/* implicit */unsigned int) ((min((arr_47 [i_17 + 1] [i_17] [i_17 + 1] [i_17 - 2] [i_17] [i_17] [(signed char)7]), (arr_47 [i_17 - 2] [i_17 - 2] [i_17] [i_17 - 2] [i_17 - 2] [(signed char)22] [10LL]))) > (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))))))));
                            var_35 = ((/* implicit */_Bool) max((var_35), (((/* implicit */_Bool) (unsigned short)32567))));
                        }
                    } 
                } 
                var_36 = ((/* implicit */unsigned int) min((var_36), (min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_15 [i_16]))))) ? (min((((/* implicit */unsigned int) var_4)), (arr_64 [i_14] [6U] [3LL] [i_14] [i_14] [(unsigned char)3] [i_14]))) : (((var_12) | (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_14] [(signed char)0] [i_14] [i_16 - 1]))))))), (((((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [i_16] [i_15])) * (((/* implicit */int) (unsigned char)40))))) % (arr_33 [i_14 - 1])))))));
                arr_65 [i_16] [i_16] [i_16] = ((/* implicit */unsigned int) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_14] [i_15] [i_14 + 2] [i_16 - 1]))) * ((+(3436489235U))))) < (((/* implicit */unsigned int) ((/* implicit */int) ((arr_38 [12U] [i_16 - 1] [i_16 - 1] [i_16]) == (arr_38 [i_14] [i_16 - 1] [i_16 - 1] [i_16])))))));
                var_37 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)216)) < (((/* implicit */int) (unsigned char)216))));
                arr_66 [i_14] [i_16] [i_14] = ((/* implicit */unsigned int) var_17);
            }
            /* vectorizable */
            for (unsigned long long int i_19 = 1; i_19 < 7; i_19 += 2) 
            {
                var_38 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) arr_19 [(unsigned char)0]))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_34 [22U] [i_19 + 2] [i_15] [22U]))) : (arr_8 [i_14 + 1] [i_15] [i_14 + 1])));
                arr_69 [(_Bool)1] [i_19] [(_Bool)1] [7] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)45)) || (((/* implicit */_Bool) 6678617340316867820ULL)))))) < (7053706993623773253LL)));
                var_39 = ((/* implicit */_Bool) min((var_39), (((/* implicit */_Bool) ((arr_6 [i_19 - 1] [i_19] [i_19] [i_15]) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_52 [i_14]))) : (arr_35 [i_14]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_58 [i_15] [i_15] [i_19 + 4] [i_15]))))))));
            }
        }
        for (int i_20 = 0; i_20 < 11; i_20 += 3) 
        {
            arr_73 [i_14] [i_14] = ((/* implicit */unsigned char) min((min((((/* implicit */unsigned int) arr_58 [i_14 + 2] [i_14] [i_14 + 2] [i_20])), (min((((/* implicit */unsigned int) var_2)), (388518615U))))), (((/* implicit */unsigned int) var_0))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned char i_21 = 0; i_21 < 11; i_21 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned char i_22 = 2; i_22 < 8; i_22 += 1) 
                {
                    for (unsigned char i_23 = 4; i_23 < 10; i_23 += 4) 
                    {
                        {
                            var_40 = ((/* implicit */short) max((var_40), (var_3)));
                            var_41 = ((/* implicit */short) (-(((/* implicit */int) arr_62 [i_14] [i_14 - 1] [i_22 - 1] [i_23 - 1] [i_21]))));
                        }
                    } 
                } 
                var_42 *= ((/* implicit */_Bool) (+(((var_1) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_1 [i_14 + 4]))))));
                var_43 = ((/* implicit */short) min((var_43), (((/* implicit */short) var_11))));
                var_44 *= ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)236)) >= (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) (_Bool)1))))));
            }
        }
        for (long long int i_24 = 1; i_24 < 9; i_24 += 1) 
        {
            arr_84 [i_14] [i_24] [i_14 - 1] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_37 [i_24] [i_24 + 1] [i_24] [i_24 + 1] [i_24] [i_14 - 1]))));
            arr_85 [i_14] [i_14] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [10U] [(unsigned char)8] [10U]))) % (var_7)));
        }
    }
    for (int i_25 = 2; i_25 < 19; i_25 += 3) 
    {
        arr_88 [i_25] = ((/* implicit */unsigned char) arr_46 [i_25 - 2] [i_25] [i_25]);
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
        {
            var_45 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_37 [i_25 - 2] [i_25 - 1] [i_25] [(unsigned char)14] [i_25 - 1] [i_25 - 1]))));
            var_46 = ((/* implicit */unsigned short) (+(arr_41 [i_25] [(_Bool)1] [(_Bool)1] [i_25 + 1] [i_25])));
        }
        for (unsigned char i_27 = 2; i_27 < 19; i_27 += 4) 
        {
            arr_96 [i_25] [i_25] = ((/* implicit */unsigned char) (signed char)-94);
            arr_97 [i_25] [17U] = ((/* implicit */unsigned char) 8342076636337735528ULL);
            var_47 = ((/* implicit */_Bool) max((var_47), (((/* implicit */_Bool) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((var_14), (arr_93 [i_25]))))))), (((((/* implicit */_Bool) (~(0ULL)))) ? (((/* implicit */unsigned int) min((((/* implicit */int) arr_87 [i_27])), (-1372136924)))) : (min((arr_33 [i_27 - 2]), (((/* implicit */unsigned int) arr_40 [i_27] [i_27 + 1] [i_27] [i_27] [i_27])))))))))));
            arr_98 [i_25] [(_Bool)1] = ((/* implicit */_Bool) min(((-(arr_38 [i_25] [(unsigned char)8] [i_25] [i_27]))), (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_19 [i_27])), (-696407661))))));
        }
    }
}
