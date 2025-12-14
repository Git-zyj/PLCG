/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108853
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
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        var_10 = ((/* implicit */_Bool) (-((-(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (unsigned char)120)))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */int) var_7);
        var_11 -= ((/* implicit */signed char) ((unsigned char) ((((/* implicit */int) arr_2 [i_0])) ^ (((/* implicit */int) arr_1 [i_0] [i_0])))));
    }
    /* vectorizable */
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        var_12 = ((/* implicit */_Bool) 1165778060046787945ULL);
        var_13 = ((/* implicit */_Bool) var_0);
        arr_6 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_1 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1 - 1] [i_1 - 1]))) : (arr_4 [i_1 - 1])));
        arr_7 [i_1] [i_1] = ((/* implicit */int) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) var_1)))) <= (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) var_7)))))));
    }
    for (short i_2 = 3; i_2 < 23; i_2 += 1) 
    {
        arr_10 [i_2] = (!(((/* implicit */_Bool) 562949953421311ULL)));
        var_14 -= ((/* implicit */unsigned long long int) max(((+(((/* implicit */int) arr_8 [i_2 - 1])))), (((/* implicit */int) ((562949953421307ULL) < (((/* implicit */unsigned long long int) 3603354374874483554LL)))))));
        /* LoopNest 2 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    var_15 = ((/* implicit */int) var_0);
                    var_16 ^= ((/* implicit */signed char) max(((~(((((/* implicit */_Bool) arr_12 [i_2] [i_2] [(short)20])) ? (arr_14 [i_2] [(short)22]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))), (min((var_5), (((unsigned long long int) arr_9 [i_3]))))));
                }
            } 
        } 
        arr_15 [i_2] = ((/* implicit */_Bool) 3603354374874483554LL);
    }
    /* LoopSeq 1 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_5])) && (((/* implicit */_Bool) ((((/* implicit */int) arr_9 [(unsigned short)0])) << (((((/* implicit */int) arr_9 [i_5])) - (183))))))));
        var_18 = ((/* implicit */_Bool) ((short) (-(((/* implicit */int) arr_2 [i_5])))));
        var_19 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned short)65535)), (min((((/* implicit */long long int) (short)24106)), (3603354374874483536LL)))))) ? (((/* implicit */int) (unsigned char)221)) : (((/* implicit */int) (short)29478))));
        arr_19 [i_5] = ((/* implicit */unsigned short) arr_17 [i_5]);
        arr_20 [i_5] = ((/* implicit */long long int) ((((var_1) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_5] [i_5] [i_5]))))) == (((/* implicit */long long int) min((((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) arr_11 [i_5] [i_5] [i_5]))))), (((((/* implicit */_Bool) arr_17 [i_5])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_1 [i_5] [i_5])))))))));
    }
    var_20 ^= ((/* implicit */signed char) min((((/* implicit */short) var_3)), (var_9)));
}
