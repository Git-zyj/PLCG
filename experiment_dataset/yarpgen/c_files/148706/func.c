/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148706
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
    var_17 = ((/* implicit */int) ((((((/* implicit */_Bool) 884927004U)) ? (var_3) : (max((((/* implicit */long long int) var_15)), (var_3))))) > (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */int) var_7)), (var_5)))) ? (((((/* implicit */int) var_4)) ^ (((/* implicit */int) var_14)))) : (((/* implicit */int) ((((/* implicit */int) var_14)) >= (((/* implicit */int) var_10))))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 17; i_3 += 1) 
                    {
                        var_18 = ((((/* implicit */_Bool) 884927004U)) ? (min((884926989U), (((/* implicit */unsigned int) (_Bool)1)))) : (((884927016U) / (884927004U))));
                        arr_8 [i_0] [i_1] [i_2] [i_3] [i_0] [i_1] = ((/* implicit */int) var_7);
                        var_19 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_6 [i_3 + 1] [i_3] [i_3 - 1] [11U])))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_16))))) : (((((/* implicit */_Bool) arr_6 [i_3 - 1] [i_3] [i_3 + 1] [i_3])) ? (((/* implicit */int) arr_6 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3 - 1])) : (((/* implicit */int) arr_6 [i_3 + 1] [(unsigned char)3] [i_3 + 1] [(unsigned char)3]))))));
                    }
                    for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 4) 
                    {
                        var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_1), (((/* implicit */unsigned int) var_0))))) ? (((/* implicit */unsigned long long int) max((max((884926976U), (((/* implicit */unsigned int) var_2)))), (((/* implicit */unsigned int) arr_4 [i_0] [i_1] [0U] [i_4]))))) : (max((((/* implicit */unsigned long long int) arr_3 [i_0] [i_0] [i_4])), (((((/* implicit */_Bool) var_11)) ? (var_12) : (((/* implicit */unsigned long long int) 884926960U))))))));
                        var_21 = ((((/* implicit */unsigned long long int) ((max((arr_2 [i_0] [i_0] [i_2]), (((/* implicit */unsigned int) var_7)))) ^ (((/* implicit */unsigned int) ((var_15) ? (((/* implicit */int) arr_9 [5] [i_0] [5])) : (((/* implicit */int) var_2)))))))) & (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [(unsigned char)8] [17] [17])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))), (var_11))));
                        var_22 = (!(((/* implicit */_Bool) 5U)));
                        arr_13 [i_0] = ((/* implicit */_Bool) var_16);
                    }
                    var_23 = ((/* implicit */unsigned char) var_9);
                    var_24 -= ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) ((((/* implicit */unsigned int) arr_1 [i_0])) < (arr_2 [8] [i_1] [3U])))) : (((/* implicit */int) (_Bool)1))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (signed char i_5 = 2; i_5 < 14; i_5 += 1) 
                    {
                        arr_16 [i_0] [i_1] [(unsigned char)5] [i_1] [i_0] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (var_16) : (((/* implicit */int) var_4))));
                        var_25 += ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_5 - 1] [16] [i_0])) ? (((/* implicit */int) var_15)) : (((((/* implicit */int) arr_5 [i_0] [(unsigned char)10])) * (((/* implicit */int) var_14))))));
                        var_26 = ((/* implicit */unsigned long long int) (+(arr_12 [i_0] [i_1] [i_2] [i_5 + 2])));
                        var_27 = ((/* implicit */unsigned long long int) ((884926984U) >> (((/* implicit */int) (!(((/* implicit */_Bool) var_16)))))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_6 = 0; i_6 < 18; i_6 += 1) 
                    {
                        arr_21 [(_Bool)1] [i_0] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) arr_2 [i_1] [i_1] [15]);
                        var_28 = ((/* implicit */_Bool) ((((((/* implicit */int) var_10)) ^ (((/* implicit */int) var_0)))) << (((((arr_19 [i_0] [i_0] [i_0] [i_0]) ? (arr_10 [3] [(unsigned short)14] [(_Bool)1]) : (var_1))) - (3949489250U)))));
                        var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_14 [i_6] [i_0] [i_0] [i_0])) ? (arr_1 [i_2]) : (((/* implicit */int) arr_19 [i_0] [i_0] [i_0] [i_0]))));
                    }
                }
            } 
        } 
    } 
    var_30 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (var_11)))) && ((!((_Bool)1))))))) < (((((/* implicit */_Bool) 6447874473716472149ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_11)))));
}
