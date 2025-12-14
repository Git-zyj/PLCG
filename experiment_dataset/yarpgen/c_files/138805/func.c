/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138805
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138805 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138805
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
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                arr_6 [i_0] &= ((/* implicit */_Bool) max((((((/* implicit */unsigned long long int) -7914958192841119923LL)) * (((((/* implicit */_Bool) 7914958192841119923LL)) ? (((/* implicit */unsigned long long int) arr_0 [(unsigned char)8])) : (var_10))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0])) / (((/* implicit */int) var_6))))) ? (((/* implicit */int) min((((/* implicit */unsigned char) arr_1 [i_0])), ((unsigned char)8)))) : (((/* implicit */int) ((signed char) (_Bool)1))))))));
                arr_7 [i_0] = ((/* implicit */_Bool) ((signed char) ((((/* implicit */int) arr_2 [i_0])) > (((/* implicit */int) arr_2 [i_1])))));
                /* LoopSeq 1 */
                for (unsigned char i_2 = 0; i_2 < 23; i_2 += 2) 
                {
                    arr_11 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */int) arr_10 [i_1] [i_0])) >= (((/* implicit */int) arr_10 [i_2] [i_0])))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_15 = max((((/* implicit */int) ((signed char) arr_2 [i_0]))), (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_13 [(signed char)10] [i_0] [i_0] [i_2] [i_1] [i_0])) : (((/* implicit */int) arr_13 [i_0] [(short)1] [i_0] [i_0] [i_0] [i_0])))));
                                var_16 = (~(((var_0) ? (((18446744073709551598ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_4]))))) : (min((((/* implicit */unsigned long long int) arr_5 [i_0])), (var_2))))));
                                arr_17 [i_1] [i_4] = ((/* implicit */signed char) max((((/* implicit */int) arr_3 [i_0])), (min((((/* implicit */int) arr_10 [i_0] [i_1])), (((((/* implicit */int) arr_10 [i_3] [i_1])) - (((/* implicit */int) arr_5 [i_0]))))))));
                                arr_18 [i_4] [i_1] [(signed char)1] [i_3] [i_4] [(signed char)8] = ((((/* implicit */_Bool) (-(-7914958192841119907LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (+(arr_8 [i_0] [i_0])))))) : (((((arr_9 [i_4] [i_3] [i_2] [i_1]) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)249))))) ? (((((/* implicit */_Bool) (short)20742)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -7914958192841119922LL)) ? (((/* implicit */int) (short)32754)) : (((/* implicit */int) arr_2 [i_4]))))))));
                            }
                        } 
                    } 
                    var_17 |= ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (var_10))))) - (((((/* implicit */_Bool) -7914958192841119924LL)) ? (((/* implicit */int) arr_13 [i_1] [i_1] [i_2] [i_0] [i_1] [i_2])) : (((/* implicit */int) arr_15 [i_2] [i_1] [i_1] [i_0] [i_0]))))));
                }
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) max((var_18), ((-(((((/* implicit */_Bool) (+(-7914958192841119925LL)))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_14))))) : (((var_3) / (((/* implicit */unsigned long long int) var_11))))))))));
}
