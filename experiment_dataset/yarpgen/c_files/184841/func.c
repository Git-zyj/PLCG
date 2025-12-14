/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184841
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184841 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184841
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
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        var_17 ^= ((/* implicit */int) (signed char)-86);
        var_18 *= ((((((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_0)))) < ((-(2484657977529005587LL))))) || (((/* implicit */_Bool) var_1)));
    }
    for (unsigned long long int i_1 = 3; i_1 < 11; i_1 += 4) 
    {
        /* LoopSeq 3 */
        for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
        {
            /* LoopNest 3 */
            for (long long int i_3 = 2; i_3 < 9; i_3 += 1) 
            {
                for (long long int i_4 = 0; i_4 < 12; i_4 += 1) 
                {
                    for (unsigned long long int i_5 = 1; i_5 < 10; i_5 += 1) 
                    {
                        {
                            var_19 ^= ((/* implicit */short) ((_Bool) max(((unsigned short)65535), ((unsigned short)65530))));
                            arr_15 [i_1] [i_1] [i_1] [(short)9] [(short)9] = ((/* implicit */_Bool) var_13);
                        }
                    } 
                } 
            } 
            var_20 ^= ((/* implicit */unsigned char) arr_4 [i_2 + 1] [i_2]);
            arr_16 [i_1] = ((((/* implicit */unsigned long long int) (-(((long long int) 9))))) == (min(((~(arr_6 [i_1] [i_1]))), (((/* implicit */unsigned long long int) min((1), (((/* implicit */int) (unsigned short)52660))))))));
        }
        for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 3) 
        {
            /* LoopSeq 2 */
            for (unsigned int i_7 = 0; i_7 < 12; i_7 += 4) 
            {
                /* LoopSeq 1 */
                for (unsigned int i_8 = 0; i_8 < 12; i_8 += 3) 
                {
                    /* LoopSeq 2 */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) (unsigned short)3)) || (((/* implicit */_Bool) arr_26 [i_7] [(signed char)10] [i_7])))))) ? ((~(((/* implicit */int) ((((/* implicit */int) (short)-12795)) < (((/* implicit */int) arr_26 [i_7] [i_7] [i_8]))))))) : (((/* implicit */int) ((_Bool) (_Bool)1))))))));
                        var_22 ^= ((/* implicit */long long int) ((((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)26585))) : (8316124948369506673LL)))) ? (((/* implicit */int) (_Bool)1)) : ((-(17))))) & (((/* implicit */int) (_Bool)0))));
                        var_23 ^= ((/* implicit */long long int) var_13);
                    }
                    for (unsigned int i_10 = 2; i_10 < 11; i_10 += 3) 
                    {
                        arr_29 [i_1] [i_1] [6LL] [i_1] = ((/* implicit */_Bool) (+(min((4294967291U), (((/* implicit */unsigned int) var_11))))));
                        var_24 ^= ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned char)166))));
                        arr_30 [i_7] [i_6] &= ((/* implicit */short) arr_1 [i_1] [i_10 - 1]);
                        var_25 += ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_10 - 2] [i_7] [(short)6]))) == (((((/* implicit */_Bool) -1086437468418299344LL)) ? ((((_Bool)1) ? (1716380601U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)45362))))) : (((/* implicit */unsigned int) max((-93974847), ((-2147483647 - 1)))))))));
                        arr_31 [i_1] [i_6] = ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)45362))) / (((long long int) var_3)));
                    }
                    /* LoopSeq 2 */
                    for (signed char i_11 = 0; i_11 < 12; i_11 += 4) /* same iter space */
                    {
                        var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) var_7))));
                        var_27 &= ((/* implicit */short) 13592086505260099177ULL);
                    }
                    /* vectorizable */
                    for (signed char i_12 = 0; i_12 < 12; i_12 += 4) /* same iter space */
                    {
                        arr_38 [i_6] [i_7] [i_8] [i_1] = ((/* implicit */short) ((((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_33 [i_1] [(signed char)2] [(_Bool)1] [i_1] [3])))) << (1LL)));
                        var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3713700383U)) ? (((/* implicit */int) (unsigned char)94)) : (-10)))) ? (((/* implicit */int) arr_22 [i_1 + 1] [i_1] [i_1] [i_1])) : (((/* implicit */int) arr_34 [i_1]))));
                    }
                    var_29 = ((/* implicit */unsigned char) min((var_29), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_1] [i_7] [i_7] [(_Bool)0]))) * (var_7)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(arr_22 [i_1] [i_7] [i_7] [i_8]))))) : (var_2))))));
                }
                arr_39 [i_1 - 3] [i_1] [i_7] [i_1] |= ((/* implicit */short) 549755813887LL);
                var_30 &= ((/* implicit */signed char) var_12);
            }
            /* vectorizable */
            for (unsigned long long int i_13 = 2; i_13 < 10; i_13 += 3) 
            {
                var_31 -= ((/* implicit */long long int) arr_32 [i_1] [1] [i_1] [1] [i_13]);
                arr_42 [(unsigned short)9] [i_1] [(signed char)1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1] [i_1]))) : (-14LL)))) ? ((+(((/* implicit */int) var_9)))) : (((/* implicit */int) (_Bool)1))));
            }
            var_32 ^= ((/* implicit */_Bool) (((~((~(((/* implicit */int) (signed char)-28)))))) | (((((((/* implicit */_Bool) (unsigned char)161)) ? (((/* implicit */int) arr_20 [i_1] [7U] [i_6] [i_1 - 2])) : (((/* implicit */int) (short)4770)))) | ((~(((/* implicit */int) arr_41 [(short)6]))))))));
            var_33 -= ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((((/* implicit */int) var_9)) * (((/* implicit */int) var_8)))) * (((((/* implicit */int) var_9)) + (((/* implicit */int) (signed char)-55))))))), (min((arr_35 [i_1 - 3]), (((/* implicit */unsigned long long int) arr_26 [4U] [i_1 - 2] [4U]))))));
            var_34 ^= ((/* implicit */_Bool) ((((min((-4573861776936021246LL), (((/* implicit */long long int) (signed char)-114)))) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) arr_23 [i_6])) ? (((/* implicit */int) (unsigned char)166)) : (((/* implicit */int) arr_33 [i_1] [i_1] [i_1] [(short)2] [i_1]))))))) | (((((/* implicit */long long int) ((/* implicit */int) arr_27 [i_1 - 3] [i_1 - 3] [(_Bool)1] [i_6]))) ^ (4054703901631086656LL)))));
        }
        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
        {
            arr_45 [i_1] = (i_1 % 2 == zero) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) ((1882123449) >= (((/* implicit */int) var_0))))) != (((/* implicit */int) ((1759540526) == (((/* implicit */int) arr_21 [i_14] [i_1 + 1])))))))) >> (((((/* implicit */int) arr_19 [i_1] [i_14])) - (36)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) ((1882123449) >= (((/* implicit */int) var_0))))) != (((/* implicit */int) ((1759540526) == (((/* implicit */int) arr_21 [i_14] [i_1 + 1])))))))) >> (((((((/* implicit */int) arr_19 [i_1] [i_14])) - (36))) + (32))))));
            var_35 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_0 [i_1 - 2]), (arr_0 [i_1 - 1])))) ? (((((/* implicit */_Bool) arr_0 [i_1 - 1])) ? (((/* implicit */int) (signed char)-120)) : (((/* implicit */int) arr_0 [i_1 - 3])))) : (((((/* implicit */_Bool) arr_0 [i_1 - 1])) ? (((/* implicit */int) arr_0 [i_1 - 2])) : (((/* implicit */int) arr_0 [i_1 - 2]))))));
            arr_46 [(unsigned char)2] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_27 [i_1 - 3] [i_14] [(unsigned short)0] [i_1])))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_1] [i_14] [(short)11] [i_14])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_35 [i_1])))) ? (((((/* implicit */_Bool) arr_0 [i_1 - 3])) ? (arr_6 [i_1] [(_Bool)1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1] [i_14]))))) : (((/* implicit */unsigned long long int) var_12)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_36 [i_1] [i_14] [i_14] [i_14] [i_14] [i_14])))));
            arr_47 [i_1] [i_1] = ((/* implicit */signed char) 1160647861);
        }
        var_36 = ((/* implicit */signed char) ((max((arr_22 [i_1] [i_1] [i_1] [i_1]), (arr_22 [i_1 - 3] [i_1] [i_1] [i_1 - 3]))) ? (min((((/* implicit */int) arr_22 [(_Bool)1] [i_1] [i_1] [i_1 - 3])), (13))) : (((/* implicit */int) min((((/* implicit */unsigned short) arr_22 [i_1] [i_1] [i_1] [i_1 - 2])), ((unsigned short)52468))))));
    }
    for (long long int i_15 = 0; i_15 < 10; i_15 += 3) 
    {
        var_37 = ((/* implicit */long long int) max((var_37), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-28))) <= (arr_13 [i_15] [6ULL] [i_15] [i_15] [(short)8] [i_15]))))));
        var_38 = ((/* implicit */_Bool) min((var_38), (((/* implicit */_Bool) (((((((_Bool)1) ? (arr_13 [i_15] [i_15] [i_15] [i_15] [i_15] [i_15]) : (((/* implicit */unsigned int) ((/* implicit */int) var_14))))) == (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_15] [i_15] [10LL] [10LL]))))) ? (min((((/* implicit */unsigned long long int) min((arr_40 [i_15] [1ULL] [i_15] [i_15]), (var_6)))), (((((/* implicit */_Bool) var_9)) ? (7967372353288733183ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)26579))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_15] [i_15] [i_15])) || (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-115))) != (arr_14 [i_15] [(_Bool)1] [11LL]))))))))))));
        var_39 = ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) 1)) <= (arr_8 [i_15] [2ULL] [2ULL] [i_15]))))));
    }
    var_40 = ((/* implicit */signed char) max((var_40), (((/* implicit */signed char) var_14))));
}
