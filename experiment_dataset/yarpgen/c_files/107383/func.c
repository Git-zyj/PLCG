/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107383
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
    var_18 = ((/* implicit */signed char) min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) (~(var_4)))) : (min((((/* implicit */unsigned long long int) var_6)), (var_9))))), (max((((var_16) << (((var_9) - (11090101590900631482ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_17)) ? (var_14) : (var_1))))))));
    var_19 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) 2269814212194729984LL)) ? (5351728466854316093ULL) : (5146582725838232305ULL)));
    var_20 = var_17;
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 3; i_1 < 19; i_1 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned long long int i_2 = 2; i_2 < 21; i_2 += 3) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    for (unsigned int i_4 = 1; i_4 < 19; i_4 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned char) max((((((/* implicit */int) var_0)) < (((/* implicit */int) (signed char)-26)))), (var_10)));
                            arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_2] = (i_2 % 2 == zero) ? (((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned short)19152)) ? (((unsigned long long int) arr_12 [i_0] [i_0] [i_0])) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_8), (var_10))))))) / (((/* implicit */unsigned long long int) ((arr_0 [i_1]) << (((arr_14 [(short)12] [i_4 - 1] [i_4 + 2] [i_4] [i_2]) - (1219101109U))))))))) : (((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned short)19152)) ? (((unsigned long long int) arr_12 [i_0] [i_0] [i_0])) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_8), (var_10))))))) / (((/* implicit */unsigned long long int) ((arr_0 [i_1]) << (((((arr_14 [(short)12] [i_4 - 1] [i_4 + 2] [i_4] [i_2]) - (1219101109U))) - (3705101199U)))))))));
                            var_22 = ((/* implicit */unsigned int) min((var_22), (3155240287U)));
                            arr_17 [(signed char)18] [i_0] [i_2] [i_2] [i_3] [i_4 + 1] = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)19164))));
                        }
                    } 
                } 
            } 
            var_23 = ((/* implicit */long long int) max((var_23), (var_1)));
        }
        for (unsigned short i_5 = 0; i_5 < 22; i_5 += 1) 
        {
            var_24 -= ((/* implicit */unsigned char) ((unsigned long long int) (-(var_13))));
            /* LoopNest 2 */
            for (unsigned int i_6 = 0; i_6 < 22; i_6 += 3) 
            {
                for (short i_7 = 0; i_7 < 22; i_7 += 2) 
                {
                    {
                        var_25 = ((/* implicit */_Bool) ((var_15) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_8))))) ? (((((/* implicit */_Bool) 1081948931313098901ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)19174))) : ((-9223372036854775807LL - 1LL)))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))) <= (arr_0 [i_5]))))))))));
                        var_26 = ((/* implicit */unsigned long long int) var_12);
                        /* LoopSeq 2 */
                        for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
                        {
                            var_27 = ((/* implicit */long long int) ((unsigned long long int) ((long long int) ((((/* implicit */_Bool) 2677739522U)) ? (((/* implicit */unsigned long long int) var_2)) : (15317050194720469928ULL)))));
                            arr_28 [i_7] [i_7] [i_7] [i_7] [i_5] [i_7] [i_7] = ((/* implicit */unsigned char) max((((((((/* implicit */_Bool) arr_25 [i_0] [i_6] [i_7] [i_5])) ? (arr_23 [i_8] [i_5] [i_8] [i_7] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_8))))) ^ (((((/* implicit */_Bool) arr_8 [i_0] [i_5] [i_6] [i_7])) ? (var_7) : (var_13))))), (arr_10 [i_7] [i_7] [15LL])));
                            var_28 = ((/* implicit */unsigned int) arr_8 [i_0] [i_5] [i_7] [i_8 + 1]);
                        }
                        for (signed char i_9 = 0; i_9 < 22; i_9 += 1) 
                        {
                            var_29 ^= ((/* implicit */unsigned int) ((((/* implicit */int) min((((/* implicit */short) var_6)), (arr_29 [3LL] [i_5] [i_6] [i_7] [i_9])))) >= ((+(((/* implicit */int) ((unsigned short) arr_24 [i_0] [i_7])))))));
                            var_30 &= ((((/* implicit */_Bool) max((13502936621612104778ULL), (arr_21 [i_6] [i_6])))) ? (max((((/* implicit */unsigned long long int) var_2)), (arr_21 [i_6] [i_0]))) : (((((/* implicit */_Bool) arr_21 [i_0] [16ULL])) ? (arr_21 [i_0] [i_6]) : (arr_21 [i_0] [i_0]))));
                            arr_32 [i_0] [i_5] [i_5] [i_7] [i_9] = ((/* implicit */_Bool) (+(max((4294967295U), (max((arr_25 [i_0] [i_0] [i_9] [i_5]), (((/* implicit */unsigned int) arr_1 [i_7]))))))));
                            var_31 = ((/* implicit */unsigned long long int) var_5);
                        }
                    }
                } 
            } 
        }
        /* LoopNest 2 */
        for (unsigned int i_10 = 0; i_10 < 22; i_10 += 2) 
        {
            for (unsigned long long int i_11 = 1; i_11 < 21; i_11 += 2) 
            {
                {
                    var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) (unsigned short)19128))) ? (max((((/* implicit */long long int) ((var_10) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_10))))), ((((_Bool)1) ? (612780442461145175LL) : (((/* implicit */long long int) ((/* implicit */int) arr_29 [i_11] [(_Bool)1] [i_11] [14ULL] [i_11 - 1]))))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)180)))));
                    /* LoopSeq 1 */
                    for (signed char i_12 = 0; i_12 < 22; i_12 += 1) 
                    {
                        arr_42 [i_0] [i_0] [i_11] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) arr_10 [i_11 - 1] [i_11 - 1] [i_11 + 1]))) ? (((((/* implicit */_Bool) arr_25 [i_0] [i_11 - 1] [i_11] [i_11])) ? (arr_20 [i_0] [i_11 - 1] [i_11]) : (arr_25 [i_0] [i_11 - 1] [i_11] [i_11]))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)46384)))));
                        var_33 = ((/* implicit */signed char) min((var_33), (((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) max((arr_35 [i_0] [i_0]), (arr_39 [i_12] [i_11] [i_10] [i_0]))))) ? ((~(max((((/* implicit */unsigned long long int) var_10)), (13502936621612104772ULL))))) : (((/* implicit */unsigned long long int) max((arr_10 [i_11 - 1] [i_11 - 1] [i_11 - 1]), (((/* implicit */long long int) var_8))))))))));
                        var_34 += ((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */int) var_10)) & (((/* implicit */int) arr_34 [i_12]))))) ? ((~(13502936621612104771ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) 333825404U)) + (var_13)))))), (((/* implicit */unsigned long long int) (unsigned short)46361))));
                        var_35 = ((((((/* implicit */_Bool) 13502936621612104771ULL)) ? (arr_20 [i_11] [i_11 - 1] [i_11]) : (arr_20 [i_11 - 1] [i_11 - 1] [i_11]))) <= (((/* implicit */unsigned int) ((((/* implicit */int) (short)17598)) % (((/* implicit */int) (signed char)-87))))));
                        var_36 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0]))));
                    }
                }
            } 
        } 
        var_37 = ((/* implicit */int) ((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 17450626260051975664ULL)) ? (var_4) : (1296092188U)))), (max((((/* implicit */unsigned long long int) var_2)), (arr_30 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))) > (((/* implicit */unsigned long long int) var_7))));
    }
    for (unsigned char i_13 = 2; i_13 < 15; i_13 += 2) 
    {
        arr_47 [i_13 - 2] = ((/* implicit */unsigned long long int) ((_Bool) ((arr_18 [i_13 + 1] [i_13 - 2]) | (arr_18 [i_13 + 1] [i_13 - 2]))));
        var_38 = ((/* implicit */unsigned long long int) (~((~(7553009554348645513LL)))));
        var_39 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)25599))))) ? (((unsigned int) arr_5 [i_13 - 1])) : (((/* implicit */unsigned int) ((((arr_3 [i_13]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) ? (((((/* implicit */int) arr_1 [i_13])) << (((var_7) - (3254287902593811759LL))))) : (((/* implicit */int) (unsigned short)12003)))))));
        arr_48 [i_13 + 1] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) var_13)) ? (var_15) : (0ULL))))) <= (((((/* implicit */_Bool) arr_18 [i_13 - 1] [i_13 - 1])) ? (min((var_16), (((/* implicit */unsigned long long int) arr_0 [i_13])))) : (((/* implicit */unsigned long long int) max((var_4), (((/* implicit */unsigned int) var_8)))))))));
    }
    var_40 -= ((/* implicit */unsigned short) ((((/* implicit */int) var_10)) << (((((/* implicit */int) var_0)) >> (((/* implicit */int) var_5))))));
}
