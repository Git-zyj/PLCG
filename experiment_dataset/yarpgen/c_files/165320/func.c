/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165320
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165320 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165320
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
    var_20 = ((/* implicit */unsigned int) max(((!(((/* implicit */_Bool) min((4233145863127797687LL), (((/* implicit */long long int) (_Bool)1))))))), ((((~(((/* implicit */int) (short)10196)))) <= (((/* implicit */int) max(((_Bool)1), ((_Bool)1))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 23; i_0 += 4) 
    {
        for (int i_1 = 3; i_1 < 22; i_1 += 4) 
        {
            {
                arr_4 [i_0] [i_0] = ((/* implicit */short) (+(((/* implicit */int) (unsigned short)65535))));
                arr_5 [i_0 - 1] [i_1] [i_0 - 1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (arr_2 [i_1 + 1] [i_1 - 2]) : (arr_2 [i_1 - 2] [i_1 - 2])))) ? (((((/* implicit */_Bool) (unsigned char)211)) ? (arr_2 [i_1] [i_1 - 2]) : (arr_2 [(signed char)2] [i_1 - 2]))) : (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))))));
                var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) var_1))));
            }
        } 
    } 
    var_22 = var_16;
    var_23 = ((/* implicit */unsigned char) ((var_13) ? (min(((-(var_17))), (((/* implicit */long long int) (((_Bool)0) ? (1092540332U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))) : (((/* implicit */long long int) ((((/* implicit */int) max((((/* implicit */unsigned short) var_18)), (var_19)))) >> (((var_15) + (8497332818153513055LL))))))));
}
