/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153228
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
    var_11 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) var_4)) & (var_1)));
    var_12 = ((/* implicit */signed char) var_0);
    var_13 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) var_10)) < (max((((/* implicit */unsigned long long int) max((((/* implicit */int) var_0)), (var_5)))), (((((/* implicit */unsigned long long int) var_9)) ^ (var_1)))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 2; i_0 < 7; i_0 += 4) 
    {
        for (unsigned char i_1 = 2; i_1 < 8; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    var_14 = ((/* implicit */signed char) min((max((18446744073709551596ULL), (((/* implicit */unsigned long long int) arr_3 [i_0 + 2])))), (((/* implicit */unsigned long long int) max((arr_3 [i_0 - 2]), (arr_3 [i_0 + 3]))))));
                    arr_6 [i_1] [i_1 - 1] = ((/* implicit */_Bool) max((((((/* implicit */unsigned long long int) arr_1 [i_0 + 1] [i_0 + 3])) | (39ULL))), (((/* implicit */unsigned long long int) max((-600719619), (var_9))))));
                    var_15 = ((/* implicit */unsigned int) ((max((arr_1 [(unsigned char)4] [(signed char)8]), (((/* implicit */unsigned int) var_6)))) == (((/* implicit */unsigned int) ((arr_3 [i_0 + 2]) ? (((/* implicit */int) arr_2 [i_0 + 3] [(short)1])) : (((/* implicit */int) ((18446744073709551581ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [(_Bool)1] [i_1])))))))))));
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned char i_5 = 0; i_5 < 15; i_5 += 2) 
            {
                for (unsigned long long int i_6 = 3; i_6 < 13; i_6 += 4) 
                {
                    {
                        arr_19 [i_3] [i_3] [i_3] [(signed char)10] [(signed char)10] [(signed char)10] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned char)157)), (134217727)))) > (max((((/* implicit */unsigned long long int) (signed char)-17)), (18446744073709551609ULL)))));
                        var_16 -= ((/* implicit */unsigned char) max(((((!(((/* implicit */_Bool) var_0)))) ? (max((((/* implicit */int) arr_18 [i_3] [i_4] [i_4] [i_6])), (var_10))) : (var_10))), ((+(((/* implicit */int) (signed char)-8))))));
                        var_17 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_4)))) % (((((18446744073709551581ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) / (((/* implicit */unsigned long long int) max((var_10), (((/* implicit */int) var_0)))))))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (signed char i_7 = 1; i_7 < 11; i_7 += 2) 
            {
                for (signed char i_8 = 2; i_8 < 14; i_8 += 1) 
                {
                    {
                        /* LoopSeq 4 */
                        for (unsigned int i_9 = 0; i_9 < 15; i_9 += 2) 
                        {
                            var_18 += ((/* implicit */unsigned char) max((min((var_4), (((/* implicit */unsigned int) var_9)))), (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)10)))))));
                            var_19 = (~(((/* implicit */int) max(((short)24109), (((/* implicit */short) (signed char)1))))));
                            var_20 = max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) > (((/* implicit */int) (unsigned short)65535))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)8)))))) ? (((/* implicit */unsigned long long int) -698814880)) : ((((_Bool)1) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)96))))))));
                        }
                        /* vectorizable */
                        for (int i_10 = 0; i_10 < 15; i_10 += 3) 
                        {
                            arr_31 [i_10] [i_8 - 1] [i_3] [i_7] [i_3] [i_3] [(unsigned char)14] = ((/* implicit */int) (!(((/* implicit */_Bool) var_6))));
                            var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) ((((/* implicit */_Bool) -216007354)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (_Bool)1)))))));
                            arr_32 [i_3] [i_3] [i_3] = ((3830203244121455849ULL) >> (((((/* implicit */int) arr_13 [i_4] [i_7] [i_8 - 1])) - (152))));
                            arr_33 [i_3] [i_4] [i_7] [i_8] [i_10] = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) (unsigned short)16383)) - (16369)))));
                            var_22 *= ((/* implicit */short) (~(((/* implicit */int) (signed char)-125))));
                        }
                        for (signed char i_11 = 0; i_11 < 15; i_11 += 2) 
                        {
                            var_23 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_3] [i_4] [i_7]))) : (20ULL)))));
                            var_24 ^= ((/* implicit */unsigned long long int) (+(((((/* implicit */int) (signed char)105)) - (((/* implicit */int) (unsigned short)65528))))));
                            var_25 ^= ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)118))))) ? (((/* implicit */int) (unsigned short)0)) : (-609685165)))));
                        }
                        for (unsigned short i_12 = 0; i_12 < 15; i_12 += 2) 
                        {
                            arr_39 [i_3] [i_8] [i_7] [i_3] [i_3] = ((/* implicit */unsigned char) ((max((min((1672012790U), (arr_9 [i_12]))), ((-(2433911601U))))) / (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (signed char)35)) : (var_10))))));
                            var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) (unsigned char)249)), (arr_27 [i_3] [i_3] [i_3] [i_3] [i_3] [i_12] [i_3]))))) == (max((((/* implicit */unsigned long long int) arr_36 [i_3])), (var_1))))))));
                            var_27 = ((/* implicit */unsigned int) min(((~(((/* implicit */int) (signed char)-11)))), (max((arr_15 [i_3] [8ULL] [i_3] [i_3]), (((/* implicit */int) (signed char)7))))));
                        }
                        var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((_Bool)0) ? (7ULL) : (2ULL)))) ? (max((((/* implicit */unsigned int) var_5)), (var_4))) : (((/* implicit */unsigned int) (-(var_10))))));
                    }
                } 
            } 
            arr_40 [i_3] = ((((/* implicit */_Bool) ((-26186628) ^ (1803655932)))) ? (((/* implicit */int) (signed char)25)) : (max((-2066087036), (781434389))));
            var_29 &= ((/* implicit */int) max((max((-1094622778362707275LL), (3496054963239880324LL))), (((/* implicit */long long int) ((var_9) != (-1803655927))))));
        }
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
        {
            arr_43 [i_3] = ((/* implicit */unsigned int) (-(max((4ULL), (((/* implicit */unsigned long long int) arr_12 [i_3] [i_13] [i_3]))))));
            arr_44 [i_3] [i_3] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((-802180630) + (((/* implicit */int) (unsigned char)19))))) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned char) arr_25 [i_3] [i_3] [i_3] [i_13] [i_13] [i_13] [i_13])), (arr_11 [i_3] [i_13] [i_3]))))) : (((5614810663204396800LL) - (((/* implicit */long long int) ((/* implicit */int) var_0))))))), (((/* implicit */long long int) ((((/* implicit */int) arr_20 [i_13] [5LL] [i_3])) % (((/* implicit */int) (signed char)9)))))));
        }
        arr_45 [i_3] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) 2780792422U)))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_13 [(unsigned short)3] [(unsigned short)3] [i_3])), (2780792422U)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) -26186648)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_0))))) : (2780792416U))) : (((/* implicit */unsigned int) max((((/* implicit */int) (signed char)74)), (1723070505))))));
        var_30 = ((/* implicit */_Bool) max((((/* implicit */unsigned short) (signed char)-16)), ((unsigned short)17398)));
    }
    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) /* same iter space */
    {
        arr_48 [i_14] = ((/* implicit */unsigned int) (((~(((/* implicit */int) (signed char)122)))) != (((((/* implicit */_Bool) arr_15 [i_14] [i_14] [i_14] [i_14])) ? (var_10) : (arr_15 [i_14] [i_14] [i_14] [i_14])))));
        var_31 ^= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), (arr_11 [i_14] [i_14] [14U])))) ^ (((((/* implicit */int) arr_24 [i_14] [10] [i_14])) | (((/* implicit */int) arr_26 [i_14] [i_14] [12U] [i_14] [(unsigned short)9]))))))) * (min((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)22756))) + (18446744073709551613ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_26 [i_14] [i_14] [i_14] [i_14] [i_14])) ^ (((/* implicit */int) arr_16 [i_14] [i_14])))))))));
    }
    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) /* same iter space */
    {
        var_32 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((max((2169916069U), (3947629691U))) << (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (229131304U)))))), ((-(max((17456257698408366418ULL), (((/* implicit */unsigned long long int) 759298689))))))));
        var_33 = ((/* implicit */unsigned long long int) ((max((((/* implicit */int) (signed char)-63)), (arr_12 [14] [14] [i_15]))) == (((/* implicit */int) max(((signed char)34), ((signed char)-74))))));
    }
}
