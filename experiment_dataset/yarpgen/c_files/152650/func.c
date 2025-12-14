/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152650
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
    var_16 *= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_11)) ? (((long long int) var_11)) : (((/* implicit */long long int) ((/* implicit */int) var_12))))) - (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_14))))) ? (((/* implicit */int) var_14)) : ((-(var_5))))))));
    var_17 = ((/* implicit */long long int) ((((/* implicit */int) (short)32761)) <= (((/* implicit */int) var_6))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 24; i_0 += 3) 
    {
        for (int i_1 = 3; i_1 < 24; i_1 += 1) 
        {
            {
                /* LoopSeq 4 */
                for (short i_2 = 1; i_2 < 24; i_2 += 1) 
                {
                    arr_8 [i_2] [i_1] [i_0] [i_0] = ((/* implicit */int) ((arr_4 [i_1 + 1] [i_2 - 1]) || (((/* implicit */_Bool) max((var_15), (((/* implicit */unsigned int) 1556125588)))))));
                    arr_9 [i_0] = ((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_1]);
                    arr_10 [i_2] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((min((arr_2 [i_0 - 1] [i_0] [i_2]), (((/* implicit */int) (short)32767)))) / (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), (arr_5 [i_0] [(unsigned char)5] [i_0] [i_2 + 1]))))));
                }
                for (unsigned char i_3 = 2; i_3 < 24; i_3 += 3) 
                {
                    arr_13 [i_0] [i_0] [i_1] [i_3 - 2] = ((/* implicit */_Bool) (~(min((((/* implicit */unsigned int) ((int) 25LL))), (((unsigned int) 0))))));
                    var_18 += ((/* implicit */short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_0 [i_0 - 1])) != (((/* implicit */int) arr_0 [i_0 - 1])))))) : (((unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)19647))) : (var_8))))));
                }
                /* vectorizable */
                for (unsigned int i_4 = 0; i_4 < 25; i_4 += 2) 
                {
                    arr_18 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */short) var_9);
                    /* LoopSeq 1 */
                    for (int i_5 = 0; i_5 < 25; i_5 += 2) 
                    {
                        arr_22 [i_0] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned long long int) (+((-(((/* implicit */int) arr_5 [i_5] [i_0] [i_0] [i_0]))))));
                        var_19 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_11 [i_5] [i_4] [i_1] [i_0]))));
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 1; i_6 < 24; i_6 += 1) 
                    {
                        for (long long int i_7 = 0; i_7 < 25; i_7 += 3) 
                        {
                            {
                                arr_30 [12LL] [i_0] = ((((/* implicit */_Bool) arr_5 [i_0 - 1] [i_0 + 1] [i_0] [i_0 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (6138400616955045572LL));
                                var_20 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (short)-23662))) < (arr_19 [i_0] [i_6 - 1] [(short)0])));
                                arr_31 [i_0] [6LL] [i_4] [i_6 - 1] [(short)19] [i_7] = ((/* implicit */short) ((arr_1 [i_0 + 1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 - 1]))) : (arr_28 [i_0 + 1] [i_0] [(unsigned short)24] [i_6 - 1] [i_6])));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                {
                    var_21 *= ((/* implicit */short) (+(arr_25 [i_1 - 1] [i_1] [i_1 - 2] [i_1 + 1])));
                    var_22 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) var_9)) ? (arr_15 [i_1]) : (((/* implicit */int) var_0))))));
                    arr_36 [i_0] [17LL] [i_8] [(_Bool)1] = ((/* implicit */short) arr_2 [(short)23] [i_0] [(unsigned short)21]);
                    arr_37 [i_0 + 1] [i_0] [i_1] [(short)23] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_35 [i_0] [i_1] [i_8] [i_8])) : (arr_2 [i_0] [i_0] [i_0])))) ? (arr_25 [4U] [23] [i_0] [i_0 + 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 + 1])))));
                }
                var_23 = ((/* implicit */short) ((((/* implicit */_Bool) (short)-32761)) && (((/* implicit */_Bool) ((arr_29 [i_1 - 1] [i_1] [i_1] [i_1] [(short)2] [i_0]) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_4))))));
                arr_38 [i_0] [i_1] = ((/* implicit */long long int) max(((-(((/* implicit */int) var_14)))), (((/* implicit */int) (_Bool)1))));
                var_24 = ((/* implicit */short) ((min((((((/* implicit */_Bool) (short)-32755)) ? (12668983447777625955ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0))))), (((/* implicit */unsigned long long int) min((var_4), (((/* implicit */long long int) arr_24 [i_0] [(short)24] [i_0]))))))) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_17 [(short)9] [i_0] [i_1] [i_1 + 1])) : (((/* implicit */int) arr_5 [i_0 - 1] [(short)24] [i_0] [(short)24])))))));
            }
        } 
    } 
}
