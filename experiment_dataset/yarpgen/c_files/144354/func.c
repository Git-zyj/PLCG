/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144354
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144354 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144354
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
    var_16 = ((/* implicit */int) min((((((unsigned int) var_6)) * (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_1)) < (((/* implicit */int) var_10)))))))), (((/* implicit */unsigned int) ((signed char) min(((short)-28626), (var_8)))))));
    var_17 &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */long long int) ((int) var_10))), (((((/* implicit */long long int) ((/* implicit */int) (signed char)-77))) / (var_3))))))));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */short) ((unsigned long long int) max((((/* implicit */unsigned short) arr_0 [i_0])), ((unsigned short)42103))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            arr_7 [i_0] [i_0] [7U] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [i_1] [i_1] [i_1])) - (((/* implicit */int) (short)-16369))));
            var_18 = ((/* implicit */short) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_0])))))));
        }
        for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 2) 
        {
            var_19 ^= ((/* implicit */short) arr_6 [i_0] [(unsigned short)14]);
            var_20 *= ((/* implicit */unsigned long long int) ((max((arr_8 [i_0]), (((/* implicit */long long int) arr_5 [i_0] [i_0] [i_2])))) * (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [(unsigned short)15])) || (((/* implicit */_Bool) var_7))))), (min(((unsigned short)58706), ((unsigned short)22779)))))))));
            /* LoopNest 3 */
            for (unsigned char i_3 = 0; i_3 < 17; i_3 += 3) 
            {
                for (signed char i_4 = 0; i_4 < 17; i_4 += 3) 
                {
                    for (unsigned short i_5 = 0; i_5 < 17; i_5 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned short) arr_0 [14ULL]);
                            var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) min((((int) 1272653531)), (((/* implicit */int) min((arr_16 [2LL] [2LL] [2LL] [8ULL] [2LL] [3U] [i_5]), (arr_16 [11] [11] [11] [i_4] [9] [(unsigned char)11] [i_2])))))))));
                            arr_19 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */int) min((((/* implicit */long long int) (((-(((/* implicit */int) (signed char)-82)))) >= (((/* implicit */int) min((((/* implicit */unsigned short) (signed char)79)), ((unsigned short)58706))))))), (var_3)));
                            var_23 *= ((/* implicit */unsigned char) (-(arr_13 [(unsigned short)14] [(unsigned short)14] [i_2] [16U] [i_5])));
                            var_24 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((622657299), (var_14)))) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)22779)) << (((arr_2 [i_0]) - (2648549330768273066ULL)))))) : (((((/* implicit */_Bool) arr_15 [i_3] [i_3] [13ULL] [i_4])) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_4] [i_4])))))))) || (((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_2 [12LL])) ? (arr_8 [i_3]) : (((/* implicit */long long int) ((/* implicit */int) var_11))))) - (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [(short)16] [i_3]))))))));
                        }
                    } 
                } 
            } 
            arr_20 [i_0] [i_0] = ((/* implicit */short) (unsigned short)65535);
        }
        arr_21 [10LL] [(unsigned short)11] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((arr_6 [(unsigned short)4] [(signed char)15]) != (((/* implicit */long long int) (~(arr_10 [10U])))))))));
        arr_22 [i_0] = ((/* implicit */short) ((((/* implicit */long long int) arr_9 [i_0])) ^ (((long long int) arr_9 [i_0]))));
        /* LoopSeq 2 */
        for (unsigned int i_6 = 0; i_6 < 17; i_6 += 4) 
        {
            var_25 -= ((/* implicit */unsigned int) max((min((max((((/* implicit */unsigned long long int) (short)-4096)), (var_2))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_13)) + (((/* implicit */int) (unsigned short)5880))))))), (max((arr_2 [(unsigned short)3]), (((/* implicit */unsigned long long int) (!((_Bool)0))))))));
            var_26 *= ((/* implicit */_Bool) var_4);
            var_27 = ((/* implicit */int) ((((/* implicit */int) ((unsigned char) -622657276))) <= (((/* implicit */int) var_12))));
            arr_27 [(unsigned char)12] [i_6] [i_6] = ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) 891835818U)) / (arr_2 [i_0]))) % (((/* implicit */unsigned long long int) arr_12 [i_6] [i_6] [i_6] [i_0]))));
            arr_28 [i_0] [(short)0] = ((/* implicit */long long int) ((((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_5))) != (arr_12 [i_6] [10U] [i_6] [i_6]))) || (((/* implicit */_Bool) min((arr_24 [i_0] [9ULL]), (((/* implicit */short) var_5)))))))) | (((/* implicit */int) (unsigned short)28721))));
        }
        for (unsigned int i_7 = 0; i_7 < 17; i_7 += 2) 
        {
            var_28 -= ((/* implicit */unsigned long long int) 1023U);
            arr_33 [12ULL] [16U] [12ULL] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((arr_6 [(signed char)7] [i_0]) - (((/* implicit */long long int) arr_12 [(short)12] [10U] [i_7] [i_7]))))))))) % (min((((/* implicit */unsigned int) (unsigned short)55895)), (4259132540U)))));
        }
    }
    for (unsigned int i_8 = 0; i_8 < 10; i_8 += 1) 
    {
        var_29 &= ((/* implicit */unsigned long long int) (+(((((/* implicit */int) ((((/* implicit */int) arr_14 [(_Bool)1])) > (((/* implicit */int) var_8))))) * (((/* implicit */int) ((((/* implicit */_Bool) arr_14 [8LL])) && (var_5))))))));
        /* LoopNest 2 */
        for (long long int i_9 = 0; i_9 < 10; i_9 += 1) 
        {
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                {
                    /* LoopSeq 4 */
                    for (short i_11 = 0; i_11 < 10; i_11 += 2) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned short i_12 = 0; i_12 < 10; i_12 += 3) 
                        {
                            arr_48 [(short)3] [i_8] [i_10] [0U] [(signed char)3] [(signed char)3] = ((/* implicit */unsigned long long int) (+(-1997663437)));
                            arr_49 [i_11] [i_11] [i_11] [i_11] [i_11] [(unsigned short)4] [i_11] &= arr_0 [(unsigned short)13];
                            var_30 = ((/* implicit */short) min((var_30), (((/* implicit */short) (!(((/* implicit */_Bool) (unsigned char)191)))))));
                            arr_50 [(unsigned short)2] [(unsigned short)2] [i_8] [(unsigned short)2] [i_12] = ((/* implicit */unsigned char) arr_8 [i_8]);
                        }
                        var_31 = ((/* implicit */long long int) (!(((/* implicit */_Bool) 5964272209279744005LL))));
                    }
                    for (long long int i_13 = 0; i_13 < 10; i_13 += 1) /* same iter space */
                    {
                        var_32 = ((/* implicit */unsigned char) max((var_32), (((/* implicit */unsigned char) ((((((2251799813677056LL) & (((/* implicit */long long int) ((/* implicit */int) (unsigned short)22798))))) - (((/* implicit */long long int) ((/* implicit */int) (signed char)-93))))) != (((/* implicit */long long int) ((((/* implicit */int) (short)12493)) ^ (((/* implicit */int) min((arr_26 [i_8]), ((short)32753))))))))))));
                        var_33 = ((/* implicit */int) 16851172576174769255ULL);
                        arr_53 [(unsigned char)1] [(short)7] [(unsigned char)1] [i_13] [i_8] [i_9] = ((/* implicit */unsigned int) (((-(min((arr_25 [i_9]), (arr_6 [i_8] [i_8]))))) % (((/* implicit */long long int) 1826529595U))));
                        /* LoopSeq 3 */
                        for (short i_14 = 0; i_14 < 10; i_14 += 3) 
                        {
                            arr_57 [i_8] [i_8] [0LL] [i_8] [9ULL] [i_8] = ((/* implicit */long long int) max((((/* implicit */unsigned char) ((_Bool) arr_45 [i_8] [3ULL] [i_8] [(short)1] [i_8]))), (((unsigned char) ((unsigned int) arr_17 [i_8] [11U])))));
                            var_34 = ((/* implicit */unsigned long long int) min((var_34), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))))), (968576170U))))));
                            var_35 = ((((/* implicit */_Bool) ((((/* implicit */int) var_0)) - (((/* implicit */int) var_10))))) ? (((((/* implicit */_Bool) (short)4076)) ? (4194303) : (622657280))) : (((/* implicit */int) max((var_0), (var_0)))));
                        }
                        for (long long int i_15 = 0; i_15 < 10; i_15 += 1) /* same iter space */
                        {
                            var_36 = ((/* implicit */unsigned int) arr_4 [i_9] [i_9] [i_10]);
                            arr_60 [i_8] = ((/* implicit */long long int) min((((/* implicit */short) ((((((/* implicit */int) var_11)) | (var_4))) > (((/* implicit */int) arr_24 [1ULL] [1ULL]))))), (((short) arr_26 [(_Bool)1]))));
                        }
                        /* vectorizable */
                        for (long long int i_16 = 0; i_16 < 10; i_16 += 1) /* same iter space */
                        {
                            var_37 = ((/* implicit */signed char) min((var_37), (((/* implicit */signed char) ((unsigned int) (~(5111113818602368696LL)))))));
                            var_38 = ((/* implicit */short) (+(arr_45 [9ULL] [i_9] [(short)5] [5U] [i_8])));
                            var_39 = ((/* implicit */short) 622657284);
                            arr_64 [i_8] [i_8] [(_Bool)0] [1U] [(unsigned short)7] [5LL] [0U] = ((/* implicit */unsigned int) (~(((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) (-2147483647 - 1))))))));
                            var_40 = ((/* implicit */_Bool) ((((/* implicit */int) arr_5 [(unsigned short)5] [i_10] [i_16])) * (((/* implicit */int) arr_5 [i_8] [i_9] [i_10]))));
                        }
                    }
                    for (long long int i_17 = 0; i_17 < 10; i_17 += 1) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_18 = 0; i_18 < 10; i_18 += 3) 
                        {
                            arr_70 [i_10] [(signed char)4] [i_8] [2U] [9ULL] [i_17] = ((/* implicit */int) max((min((min((((/* implicit */unsigned int) arr_58 [i_8] [(short)8] [i_9] [i_8] [7U])), (35834758U))), (((/* implicit */unsigned int) (unsigned short)52598)))), (((/* implicit */unsigned int) arr_46 [i_8] [2U] [i_8] [(signed char)5] [1ULL] [i_18]))));
                            var_41 = ((unsigned long long int) ((((/* implicit */long long int) ((2008843128) + (((/* implicit */int) (unsigned short)0))))) & (arr_25 [i_8])));
                            arr_71 [8] [8] [i_8] [8] [(short)8] [8] [8] = ((/* implicit */unsigned long long int) var_7);
                            var_42 = ((/* implicit */unsigned short) min((var_42), (((/* implicit */unsigned short) min((((/* implicit */int) ((min((((/* implicit */long long int) -622657276)), (var_7))) > (((/* implicit */long long int) (~(((/* implicit */int) arr_26 [i_17])))))))), ((-(((/* implicit */int) var_12)))))))));
                        }
                        var_43 = ((/* implicit */unsigned int) ((((/* implicit */int) var_9)) & (((/* implicit */int) max(((unsigned short)8490), (((/* implicit */unsigned short) arr_36 [i_8] [i_8])))))));
                    }
                    /* vectorizable */
                    for (long long int i_19 = 0; i_19 < 10; i_19 += 1) /* same iter space */
                    {
                        var_44 = ((/* implicit */_Bool) max((var_44), (((/* implicit */_Bool) ((unsigned short) ((((/* implicit */int) (unsigned short)8466)) <= (arr_9 [i_8])))))));
                        /* LoopSeq 3 */
                        for (long long int i_20 = 0; i_20 < 10; i_20 += 1) 
                        {
                            var_45 = ((/* implicit */unsigned char) arr_29 [12U]);
                            arr_78 [2U] [i_9] [9] [i_19] [2U] [i_8] [i_10] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (var_4)))) % (((/* implicit */int) var_8))));
                            arr_79 [i_8] [i_8] [i_8] [i_19] [i_20] = ((/* implicit */short) (~(arr_75 [0] [i_8] [i_10])));
                        }
                        for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                        {
                            var_46 *= ((/* implicit */unsigned char) var_2);
                            arr_83 [i_8] [i_8] [2] [(unsigned char)8] [i_21] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) + (((((/* implicit */_Bool) arr_2 [i_8])) ? (((/* implicit */unsigned int) -1232020994)) : (35834743U)))));
                            var_47 *= ((/* implicit */short) 12114085092339139332ULL);
                        }
                        for (int i_22 = 0; i_22 < 10; i_22 += 2) 
                        {
                            arr_86 [i_8] [i_9] [7] [i_19] [(_Bool)1] [(unsigned char)0] [9U] = ((/* implicit */long long int) ((((/* implicit */int) (!((_Bool)0)))) | (((/* implicit */int) var_9))));
                            arr_87 [i_8] [(unsigned short)4] [i_9] [i_8] [i_8] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_65 [i_8] [i_8] [i_10] [i_19])) ? (((/* implicit */unsigned long long int) arr_63 [i_8] [(short)8] [4] [i_8] [i_22])) : (7136397023450962615ULL)));
                            arr_88 [7ULL] [i_8] = ((/* implicit */_Bool) arr_4 [6ULL] [i_19] [4ULL]);
                        }
                        var_48 = ((/* implicit */unsigned long long int) max((var_48), (var_6)));
                    }
                    var_49 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) min(((+(((/* implicit */int) (signed char)-109)))), (((((/* implicit */int) var_13)) / (-751508635)))))) & ((~((~(arr_31 [i_8])))))));
                    var_50 = ((/* implicit */signed char) min((min((((/* implicit */unsigned long long int) var_8)), (((var_2) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_8] [i_8]))))))), (((/* implicit */unsigned long long int) var_8))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (long long int i_23 = 0; i_23 < 10; i_23 += 2) 
        {
            var_51 &= ((/* implicit */short) ((12565182806639285280ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)39375)))));
            var_52 *= ((/* implicit */_Bool) ((((arr_69 [i_23] [i_23]) ^ (arr_69 [i_23] [i_23]))) ^ (((/* implicit */long long int) ((/* implicit */int) ((short) (-(var_6))))))));
        }
        var_53 = ((/* implicit */int) ((unsigned short) arr_36 [(unsigned char)5] [9LL]));
    }
    for (long long int i_24 = 0; i_24 < 11; i_24 += 1) 
    {
        arr_93 [i_24] = ((/* implicit */short) min(((+(arr_8 [i_24]))), (((/* implicit */long long int) ((unsigned char) min((1109512311U), (((/* implicit */unsigned int) (short)-27635))))))));
        var_54 = ((/* implicit */int) arr_91 [i_24] [(unsigned short)9]);
    }
}
