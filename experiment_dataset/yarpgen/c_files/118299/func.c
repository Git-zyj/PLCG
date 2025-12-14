/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118299
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
    var_14 = (unsigned short)61440;
    var_15 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_0)))) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (signed char)47)), (7770275798302717869ULL)))) ? (((/* implicit */int) (unsigned short)4084)) : (((/* implicit */int) var_5)))) : (((/* implicit */int) var_8))));
    var_16 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)177))) - (8105562983337562120LL)))) ? (((/* implicit */int) min((var_6), (((/* implicit */unsigned short) var_7))))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_5)) : (var_13)))))) >= (var_11)));
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0]))));
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_17 = ((/* implicit */long long int) ((((unsigned int) var_13)) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) <= (arr_8 [i_1] [i_3] [i_3 - 1] [i_3 - 1] [i_1])))))));
                        var_18 = ((/* implicit */unsigned long long int) (((((_Bool)1) && (((/* implicit */_Bool) (unsigned short)61440)))) || (((/* implicit */_Bool) (signed char)-23))));
                    }
                } 
            } 
        } 
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        /* LoopNest 3 */
        for (signed char i_5 = 0; i_5 < 20; i_5 += 1) 
        {
            for (unsigned char i_6 = 0; i_6 < 20; i_6 += 2) 
            {
                for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                {
                    {
                        arr_20 [i_4] = ((/* implicit */signed char) (+(((unsigned int) ((((/* implicit */int) (short)-15991)) ^ (((/* implicit */int) (short)-16006)))))));
                        var_19 = ((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_18 [i_4] [15ULL] [(signed char)7] [i_7])) || (((/* implicit */_Bool) 2199019061248ULL))))) != (((((/* implicit */_Bool) arr_19 [i_5] [i_6])) ? (-877709563) : (((/* implicit */int) var_8))))))) / (((((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) arr_19 [i_4] [i_7])) - (55379))))) + (arr_13 [i_4]))));
                        arr_21 [i_4] [i_4] [i_4] = ((/* implicit */short) var_6);
                        arr_22 [8U] [i_5] [i_4] [i_4] [i_5] [i_4] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_18 [i_4] [i_6] [i_6] [i_6])) + (max((((/* implicit */int) var_0)), (arr_15 [i_4] [i_4] [i_6]))))) - (((((/* implicit */_Bool) (short)17111)) ? (((/* implicit */int) (unsigned short)61440)) : (((/* implicit */int) (short)15990))))));
                    }
                } 
            } 
        } 
        var_20 = ((/* implicit */short) arr_15 [i_4] [i_4] [i_4]);
    }
    for (unsigned char i_8 = 0; i_8 < 25; i_8 += 2) 
    {
        /* LoopNest 3 */
        for (int i_9 = 2; i_9 < 22; i_9 += 1) 
        {
            for (long long int i_10 = 0; i_10 < 25; i_10 += 1) 
            {
                for (long long int i_11 = 0; i_11 < 25; i_11 += 1) 
                {
                    {
                        arr_32 [i_8] [i_9] [i_10] [i_10] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)15990)) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)61455)) > (((/* implicit */int) arr_27 [i_9] [i_9 - 2]))))) : (((/* implicit */int) min((arr_24 [i_9 - 2] [i_9]), (arr_24 [i_9 - 2] [(short)8]))))));
                        var_21 = ((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) / (arr_25 [i_9 - 2]))) / (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)128))) * (var_12))))));
                        var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) arr_26 [i_8]))));
                        var_23 = ((/* implicit */short) ((((arr_29 [i_8] [i_10] [i_10]) ? (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_8] [i_11]))) : (arr_25 [i_8]))) | (((/* implicit */long long int) ((/* implicit */int) (signed char)115)))));
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                        {
                            arr_36 [i_8] [i_10] [(signed char)18] [i_10] [i_10] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_8] [i_9]))) >= (1477402175U)))) << (((/* implicit */int) arr_33 [i_10] [i_9 - 1] [i_9 - 2] [i_9 - 1]))));
                            arr_37 [i_10] [i_10] [i_9] [i_10] [i_11] [i_12] = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_27 [i_9 - 2] [i_9])) + (2147483647))) << (((((/* implicit */int) arr_27 [i_9 + 2] [i_10])) + (12)))));
                        }
                        /* vectorizable */
                        for (unsigned char i_13 = 2; i_13 < 23; i_13 += 4) 
                        {
                            arr_40 [i_9 + 2] [i_8] [i_10] [i_10] [i_13] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_38 [i_9 - 1] [i_13 - 2] [i_13 + 1] [(signed char)8] [i_13 - 1] [i_13 - 1] [i_13 + 1]))));
                            arr_41 [i_10] [10U] [i_10] = ((/* implicit */short) ((int) (short)-17108));
                        }
                        /* vectorizable */
                        for (int i_14 = 2; i_14 < 22; i_14 += 2) 
                        {
                            var_24 = ((((((/* implicit */int) arr_38 [i_10] [i_9] [(signed char)2] [i_11] [i_14] [i_10] [i_14])) < (((/* implicit */int) var_5)))) || (((/* implicit */_Bool) (unsigned char)83)));
                            var_25 = ((((arr_29 [i_9] [i_10] [i_11]) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))) & (((((/* implicit */_Bool) var_13)) ? (arr_39 [i_10] [i_10] [5U] [(signed char)24] [(signed char)24]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))));
                            var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_42 [i_10] [i_10])) || (((/* implicit */_Bool) arr_30 [i_9 - 1] [i_14 + 2] [i_9 + 2] [i_10]))));
                        }
                        for (unsigned int i_15 = 1; i_15 < 22; i_15 += 4) 
                        {
                            arr_46 [i_8] [i_10] [i_8] [(_Bool)1] [i_8] = ((/* implicit */unsigned short) arr_29 [i_15] [i_10] [i_8]);
                            arr_47 [i_8] [i_9] [i_10] [(_Bool)1] [i_8] [i_10] [i_9] = ((/* implicit */unsigned int) ((((((((/* implicit */int) (short)300)) & (((/* implicit */int) arr_31 [i_10])))) >> (((((/* implicit */int) (short)15990)) - (15983))))) >= (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), (arr_38 [i_8] [i_9] [i_10] [i_8] [i_11] [24LL] [0U]))))));
                            var_27 = ((((/* implicit */_Bool) ((((-4902496940043773933LL) % (((/* implicit */long long int) arr_26 [i_11])))) + (((/* implicit */long long int) ((((/* implicit */int) (short)-15991)) ^ (((/* implicit */int) arr_23 [i_15] [i_9])))))))) ? (10191878461825493007ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))));
                        }
                    }
                } 
            } 
        } 
        var_28 ^= ((/* implicit */_Bool) var_6);
    }
}
