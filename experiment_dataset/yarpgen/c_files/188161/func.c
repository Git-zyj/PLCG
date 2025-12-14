/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188161
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
    for (long long int i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 8; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */int) var_10);
                arr_4 [i_1] [i_1] = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) (!((_Bool)1)))) >= (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-1))) < ((-9223372036854775807LL - 1LL))))))))));
                /* LoopSeq 4 */
                /* vectorizable */
                for (unsigned char i_2 = 2; i_2 < 7; i_2 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 4; i_3 < 7; i_3 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (long long int i_4 = 2; i_4 < 8; i_4 += 1) 
                        {
                            var_13 ^= ((/* implicit */short) 14661308106193031457ULL);
                            var_14 = ((/* implicit */_Bool) ((unsigned char) ((_Bool) var_4)));
                        }
                        for (unsigned char i_5 = 1; i_5 < 7; i_5 += 1) 
                        {
                            arr_13 [i_5 + 2] [i_3 - 2] [i_1] [i_2] [i_1] [i_0 - 1] [i_0 - 1] = ((/* implicit */unsigned short) ((16228516339540147854ULL) >= (((/* implicit */unsigned long long int) (-(2147483647))))));
                            var_15 = ((/* implicit */unsigned char) (short)-10608);
                            arr_14 [i_3] [i_3 + 2] [i_3 - 3] [i_3] [i_3 + 2] [i_3] = ((/* implicit */short) (~(-9223372036854775795LL)));
                            var_16 = ((/* implicit */unsigned long long int) ((unsigned char) var_10));
                            var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */int) var_3)) % (((/* implicit */int) arr_11 [i_2 - 2] [i_2] [i_2 - 2] [i_2] [i_2] [i_2 - 1])))) : ((-(((/* implicit */int) (short)30481))))));
                        }
                        arr_15 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2] = (!(((/* implicit */_Bool) var_1)));
                        var_18 ^= ((/* implicit */unsigned char) (unsigned short)45482);
                        var_19 = ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32450))) + (1208367934450945774ULL));
                    }
                    arr_16 [i_2] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_12 [i_2 - 2] [i_1 + 2] [i_1] [i_1 + 1] [i_1] [i_0 - 1])) ? (((/* implicit */int) var_1)) : (((int) 1208367934450945766ULL))));
                    var_20 = ((/* implicit */int) arr_9 [i_0] [i_0] [i_1] [i_0] [i_2]);
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 0; i_6 < 10; i_6 += 4) 
                    {
                        for (int i_7 = 0; i_7 < 10; i_7 += 2) 
                        {
                            {
                                arr_21 [i_0] [i_0] [i_0] = ((/* implicit */short) 9223372036854775807LL);
                                var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)58375)) <= (((/* implicit */int) ((_Bool) (_Bool)1))))))));
                                var_22 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (signed char)-75)) : (var_8)));
                            }
                        } 
                    } 
                }
                for (unsigned long long int i_8 = 0; i_8 < 10; i_8 += 1) 
                {
                    var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) arr_5 [i_8] [i_1] [i_8] [i_8]))));
                    var_24 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)26)))) ? (((/* implicit */int) min(((short)0), (((/* implicit */short) (_Bool)1))))) : (((/* implicit */int) (signed char)14))))) - (((((/* implicit */_Bool) max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) 0LL)) : (((((/* implicit */_Bool) 1063606256334776889ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32765))) : (18446744073709551615ULL)))))));
                    var_25 *= ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -9223372036854775795LL)) ? (((/* implicit */int) arr_2 [i_8] [i_8])) : (((/* implicit */int) (_Bool)1))))) && (((/* implicit */_Bool) max((16510601242110297414ULL), (((/* implicit */unsigned long long int) var_10)))))))) != (((int) (-(((/* implicit */int) (signed char)-16)))))));
                    var_26 = ((/* implicit */short) ((((/* implicit */_Bool) (~(var_6)))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((arr_20 [i_1 + 1] [i_0 - 1] [i_0 - 1]), (arr_20 [i_1 + 1] [i_0 + 1] [i_0 - 1]))))) : (((((/* implicit */_Bool) 8725724278030336LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) (short)-32433)), ((unsigned short)7))))) : (max((1U), (((/* implicit */unsigned int) (short)-44))))))));
                }
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_10 = 0; i_10 < 10; i_10 += 2) 
                    {
                        arr_29 [i_0] [i_0] [i_0] [i_10] |= ((/* implicit */unsigned short) max((((/* implicit */int) (!(((/* implicit */_Bool) var_11))))), (max((((((/* implicit */int) (short)469)) | (((/* implicit */int) arr_12 [i_0 + 1] [i_0] [i_1 + 2] [i_1 + 2] [i_9] [i_9])))), (((/* implicit */int) arr_23 [i_0 + 1] [i_1] [i_1 + 2] [i_10]))))));
                        var_27 = ((/* implicit */unsigned long long int) ((long long int) 1));
                        var_28 ^= ((/* implicit */unsigned short) ((((/* implicit */int) var_10)) < (((/* implicit */int) arr_2 [i_10] [i_9]))));
                    }
                    /* LoopNest 2 */
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        for (unsigned long long int i_12 = 0; i_12 < 10; i_12 += 4) 
                        {
                            {
                                var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)14336)))))));
                                var_30 &= ((((/* implicit */_Bool) (~(((/* implicit */int) arr_11 [i_0] [i_0 - 1] [i_9] [i_12] [i_1 + 1] [i_0 - 1]))))) ? (min((((/* implicit */int) ((((/* implicit */_Bool) (short)32429)) || ((_Bool)0)))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_24 [i_0 - 1] [i_0] [i_0 + 1] [i_0 - 1])) : (((/* implicit */int) (_Bool)0)))))) : (((/* implicit */int) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned short)7247)) : (((/* implicit */int) (unsigned short)7523)))) >= (((/* implicit */int) arr_6 [i_0] [i_0] [i_9] [i_11]))))));
                                var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)4)) ? (min((8725724278030336LL), (((/* implicit */long long int) arr_25 [i_0])))) : (-6175565396967811352LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)19))) : (var_6)));
                                var_32 = 1691501279031086824ULL;
                                arr_35 [i_0] [i_11] [i_9] [i_11] [i_11] = ((/* implicit */_Bool) (unsigned short)62440);
                            }
                        } 
                    } 
                    var_33 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (signed char)-10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_0)))) : (arr_9 [i_0] [i_1] [i_1 + 1] [i_9] [i_9]))) <= (((/* implicit */unsigned long long int) (-(var_7))))));
                }
                for (short i_13 = 0; i_13 < 10; i_13 += 4) 
                {
                    var_34 -= ((/* implicit */unsigned char) var_8);
                    var_35 = ((/* implicit */signed char) (unsigned short)59065);
                }
            }
        } 
    } 
    var_36 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) ? (16755242794678464789ULL) : (((((/* implicit */_Bool) ((((-1934904887) + (2147483647))) >> (((1691501279031086826ULL) - (1691501279031086804ULL)))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) + (var_0))) : (((/* implicit */unsigned long long int) var_8))))));
    var_37 = ((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned short)7251)), (max((((/* implicit */int) (unsigned char)178)), (min((((/* implicit */int) var_11)), (var_8)))))));
    /* LoopNest 2 */
    for (unsigned char i_14 = 1; i_14 < 22; i_14 += 1) 
    {
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
        {
            {
                arr_44 [i_15] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 11456865924788393840ULL)) ? (((/* implicit */unsigned long long int) 1287247534)) : (16755242794678464813ULL)))) ? (((/* implicit */int) max((((unsigned short) (_Bool)1)), (var_11)))) : ((-(arr_42 [i_14 + 2] [i_15] [i_15])))));
                var_38 += ((/* implicit */unsigned int) ((_Bool) -1771671107));
                var_39 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(arr_43 [i_14 + 1]))))));
                arr_45 [(short)14] [i_15] [(short)14] |= ((/* implicit */unsigned char) min((var_1), (((/* implicit */unsigned short) ((short) min((1771671106), (((/* implicit */int) (signed char)-66))))))));
                /* LoopNest 2 */
                for (signed char i_16 = 3; i_16 < 23; i_16 += 2) 
                {
                    for (unsigned short i_17 = 1; i_17 < 23; i_17 += 2) 
                    {
                        {
                            var_40 ^= ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), (var_1))))) <= (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) : (536870911LL))))))));
                            var_41 = ((/* implicit */short) max(((~(arr_42 [i_15] [i_16 + 1] [i_15]))), (-1771671107)));
                            var_42 = ((/* implicit */unsigned long long int) (~(((arr_52 [i_14] [i_14] [i_16 + 2]) & (((/* implicit */unsigned int) ((/* implicit */int) (short)32412)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_43 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (short)-16433)), (((var_0) >> (0ULL)))));
}
