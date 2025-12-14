/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175985
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175985 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175985
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
    /* LoopSeq 4 */
    for (signed char i_0 = 2; i_0 < 12; i_0 += 4) 
    {
        var_10 = ((/* implicit */signed char) min((var_10), (((/* implicit */signed char) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */short) arr_1 [i_0] [(signed char)3])), (arr_0 [i_0]))))))), (max((max((var_8), (var_8))), (((/* implicit */unsigned int) ((signed char) var_8))))))))));
        var_11 ^= ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_0 [i_0 - 2])) ? (((/* implicit */unsigned long long int) 3590457752U)) : (3127511659024728607ULL)))));
        var_12 += ((/* implicit */unsigned int) max((var_6), (max((((/* implicit */unsigned long long int) var_3)), (min((((/* implicit */unsigned long long int) var_5)), (0ULL)))))));
        var_13 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 704509543U)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) 0ULL))))))) ? (((/* implicit */long long int) max((((((/* implicit */int) var_7)) << (((11554810960212392808ULL) - (11554810960212392800ULL))))), (((/* implicit */int) min((arr_0 [i_0]), (arr_0 [i_0]))))))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)222))) : (var_3)))));
    }
    for (signed char i_1 = 1; i_1 < 9; i_1 += 4) 
    {
        var_14 = ((/* implicit */unsigned long long int) ((unsigned int) (~(((/* implicit */int) arr_1 [i_1] [i_1])))));
        var_15 ^= ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) arr_0 [i_1 - 1])), (0ULL)));
    }
    for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 1) /* same iter space */
    {
        var_16 = ((/* implicit */unsigned char) arr_5 [i_2]);
        var_17 += (~(((/* implicit */int) ((((/* implicit */int) arr_5 [(signed char)0])) < (((/* implicit */int) var_1))))));
        var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((long long int) 16620018515308475065ULL)), (((/* implicit */long long int) ((unsigned char) 1583583570315650321LL)))))) ? (((((/* implicit */_Bool) arr_4 [i_2])) ? (min((((/* implicit */unsigned long long int) var_1)), (0ULL))) : (arr_4 [i_2]))) : ((((_Bool)0) ? (var_6) : (0ULL)))));
    }
    /* vectorizable */
    for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 1) /* same iter space */
    {
        var_19 = ((/* implicit */signed char) var_9);
        /* LoopSeq 3 */
        for (unsigned short i_4 = 0; i_4 < 18; i_4 += 4) 
        {
            arr_12 [i_3] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)71))));
            var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) arr_10 [(unsigned char)2] [i_4]))));
        }
        for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 1) 
        {
            var_21 &= ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_7))));
            arr_15 [i_3] [i_3] [i_5] = ((/* implicit */int) arr_5 [i_3]);
            arr_16 [i_3] = ((/* implicit */int) arr_11 [i_3] [i_3] [i_3]);
            var_22 += ((/* implicit */unsigned int) ((short) arr_10 [i_3] [14ULL]));
        }
        for (short i_6 = 1; i_6 < 15; i_6 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned char i_7 = 0; i_7 < 18; i_7 += 1) 
            {
                for (unsigned long long int i_8 = 0; i_8 < 18; i_8 += 1) 
                {
                    for (unsigned long long int i_9 = 0; i_9 < 18; i_9 += 2) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) ((arr_10 [i_3] [i_9]) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) var_0))))))))));
                            var_24 = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) 4367869552062784058ULL)) ? (9223372036854775807LL) : (((/* implicit */long long int) 1317290340U)))));
                        }
                    } 
                } 
            } 
            var_25 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((var_8) + (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_3] [i_3] [i_3] [i_3] [i_3] [i_6])))))) ? ((~(((/* implicit */int) (unsigned char)147)))) : (((/* implicit */int) (signed char)19))));
            var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_10 [i_3] [i_3])) ? (arr_10 [i_3] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
            arr_28 [i_3] = ((/* implicit */unsigned long long int) ((unsigned char) arr_22 [i_3] [i_6 + 3]));
        }
        var_27 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (unsigned char)73)))) ? (((((/* implicit */_Bool) 1826725558401076545ULL)) ? (((/* implicit */int) (short)31425)) : (((/* implicit */int) (unsigned char)217)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))));
    }
    var_28 = ((/* implicit */short) (((-9223372036854775807LL - 1LL)) % (((/* implicit */long long int) ((/* implicit */int) var_7)))));
    var_29 = (~(min((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_2))))), (max((9007164895002624ULL), (((/* implicit */unsigned long long int) var_3)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_10 = 2; i_10 < 11; i_10 += 3) 
    {
        var_30 = ((/* implicit */signed char) ((((unsigned long long int) -8194272747028039632LL)) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0ULL)) ? (arr_6 [i_10]) : (((/* implicit */long long int) var_9)))))));
        var_31 = ((/* implicit */signed char) var_3);
        var_32 = ((/* implicit */long long int) ((unsigned long long int) (signed char)7));
        var_33 = ((/* implicit */signed char) (~(((/* implicit */int) var_4))));
    }
}
