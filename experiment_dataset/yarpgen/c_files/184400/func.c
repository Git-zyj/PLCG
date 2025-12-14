/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184400
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
    var_11 = max(((unsigned short)31101), (var_7));
    var_12 = ((/* implicit */unsigned char) var_6);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 9; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_2 = 0; i_2 < 10; i_2 += 2) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 3; i_3 < 8; i_3 += 2) 
                    {
                        arr_10 [6] [i_1] [7U] [i_3] [i_1] = arr_8 [i_0] [i_3 - 3] [i_2];
                        var_13 = ((/* implicit */unsigned long long int) (~(arr_7 [i_0] [i_1] [i_2] [i_1])));
                    }
                    var_14 = ((/* implicit */short) (~((~(((/* implicit */int) (unsigned short)31101))))));
                }
                /* LoopNest 2 */
                for (unsigned char i_4 = 1; i_4 < 9; i_4 += 3) 
                {
                    for (unsigned int i_5 = 0; i_5 < 10; i_5 += 2) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned short) arr_3 [i_0] [i_1] [i_0]);
                            var_16 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_14 [i_0] [i_4] [i_1])) ? (((/* implicit */int) arr_14 [i_4] [i_4] [i_1])) : (((/* implicit */int) arr_14 [i_1] [i_4] [i_1])))) % ((+(((/* implicit */int) arr_14 [i_1 + 1] [i_1 - 1] [i_1]))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_6 = 2; i_6 < 15; i_6 += 1) 
    {
        for (unsigned short i_7 = 4; i_7 < 14; i_7 += 4) 
        {
            {
                var_17 = ((/* implicit */int) (+(((((/* implicit */_Bool) var_2)) ? ((~(arr_18 [i_7 + 2]))) : (((/* implicit */unsigned int) var_2))))));
                arr_22 [8ULL] [i_6] [i_7] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_1))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned char i_8 = 3; i_8 < 22; i_8 += 1) 
    {
        /* LoopSeq 1 */
        for (short i_9 = 0; i_9 < 25; i_9 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned short i_10 = 0; i_10 < 25; i_10 += 1) 
            {
                for (unsigned char i_11 = 1; i_11 < 23; i_11 += 3) 
                {
                    {
                        var_18 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)34430)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) ((((/* implicit */int) var_5)) <= (var_3))))))) < (((arr_29 [i_8 - 1] [i_11 - 1] [i_11] [(unsigned char)17]) >> (((arr_29 [(unsigned char)3] [i_11 - 1] [6U] [i_11 + 1]) - (5175626572686206522ULL)))))));
                        arr_35 [i_8] = ((/* implicit */unsigned int) (((~(((/* implicit */int) ((unsigned char) arr_31 [i_8 - 1] [i_8 - 1] [i_10] [i_11]))))) == (min((var_2), (((/* implicit */int) var_9))))));
                        arr_36 [i_8] [i_9] [23] [i_9] = var_0;
                        arr_37 [i_8 + 3] [i_9] [10ULL] [i_11 + 2] = ((/* implicit */unsigned long long int) ((var_2) / ((-(((/* implicit */int) (unsigned short)34426))))));
                    }
                } 
            } 
            arr_38 [10ULL] = ((/* implicit */unsigned char) (+(min(((~(((/* implicit */int) (unsigned short)34430)))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned short)31100)) : (((/* implicit */int) var_8))))))));
            /* LoopNest 2 */
            for (unsigned int i_12 = 1; i_12 < 24; i_12 += 1) 
            {
                for (unsigned char i_13 = 1; i_13 < 22; i_13 += 3) 
                {
                    {
                        var_19 = ((/* implicit */unsigned int) (~(230441718309054188ULL)));
                        /* LoopSeq 4 */
                        for (unsigned long long int i_14 = 3; i_14 < 23; i_14 += 3) 
                        {
                            arr_47 [i_8 - 1] [i_9] = ((/* implicit */int) arr_28 [i_8] [i_8] [i_12 + 1]);
                            var_20 = ((/* implicit */short) (unsigned short)31085);
                            var_21 = ((/* implicit */unsigned char) (unsigned short)34430);
                        }
                        /* vectorizable */
                        for (unsigned int i_15 = 0; i_15 < 25; i_15 += 2) 
                        {
                            var_22 = ((/* implicit */unsigned long long int) (~(var_1)));
                            arr_50 [i_8] [i_9] [i_12 + 1] [i_13 + 2] [(short)21] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 18216302355400497427ULL))));
                        }
                        for (unsigned long long int i_16 = 0; i_16 < 25; i_16 += 4) 
                        {
                            arr_54 [i_8] [i_8] [i_12 + 1] [i_13 + 2] [i_16] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (unsigned short)31106)), (min((max((((/* implicit */unsigned long long int) var_7)), (arr_34 [i_8] [i_8] [i_12] [i_13] [i_16] [i_16]))), (max((((/* implicit */unsigned long long int) (unsigned short)65526)), (230441718309054197ULL)))))));
                            arr_55 [(unsigned short)22] [i_9] [i_9] [i_12] [i_12] [i_12] [i_16] = ((/* implicit */unsigned int) (-(max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_7))))), (arr_34 [i_8] [i_8] [i_8 + 3] [9U] [i_16] [i_8 + 3])))));
                            var_23 = min((var_5), (((/* implicit */unsigned short) (short)26751)));
                            var_24 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_49 [i_12] [i_12 - 1] [(unsigned char)18] [(unsigned char)9] [i_13 + 3] [i_13] [i_16])) + ((((+(((/* implicit */int) var_6)))) + (((((/* implicit */int) (unsigned short)1016)) * (((/* implicit */int) (unsigned short)64511))))))));
                        }
                        for (unsigned char i_17 = 1; i_17 < 23; i_17 += 3) 
                        {
                            var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned char)42)) : (min((var_2), (((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)175)), ((unsigned short)1010))))))));
                            var_26 = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) var_10))))));
                            var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 690585726)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)39007))) : (1195290376U)));
                        }
                        var_28 = ((/* implicit */unsigned char) min((230441718309054188ULL), (((/* implicit */unsigned long long int) (short)-1))));
                    }
                } 
            } 
            var_29 = ((/* implicit */unsigned long long int) (unsigned short)1016);
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_18 = 3; i_18 < 21; i_18 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned int i_19 = 3; i_19 < 22; i_19 += 3) 
            {
                for (unsigned short i_20 = 0; i_20 < 25; i_20 += 2) 
                {
                    {
                        var_30 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_40 [i_8 - 3] [i_8 - 1] [i_8 - 3]))));
                        /* LoopSeq 1 */
                        for (unsigned short i_21 = 1; i_21 < 24; i_21 += 1) 
                        {
                            var_31 = ((/* implicit */short) (~(((/* implicit */int) (unsigned short)64519))));
                            arr_67 [i_8 + 1] [i_8 + 1] [i_21] [(unsigned short)10] [i_21 - 1] = ((/* implicit */unsigned char) var_4);
                        }
                        var_32 = var_0;
                    }
                } 
            } 
            var_33 = ((/* implicit */unsigned int) 18216302355400497427ULL);
            arr_68 [i_8] = ((/* implicit */short) (unsigned short)34409);
            arr_69 [i_8] [(unsigned short)22] [(unsigned short)22] = ((/* implicit */unsigned short) arr_23 [i_18]);
        }
        var_34 = ((unsigned char) var_3);
        arr_70 [i_8] = ((/* implicit */unsigned int) max((((/* implicit */unsigned short) (unsigned char)248)), (var_10)));
    }
    /* vectorizable */
    for (unsigned short i_22 = 4; i_22 < 16; i_22 += 2) 
    {
        var_35 = ((/* implicit */unsigned short) ((((/* implicit */int) var_8)) == (((/* implicit */int) (unsigned short)59263))));
        var_36 = var_4;
    }
    for (unsigned int i_23 = 0; i_23 < 25; i_23 += 4) 
    {
        arr_78 [i_23] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) min((var_5), ((unsigned short)59245)))), (arr_26 [13U])));
        var_37 = ((/* implicit */unsigned int) ((max((((/* implicit */unsigned long long int) -1198428719)), (max((((/* implicit */unsigned long long int) 1195290376U)), (15424366019330584316ULL))))) <= (3421619390169206451ULL)));
        /* LoopNest 2 */
        for (unsigned char i_24 = 0; i_24 < 25; i_24 += 2) 
        {
            for (unsigned int i_25 = 3; i_25 < 23; i_25 += 3) 
            {
                {
                    arr_83 [i_23] [i_25] [i_24] [i_25] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_66 [i_25] [i_25] [i_25 + 1] [i_25 + 1] [i_25 - 1] [i_25] [i_25 + 2])) ? (((/* implicit */int) arr_66 [(unsigned char)24] [(unsigned char)23] [i_25 - 1] [i_25 + 2] [i_25 + 2] [18U] [i_25 - 3])) : (((/* implicit */int) arr_66 [i_25 - 1] [i_25] [i_25 + 2] [i_25] [i_25 - 1] [14U] [i_25]))))));
                    /* LoopNest 2 */
                    for (int i_26 = 0; i_26 < 25; i_26 += 1) 
                    {
                        for (short i_27 = 0; i_27 < 25; i_27 += 2) 
                        {
                            {
                                arr_88 [i_25] [i_26] [i_27] = ((/* implicit */unsigned int) ((max((var_3), ((-(((/* implicit */int) (unsigned short)64511)))))) >= (((/* implicit */int) (unsigned char)3))));
                                var_38 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_27 [i_24] [i_24]))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_89 [i_23] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_43 [8] [8] [i_23] [8])) ? (((((/* implicit */unsigned long long int) var_4)) | (230441718309054165ULL))) : (((/* implicit */unsigned long long int) var_2)))) == (((/* implicit */unsigned long long int) ((unsigned int) max((var_4), (arr_84 [i_23] [i_23] [i_23] [i_23])))))));
    }
}
