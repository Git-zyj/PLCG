/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16079
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16079 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16079
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
    for (signed char i_0 = 3; i_0 < 21; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 20; i_2 += 4) 
            {
                for (unsigned long long int i_3 = 2; i_3 < 21; i_3 += 2) 
                {
                    {
                        arr_11 [i_0] [i_3] [i_0] [i_3] [i_2] [i_3] = ((/* implicit */unsigned short) min((0), (-5)));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 4) 
                        {
                            arr_14 [i_4] [i_0] [i_0 - 2] = ((/* implicit */_Bool) arr_5 [14U] [(short)10] [i_0]);
                            arr_15 [i_0] [i_0] = ((/* implicit */unsigned short) min((min((((/* implicit */unsigned long long int) arr_8 [(unsigned short)19] [i_1] [(unsigned short)19] [21ULL] [i_1] [(unsigned char)4])), (min((((/* implicit */unsigned long long int) arr_5 [i_0] [(_Bool)1] [i_0])), (var_11))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_0 - 3] [7U] [i_3 + 1] [i_0 - 3] [i_2] [i_0 - 3])) ? (3002824871U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_2 - 2] [i_3 - 2] [i_4] [(_Bool)1]))))))));
                            arr_16 [i_0] [i_0] [i_2] [i_0] [i_4] [i_4] = ((/* implicit */unsigned short) min((((/* implicit */int) ((unsigned short) arr_8 [(unsigned char)5] [i_1] [i_2] [i_3 + 1] [i_4] [i_3 - 1]))), (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) ((((/* implicit */int) var_0)) != (((/* implicit */int) var_10))))) : (((/* implicit */int) arr_5 [i_0] [(unsigned short)3] [i_0]))))));
                        }
                        arr_17 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) min((min((var_8), ((~(((/* implicit */int) (unsigned short)4815)))))), ((-(((/* implicit */int) ((((/* implicit */int) (unsigned short)4815)) != (((/* implicit */int) arr_7 [i_0] [i_1] [i_0] [i_0])))))))));
                        arr_18 [7] [i_0] [i_2] [i_2] [13ULL] = ((/* implicit */long long int) ((((/* implicit */int) (signed char)-25)) > (((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-25)), ((unsigned short)60720))))));
                    }
                } 
            } 
        } 
        arr_19 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) var_12)) * (((/* implicit */int) (unsigned char)4))));
        arr_20 [i_0] = ((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_0 - 3]))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0 - 3] [i_0 - 2]))) : (arr_0 [i_0])))));
        arr_21 [18ULL] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned char) 0)))));
    }
    for (unsigned short i_5 = 0; i_5 < 10; i_5 += 1) 
    {
        arr_24 [i_5] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 3002824863U))));
        arr_25 [(_Bool)1] = ((/* implicit */short) (((+(((/* implicit */int) (!(arr_22 [i_5])))))) % ((-(((/* implicit */int) arr_23 [i_5]))))));
        arr_26 [(unsigned char)6] = ((/* implicit */unsigned short) (-((~(((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_5] [i_5] [0LL])))))))));
        arr_27 [i_5] = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned short)4797))));
    }
    /* LoopNest 2 */
    for (unsigned short i_6 = 0; i_6 < 15; i_6 += 1) 
    {
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            {
                arr_34 [i_6] [(unsigned char)9] [i_6] = ((/* implicit */unsigned int) max((((((var_9) ? (((/* implicit */unsigned long long int) -5)) : (arr_2 [(unsigned char)19] [i_7]))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_3 [i_6] [i_6])))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((short) var_11))))))));
                arr_35 [i_6] [i_7] [i_7] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((/* implicit */int) ((_Bool) 0U))))))));
                arr_36 [i_7] |= ((/* implicit */short) min(((((-(((/* implicit */int) (_Bool)0)))) <= (((/* implicit */int) min((arr_5 [10ULL] [(unsigned short)4] [(unsigned short)18]), (((/* implicit */unsigned short) var_10))))))), ((!(((/* implicit */_Bool) (+(4))))))));
            }
        } 
    } 
    var_14 = ((/* implicit */_Bool) var_13);
    /* LoopSeq 4 */
    for (unsigned long long int i_8 = 2; i_8 < 22; i_8 += 4) 
    {
        arr_39 [(unsigned short)8] &= ((/* implicit */unsigned long long int) min((((/* implicit */int) max((arr_38 [i_8 - 2]), (((unsigned short) arr_38 [(short)3]))))), (((((/* implicit */int) arr_37 [i_8 + 1])) * (((/* implicit */int) var_10))))));
        arr_40 [i_8] [(signed char)0] = ((/* implicit */int) (~(((unsigned long long int) (-(((/* implicit */int) arr_38 [(short)3])))))));
        arr_41 [i_8] = ((/* implicit */signed char) arr_38 [(short)19]);
        arr_42 [i_8] [(short)22] = ((/* implicit */unsigned short) ((((/* implicit */int) ((short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)4784))) : (var_3))))) >= (((int) arr_37 [i_8 + 1]))));
    }
    for (short i_9 = 0; i_9 < 10; i_9 += 4) 
    {
        arr_45 [i_9] = ((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -974739981)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_38 [(_Bool)1]))) : (arr_33 [i_9] [i_9] [i_9])))))))));
        arr_46 [i_9] [i_9] = ((/* implicit */unsigned long long int) ((short) ((min((((/* implicit */unsigned int) var_10)), (var_1))) << (((((/* implicit */int) ((signed char) arr_23 [i_9]))) - (64))))));
        arr_47 [1LL] = ((((/* implicit */_Bool) (-(((/* implicit */int) arr_6 [i_9] [i_9] [i_9]))))) && (((/* implicit */_Bool) arr_4 [i_9])));
    }
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
    {
        arr_50 [i_10] [i_10] = ((/* implicit */unsigned int) arr_28 [i_10]);
        /* LoopNest 2 */
        for (long long int i_11 = 0; i_11 < 15; i_11 += 3) 
        {
            for (long long int i_12 = 0; i_12 < 15; i_12 += 1) 
            {
                {
                    arr_57 [i_10] [i_11] [i_12] [14ULL] = ((/* implicit */_Bool) (~(((arr_28 [i_10]) ^ (arr_28 [i_10])))));
                    arr_58 [(unsigned short)12] [i_11] [(unsigned short)0] = ((/* implicit */unsigned short) ((min((((/* implicit */unsigned long long int) var_1)), (arr_2 [11] [i_10]))) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_2 [i_12] [i_10]))))));
                    /* LoopSeq 2 */
                    for (short i_13 = 0; i_13 < 15; i_13 += 2) 
                    {
                        arr_62 [i_12] [i_12] [(unsigned char)3] [(unsigned short)9] [i_13] [(signed char)5] = ((/* implicit */unsigned int) min((((/* implicit */int) arr_3 [i_10] [i_12])), ((~(((/* implicit */int) arr_3 [i_10] [i_13]))))));
                        /* LoopSeq 4 */
                        for (signed char i_14 = 0; i_14 < 15; i_14 += 4) 
                        {
                            arr_67 [(_Bool)1] [(unsigned short)4] [i_12] = ((/* implicit */unsigned short) ((unsigned int) min((((/* implicit */int) ((short) var_6))), (((((/* implicit */_Bool) 3U)) ? (-7) : (((/* implicit */int) (short)6639)))))));
                            arr_68 [i_14] [i_11] [i_14] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_66 [i_10] [(unsigned short)14] [i_12] [i_13] [i_14])), (min((((/* implicit */unsigned int) (signed char)-1)), (1617018577U))))))));
                            arr_69 [i_12] [i_12] [i_12] [i_11] [i_12] [14U] = ((/* implicit */unsigned int) ((unsigned short) (!(arr_31 [i_13] [i_14]))));
                            arr_70 [i_10] [i_10] [i_12] [i_10] [i_13] = ((/* implicit */unsigned char) max((((int) arr_33 [i_10] [i_10] [i_10])), (((/* implicit */int) ((unsigned short) var_7)))));
                        }
                        for (unsigned int i_15 = 0; i_15 < 15; i_15 += 1) /* same iter space */
                        {
                            arr_73 [i_13] [i_13] [i_13] [i_13] [i_15] [i_15] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) arr_64 [(short)2] [i_11] [i_12] [(short)6] [i_13])), (min((arr_71 [i_13] [i_12] [i_15]), (arr_71 [i_13] [i_13] [i_13])))));
                            arr_74 [i_11] [i_12] [i_15] = ((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)60718)) * (((/* implicit */int) (unsigned short)320))))), (((((/* implicit */_Bool) arr_32 [i_10])) ? (arr_32 [i_13]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_10] [i_10] [i_12] [(short)20])))))));
                            arr_75 [i_10] [i_10] [(unsigned short)5] [(unsigned short)13] [i_10] [i_12] = ((/* implicit */short) ((signed char) ((int) ((((/* implicit */_Bool) arr_64 [i_12] [i_13] [i_12] [i_10] [i_12])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_12 [(unsigned short)2] [i_11] [(unsigned short)2] [12ULL] [(unsigned char)0] [(signed char)18] [i_15]))))));
                        }
                        for (unsigned int i_16 = 0; i_16 < 15; i_16 += 1) /* same iter space */
                        {
                            arr_78 [i_12] [i_12] = ((/* implicit */unsigned short) (+((+(arr_60 [i_10] [i_11] [(_Bool)1] [i_12] [i_13] [i_10])))));
                            arr_79 [(unsigned char)4] [(unsigned short)0] [(unsigned short)14] [i_13] [i_16] [i_16] [(unsigned short)2] |= ((/* implicit */int) ((signed char) ((unsigned short) arr_63 [i_16] [i_13] [(short)14] [i_10] [i_13] [i_10])));
                        }
                        for (unsigned long long int i_17 = 1; i_17 < 13; i_17 += 4) 
                        {
                            arr_82 [i_13] [i_11] [i_12] [i_13] [i_11] = ((/* implicit */short) var_7);
                            arr_83 [(signed char)2] [i_12] [3] [3] [i_17 - 1] = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) min(((unsigned short)11328), (((/* implicit */unsigned short) var_10)))))))) / (((((/* implicit */_Bool) (~(arr_10 [i_10] [i_11] [(_Bool)1] [i_17])))) ? (max((((/* implicit */int) arr_3 [(unsigned short)11] [i_17])), (var_8))) : ((~(((/* implicit */int) arr_54 [i_11] [i_12] [i_13]))))))));
                            arr_84 [i_10] [i_13] [i_13] = ((/* implicit */_Bool) (+(((unsigned int) min((arr_3 [i_10] [17LL]), (((/* implicit */short) var_7)))))));
                        }
                    }
                    for (signed char i_18 = 0; i_18 < 15; i_18 += 2) 
                    {
                        arr_89 [i_10] [(unsigned short)0] [i_12] [i_18] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((short) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)18))) < (var_1)))))));
                        arr_90 [(unsigned short)3] [(short)2] [i_12] [4U] = ((/* implicit */long long int) ((min((((/* implicit */unsigned long long int) arr_53 [i_12] [i_11] [i_18])), (var_11))) >> (((((/* implicit */int) ((unsigned short) (+(-1311002281))))) - (45395)))));
                        arr_91 [i_10] [i_10] [i_18] [10U] &= ((/* implicit */short) min((((unsigned long long int) ((var_6) & (var_6)))), (((/* implicit */unsigned long long int) var_9))));
                        arr_92 [i_10] [i_11] [i_11] [(_Bool)1] [i_12] [i_12] = ((/* implicit */unsigned long long int) (-(((int) -5))));
                        arr_93 [(_Bool)1] [i_18] [(signed char)4] [i_18] [i_10] |= ((/* implicit */short) (-((+(((/* implicit */int) arr_76 [i_10] [i_11] [i_12] [i_12] [(short)3] [(short)10] [i_18]))))));
                    }
                }
            } 
        } 
        /* LoopSeq 1 */
        for (short i_19 = 3; i_19 < 14; i_19 += 2) 
        {
            arr_97 [i_10] [(unsigned short)13] = ((/* implicit */signed char) ((((/* implicit */unsigned int) var_8)) | (max((arr_96 [i_19 - 2]), (arr_96 [i_19 - 3])))));
            /* LoopNest 2 */
            for (long long int i_20 = 2; i_20 < 12; i_20 += 3) 
            {
                for (short i_21 = 0; i_21 < 15; i_21 += 3) 
                {
                    {
                        arr_103 [(signed char)0] = ((/* implicit */short) min((((((/* implicit */_Bool) arr_53 [(unsigned char)2] [8ULL] [(unsigned char)2])) ? (arr_53 [(unsigned short)8] [(unsigned short)8] [(unsigned short)8]) : (arr_53 [2] [14U] [2]))), (max((((/* implicit */int) (short)19146)), (arr_53 [10ULL] [i_10] [10ULL])))));
                        arr_104 [i_10] [i_10] [i_10] [i_20] = ((/* implicit */unsigned short) min((((/* implicit */long long int) (~(20U)))), (((arr_0 [i_20]) - (arr_0 [i_20])))));
                    }
                } 
            } 
            arr_105 [i_19] [5ULL] [11LL] = ((/* implicit */unsigned char) (~((~(((/* implicit */int) arr_66 [12ULL] [12ULL] [(short)1] [i_19] [i_19 + 1]))))));
            arr_106 [i_10] [i_10] [i_10] = ((/* implicit */long long int) min((arr_30 [(unsigned short)9]), (((/* implicit */unsigned int) ((short) 1292142424U)))));
            arr_107 [i_10] [i_10] = ((/* implicit */short) (~(((/* implicit */int) (_Bool)1))));
        }
    }
    for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) /* same iter space */
    {
        arr_111 [i_22] [4ULL] = ((/* implicit */unsigned long long int) (unsigned short)60718);
        arr_112 [i_22] = ((/* implicit */signed char) (~(max((((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_6))))), (((((/* implicit */_Bool) var_7)) ? (-5) : (arr_53 [(signed char)8] [(signed char)8] [i_22])))))));
    }
}
