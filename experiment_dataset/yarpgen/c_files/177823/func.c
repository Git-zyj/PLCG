/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177823
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177823 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177823
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 2; i_0 < 11; i_0 += 4) 
    {
        var_16 = ((/* implicit */unsigned long long int) (!(((((/* implicit */int) arr_2 [i_0 + 4])) != (((/* implicit */int) ((((/* implicit */int) arr_2 [i_0])) < (((/* implicit */int) (unsigned short)42411)))))))));
        arr_3 [i_0] &= ((/* implicit */unsigned short) var_0);
    }
    var_17 += ((/* implicit */unsigned short) var_13);
    var_18 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) * (((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (signed char)14)) == (((/* implicit */int) (unsigned short)65106)))))) ^ (max((var_14), (((/* implicit */unsigned int) var_15))))))));
    var_19 ^= ((/* implicit */unsigned short) (-(var_13)));
    /* LoopSeq 4 */
    for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 3) 
    {
        arr_6 [i_1] [i_1] |= ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)42402))));
        var_20 = ((((/* implicit */_Bool) (-(((/* implicit */int) var_3))))) ? (((/* implicit */unsigned long long int) (+(var_9)))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)23125))) * (18446744073709551615ULL))));
        var_21 = ((/* implicit */int) (-(min((((/* implicit */unsigned int) (unsigned short)31)), (var_4)))));
        var_22 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (-(((/* implicit */int) var_10))))) ? (((((/* implicit */_Bool) -1)) ? (((/* implicit */int) arr_4 [i_1] [i_1])) : (((/* implicit */int) arr_2 [i_1])))) : (((((/* implicit */int) var_8)) ^ (1954513725))))) < ((~((~(((/* implicit */int) (unsigned short)16383))))))));
        var_23 = -1LL;
    }
    /* vectorizable */
    for (int i_2 = 2; i_2 < 22; i_2 += 1) 
    {
        var_24 *= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (short)15)) % (1954513725)))) ? (((((/* implicit */_Bool) var_15)) ? (1025530890) : (((/* implicit */int) var_11)))) : (((/* implicit */int) (unsigned short)16383))));
        var_25 = (-(arr_8 [i_2 - 2]));
    }
    for (long long int i_3 = 0; i_3 < 18; i_3 += 3) 
    {
        arr_14 [i_3] = ((/* implicit */int) (((!(((/* implicit */_Bool) arr_9 [12ULL])))) || (((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned short)23125)), (3829386568U))))));
        var_26 -= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */int) (short)-26568)) % (arr_9 [0])))) % (606880420U)));
        arr_15 [i_3] &= ((/* implicit */long long int) ((((/* implicit */int) ((((((/* implicit */_Bool) arr_7 [i_3])) || ((_Bool)1))) && (((/* implicit */_Bool) arr_8 [i_3]))))) << (((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_3]))) : (7706157876161489559ULL))) - (1989ULL)))));
    }
    for (unsigned short i_4 = 0; i_4 < 12; i_4 += 2) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_5 = 4; i_5 < 11; i_5 += 4) 
        {
            arr_22 [i_5] [7U] [i_4] = ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) var_11)) != (((/* implicit */int) (short)-26575))))) >= ((-(((/* implicit */int) arr_21 [3U] [i_5]))))));
            var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)32767))))))))));
            arr_23 [i_4] [i_4] [i_5] = ((/* implicit */long long int) (~(((/* implicit */int) arr_2 [i_4]))));
        }
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_6 = 2; i_6 < 11; i_6 += 1) 
        {
            arr_26 [i_6] [i_4] = ((/* implicit */long long int) ((1038713753619388396ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)140)))));
            var_28 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1300847243U)) ? (((/* implicit */long long int) var_4)) : (arr_8 [i_6 - 1])));
            arr_27 [i_6] [i_6] [i_4] = ((/* implicit */unsigned int) ((5511933167861000392ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) 1300847266U))))));
        }
        for (unsigned int i_7 = 0; i_7 < 12; i_7 += 4) 
        {
            var_29 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_19 [(short)8] [i_4] [i_7])))))));
            /* LoopNest 2 */
            for (unsigned char i_8 = 2; i_8 < 9; i_8 += 3) 
            {
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    {
                        arr_38 [i_4] [i_7] [i_7] [i_8] [i_9] &= ((/* implicit */short) (~(min((((/* implicit */long long int) 625295686U)), (-3392430167652642981LL)))));
                        arr_39 [i_8] [i_7] [i_8] |= (((!(((/* implicit */_Bool) (unsigned char)148)))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((arr_25 [8] [i_7] [i_8 - 1]), (arr_25 [i_4] [i_7] [i_8 - 1]))))) : (((((/* implicit */_Bool) arr_25 [i_7] [i_8] [i_8 - 1])) ? (625295686U) : (((/* implicit */unsigned int) ((/* implicit */int) var_12))))));
                        var_30 += ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) (signed char)-124)), ((unsigned short)31))))))), (max(((~(3151640694259451259ULL))), (((/* implicit */unsigned long long int) var_2))))));
                    }
                } 
            } 
            var_31 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_20 [i_4] [i_4] [i_7]))));
            /* LoopSeq 2 */
            for (unsigned int i_10 = 0; i_10 < 12; i_10 += 1) 
            {
                arr_42 [i_10] [i_10] [(signed char)4] [i_10] = arr_17 [i_4];
                arr_43 [i_10] [i_7] [i_7] = ((/* implicit */unsigned int) arr_36 [i_4] [i_4] [i_10] [i_7] [i_4] [i_4]);
            }
            for (short i_11 = 3; i_11 < 9; i_11 += 3) 
            {
                /* LoopSeq 2 */
                for (unsigned int i_12 = 0; i_12 < 12; i_12 += 4) 
                {
                    arr_49 [i_11] [i_12] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_19 [i_4] [i_7] [i_4])) && (((/* implicit */_Bool) (short)-1)))))) < (((long long int) var_15))))), ((~(((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) var_6)) : (arr_35 [i_4] [i_7] [i_11] [i_12])))))));
                    var_32 += ((/* implicit */unsigned long long int) (((-(((/* implicit */int) var_12)))) * (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_5)) + (arr_20 [i_4] [i_12] [i_11])))))))));
                    arr_50 [i_4] [i_11] [i_4] [i_4] = ((/* implicit */unsigned short) (short)8329);
                    arr_51 [(unsigned short)4] [i_11] [i_12] = ((/* implicit */unsigned char) max((((((/* implicit */int) (unsigned char)164)) >> (((((/* implicit */int) ((unsigned char) 17592186044415ULL))) - (238))))), (((/* implicit */int) arr_30 [i_11 - 1]))));
                }
                for (signed char i_13 = 0; i_13 < 12; i_13 += 3) 
                {
                    arr_54 [i_4] [i_4] [i_11] [i_4] = ((/* implicit */signed char) var_3);
                    arr_55 [i_4] [i_7] [i_11] [i_13] |= ((/* implicit */signed char) (!(((/* implicit */_Bool) var_3))));
                }
                var_33 -= ((/* implicit */unsigned char) -1288512659);
            }
        }
        var_34 = ((/* implicit */short) max((((unsigned int) (!(((/* implicit */_Bool) 203038362U))))), (((/* implicit */unsigned int) var_1))));
    }
}
