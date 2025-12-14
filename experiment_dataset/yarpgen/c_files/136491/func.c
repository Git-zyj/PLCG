/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136491
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136491 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136491
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
    /* vectorizable */
    for (unsigned long long int i_0 = 3; i_0 < 16; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) (_Bool)1);
        var_15 ^= ((/* implicit */signed char) (unsigned char)35);
        var_16 = ((/* implicit */unsigned char) ((((var_13) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (arr_0 [i_0]))) >= (((/* implicit */long long int) (-(var_12))))));
        var_17 += ((var_2) || (((/* implicit */_Bool) arr_1 [i_0 - 2] [i_0])));
        var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) var_4))));
    }
    for (unsigned short i_1 = 0; i_1 < 18; i_1 += 3) 
    {
        /* LoopNest 3 */
        for (signed char i_2 = 0; i_2 < 18; i_2 += 1) 
        {
            for (int i_3 = 3; i_3 < 17; i_3 += 3) 
            {
                for (unsigned short i_4 = 1; i_4 < 16; i_4 += 3) 
                {
                    {
                        var_19 += ((/* implicit */unsigned char) var_6);
                        arr_13 [i_1] [12U] [12U] [i_4] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_4] [i_3])) != (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)0)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)28671)) ? (((/* implicit */int) (unsigned char)1)) : (((/* implicit */int) (_Bool)1))))))))));
                        arr_14 [i_1] [i_1] [1LL] = ((/* implicit */unsigned short) ((((/* implicit */long long int) max((((/* implicit */unsigned int) (unsigned char)241)), (1516925474U)))) * (((((/* implicit */long long int) arr_1 [i_4] [i_1])) % (var_0)))));
                    }
                } 
            } 
        } 
        arr_15 [i_1] = ((/* implicit */unsigned long long int) var_5);
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_5 = 3; i_5 < 17; i_5 += 4) 
        {
            arr_20 [i_1] = ((/* implicit */unsigned char) arr_4 [i_5]);
            arr_21 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_10 [i_1] [i_5] [i_1])) ? (arr_10 [i_1] [i_1] [i_1]) : (((/* implicit */int) var_9))));
            /* LoopNest 2 */
            for (int i_6 = 2; i_6 < 16; i_6 += 4) 
            {
                for (unsigned long long int i_7 = 0; i_7 < 18; i_7 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (int i_8 = 2; i_8 < 15; i_8 += 1) 
                        {
                            arr_30 [i_8] [i_7] [i_6] [i_6] [(_Bool)1] [i_1] &= ((/* implicit */unsigned short) (-(var_6)));
                            var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_26 [i_5] [4U] [i_5] [i_1])) && (var_13)));
                            var_21 = (i_1 % 2 == 0) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)7)) ? (((/* implicit */unsigned long long int) ((((((/* implicit */int) (signed char)(-127 - 1))) + (2147483647))) >> (((((/* implicit */int) arr_5 [i_1])) - (182)))))) : (arr_22 [i_1])))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)7)) ? (((/* implicit */unsigned long long int) ((((((/* implicit */int) (signed char)(-127 - 1))) + (2147483647))) >> (((((((/* implicit */int) arr_5 [i_1])) - (182))) + (147)))))) : (arr_22 [i_1]))));
                            var_22 = ((/* implicit */unsigned int) arr_2 [i_1] [i_5 - 3]);
                            arr_31 [i_1] [i_1] [i_1] [i_1] [(signed char)17] [7] = 137438953471ULL;
                        }
                        arr_32 [i_1] [i_5] [i_6] [i_7] [i_1] [i_6] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_2 [i_5 - 2] [i_5 - 3]))));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (unsigned int i_9 = 0; i_9 < 18; i_9 += 4) 
            {
                for (unsigned char i_10 = 1; i_10 < 14; i_10 += 1) 
                {
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned char) (-((~(arr_36 [i_5 - 3] [i_10] [i_11])))));
                            var_24 = ((/* implicit */unsigned char) arr_11 [i_1] [i_5] [i_9] [1LL] [i_11]);
                        }
                    } 
                } 
            } 
            arr_39 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_25 [i_1] [i_5] [i_5] [i_1])) ? (-5162788473987799619LL) : (((/* implicit */long long int) ((/* implicit */int) arr_38 [i_1] [i_5 - 2] [i_1] [i_1])))));
        }
        for (long long int i_12 = 4; i_12 < 17; i_12 += 4) 
        {
            var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 18329107579055024252ULL)) ? (((((/* implicit */_Bool) 1104036120)) ? (((/* implicit */int) (unsigned char)2)) : (-1389589762))) : (((/* implicit */int) min(((unsigned char)49), (((unsigned char) (unsigned char)147)))))));
            var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)49855)) % (((/* implicit */int) (unsigned char)255))))) ? (max((var_0), (((/* implicit */long long int) arr_40 [i_12] [i_12 - 4] [i_12])))) : (((((/* implicit */_Bool) (unsigned char)207)) ? (5162788473987799619LL) : (((/* implicit */long long int) 3972591971U))))));
        }
        var_27 = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) (unsigned short)41537)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (short)28051)))));
    }
    for (unsigned short i_13 = 2; i_13 < 14; i_13 += 3) 
    {
        arr_45 [i_13] = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_13 - 1] [i_13])))))))), (min((((/* implicit */unsigned int) var_2)), (min((((/* implicit */unsigned int) (unsigned short)20254)), (3583477094U)))))));
        /* LoopNest 3 */
        for (unsigned short i_14 = 0; i_14 < 15; i_14 += 4) 
        {
            for (unsigned long long int i_15 = 1; i_15 < 13; i_15 += 3) 
            {
                for (unsigned int i_16 = 4; i_16 < 11; i_16 += 1) 
                {
                    {
                        var_28 &= ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) ((unsigned long long int) (signed char)-44))))) ? ((~(((/* implicit */int) min((var_7), (((/* implicit */unsigned short) arr_28 [i_13] [i_13] [i_13] [i_14] [i_14]))))))) : (((/* implicit */int) ((unsigned short) var_2)))));
                        var_29 &= ((/* implicit */int) ((((/* implicit */long long int) (-(((/* implicit */int) ((arr_22 [i_14]) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))))))) * (((long long int) ((((/* implicit */unsigned long long int) var_0)) % (var_6))))));
                        var_30 = ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (((arr_38 [i_13] [i_13] [i_13] [i_13]) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) (unsigned short)5132)) ? (arr_11 [i_13 + 1] [i_13 + 1] [i_14] [i_14] [i_16]) : (((/* implicit */long long int) ((/* implicit */int) var_2))))))));
                    }
                } 
            } 
        } 
        arr_54 [i_13] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) (-(((/* implicit */int) arr_43 [i_13]))))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_4))));
        arr_55 [i_13] = ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) 6125635015000894567ULL)) && (((/* implicit */_Bool) (unsigned char)205))))) > (max((((/* implicit */int) (unsigned short)13001)), (min((6), (((/* implicit */int) (unsigned char)147))))))));
        /* LoopNest 3 */
        for (int i_17 = 2; i_17 < 14; i_17 += 4) 
        {
            for (int i_18 = 4; i_18 < 12; i_18 += 4) 
            {
                for (unsigned int i_19 = 0; i_19 < 15; i_19 += 1) 
                {
                    {
                        var_31 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_8))));
                        arr_64 [i_13] [i_13] [i_18] [i_19] = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((long long int) var_8))) ? (arr_47 [i_17] [i_17] [i_17]) : ((~(1707122308U))))) * (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)130)) & (((/* implicit */int) (unsigned short)5132)))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned char i_20 = 2; i_20 < 9; i_20 += 4) 
    {
        arr_68 [i_20 + 3] = ((/* implicit */unsigned int) var_5);
        var_32 = ((/* implicit */short) var_2);
    }
    var_33 -= ((/* implicit */unsigned long long int) (unsigned short)65535);
}
