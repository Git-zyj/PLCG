/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133124
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133124 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133124
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
    var_20 = ((/* implicit */unsigned short) var_4);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (unsigned short i_2 = 2; i_2 < 10; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (long long int i_4 = 0; i_4 < 12; i_4 += 1) 
                        {
                            var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-3720)) ? (((/* implicit */int) ((unsigned char) ((long long int) (short)32761)))) : (((/* implicit */int) max((arr_9 [(_Bool)1] [(unsigned char)2] [(unsigned char)0] [i_2 - 2] [i_3] [i_4]), (arr_5 [i_0] [i_2])))))))));
                            arr_14 [i_0] [(signed char)8] [(unsigned char)0] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)3749)) ? (13745655690373027580ULL) : (4701088383336524051ULL)));
                            var_22 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) arr_0 [i_0] [i_2]))) ? (((/* implicit */int) arr_1 [i_2 + 1])) : ((~(((/* implicit */int) (unsigned char)1))))))), (min((max((((/* implicit */unsigned int) (unsigned short)15276)), (var_10))), (((/* implicit */unsigned int) ((((((/* implicit */int) (short)-32758)) + (2147483647))) << (((((/* implicit */int) (short)6677)) - (6677))))))))));
                        }
                        /* LoopSeq 2 */
                        for (signed char i_5 = 1; i_5 < 11; i_5 += 1) /* same iter space */
                        {
                            var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (signed char)-19)) ? (2147483647) : (((/* implicit */int) (signed char)20)))), (((/* implicit */int) ((unsigned char) 4639994177477059470LL)))))) ? (((/* implicit */long long int) ((unsigned int) arr_13 [(unsigned short)6] [i_5 + 1]))) : (((((/* implicit */_Bool) var_12)) ? ((-(arr_16 [i_0] [i_0] [i_5] [(signed char)3] [i_3] [i_5 + 1]))) : (((/* implicit */long long int) ((((/* implicit */int) (signed char)-20)) + (((/* implicit */int) var_8)))))))));
                            arr_17 [(short)10] [i_1] [i_5] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) (unsigned short)61836))) ? (((/* implicit */int) ((((/* implicit */int) arr_8 [i_2 + 1] [i_2 + 2] [2U] [i_5 + 1])) == (((/* implicit */int) arr_8 [i_2 + 2] [i_2 + 1] [i_2] [i_5 - 1]))))) : (((((/* implicit */int) (unsigned char)109)) / (((/* implicit */int) arr_8 [i_2 + 1] [i_2 - 1] [i_2 + 1] [i_5 + 1]))))));
                            var_24 ^= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) min((((/* implicit */unsigned int) ((unsigned char) arr_16 [i_0] [i_0] [i_0] [i_0] [i_3] [i_5]))), (((var_10) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)3700)))))))) > (((((/* implicit */_Bool) (short)-3728)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)3700))) : (min((((/* implicit */long long int) arr_8 [i_1] [3LL] [(_Bool)1] [i_5 - 1])), (arr_11 [(short)7] [(unsigned char)4] [i_3])))))));
                        }
                        /* vectorizable */
                        for (signed char i_6 = 1; i_6 < 11; i_6 += 1) /* same iter space */
                        {
                            arr_20 [(_Bool)0] [i_1] [i_2] [i_1] [i_6] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_2 - 1]))) < (7731253160690688005LL)));
                            arr_21 [i_0] [i_1] [i_2 - 2] [i_2] [(signed char)10] [0U] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)13)) / (904057605)));
                            var_25 += ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned char)221)) ? (1258303252) : (((/* implicit */int) arr_5 [i_0] [i_6])))) & (((/* implicit */int) arr_7 [i_2 - 1]))));
                            arr_22 [i_1] [(_Bool)0] [i_6] &= ((short) var_5);
                            arr_23 [i_0] [i_1] [6LL] [i_3] [i_6] = ((/* implicit */unsigned char) ((((var_16) | (((/* implicit */int) (short)-6663)))) & (((/* implicit */int) arr_9 [i_2] [i_2 + 2] [i_2 + 2] [4ULL] [i_6 + 1] [i_6]))));
                        }
                        arr_24 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) (-(((/* implicit */int) var_0)))))) ? (min((((/* implicit */long long int) (+(-1820506214)))), (((((/* implicit */_Bool) var_5)) ? (-7731253160690687990LL) : (((/* implicit */long long int) ((/* implicit */int) var_18))))))) : (((/* implicit */long long int) (+(((/* implicit */int) var_9)))))));
                        arr_25 [9] [i_1] [i_2 + 2] [i_3] [(short)0] [i_3] = -1794014175;
                        var_26 = ((((_Bool) (signed char)1)) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_8 [i_0] [i_0] [11] [(_Bool)0]))))) : (-8982587957339781521LL));
                    }
                    arr_26 [7LL] [i_1] [i_2] = ((/* implicit */signed char) (+(((/* implicit */int) (signed char)-104))));
                }
            } 
        } 
    } 
    var_27 ^= ((/* implicit */signed char) (~(-7731253160690688006LL)));
}
