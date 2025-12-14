/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147972
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
    var_11 = ((/* implicit */int) max((((((/* implicit */_Bool) (signed char)93)) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)30))))) : (2171615229U))), (((/* implicit */unsigned int) (_Bool)1))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (int i_2 = 0; i_2 < 16; i_2 += 1) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_12 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_2 [i_0])) - (((/* implicit */int) arr_2 [i_0])))) / ((+(((/* implicit */int) arr_10 [i_0] [i_2] [i_0]))))));
                        arr_11 [i_0] [i_3] = ((/* implicit */int) max(((!(arr_8 [i_2] [i_0] [i_0]))), ((!(((/* implicit */_Bool) ((var_9) + (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))))));
                        var_13 = ((/* implicit */int) min((((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)0))))), (arr_3 [i_0])));
                        var_14 = min((((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_7 [i_0] [i_1] [(unsigned short)11]))))), (max(((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))) : (var_9))), ((+(35203187U))))));
                        /* LoopSeq 3 */
                        for (long long int i_4 = 0; i_4 < 16; i_4 += 2) 
                        {
                            var_15 = ((/* implicit */long long int) (-((-(((/* implicit */int) var_3))))));
                            arr_14 [11] [i_1] [i_2] [i_1] [i_0] = ((int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2456135503435353826LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_1)))) ? (((unsigned long long int) var_6)) : (((unsigned long long int) arr_6 [i_0] [i_1] [i_0] [i_3]))));
                            var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) arr_8 [i_4] [i_4] [i_4]))));
                            var_17 = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) min((((/* implicit */int) (_Bool)1)), (var_6))))))));
                        }
                        /* vectorizable */
                        for (unsigned short i_5 = 0; i_5 < 16; i_5 += 2) 
                        {
                            var_18 -= ((/* implicit */long long int) ((((/* implicit */unsigned int) var_2)) * (var_7)));
                            var_19 = ((/* implicit */unsigned long long int) ((14913641460557786831ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                            arr_19 [i_0] [i_1] [i_2] [i_0] [i_0] [i_5] [(unsigned char)9] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) var_9)))) || (((/* implicit */_Bool) ((unsigned long long int) (unsigned short)1492)))));
                            arr_20 [i_0] [i_3] [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0]);
                        }
                        for (int i_6 = 0; i_6 < 16; i_6 += 2) 
                        {
                            arr_24 [i_0] [(unsigned char)15] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) arr_4 [i_0]);
                            var_20 = ((/* implicit */unsigned char) min((((/* implicit */long long int) arr_12 [i_2])), (arr_3 [i_0])));
                        }
                    }
                    var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((arr_16 [i_1] [i_1] [i_1]) % (((/* implicit */long long int) var_2))))))))));
                }
                var_22 += (+(((((/* implicit */_Bool) ((signed char) (unsigned short)13539))) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_0] [i_0] [i_1] [i_0] [i_0] [i_0] [i_1]))))));
                var_23 = ((((/* implicit */_Bool) ((arr_18 [i_0] [i_1] [i_1] [i_1] [i_1]) ? (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_0] [i_1] [8U] [i_1] [i_1]))) : (arr_3 [i_1])))) ? ((-(((/* implicit */int) arr_15 [i_1] [i_1] [i_1] [i_0] [i_1])))) : (((int) var_6)));
                var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) min(((signed char)60), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0] [i_1])) && (((/* implicit */_Bool) arr_12 [15]))))))))));
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) -1403507426)))))));
}
