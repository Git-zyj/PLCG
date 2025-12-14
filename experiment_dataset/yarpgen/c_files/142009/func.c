/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142009
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142009 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142009
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
    var_13 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_4))));
    /* LoopNest 2 */
    for (signed char i_0 = 4; i_0 < 11; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 9; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(9693173178961470356ULL)))) ? (((/* implicit */long long int) ((int) 9693173178961470356ULL))) : (((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1 + 3]))) & (arr_3 [i_0 - 1] [i_0 - 3] [i_1])))));
                /* LoopSeq 4 */
                for (long long int i_2 = 2; i_2 < 10; i_2 += 3) 
                {
                    var_15 = ((/* implicit */unsigned char) 4745351823801283290ULL);
                    var_16 = ((/* implicit */unsigned char) ((((int) arr_4 [i_1 - 1] [i_0 - 4])) < (arr_1 [i_1 + 2])));
                    var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_0]))))) ? ((+(((/* implicit */int) (short)-3252)))) : (((/* implicit */int) var_11))))))));
                }
                for (long long int i_3 = 0; i_3 < 12; i_3 += 2) /* same iter space */
                {
                    var_18 = ((/* implicit */long long int) 2777452917921032872ULL);
                    /* LoopSeq 2 */
                    for (int i_4 = 1; i_4 < 10; i_4 += 2) 
                    {
                        var_19 ^= ((/* implicit */unsigned short) arr_8 [i_0] [i_0] [i_1]);
                        arr_11 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+((+(((/* implicit */int) var_11))))))) ? (min((((((/* implicit */_Bool) (short)-3251)) ? (9693173178961470343ULL) : (9693173178961470346ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [(short)4] [i_0] [4U]))) * (var_7)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 814265371U)) ? ((+(arr_3 [i_0] [i_0] [i_3]))) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))))))));
                    }
                    for (unsigned short i_5 = 0; i_5 < 12; i_5 += 1) 
                    {
                        arr_14 [i_5] [i_0] [i_0] [i_1] [4U] = ((/* implicit */_Bool) (+(((/* implicit */int) ((short) ((8753570894748081272ULL) >> (2ULL)))))));
                        var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) (((+(arr_1 [i_0 - 1]))) % (((arr_10 [i_0] [i_1] [i_1 + 1] [i_5]) - (((/* implicit */int) ((_Bool) var_4))))))))));
                        var_21 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((arr_9 [i_0 - 4] [i_1] [i_3] [5]) ? (arr_1 [i_0 - 3]) : (arr_1 [i_0]))))));
                    }
                    var_22 = ((/* implicit */short) ((((((/* implicit */int) (signed char)-109)) ^ (arr_1 [i_1 + 1]))) - (min((((/* implicit */int) (short)15586)), (arr_1 [i_0 - 1])))));
                }
                for (long long int i_6 = 0; i_6 < 12; i_6 += 2) /* same iter space */
                {
                    var_23 = ((/* implicit */_Bool) ((unsigned int) ((arr_15 [i_0] [i_1] [i_6] [i_0]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_0 - 4]))) : (min((((/* implicit */unsigned int) (_Bool)1)), (arr_8 [i_0] [i_1] [i_0]))))));
                    var_24 = ((/* implicit */_Bool) arr_3 [i_0] [11LL] [i_0]);
                }
                for (unsigned int i_7 = 2; i_7 < 9; i_7 += 4) 
                {
                    var_25 = ((/* implicit */unsigned int) (((-(((/* implicit */int) arr_4 [i_1 - 1] [i_0 + 1])))) + ((+(((/* implicit */int) arr_4 [i_1 - 2] [i_0 - 3]))))));
                    var_26 += ((/* implicit */unsigned short) arr_12 [i_0] [i_0] [i_0 + 1]);
                    var_27 = ((/* implicit */unsigned short) ((short) min((arr_0 [i_0 - 4]), (((/* implicit */short) arr_2 [i_0 + 1])))));
                }
                /* LoopSeq 2 */
                for (unsigned int i_8 = 2; i_8 < 11; i_8 += 3) 
                {
                    var_28 *= ((/* implicit */unsigned int) ((short) (unsigned char)18));
                    var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) (+(((/* implicit */int) (unsigned short)54183)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (arr_12 [i_8] [i_1] [(unsigned short)2])));
                    arr_21 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((unsigned short) (+(8753570894748081259ULL))));
                    /* LoopSeq 1 */
                    for (short i_9 = 0; i_9 < 12; i_9 += 1) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
                        {
                            var_30 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_2))));
                            var_31 = ((((/* implicit */_Bool) ((int) (unsigned short)11356))) ? (arr_8 [i_0 - 3] [i_0] [i_0]) : ((+(3395031204U))));
                            var_32 = ((/* implicit */short) ((((/* implicit */int) (_Bool)0)) - (arr_10 [(unsigned char)10] [i_8 + 1] [i_8 + 1] [i_8])));
                        }
                        var_33 = ((/* implicit */signed char) arr_20 [i_0]);
                        var_34 = ((unsigned char) min((arr_9 [i_0] [i_0] [(short)7] [i_1 - 1]), (arr_9 [i_0] [i_0] [i_0] [i_1 + 2])));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (int i_11 = 0; i_11 < 12; i_11 += 4) 
                        {
                            var_35 = ((/* implicit */short) min((var_35), (((/* implicit */short) ((unsigned short) arr_30 [i_1 - 2] [i_1] [i_1] [i_11] [6ULL])))));
                            arr_31 [i_1] [i_0] [i_1] [i_1 + 2] [i_1] = ((/* implicit */unsigned short) ((_Bool) (+(arr_12 [i_1] [i_1] [i_1]))));
                        }
                        var_36 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_16 [i_8] [i_1] [i_1]), (((/* implicit */signed char) var_6))))) ? (((/* implicit */int) arr_18 [i_0] [i_0] [i_0] [i_9])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0] [4LL] [i_8] [4LL]))))))))));
                    }
                    var_37 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_25 [i_0] [i_0 + 1] [i_0 - 2] [i_0] [i_1 + 1] [i_8 + 1] [i_8]), (((/* implicit */long long int) (short)3251))))) ? (((((/* implicit */_Bool) -1761370567)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-10779))) <= (969639673U))))) : ((+(969639673U))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_24 [i_0 - 1])))))));
                }
                for (short i_12 = 1; i_12 < 8; i_12 += 3) 
                {
                    var_38 = ((/* implicit */unsigned char) max(((+(((/* implicit */int) arr_6 [(unsigned short)6] [i_1 + 3] [i_12 + 4] [i_12 + 2])))), (((/* implicit */int) (((!(((/* implicit */_Bool) arr_1 [i_1 + 3])))) && (((((/* implicit */_Bool) 9693173178961470356ULL)) && (((/* implicit */_Bool) arr_2 [i_0 - 1])))))))));
                    var_39 = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-125)) ? (((/* implicit */int) arr_27 [0] [i_1 + 1] [i_1] [11LL] [8U] [i_1] [i_1])) : (((/* implicit */int) var_12))))) ? (((/* implicit */long long int) ((arr_9 [(signed char)1] [i_1] [i_1 - 1] [i_12]) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned short)53029))))) : (((((/* implicit */_Bool) 9693173178961470331ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)37838))) : (arr_12 [i_0 - 1] [i_0 - 1] [i_0 - 1]))))));
                    var_40 *= (short)3251;
                }
                var_41 = ((/* implicit */unsigned short) min((var_41), (((/* implicit */unsigned short) ((short) max((((/* implicit */unsigned int) arr_22 [i_1 + 2] [(short)7] [i_1] [i_0 - 2])), (4294967292U)))))));
            }
        } 
    } 
}
