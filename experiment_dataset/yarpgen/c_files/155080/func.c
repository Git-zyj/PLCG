/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155080
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155080 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155080
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
    var_13 = ((/* implicit */unsigned char) min((((long long int) ((((/* implicit */_Bool) var_5)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))), (((/* implicit */long long int) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (var_5))) & (((/* implicit */unsigned int) (~(((/* implicit */int) var_6))))))))));
    /* LoopSeq 4 */
    for (unsigned short i_0 = 2; i_0 < 19; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) (~(max((max((331589897U), (((/* implicit */unsigned int) arr_2 [i_0])))), (((/* implicit */unsigned int) arr_1 [i_0 + 1]))))));
        var_14 = ((/* implicit */unsigned short) ((max((max((arr_2 [i_0]), (arr_2 [i_0]))), (((/* implicit */int) ((short) arr_1 [i_0]))))) << (((max((max((331589904U), (((/* implicit */unsigned int) var_6)))), (((/* implicit */unsigned int) ((short) 3963377387U))))) - (331589899U)))));
    }
    for (unsigned long long int i_1 = 2; i_1 < 20; i_1 += 2) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned char) 331589921U);
        /* LoopSeq 4 */
        for (short i_2 = 0; i_2 < 21; i_2 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned char i_3 = 2; i_3 < 18; i_3 += 4) 
            {
                for (signed char i_4 = 0; i_4 < 21; i_4 += 4) 
                {
                    {
                        var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) (+(max((max((((/* implicit */int) var_2)), (arr_9 [i_1] [i_2] [i_2]))), (arr_7 [i_1 - 1]))))))));
                        var_17 ^= ((/* implicit */int) max((((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */int) var_2)), (var_10))))))), (var_0)));
                    }
                } 
            } 
            var_18 = ((/* implicit */short) max((var_18), ((short)-25575)));
        }
        for (short i_5 = 0; i_5 < 21; i_5 += 3) /* same iter space */
        {
            arr_16 [i_5] [(unsigned char)5] [i_5] = ((/* implicit */unsigned long long int) (-(min((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)185))) - (3963377398U))), (((/* implicit */unsigned int) (~(-550471627))))))));
            var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3963377398U)) ? (((/* implicit */long long int) 3963377373U)) : ((-9223372036854775807LL - 1LL))))) ? ((+(((/* implicit */int) (short)-25588)))) : (((/* implicit */int) min((((/* implicit */unsigned char) ((var_1) > (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))), (arr_6 [i_1]))))));
        }
        for (signed char i_6 = 3; i_6 < 20; i_6 += 1) /* same iter space */
        {
            var_20 &= (+(((/* implicit */int) arr_14 [i_1] [i_6 - 2] [i_6])));
            /* LoopNest 2 */
            for (unsigned long long int i_7 = 1; i_7 < 20; i_7 += 2) 
            {
                for (unsigned int i_8 = 0; i_8 < 21; i_8 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_9 = 1; i_9 < 20; i_9 += 3) 
                        {
                            arr_26 [i_1 - 1] [i_6] [i_7 + 1] [i_8] [i_7] = ((/* implicit */_Bool) ((short) (~(arr_13 [i_1 + 1] [i_6 - 2] [(_Bool)1] [i_8] [i_9 - 1]))));
                            var_21 = ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */unsigned int) 550471603)) == (((((/* implicit */_Bool) (short)25587)) ? (331589908U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)67))))))))));
                            arr_27 [(unsigned char)19] [i_6] [i_7] [i_8] [i_7] = ((/* implicit */int) var_11);
                        }
                        var_22 += ((/* implicit */unsigned char) 4769273289760634021LL);
                        var_23 = ((/* implicit */unsigned short) var_10);
                        var_24 += (((~(((/* implicit */int) arr_19 [i_1] [i_6 - 3] [i_6 - 1] [i_7 + 1])))) ^ (((/* implicit */int) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_11 [i_1 + 1] [i_6] [i_6] [(unsigned char)2] [i_8] [11LL])))) > (arr_9 [i_8] [19ULL] [(unsigned char)3])))));
                        var_25 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max(((short)25594), ((short)-25603)))) ? (((((/* implicit */int) (signed char)6)) | (((/* implicit */int) (short)-25576)))) : (((/* implicit */int) (short)25598)))))));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (unsigned int i_10 = 3; i_10 < 17; i_10 += 1) 
            {
                for (signed char i_11 = 1; i_11 < 18; i_11 += 1) 
                {
                    for (unsigned long long int i_12 = 0; i_12 < 21; i_12 += 3) 
                    {
                        {
                            var_26 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(((((/* implicit */long long int) arr_34 [i_1])) - (var_8))))))));
                            arr_36 [i_6] [i_10 + 3] [i_11] [i_11] = ((/* implicit */unsigned int) arr_14 [i_11 + 3] [i_12] [i_11 + 3]);
                        }
                    } 
                } 
            } 
        }
        for (signed char i_13 = 3; i_13 < 20; i_13 += 1) /* same iter space */
        {
            var_27 -= ((/* implicit */unsigned short) max(((-(((((/* implicit */int) var_9)) / (((/* implicit */int) var_2)))))), (((/* implicit */int) arr_11 [i_1] [i_1] [i_13] [i_13 + 1] [i_13] [i_13 - 1]))));
            arr_40 [i_13] = ((/* implicit */unsigned char) ((max((((/* implicit */int) ((((/* implicit */_Bool) arr_34 [i_13])) || (((/* implicit */_Bool) arr_8 [i_1] [i_13] [i_13]))))), (((((/* implicit */int) arr_33 [i_13] [i_13 - 1] [i_13] [i_13] [10])) + (var_10))))) > (((/* implicit */int) (unsigned char)8))));
            arr_41 [i_13] = ((/* implicit */long long int) arr_4 [i_13]);
            var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) ((arr_31 [i_13] [i_1] [i_1]) ? (((/* implicit */int) (unsigned char)39)) : (((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)26)) ? (((/* implicit */int) (signed char)-12)) : (((/* implicit */int) (signed char)-124))))) : (max((((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))))), ((-(var_1)))))));
            var_29 = ((/* implicit */unsigned long long int) max((var_29), (((/* implicit */unsigned long long int) (((!((!((_Bool)1))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (short)-25573))))) : ((~(var_1))))))));
        }
        var_30 |= ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) ((5595480665392685749LL) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0)))))) ? (arr_7 [i_1]) : (((/* implicit */int) var_0))))));
        var_31 = ((/* implicit */unsigned char) min((var_31), (((/* implicit */unsigned char) (((((~((-(((/* implicit */int) var_3)))))) + (2147483647))) << (((((/* implicit */int) ((((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) arr_12 [13ULL] [i_1] [i_1 - 2] [i_1]))))) < (((/* implicit */int) ((unsigned char) arr_18 [i_1 + 1] [i_1 - 1])))))) - (1))))))));
        var_32 |= ((/* implicit */unsigned short) -1973380731);
    }
    for (unsigned long long int i_14 = 2; i_14 < 20; i_14 += 2) /* same iter space */
    {
        var_33 = ((/* implicit */unsigned long long int) max((max((max((((/* implicit */long long int) var_4)), (9223372036854775807LL))), (((/* implicit */long long int) ((unsigned int) arr_29 [i_14]))))), (((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_34 [i_14]), (((/* implicit */int) (short)25603))))) ? (((/* implicit */unsigned int) arr_28 [i_14 - 2] [i_14 - 2] [i_14 - 2] [i_14 - 1])) : (max((((/* implicit */unsigned int) var_10)), (var_7))))))));
        var_34 = ((/* implicit */long long int) (-(max((((/* implicit */unsigned long long int) var_12)), (arr_13 [i_14 - 2] [i_14] [i_14 + 1] [i_14] [i_14])))));
    }
    /* vectorizable */
    for (unsigned int i_15 = 1; i_15 < 13; i_15 += 4) 
    {
        var_35 -= (!(((/* implicit */_Bool) ((((/* implicit */int) var_6)) | (var_12)))));
        arr_48 [i_15] [i_15] = ((/* implicit */unsigned int) (((-9223372036854775807LL - 1LL)) ^ (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
    }
    var_36 = ((/* implicit */unsigned char) var_7);
    /* LoopSeq 1 */
    for (signed char i_16 = 0; i_16 < 24; i_16 += 4) 
    {
        var_37 = ((/* implicit */short) max((var_37), (((/* implicit */short) var_5))));
        /* LoopSeq 1 */
        for (unsigned short i_17 = 3; i_17 < 23; i_17 += 4) 
        {
            arr_55 [i_16] [i_17] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) (-(((/* implicit */int) (short)10805))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_51 [i_16] [i_16]))) : (15755455354989406669ULL))))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) var_0)), (arr_54 [i_16] [i_17 + 1] [i_17]))))));
            var_38 = ((/* implicit */signed char) ((((min((((/* implicit */long long int) (short)-10802)), (arr_52 [i_17 - 1]))) + (9223372036854775807LL))) << (((((/* implicit */int) (signed char)105)) - (105)))));
        }
        arr_56 [i_16] [i_16] |= ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((((/* implicit */int) var_9)) / (((/* implicit */int) (unsigned char)230))))) ? (((var_8) / (((/* implicit */long long int) ((/* implicit */int) arr_53 [i_16] [i_16]))))) : (((var_8) | (((/* implicit */long long int) ((/* implicit */int) (unsigned char)160))))))), (((/* implicit */long long int) max((((/* implicit */unsigned int) max((arr_51 [i_16] [i_16]), ((signed char)79)))), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_50 [i_16]))) : (var_1))))))));
    }
}
