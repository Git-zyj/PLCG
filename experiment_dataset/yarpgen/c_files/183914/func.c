/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183914
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
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        arr_2 [i_0] = ((1219014182) / (2147483647));
        var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : ((+(arr_0 [i_0])))));
        var_15 = ((/* implicit */unsigned long long int) arr_1 [i_0]);
    }
    for (short i_1 = 0; i_1 < 16; i_1 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_2 = 1; i_2 < 15; i_2 += 3) 
        {
            /* LoopSeq 2 */
            for (int i_3 = 2; i_3 < 12; i_3 += 4) 
            {
                arr_12 [(signed char)3] [i_1] [i_2] [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((signed char) max((arr_9 [i_3] [i_2 + 1] [i_3] [i_2 + 1]), (((/* implicit */unsigned int) (signed char)-68))))))));
                /* LoopNest 2 */
                for (long long int i_4 = 0; i_4 < 16; i_4 += 2) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 1) 
                    {
                        {
                            arr_18 [6U] [6U] [6U] [i_4] [i_5] [i_5] &= ((((/* implicit */int) min((arr_7 [i_3 + 4] [i_3 + 4] [i_3 - 1]), (((/* implicit */unsigned char) (signed char)-68))))) - ((-(((/* implicit */int) arr_7 [i_3] [i_3] [i_3 + 4])))));
                            arr_19 [i_1] [i_1] [i_3] [i_4] [i_5] = ((/* implicit */unsigned long long int) (~((~(((var_10) | (((/* implicit */int) (signed char)125))))))));
                            arr_20 [i_3] [i_5] [i_3] [i_4] [i_5] [i_4] [i_4] |= ((/* implicit */long long int) (signed char)-82);
                            arr_21 [i_2 - 1] [i_2] [i_5] [i_1] [5] [i_4] = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */int) (signed char)125)) & (((/* implicit */int) (unsigned char)72))))) ? (((33292288) | (1660904409))) : (max((arr_15 [i_1] [i_2] [i_3] [3]), (var_11))))) & (((((((/* implicit */_Bool) var_10)) ? (var_11) : (var_10))) | (var_11)))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 16; i_6 += 2) 
                {
                    for (unsigned int i_7 = 0; i_7 < 16; i_7 += 4) 
                    {
                        {
                            var_16 = var_8;
                            var_17 ^= ((((/* implicit */_Bool) min((var_6), (((/* implicit */unsigned long long int) (signed char)68))))) ? (var_11) : (((/* implicit */int) ((arr_1 [i_1]) <= (var_10)))));
                            var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) var_7))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (int i_8 = 0; i_8 < 16; i_8 += 2) 
                {
                    arr_28 [i_1] [i_2] [i_1] [i_8] [i_2] [i_1] = ((/* implicit */unsigned char) var_4);
                    var_19 *= ((/* implicit */unsigned long long int) ((_Bool) ((arr_22 [i_3 + 3] [i_2 + 1] [i_1]) % (((/* implicit */unsigned int) arr_1 [i_1])))));
                }
                for (int i_9 = 0; i_9 < 16; i_9 += 2) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_10 = 0; i_10 < 16; i_10 += 2) 
                    {
                        var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) (!(((/* implicit */_Bool) (signed char)67)))))));
                        var_21 |= ((/* implicit */unsigned int) ((unsigned char) ((signed char) (~(var_11)))));
                    }
                    var_22 *= ((/* implicit */unsigned int) min((((unsigned long long int) 16583246876181443302ULL)), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_29 [i_3 + 1] [i_3] [i_3] [i_3] [i_3])) != (2147483647))))));
                }
                var_23 = min((((3302149097U) ^ (arr_22 [i_3 - 1] [i_2] [i_2 + 1]))), (((((/* implicit */_Bool) 13902252316986032487ULL)) ? (arr_22 [i_3 + 1] [i_2 - 1] [i_2 + 1]) : (arr_22 [i_3 + 3] [i_2 + 1] [i_2 + 1]))));
            }
            for (short i_11 = 0; i_11 < 16; i_11 += 3) 
            {
                var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) min((((/* implicit */long long int) ((min((arr_32 [i_2] [i_2 + 1] [i_2] [i_1] [i_1]), (((/* implicit */unsigned int) var_8)))) >> (((var_3) - (11975156268998194923ULL)))))), ((-(arr_0 [i_2 - 1]))))))));
                arr_37 [i_1] [i_2] = -1981725553;
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned char i_12 = 0; i_12 < 16; i_12 += 3) 
                {
                    arr_40 [12ULL] [i_1] [i_11] [i_12] = ((/* implicit */long long int) ((((/* implicit */int) arr_8 [i_1] [i_2 - 1] [i_11])) << (((((/* implicit */int) arr_8 [i_1] [i_2 + 1] [i_1])) - (187)))));
                    var_25 |= ((/* implicit */unsigned long long int) ((int) arr_13 [i_2 + 1] [i_2 + 1] [i_2] [i_11]));
                    var_26 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_38 [i_12] [i_11] [i_1])) > (var_4)));
                }
                for (unsigned long long int i_13 = 1; i_13 < 15; i_13 += 1) 
                {
                    /* LoopSeq 2 */
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        arr_49 [i_1] [11] [i_1] [i_1] [i_1] = min((((/* implicit */int) var_8)), ((-((~(((/* implicit */int) var_7)))))));
                        var_27 = ((/* implicit */long long int) (!(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (1863497197528108313ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_2 + 1] [(unsigned char)1] [(unsigned char)15] [i_13] [i_14])))))) && (((/* implicit */_Bool) min((((/* implicit */unsigned char) var_13)), (arr_27 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))))))));
                        arr_50 [i_14] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_46 [i_2 - 1]))))) & ((+(((/* implicit */int) (unsigned char)59))))));
                    }
                    for (unsigned long long int i_15 = 0; i_15 < 16; i_15 += 2) 
                    {
                        var_28 = ((/* implicit */signed char) ((var_9) != (((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_27 [i_11] [i_11] [0LL] [i_11] [i_11] [i_11])) | (arr_25 [i_1] [i_2 + 1] [i_11] [i_2 + 1] [i_13])))) ^ (max((8568066066085646765ULL), (8568066066085646765ULL)))))));
                        var_29 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) min((-1981725553), (1166743808)))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) <= (var_3)))) : (((/* implicit */int) arr_29 [i_1] [i_2] [(_Bool)1] [i_13] [i_11])))) * (((/* implicit */int) var_13))));
                    }
                    arr_53 [6U] |= ((/* implicit */signed char) (+(((int) min((arr_36 [i_13] [3LL] [i_2] [3LL]), (((/* implicit */long long int) arr_8 [i_1] [i_1] [(signed char)4])))))));
                    var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_1] [i_2 + 1] [i_11] [i_2 - 1] [i_13 + 1] [i_11]))) : (arr_48 [i_2 + 1] [i_2 + 1] [(unsigned char)13] [i_13 + 1] [i_13])))) && (((/* implicit */_Bool) 130944))));
                }
                var_31 *= ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_48 [i_1] [i_2] [i_2 - 1] [i_2 - 1] [i_2 + 1])) ? (16777216U) : (arr_48 [i_1] [i_1] [i_2 - 1] [i_2 + 1] [i_2 + 1])))));
            }
            arr_54 [i_1] [6] &= ((/* implicit */int) max((((((/* implicit */_Bool) arr_36 [i_1] [i_2] [i_2 + 1] [i_1])) ? (((/* implicit */long long int) var_4)) : (arr_36 [i_1] [i_1] [i_2 + 1] [i_1]))), (((/* implicit */long long int) (!(((/* implicit */_Bool) 130944)))))));
            arr_55 [i_2 - 1] [i_1] [i_2] = ((/* implicit */unsigned long long int) ((unsigned int) arr_14 [i_1] [i_2] [i_2 + 1] [(_Bool)1] [i_2 + 1] [i_2]));
        }
        /* vectorizable */
        for (short i_16 = 0; i_16 < 16; i_16 += 2) 
        {
            arr_58 [i_1] [i_16] [i_1] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */int) var_7)) <= (arr_6 [i_1]))))));
            var_32 = ((/* implicit */long long int) ((unsigned long long int) var_12));
            var_33 *= ((/* implicit */_Bool) ((long long int) ((((/* implicit */int) arr_52 [(unsigned char)6] [i_16] [i_16])) + (arr_15 [i_16] [(_Bool)1] [(_Bool)1] [i_1]))));
        }
        var_34 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)19)) ? (((16583246876181443284ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (short)-26825))))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_52 [i_1] [i_1] [i_1]))))))));
    }
    var_35 = ((/* implicit */short) min((var_10), (var_11)));
    /* LoopSeq 2 */
    for (unsigned long long int i_17 = 0; i_17 < 19; i_17 += 3) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_18 = 0; i_18 < 19; i_18 += 4) 
        {
            arr_65 [i_18] [i_18] [i_18] = ((/* implicit */int) ((arr_1 [i_17]) <= (arr_1 [i_17])));
            var_36 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)177)))))) ^ (((8568066066085646765ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))));
        }
        var_37 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_62 [i_17]) * (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-77)))))) ? (((/* implicit */int) ((signed char) arr_60 [i_17]))) : (arr_64 [i_17] [i_17] [i_17])));
    }
    for (unsigned int i_19 = 0; i_19 < 14; i_19 += 1) 
    {
        arr_70 [i_19] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) 10954001289564169013ULL))) && (((/* implicit */_Bool) arr_32 [i_19] [i_19] [i_19] [(unsigned char)11] [i_19]))));
        var_38 = ((/* implicit */unsigned short) (-(max((534103093U), (((/* implicit */unsigned int) ((((/* implicit */int) arr_7 [i_19] [i_19] [i_19])) >= (var_4))))))));
        var_39 = ((/* implicit */int) min((var_39), (((/* implicit */int) ((((/* implicit */_Bool) arr_59 [i_19])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (((+(1151911742))) < (((/* implicit */int) (signed char)-125)))))) : (((unsigned long long int) var_4)))))));
    }
    /* LoopNest 2 */
    for (int i_20 = 0; i_20 < 23; i_20 += 4) 
    {
        for (int i_21 = 0; i_21 < 23; i_21 += 2) 
        {
            {
                var_40 = ((((/* implicit */_Bool) ((arr_74 [i_20] [i_21]) ? (arr_72 [i_20] [i_21]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)18257)))))) ? (min((((((/* implicit */_Bool) var_6)) ? (var_1) : (((/* implicit */long long int) -1981725560)))), (((/* implicit */long long int) arr_71 [i_21])))) : (((/* implicit */long long int) (+(((/* implicit */int) (signed char)67))))));
                var_41 = ((/* implicit */unsigned long long int) min((var_41), (min((((/* implicit */unsigned long long int) (-((+(((/* implicit */int) var_5))))))), (((((/* implicit */_Bool) ((1863497197528108313ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_71 [i_20])))))) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-19))))))))))));
                var_42 += ((/* implicit */unsigned short) var_12);
                arr_76 [i_20] [i_20] = ((/* implicit */short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_73 [i_20])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_71 [i_20]))) : (arr_75 [i_20] [i_20])))) ? (((var_7) ? (((/* implicit */unsigned long long int) var_1)) : (7492742784145382602ULL))) : ((-(16583246876181443297ULL))))), (((/* implicit */unsigned long long int) ((long long int) ((int) arr_74 [i_20] [11ULL]))))));
            }
        } 
    } 
}
