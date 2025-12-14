/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129131
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
    var_18 = ((/* implicit */unsigned short) ((((max((((/* implicit */unsigned int) (_Bool)1)), (1835008U))) != (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_17)))));
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) var_7))) ? (-5766428067183837546LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
    var_20 = ((/* implicit */unsigned long long int) (!((_Bool)1)));
    var_21 = ((/* implicit */unsigned long long int) (_Bool)1);
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned long long int) (_Bool)1);
        arr_4 [17ULL] [(unsigned char)5] = 1419005664;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 25; i_1 += 3) 
    {
        arr_7 [i_1] = ((unsigned long long int) (short)-31335);
        /* LoopNest 2 */
        for (short i_2 = 0; i_2 < 25; i_2 += 1) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 1) 
            {
                {
                    var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4503599627370495LL)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (unsigned short)3875))))) ? ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (2744806455709388876ULL))) : (((/* implicit */unsigned long long int) arr_8 [i_3]))));
                    /* LoopSeq 2 */
                    for (unsigned int i_4 = 0; i_4 < 25; i_4 += 2) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_5 = 0; i_5 < 25; i_5 += 1) 
                        {
                            var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((short) arr_13 [i_1] [16ULL] [i_1])))));
                            arr_17 [i_4] [i_3] [i_2] [i_1] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) (signed char)-38)) ? (((/* implicit */int) (signed char)71)) : (((/* implicit */int) (unsigned short)3875))))));
                            var_24 = ((/* implicit */_Bool) (~(((((/* implicit */int) (_Bool)1)) / (arr_8 [(unsigned short)22])))));
                        }
                        for (unsigned long long int i_6 = 0; i_6 < 25; i_6 += 2) 
                        {
                            arr_20 [i_1] [9U] [i_4] [(short)17] = ((/* implicit */unsigned int) arr_16 [20] [i_2] [23ULL] [23ULL] [i_2]);
                            arr_21 [i_1] [i_2] [i_6] [i_4] [i_3] = ((/* implicit */long long int) var_14);
                            var_25 = ((/* implicit */unsigned int) ((short) ((((/* implicit */int) (_Bool)1)) * (0))));
                            var_26 = ((((/* implicit */_Bool) arr_14 [i_1] [(unsigned char)4] [i_6] [i_4])) ? (((/* implicit */unsigned long long int) arr_14 [7ULL] [i_2] [i_3] [7ULL])) : (1357557862259286736ULL));
                        }
                        var_27 = (!((_Bool)1));
                        arr_22 [i_4] [(short)4] = ((/* implicit */int) ((((/* implicit */_Bool) arr_9 [(unsigned char)21] [i_2] [(unsigned short)10])) ? (arr_14 [13LL] [i_3] [i_2] [13LL]) : (((/* implicit */unsigned int) arr_8 [i_3]))));
                        arr_23 [i_4] [i_1] [i_2] [i_1] = (-(((/* implicit */int) (short)22525)));
                    }
                    for (unsigned int i_7 = 0; i_7 < 25; i_7 += 2) /* same iter space */
                    {
                        arr_26 [7ULL] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) -1419005665)) ? (((/* implicit */int) arr_10 [i_1])) : (((/* implicit */int) arr_10 [i_1]))));
                        var_28 *= ((/* implicit */unsigned short) (+(arr_12 [i_1] [i_1] [i_2] [i_3] [i_7] [i_1])));
                        var_29 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) (signed char)-72)))) ? (4382042561479336419ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 1357557862259286736ULL)) && (((/* implicit */_Bool) var_2))))))));
                    }
                    var_30 = ((/* implicit */unsigned int) arr_13 [0ULL] [i_2] [i_3]);
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned int i_8 = 0; i_8 < 25; i_8 += 1) 
        {
            var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_1] [2LL] [i_1])) ? (((/* implicit */int) arr_16 [(unsigned char)18] [(unsigned char)18] [i_8] [i_8] [i_8])) : (((/* implicit */int) arr_16 [i_1] [i_8] [i_8] [i_8] [i_1]))))) ? (((/* implicit */int) arr_18 [i_8] [i_8] [i_1])) : ((~(arr_8 [i_1])))));
            var_32 = ((/* implicit */int) ((((_Bool) 3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)32768))) : (((unsigned long long int) (signed char)127))));
            arr_29 [i_8] [i_8] [i_1] = ((/* implicit */long long int) ((_Bool) arr_25 [i_1] [i_1] [i_8] [i_8] [i_8]));
            var_33 = ((/* implicit */unsigned char) arr_18 [i_8] [i_8] [i_8]);
            arr_30 [i_1] [i_8] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) arr_13 [12ULL] [4U] [i_1]))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_13 [i_8] [i_1] [12]))))) : (arr_9 [i_8] [i_8] [i_1])));
        }
        var_34 *= arr_13 [i_1] [i_1] [i_1];
        var_35 = (~(arr_5 [i_1]));
    }
}
