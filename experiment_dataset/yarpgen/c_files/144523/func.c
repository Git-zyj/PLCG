/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144523
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
    for (signed char i_0 = 3; i_0 < 13; i_0 += 3) 
    {
        var_16 -= ((/* implicit */long long int) (((+(((/* implicit */int) arr_1 [i_0 + 2])))) ^ (((((/* implicit */_Bool) arr_1 [i_0 - 2])) ? (((/* implicit */int) (signed char)-81)) : (((/* implicit */int) (unsigned short)18931))))));
        var_17 = ((/* implicit */signed char) min(((-(((/* implicit */int) ((((/* implicit */_Bool) (signed char)83)) || (((/* implicit */_Bool) var_12))))))), (((/* implicit */int) max(((unsigned char)252), (((/* implicit */unsigned char) var_3)))))));
    }
    /* LoopNest 2 */
    for (long long int i_1 = 2; i_1 < 12; i_1 += 4) 
    {
        for (signed char i_2 = 0; i_2 < 14; i_2 += 2) 
        {
            {
                var_18 &= ((/* implicit */signed char) min((((unsigned char) arr_2 [i_1 + 2])), (((/* implicit */unsigned char) ((((/* implicit */int) arr_4 [i_1 + 2] [i_1 + 2] [i_1 + 2])) == (((/* implicit */int) arr_4 [i_1 - 1] [i_1] [i_1 + 2])))))));
                /* LoopSeq 1 */
                for (signed char i_3 = 0; i_3 < 14; i_3 += 2) 
                {
                    var_19 = ((/* implicit */int) ((signed char) ((((/* implicit */int) var_2)) | (arr_6 [i_1 - 2] [i_1 - 2] [i_1]))));
                    arr_8 [i_1] [i_2] [i_3] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [1LL] [i_1 + 2])) ? (((/* implicit */int) arr_4 [i_1] [i_1 - 2] [i_1 - 2])) : (((/* implicit */int) arr_7 [i_1] [i_1 - 2])))))));
                    /* LoopSeq 4 */
                    for (long long int i_4 = 0; i_4 < 14; i_4 += 4) 
                    {
                        var_20 = ((((/* implicit */_Bool) (signed char)80)) ? (((/* implicit */int) (signed char)81)) : (((/* implicit */int) (signed char)35)));
                        var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) ((int) (-(((((/* implicit */_Bool) (short)-16384)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (short)-21739))))))))));
                    }
                    /* vectorizable */
                    for (unsigned char i_5 = 0; i_5 < 14; i_5 += 3) 
                    {
                        var_22 = ((/* implicit */_Bool) -6163049146408803175LL);
                        var_23 = ((/* implicit */long long int) arr_5 [i_5]);
                    }
                    for (short i_6 = 0; i_6 < 14; i_6 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (long long int i_7 = 0; i_7 < 14; i_7 += 4) 
                        {
                            var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1 + 1] [i_1 + 1] [i_6])) ? (arr_6 [i_1] [i_1 + 1] [i_2]) : (((/* implicit */int) var_15))))) ? (((((/* implicit */_Bool) ((int) arr_16 [i_1] [0] [i_3] [i_6] [(short)6]))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)81))) : (((arr_10 [i_6] [i_7]) << (((((/* implicit */int) arr_2 [i_3])) - (53754))))))) : (((/* implicit */long long int) ((((/* implicit */int) var_7)) >> (((/* implicit */int) arr_3 [i_1 + 2] [i_1 + 1]))))))))));
                            var_25 *= ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) arr_16 [i_6] [i_1 + 2] [i_6] [i_1 + 2] [(signed char)10])) < (((/* implicit */int) var_1))))) << (((((/* implicit */int) (short)21738)) - (21709)))));
                            var_26 = ((/* implicit */signed char) min((((/* implicit */short) (!(((/* implicit */_Bool) -2251799813685248LL))))), (min((arr_12 [i_6] [(signed char)6] [i_1 - 2] [i_1 - 2] [i_1 + 1] [i_1 - 2]), ((short)-16386)))));
                        }
                        arr_17 [i_3] [i_2] [i_3] [i_6] [i_2] = ((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) 92231374)) ? (1803430324) : (((/* implicit */int) (signed char)81)))));
                        var_27 = ((/* implicit */long long int) ((((/* implicit */int) max((arr_1 [i_1 - 2]), (((/* implicit */unsigned char) arr_15 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 2] [i_3]))))) ^ (((((/* implicit */int) arr_1 [i_1 - 2])) / (((/* implicit */int) var_1))))));
                    }
                    for (long long int i_8 = 0; i_8 < 14; i_8 += 3) 
                    {
                        var_28 = ((/* implicit */short) min(((+(((/* implicit */int) (signed char)-61)))), (((/* implicit */int) (short)21739))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                        {
                            var_29 = ((1803430345) + (((/* implicit */int) arr_23 [i_9] [i_9 - 1])));
                            var_30 = ((/* implicit */long long int) (((_Bool)0) ? (((/* implicit */int) var_0)) : (var_6)));
                            var_31 = ((/* implicit */signed char) (+(((/* implicit */int) (short)7863))));
                            arr_24 [i_1] [i_1] [i_1] [i_1 - 1] [i_9] = ((/* implicit */short) ((int) arr_9 [i_9] [i_9] [i_9 - 1] [i_1]));
                            var_32 = ((/* implicit */int) (!(((/* implicit */_Bool) -7866778553211590239LL))));
                        }
                        var_33 = ((/* implicit */unsigned char) max((((var_9) ? (((((/* implicit */_Bool) -25)) ? (-7866778553211590239LL) : (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_1] [i_1] [i_1] [i_1] [i_1]))))) : (((/* implicit */long long int) ((/* implicit */int) var_14))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)7192)) ? (((((/* implicit */_Bool) (signed char)-11)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (short)-4997)))))));
                    }
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_10 = 1; i_10 < 15; i_10 += 4) 
    {
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            {
                var_34 = ((/* implicit */unsigned char) ((min((min((((/* implicit */long long int) var_3)), (arr_26 [11LL]))), (((/* implicit */long long int) (short)7885)))) | (((/* implicit */long long int) ((((/* implicit */_Bool) arr_26 [i_10 - 1])) ? (((/* implicit */int) arr_25 [i_10 + 1])) : (((/* implicit */int) var_0)))))));
                var_35 = ((/* implicit */long long int) (+(((/* implicit */int) (signed char)(-127 - 1)))));
            }
        } 
    } 
    var_36 = ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) == (((/* implicit */int) (signed char)-106))));
}
