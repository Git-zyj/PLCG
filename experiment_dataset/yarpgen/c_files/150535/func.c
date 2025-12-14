/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150535
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150535 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150535
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
    for (short i_0 = 4; i_0 < 18; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                var_16 = ((/* implicit */short) min(((unsigned short)65535), ((unsigned short)65513)));
                arr_4 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)0)) <= (((/* implicit */int) (unsigned short)65535))));
            }
        } 
    } 
    var_17 = (-(((/* implicit */int) ((short) (unsigned short)65529))));
    /* LoopSeq 4 */
    for (long long int i_2 = 3; i_2 < 11; i_2 += 1) 
    {
        arr_8 [(signed char)2] |= ((/* implicit */short) arr_6 [i_2 - 2] [i_2]);
        var_18 *= ((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)0)) / (((/* implicit */int) arr_2 [18] [i_2 - 1] [i_2]))))) != (max((((/* implicit */unsigned int) var_15)), (((unsigned int) 2147483647))))));
        arr_9 [i_2] [i_2] = ((((/* implicit */_Bool) (unsigned short)44)) ? (((/* implicit */int) ((short) (+(6896683395387371784ULL))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65527))))));
        var_19 = ((/* implicit */_Bool) (+(min((((/* implicit */unsigned int) 154559474)), (12U)))));
    }
    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
    {
        arr_12 [i_3] [i_3] = ((/* implicit */unsigned int) ((unsigned long long int) max(((unsigned short)9), (((/* implicit */unsigned short) (unsigned char)71)))));
        /* LoopNest 2 */
        for (unsigned char i_4 = 0; i_4 < 22; i_4 += 3) 
        {
            for (unsigned char i_5 = 0; i_5 < 22; i_5 += 1) 
            {
                {
                    arr_17 [i_3 - 1] [i_3] = (((-(((/* implicit */int) min(((unsigned short)61428), ((unsigned short)65535)))))) & (((((/* implicit */_Bool) arr_13 [i_3 - 1] [i_3] [(_Bool)1])) ? (arr_13 [i_3 - 1] [i_3] [(short)7]) : (((/* implicit */int) var_0)))));
                    arr_18 [i_3] [11LL] [(unsigned char)8] = ((/* implicit */unsigned long long int) var_14);
                }
            } 
        } 
        var_20 ^= ((/* implicit */_Bool) min((((/* implicit */long long int) (signed char)123)), (8441737557258604648LL)));
        /* LoopSeq 1 */
        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
        {
            var_21 *= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_19 [i_3 - 1] [i_6])) ? (3587904397U) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))) / (((/* implicit */unsigned int) min((var_1), (21360451))))))) / (min((((/* implicit */unsigned long long int) (unsigned char)11)), (((13721859257633483722ULL) + (((/* implicit */unsigned long long int) 1123587922U))))))));
            var_22 = ((/* implicit */int) ((unsigned char) ((arr_13 [i_6 - 1] [i_3 - 1] [i_3 - 1]) >= (min((-1), (((/* implicit */int) (_Bool)1)))))));
        }
        /* LoopSeq 1 */
        for (unsigned short i_7 = 0; i_7 < 22; i_7 += 4) 
        {
            var_23 += ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)65529)) || (((/* implicit */_Bool) (unsigned char)211))));
            var_24 = ((/* implicit */unsigned short) min((((/* implicit */int) min((((/* implicit */short) (unsigned char)117)), (max((((/* implicit */short) (unsigned char)97)), ((short)-19919)))))), (((arr_14 [i_3 - 1] [i_3 - 1]) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)210))) == (17248499078920958709ULL))))))));
            var_25 = max((((/* implicit */int) ((var_15) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_19 [i_3] [i_7])) : (arr_21 [i_7]))))))), (max((arr_13 [i_3 - 1] [13] [i_3]), (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_19 [i_3] [i_7])) : (((/* implicit */int) (unsigned short)9)))))));
            arr_23 [i_3] [21] [21] |= ((/* implicit */short) arr_11 [i_3 - 1] [i_3 - 1]);
            /* LoopNest 3 */
            for (unsigned int i_8 = 0; i_8 < 22; i_8 += 3) 
            {
                for (unsigned int i_9 = 2; i_9 < 20; i_9 += 2) 
                {
                    for (unsigned long long int i_10 = 0; i_10 < 22; i_10 += 2) 
                    {
                        {
                            arr_32 [i_3] [i_7] [i_8] [(unsigned short)2] [i_7] [i_10] |= ((/* implicit */short) arr_29 [i_10] [i_9] [i_9 - 2] [i_8] [i_7] [i_3]);
                            arr_33 [i_7] [i_7] |= ((/* implicit */short) ((((((/* implicit */int) (unsigned short)9)) ^ (1291347240))) + (min((((1712711904) * (((/* implicit */int) (_Bool)0)))), (((((/* implicit */int) (unsigned short)65523)) ^ (2097151)))))));
                            arr_34 [i_3] [(_Bool)1] [i_8] [(short)4] [i_9] [(unsigned char)11] [i_10] = ((/* implicit */int) max(((unsigned char)210), (((/* implicit */unsigned char) (_Bool)1))));
                            var_26 = max((((/* implicit */int) max((((/* implicit */unsigned char) arr_24 [i_3] [17U] [(unsigned char)9] [i_3 - 1])), (arr_11 [i_3 - 1] [i_3 - 1])))), (((var_8) | (((/* implicit */int) arr_24 [i_3] [i_3] [i_3 - 1] [i_3 - 1])))));
                            var_27 = ((/* implicit */int) (((!(((/* implicit */_Bool) (unsigned short)2)))) && (((_Bool) arr_15 [i_9 - 2] [i_9] [i_9 + 1] [i_9 + 1]))));
                        }
                    } 
                } 
            } 
        }
    }
    for (int i_11 = 2; i_11 < 9; i_11 += 4) 
    {
        arr_37 [6] |= ((/* implicit */_Bool) ((min((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-25562))) | (0ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1723085991)) ? (((/* implicit */int) arr_29 [i_11] [i_11] [i_11] [(signed char)0] [i_11] [i_11])) : (-1035307320)))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)25)))));
        /* LoopNest 3 */
        for (int i_12 = 1; i_12 < 10; i_12 += 1) 
        {
            for (int i_13 = 0; i_13 < 11; i_13 += 2) 
            {
                for (unsigned char i_14 = 0; i_14 < 11; i_14 += 2) 
                {
                    {
                        arr_44 [i_12] [(short)0] [i_13] [(unsigned short)3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) (signed char)-1)), (arr_40 [i_12] [i_11 - 1] [i_12 - 1])))) ? (max((((/* implicit */unsigned int) ((16579322156002971030ULL) >= (18446744073709551615ULL)))), (arr_26 [18ULL] [i_11] [i_12] [i_12 + 1]))) : (((/* implicit */unsigned int) ((/* implicit */int) max((((((/* implicit */_Bool) 1824493828)) && (((/* implicit */_Bool) arr_31 [i_14] [i_13] [i_12] [i_12] [19U])))), (var_15)))))));
                        arr_45 [i_14] [(_Bool)1] [i_12] [i_12 - 1] [(unsigned short)0] = ((/* implicit */short) ((((/* implicit */_Bool) (-(14)))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)205))))) ? (((((/* implicit */_Bool) (signed char)1)) ? (1750399019675010208ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)16854))))) : (arr_38 [i_12] [i_11 + 2]))) : (((34359607296ULL) ^ (((/* implicit */unsigned long long int) -8441737557258604649LL))))));
                    }
                } 
            } 
        } 
    }
    for (int i_15 = 0; i_15 < 14; i_15 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned int i_16 = 0; i_16 < 14; i_16 += 3) 
        {
            for (unsigned long long int i_17 = 0; i_17 < 14; i_17 += 2) 
            {
                for (int i_18 = 3; i_18 < 12; i_18 += 4) 
                {
                    {
                        arr_56 [i_15] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_47 [i_18 - 3])) & (18446744073709551615ULL)))) ? (((arr_14 [i_18 + 1] [i_16]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_17] [i_18 - 1] [i_18 + 1] [4] [i_18] [2ULL]))) : (arr_47 [i_18 - 1]))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_47 [i_18 - 1]))))))));
                        arr_57 [i_15] [i_15] [i_17] [i_15] [i_17] = ((/* implicit */short) arr_53 [i_17]);
                    }
                } 
            } 
        } 
        var_28 = ((/* implicit */int) ((2133881966) < (((((/* implicit */_Bool) (unsigned char)72)) ? (-1972039736) : (373591833)))));
        arr_58 [i_15] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_30 [i_15] [i_15] [i_15] [(_Bool)1] [i_15] [i_15])) ? (((((/* implicit */_Bool) (unsigned char)64)) ? (274810798080ULL) : (((/* implicit */unsigned long long int) 2044)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)81)) || (((/* implicit */_Bool) arr_30 [i_15] [i_15] [i_15] [i_15] [i_15] [i_15]))))))));
    }
    var_29 = ((/* implicit */short) 373591833);
}
