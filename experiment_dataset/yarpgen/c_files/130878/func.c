/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130878
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
    for (signed char i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        for (signed char i_1 = 4; i_1 < 12; i_1 += 1) 
        {
            {
                arr_6 [i_0 + 1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) 5362805045519338930LL))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned char i_2 = 0; i_2 < 15; i_2 += 1) 
                {
                    var_15 *= ((/* implicit */unsigned short) ((int) (_Bool)0));
                    arr_9 [i_0] [(unsigned char)8] [i_0] [i_0] = ((/* implicit */int) arr_5 [i_0] [i_0]);
                }
                for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                {
                    /* LoopNest 2 */
                    for (long long int i_4 = 0; i_4 < 15; i_4 += 4) 
                    {
                        for (int i_5 = 2; i_5 < 14; i_5 += 1) 
                        {
                            {
                                var_16 = 8538305313585004333LL;
                                arr_19 [i_3] [i_3] = ((/* implicit */unsigned short) (_Bool)1);
                                arr_20 [i_0] [i_1] [i_3] [i_3] [i_3] [i_1] [i_5] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)50293)) / (((/* implicit */int) ((((/* implicit */_Bool) -656581392709973633LL)) || (((/* implicit */_Bool) 4445760340824416941LL)))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (signed char i_6 = 0; i_6 < 15; i_6 += 1) 
                    {
                        arr_24 [i_0] [2LL] [(_Bool)1] [i_3] = ((/* implicit */unsigned short) max(((-(arr_2 [i_1 + 3]))), (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)1493)) & (((/* implicit */int) (unsigned char)150)))))));
                        arr_25 [i_3] [i_1] [i_1] = ((/* implicit */long long int) arr_15 [i_3] [i_3] [i_3] [i_3]);
                    }
                    for (int i_7 = 1; i_7 < 14; i_7 += 4) 
                    {
                        arr_29 [i_0] [(unsigned short)11] [i_3] [i_7 - 1] = ((max((((_Bool) arr_3 [i_3] [i_3])), (arr_16 [i_7 + 1] [i_7 - 1] [i_7 + 1] [i_7 + 1] [i_7 - 1] [i_7 - 1]))) ? (((((/* implicit */_Bool) (~(-702037882451762610LL)))) ? (((long long int) arr_18 [i_0] [i_0] [i_0 + 1] [i_1] [(_Bool)1] [i_7 - 1])) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_3])) ? (((/* implicit */int) arr_28 [i_0 - 1] [i_1] [i_3] [i_7])) : (((/* implicit */int) arr_15 [i_3] [i_3] [i_3] [i_3]))))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (((_Bool)1) ? (-3271300268275360669LL) : (702037882451762609LL)))) || (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)2726))) > (-4445760340824416941LL))))))));
                        arr_30 [i_0 + 2] [i_1] [i_1] [i_1] [i_3] [(signed char)4] |= min((min((((/* implicit */long long int) (unsigned short)51321)), (((702037882451762609LL) - (9223372036854775807LL))))), (((((/* implicit */_Bool) (unsigned short)49980)) ? (-5562351403408462389LL) : (-6232856809925079553LL))));
                    }
                }
                /* vectorizable */
                for (unsigned char i_8 = 0; i_8 < 15; i_8 += 1) 
                {
                    var_17 = ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)6184)) ^ (((/* implicit */int) (_Bool)1))))) ? (((-702037882451762610LL) % (-6232856809925079553LL))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)26080))));
                    /* LoopNest 2 */
                    for (long long int i_9 = 1; i_9 < 14; i_9 += 4) 
                    {
                        for (int i_10 = 1; i_10 < 14; i_10 += 1) 
                        {
                            {
                                arr_40 [i_9] [(unsigned short)11] [i_1 - 2] [i_1 - 2] [i_1 - 4] [i_0] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)17932)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
                                arr_41 [i_10] [i_9] [i_1] [i_1] [i_9] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_36 [i_9] [i_1] [i_10 + 1] [i_9])) ? (((/* implicit */int) arr_12 [i_1 - 3] [i_1 - 3])) : (((/* implicit */int) arr_12 [i_1 - 3] [i_1]))));
                                arr_42 [i_8] [i_8] [i_8] [i_8] [i_9] = ((/* implicit */int) (unsigned short)6184);
                            }
                        } 
                    } 
                }
                arr_43 [i_1] = ((/* implicit */unsigned short) ((((((arr_13 [0LL] [i_1] [0LL]) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)169))))) * ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-702037882451762610LL))))) | ((~(max((4445760340824416941LL), (((/* implicit */long long int) arr_33 [i_0] [i_0] [i_1 - 1] [i_1 + 1]))))))));
                /* LoopNest 3 */
                for (unsigned char i_11 = 1; i_11 < 13; i_11 += 1) 
                {
                    for (long long int i_12 = 0; i_12 < 15; i_12 += 1) 
                    {
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                        {
                            {
                                arr_54 [i_0] [2] [i_11] [i_0 + 1] [i_0] [i_0 + 1] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)9198))) : (arr_50 [i_0] [i_0] [i_0])))) ? ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) : (-6586491660722862224LL))) : (((((/* implicit */_Bool) 6586491660722862224LL)) ? (6586491660722862224LL) : (((/* implicit */long long int) 2147483647)))))) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -6586491660722862225LL))))))));
                                var_18 = ((/* implicit */unsigned short) ((((((4123168604160LL) * (((/* implicit */long long int) ((/* implicit */int) (signed char)-19))))) > (((/* implicit */long long int) 2147479552)))) ? (min((((((/* implicit */_Bool) arr_7 [i_0 + 2] [i_13] [i_13])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-85)))), (((/* implicit */int) (_Bool)0)))) : (((((/* implicit */int) arr_34 [i_1 + 3] [i_1 + 3] [i_11] [i_1 + 3] [i_1 + 3] [i_1])) ^ (((/* implicit */int) (_Bool)0))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_14)) : (460264543)))), (((((/* implicit */_Bool) 4445760340824416941LL)) ? (6232856809925079552LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)61)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) -1366028061)) ? (-365852892) : (((/* implicit */int) (unsigned short)49601))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)15934)) ? (((/* implicit */int) var_8)) : (66629011)))) : (((((/* implicit */_Bool) 951292846)) ? (5451036120347387982LL) : (((/* implicit */long long int) ((/* implicit */int) var_12))))))) : (((/* implicit */long long int) ((/* implicit */int) var_14)))));
}
