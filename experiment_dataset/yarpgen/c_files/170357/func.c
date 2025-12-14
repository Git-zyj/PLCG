/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170357
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170357 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170357
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        var_11 = ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])) % (var_7))) * (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)21097)))))));
        var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) arr_0 [i_0] [i_0]))));
        arr_2 [i_0] = ((/* implicit */unsigned char) arr_0 [21ULL] [21ULL]);
        var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) (((-(arr_0 [i_0] [i_0]))) * (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)125))))))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 2) /* same iter space */
        {
            var_14 += ((/* implicit */_Bool) ((((unsigned long long int) var_4)) | (10097672683562060515ULL)));
            var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) arr_4 [i_0] [5LL]))));
            var_16 = arr_3 [i_0];
        }
        for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 2) /* same iter space */
        {
            arr_11 [i_0] [i_0] [i_0] &= ((/* implicit */unsigned short) ((unsigned int) arr_0 [i_0] [i_0]));
            var_17 = ((/* implicit */unsigned char) arr_7 [i_0] [i_0] [i_0]);
        }
    }
    /* vectorizable */
    for (unsigned short i_3 = 2; i_3 < 12; i_3 += 4) 
    {
        var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)108)) ? (4864946206588214179LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) (short)-19122))))) : (((/* implicit */int) (unsigned short)5))));
    }
    var_20 = var_5;
    var_21 = ((/* implicit */unsigned int) ((var_9) <= (((/* implicit */unsigned long long int) -1183283286))));
}
