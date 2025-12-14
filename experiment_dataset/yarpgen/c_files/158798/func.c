/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158798
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158798 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158798
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 1; i_1 < 10; i_1 += 4) 
        {
            for (unsigned int i_2 = 2; i_2 < 11; i_2 += 2) 
            {
                {
                    var_17 = ((/* implicit */long long int) (~(((/* implicit */int) arr_6 [i_2 - 1] [i_2 - 1] [i_2 - 1]))));
                    var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) 4487418261257885526ULL))));
                    var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) min((arr_1 [i_0]), (7226643884364332218ULL)))) ? (5626825434057403806ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_2 + 1] [i_1] [i_0])))))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_3 = 1; i_3 < 11; i_3 += 3) 
        {
            for (short i_4 = 2; i_4 < 10; i_4 += 2) 
            {
                {
                    arr_17 [i_4] [i_3 + 1] [i_0] [i_0] = ((/* implicit */unsigned short) arr_12 [i_0] [i_3 + 1] [(unsigned short)4]);
                    arr_18 [i_3] [i_3] [i_4 + 1] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_8 [5ULL] [i_3 - 1] [i_4]))))) ? (((/* implicit */long long int) arr_12 [(_Bool)1] [i_3] [(unsigned short)8])) : ((-(((long long int) (short)-9378))))));
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 12; i_5 += 4) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 12; i_6 += 2) 
                        {
                            {
                                arr_24 [i_5] = ((/* implicit */short) 17873661021126656ULL);
                                var_20 = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) min((-2169304933081010107LL), (((/* implicit */long long int) (unsigned short)52596))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_14 [(short)9] [i_4] [i_4] [i_4]))))) : ((-(arr_19 [i_0] [i_3] [i_4] [i_5]))))));
                                arr_25 [i_3 + 1] [i_3 + 1] |= ((/* implicit */short) ((((/* implicit */int) min((arr_8 [i_3 - 1] [i_4 + 2] [i_5]), (arr_8 [i_3 - 1] [i_4 + 1] [i_5])))) + (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_3 - 1] [i_4 - 2] [i_3 - 1]))) >= (4294967294U))))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned char i_7 = 0; i_7 < 12; i_7 += 1) 
                    {
                        var_21 = ((/* implicit */unsigned short) arr_4 [i_0] [i_0] [i_3]);
                        var_22 = ((/* implicit */unsigned char) (unsigned short)0);
                    }
                    for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
                    {
                        var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) min((((min((((/* implicit */int) arr_9 [4ULL] [5U])), (arr_11 [i_8 + 1] [i_4] [i_3]))) & (((((/* implicit */_Bool) arr_4 [i_0] [i_3 + 1] [i_8])) ? (((/* implicit */int) (unsigned char)246)) : (((/* implicit */int) (unsigned short)18)))))), (((/* implicit */int) ((((/* implicit */_Bool) arr_21 [1LL] [(_Bool)0] [i_4 - 1] [i_4] [i_4])) || (((/* implicit */_Bool) arr_6 [i_0] [i_3 + 1] [i_4 - 1]))))))))));
                        arr_30 [i_0] [0ULL] = ((/* implicit */long long int) (-(((unsigned long long int) 13ULL))));
                        /* LoopSeq 1 */
                        for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                        {
                            var_24 = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_8 + 1] [i_8 + 1] [i_8 + 1] [i_8 + 1])) ? (arr_13 [i_8 + 1] [i_8 + 1] [i_8 + 1] [i_8 + 1]) : (1304914816498340437ULL))));
                            var_25 = ((/* implicit */unsigned long long int) (((((+(((/* implicit */int) (short)-23013)))) + (2147483647))) << (((((/* implicit */int) arr_31 [i_0] [i_3 - 1] [i_4])) - (1)))));
                        }
                    }
                    for (unsigned char i_10 = 0; i_10 < 12; i_10 += 1) 
                    {
                        var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)721))))), ((+(3058961882U))))))));
                        var_27 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_16 [i_4 + 1] [i_3 + 1]))));
                    }
                }
            } 
        } 
    }
    /* vectorizable */
    for (short i_11 = 0; i_11 < 11; i_11 += 1) 
    {
        var_28 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_34 [i_11] [i_11]))));
        arr_39 [i_11] [i_11] = ((/* implicit */signed char) (+(7226643884364332218ULL)));
        var_29 = (!(((/* implicit */_Bool) ((unsigned char) 9223372036854775807LL))));
        var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) 11220100189345219398ULL))));
        var_31 = ((/* implicit */long long int) (~(((/* implicit */int) arr_7 [i_11] [i_11] [i_11]))));
    }
    for (unsigned int i_12 = 1; i_12 < 18; i_12 += 2) 
    {
        arr_42 [i_12] = ((/* implicit */unsigned int) (-(14718695775091023946ULL)));
        var_32 -= ((/* implicit */unsigned short) (+(((arr_40 [i_12 + 1] [i_12 + 1]) ^ (((/* implicit */long long int) ((/* implicit */int) (short)18879)))))));
        var_33 = ((/* implicit */unsigned char) arr_40 [i_12] [i_12]);
        var_34 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 7226643884364332223ULL)) ? (((/* implicit */int) arr_41 [i_12])) : (((/* implicit */int) (unsigned char)39))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_41 [i_12 + 1]))) : (max((((/* implicit */long long int) arr_41 [i_12])), (arr_40 [i_12 - 1] [i_12 - 1])))))) ? (((((/* implicit */_Bool) 9825131027318653910ULL)) ? (arr_40 [i_12] [i_12 - 1]) : (arr_40 [i_12] [i_12 - 1]))) : (((((/* implicit */_Bool) (-(-6LL)))) ? (((((/* implicit */_Bool) 8621613046390897705ULL)) ? (-7971737448983132831LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)30763))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 2956336177792084063LL)) ? (2725423665U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)114))))))))));
    }
    var_35 &= ((/* implicit */unsigned char) var_4);
}
