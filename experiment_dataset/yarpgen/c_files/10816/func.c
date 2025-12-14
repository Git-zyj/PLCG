/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10816
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
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 2; i_2 < 9; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 1; i_3 < 11; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 13; i_4 += 4) 
                        {
                            {
                                arr_13 [i_4] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 477621766)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)992))) : (3861947906913523001ULL))), (((/* implicit */unsigned long long int) (short)-6865))))) ? (((/* implicit */unsigned long long int) (-(((-6) - (((/* implicit */int) var_8))))))) : (((((/* implicit */unsigned long long int) -1976606959)) - (14584796166796028622ULL)))));
                                arr_14 [i_0] [i_0] [i_4] [i_4] [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_9 [i_2 + 2] [i_2] [i_2] [i_2 + 2] [(signed char)8])))))));
                                var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) 3861947906913522980ULL)))) ? (((/* implicit */int) var_7)) : ((-(arr_1 [i_4])))))) ? (((/* implicit */int) (unsigned char)252)) : (((/* implicit */int) (short)-11385)))))));
                            }
                        } 
                    } 
                    var_17 *= ((/* implicit */unsigned char) var_7);
                    /* LoopSeq 3 */
                    for (long long int i_5 = 0; i_5 < 13; i_5 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            arr_20 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_11 [i_0] [i_0] [i_2 + 3] [i_2 + 3] [i_2 + 3] [i_2 + 3] [i_2 + 1]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (-1306967122) : (((/* implicit */int) var_11)))))))) ? (((/* implicit */int) arr_19 [i_0] [0U] [i_1] [i_1] [i_2] [i_5] [i_6])) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_15 [i_2 + 4] [i_2 + 1] [i_2 + 1] [i_6] [i_2 + 1] [i_6])) : (((/* implicit */int) arr_15 [i_2 - 2] [i_2] [i_2 + 1] [i_6] [i_6] [i_6]))))));
                            arr_21 [i_0] [i_1] [i_5] [i_5] [i_5] [i_5] [(short)12] = ((/* implicit */short) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [i_0] [(_Bool)1] [i_2 + 1] [i_2] [i_2 + 1])) ? (1306967125) : (((/* implicit */int) (short)7470))))), ((((_Bool)1) ? (((((/* implicit */_Bool) arr_19 [i_6] [i_6] [0LL] [i_6] [i_6] [i_6] [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)29986))) : (2013292141U))) : (((/* implicit */unsigned int) -34175608))))));
                            arr_22 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) ? (min(((-(var_3))), (((((/* implicit */long long int) ((/* implicit */int) var_5))) - (var_3))))) : (((/* implicit */long long int) ((arr_15 [3LL] [1LL] [1LL] [i_2 - 2] [i_2] [i_6]) ? (((/* implicit */int) (signed char)1)) : (((/* implicit */int) var_11)))))));
                        }
                        var_18 = ((/* implicit */unsigned short) (+((~(((/* implicit */int) arr_9 [i_2 - 2] [(signed char)9] [(signed char)9] [i_0] [i_1]))))));
                    }
                    /* vectorizable */
                    for (unsigned char i_7 = 0; i_7 < 13; i_7 += 3) 
                    {
                        var_19 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_4))));
                        var_20 *= ((/* implicit */unsigned char) (-(((/* implicit */int) arr_15 [i_0] [i_7] [i_2] [i_2 + 3] [i_7] [i_7]))));
                        var_21 -= ((/* implicit */unsigned short) (-(((/* implicit */int) (signed char)77))));
                        var_22 = ((/* implicit */long long int) (!(((/* implicit */_Bool) 5387386973917571899LL))));
                    }
                    for (short i_8 = 0; i_8 < 13; i_8 += 4) 
                    {
                        var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_0 [i_2 - 2]), (arr_0 [i_2 + 4])))) ? (((((/* implicit */_Bool) arr_0 [i_2 + 3])) ? (((/* implicit */long long int) var_15)) : (arr_0 [i_2 + 3]))) : (((((/* implicit */_Bool) (unsigned short)61440)) ? (arr_0 [i_2 + 3]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-115)))))));
                        arr_29 [i_0] [i_0] [i_2] = ((/* implicit */unsigned int) min((((/* implicit */long long int) min((arr_11 [i_0] [i_0] [i_8] [i_2] [i_2] [i_0] [i_2 + 1]), (((/* implicit */unsigned int) (_Bool)1))))), (((((/* implicit */_Bool) 2281675167U)) ? (-9223372036854775781LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-124)))))));
                    }
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */unsigned char) (((-(((/* implicit */int) var_1)))) != ((-(((((/* implicit */int) var_11)) * (((/* implicit */int) var_4))))))));
}
