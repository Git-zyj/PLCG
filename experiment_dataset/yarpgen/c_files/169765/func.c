/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169765
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169765 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169765
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
    for (signed char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                var_18 *= ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */int) ((var_2) != (((/* implicit */unsigned long long int) 562949953404928LL))))) + (((((/* implicit */int) arr_3 [(unsigned short)8])) >> (((/* implicit */int) arr_6 [10ULL] [i_0] [i_1])))))));
                arr_7 [i_1] = ((/* implicit */unsigned int) arr_6 [i_1] [i_1] [i_0]);
                var_19 = ((/* implicit */long long int) max((min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_12)) + (((/* implicit */int) var_16))))), (var_14))), (((/* implicit */unsigned long long int) ((int) 2672835437U)))));
                arr_8 [i_1] = ((/* implicit */signed char) ((unsigned char) min((((/* implicit */unsigned long long int) 2294474704U)), (min((4297702623119052329ULL), (((/* implicit */unsigned long long int) -3362279223679395716LL)))))));
                /* LoopSeq 2 */
                for (int i_2 = 0; i_2 < 16; i_2 += 4) 
                {
                    arr_12 [i_1] [i_1] [5LL] [i_2] = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)35))) >= (562949953404929LL)));
                    arr_13 [0U] [i_1] [i_1] = ((/* implicit */short) min((max((((/* implicit */unsigned long long int) var_0)), (14149041450590499286ULL))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_3)))))));
                    var_20 = ((/* implicit */int) arr_9 [i_1] [i_1]);
                }
                for (unsigned char i_3 = 3; i_3 < 13; i_3 += 4) 
                {
                    arr_16 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) 14149041450590499289ULL);
                    var_21 = ((/* implicit */_Bool) min((var_10), (max((arr_9 [i_1] [i_1]), (((/* implicit */unsigned short) arr_6 [i_1] [i_1] [i_3 - 3]))))));
                }
            }
        } 
    } 
    var_22 = ((/* implicit */signed char) var_8);
    var_23 = ((/* implicit */signed char) (-((-((-(((/* implicit */int) var_9))))))));
    /* LoopSeq 3 */
    for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 3) 
    {
        arr_21 [i_4] = max((((/* implicit */unsigned long long int) ((4680960833999007284LL) >= (arr_19 [i_4])))), (max((((var_14) - (16496915904323178401ULL))), (((/* implicit */unsigned long long int) ((long long int) 0U))))));
        arr_22 [i_4] = min((((/* implicit */int) (_Bool)1)), (((int) arr_18 [i_4])));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 23; i_5 += 1) 
    {
        arr_26 [i_5] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (arr_24 [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_23 [i_5] [10LL])) ? (((/* implicit */int) (signed char)106)) : (((/* implicit */int) arr_25 [(short)6]))))) : (((((/* implicit */_Bool) -8841951629971391327LL)) ? (((/* implicit */unsigned long long int) var_6)) : (var_14)))));
        var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_25 [i_5])))))));
        var_25 = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) 1287158175U)) ? (arr_24 [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [20]))))));
    }
    /* vectorizable */
    for (unsigned int i_6 = 0; i_6 < 25; i_6 += 3) 
    {
        var_26 = ((/* implicit */short) ((((/* implicit */_Bool) arr_27 [i_6])) ? (-7944245125520242437LL) : (((/* implicit */long long int) ((/* implicit */int) var_4)))));
        var_27 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) var_8)) & (arr_27 [i_6])));
    }
}
