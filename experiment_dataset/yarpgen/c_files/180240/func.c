/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180240
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
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((var_13) - (((/* implicit */unsigned int) var_1))))) : (min((var_0), (((/* implicit */unsigned long long int) var_16))))))) ? (((/* implicit */long long int) ((/* implicit */int) min((var_3), (((/* implicit */unsigned char) (signed char)-53)))))) : (var_17)));
    var_20 = var_17;
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_1 = 2; i_1 < 21; i_1 += 2) 
        {
            /* LoopNest 3 */
            for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                for (unsigned char i_3 = 0; i_3 < 24; i_3 += 2) 
                {
                    for (short i_4 = 0; i_4 < 24; i_4 += 2) 
                    {
                        {
                            arr_15 [i_0] [i_1 + 2] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-53)) ? (((/* implicit */int) (signed char)-44)) : (((/* implicit */int) var_2)))))));
                            arr_16 [i_0] [i_1] [(unsigned short)2] [11LL] [(unsigned short)2] [11LL] = ((/* implicit */short) ((((/* implicit */int) arr_7 [i_1 - 2])) <= (((/* implicit */int) arr_7 [i_1 - 2]))));
                            arr_17 [21] [i_1] [i_2] [(short)5] [i_1] |= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [i_1 - 1] [i_1 + 3] [(unsigned short)22])) <= (arr_8 [i_0] [i_1 - 1] [i_0] [i_3])));
                        }
                    } 
                } 
            } 
            arr_18 [i_1] = ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_9))))) : (((var_8) / (arr_4 [i_0] [i_0] [i_1]))));
            /* LoopSeq 4 */
            for (long long int i_5 = 0; i_5 < 24; i_5 += 2) 
            {
                var_21 -= ((/* implicit */_Bool) ((((arr_2 [2] [2]) ? (arr_4 [i_0] [i_1 + 1] [13]) : (arr_4 [i_0] [i_0] [i_5]))) << (((((((/* implicit */int) (signed char)-53)) | (((/* implicit */int) (signed char)25)))) + (37)))));
                arr_21 [11] [11] [i_5] [(_Bool)1] = ((/* implicit */int) var_10);
                arr_22 [i_0] = ((/* implicit */unsigned int) (~((+(((/* implicit */int) arr_11 [1ULL] [7LL] [7LL] [i_1 - 2] [20LL] [0] [1ULL]))))));
                arr_23 [i_0] [i_0] [i_5] [i_0] = ((((/* implicit */_Bool) var_3)) ? (arr_13 [i_1 + 2] [(unsigned short)2] [(signed char)8]) : (((/* implicit */int) (signed char)53)));
            }
            for (long long int i_6 = 0; i_6 < 24; i_6 += 2) 
            {
                /* LoopNest 2 */
                for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                {
                    for (unsigned long long int i_8 = 0; i_8 < 24; i_8 += 2) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) ((_Bool) 9604281844344134166ULL)))));
                            var_23 = ((/* implicit */int) var_4);
                            var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) var_18))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (int i_9 = 0; i_9 < 24; i_9 += 2) 
                {
                    arr_34 [23LL] [19] [19] [19] = ((/* implicit */long long int) arr_32 [4]);
                    /* LoopSeq 1 */
                    for (int i_10 = 0; i_10 < 24; i_10 += 2) 
                    {
                        arr_37 [i_0] [(short)15] [(signed char)6] [i_0] [i_10] [7LL] = -2076728283;
                        var_25 = ((/* implicit */unsigned char) ((arr_5 [13ULL] [(unsigned char)2] [i_1 + 3]) ? (((/* implicit */int) arr_5 [14LL] [(short)14] [i_1 - 1])) : (((/* implicit */int) arr_5 [17LL] [i_1] [i_1 + 3]))));
                    }
                    var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_25 [i_1 + 1] [(signed char)22] [i_1 + 1] [3ULL])) ? (((/* implicit */long long int) ((/* implicit */int) var_16))) : (arr_25 [i_1 + 1] [i_6] [i_6] [(unsigned short)21])));
                    arr_38 [(short)19] [(short)19] [i_6] [(_Bool)1] [11ULL] [18] = ((/* implicit */long long int) ((int) arr_24 [i_0] [i_1 - 1] [i_1 + 2]));
                }
            }
            for (short i_11 = 0; i_11 < 24; i_11 += 2) /* same iter space */
            {
                var_27 = ((/* implicit */int) ((((/* implicit */_Bool) ((long long int) var_9))) ? (arr_24 [i_0] [i_1 + 3] [i_1 + 1]) : (var_12)));
                arr_42 [i_0] [i_0] [15] = (!(((/* implicit */_Bool) arr_31 [6] [i_1 - 2] [i_11] [i_0] [i_1 + 3])));
                var_28 = ((/* implicit */int) var_17);
                var_29 = ((/* implicit */long long int) min((var_29), ((~(-7895242681346050863LL)))));
            }
            for (short i_12 = 0; i_12 < 24; i_12 += 2) /* same iter space */
            {
                arr_46 [(unsigned short)14] [i_1 - 1] [(unsigned short)14] [(unsigned short)14] = ((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_28 [i_0] [13LL] [13LL])))) : (var_18));
                /* LoopSeq 1 */
                for (signed char i_13 = 4; i_13 < 20; i_13 += 2) 
                {
                    arr_50 [(unsigned short)20] [1LL] [(short)22] [i_13 + 2] = ((/* implicit */signed char) var_6);
                    arr_51 [3LL] [9LL] [3LL] [i_12] [3LL] [(unsigned char)7] = ((/* implicit */unsigned short) (signed char)13);
                    /* LoopSeq 2 */
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        arr_55 [i_14] [(short)4] = ((/* implicit */long long int) arr_36 [i_0] [i_0] [(_Bool)1] [12ULL] [12ULL]);
                        arr_56 [i_14] [i_13] [13] [i_14] [i_14] = ((/* implicit */unsigned short) var_18);
                    }
                    for (long long int i_15 = 0; i_15 < 24; i_15 += 2) 
                    {
                        arr_60 [i_0] [(signed char)13] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_59 [i_0] [i_1 + 1] [i_12] [(unsigned short)9] [6LL])) ? (((/* implicit */long long int) ((/* implicit */int) arr_59 [i_0] [i_1 + 2] [i_0] [i_13 + 3] [i_0]))) : (var_17)));
                        arr_61 [20U] [20U] [20U] [i_13 + 2] [20U] = ((/* implicit */unsigned char) (-(var_10)));
                        var_30 = ((/* implicit */long long int) arr_9 [i_1] [i_1]);
                    }
                }
            }
            var_31 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_17)) ? (7895242681346050868LL) : (var_17))) / (((/* implicit */long long int) arr_6 [i_0] [i_0] [(unsigned char)11]))));
            var_32 = ((/* implicit */long long int) var_3);
        }
        var_33 = ((/* implicit */int) max((var_33), (((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) (signed char)0)), ((unsigned char)147)))) ? (((/* implicit */int) arr_52 [i_0])) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (arr_54 [i_0])))) ? (((/* implicit */int) var_6)) : (1711006221))) : (((/* implicit */int) min((arr_41 [(unsigned char)9]), (((/* implicit */unsigned char) (_Bool)1)))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
        {
            arr_64 [5LL] [5LL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (arr_40 [i_0] [i_0] [i_0] [i_16]) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))) || (((/* implicit */_Bool) var_0))));
            var_34 -= ((/* implicit */_Bool) arr_19 [i_16] [(_Bool)1] [2LL] [2LL]);
        }
    }
    /* vectorizable */
    for (signed char i_17 = 0; i_17 < 24; i_17 += 2) /* same iter space */
    {
        var_35 = ((/* implicit */unsigned char) arr_48 [13] [(signed char)1] [(short)16] [(short)16] [(short)16]);
        arr_69 [i_17] = ((/* implicit */signed char) (-(((/* implicit */int) var_16))));
    }
    /* vectorizable */
    for (signed char i_18 = 0; i_18 < 24; i_18 += 2) /* same iter space */
    {
        arr_73 [(unsigned short)9] = ((/* implicit */unsigned int) (~(var_18)));
        var_36 = ((/* implicit */unsigned int) max((var_36), (((/* implicit */unsigned int) ((arr_57 [21] [(signed char)0] [i_18] [(unsigned char)10]) | (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))))));
        /* LoopNest 2 */
        for (long long int i_19 = 0; i_19 < 24; i_19 += 2) 
        {
            for (int i_20 = 0; i_20 < 24; i_20 += 2) 
            {
                {
                    arr_80 [i_18] [i_18] [22ULL] [(short)12] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */long long int) arr_77 [15] [i_19] [15] [i_18])) : (arr_14 [(signed char)5])));
                    var_37 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_16)) ? (((var_4) + (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) arr_78 [i_18] [i_19] [i_19] [i_19]))));
                    arr_81 [14ULL] [4] [i_19] [4] |= ((/* implicit */short) var_2);
                }
            } 
        } 
        arr_82 [i_18] [i_18] = ((/* implicit */long long int) (+(((/* implicit */int) arr_19 [i_18] [(signed char)10] [i_18] [i_18]))));
    }
    for (int i_21 = 0; i_21 < 24; i_21 += 2) 
    {
        arr_85 [(signed char)23] [i_21] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((var_16), (((/* implicit */short) arr_79 [i_21] [(short)13] [i_21] [i_21])))))) < (min((((/* implicit */unsigned long long int) (short)-7237)), (arr_44 [i_21] [(short)13] [i_21])))));
        var_38 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_48 [10LL] [(signed char)11] [7LL] [i_21] [10LL]) ^ (((/* implicit */long long int) min((((/* implicit */int) var_3)), (var_5))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_78 [i_21] [(_Bool)1] [i_21] [(unsigned char)8]) > (((/* implicit */long long int) var_1)))))) : (arr_31 [(unsigned char)18] [(short)16] [i_21] [i_21] [(unsigned char)8])));
    }
    var_39 = ((/* implicit */unsigned long long int) var_17);
}
