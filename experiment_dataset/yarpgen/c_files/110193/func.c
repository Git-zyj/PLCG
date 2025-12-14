/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110193
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110193 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110193
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
    var_19 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((((/* implicit */int) (unsigned short)65530)) + (((/* implicit */int) var_7))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 939524096U)) ? (2944877791U) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_15)))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */short) max((((/* implicit */unsigned int) (-(arr_3 [i_1] [(unsigned short)2])))), (((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (arr_4 [i_0]) : (arr_4 [i_0])))));
                var_21 = ((/* implicit */_Bool) 841613377);
            }
        } 
    } 
    /* LoopNest 3 */
    for (short i_2 = 2; i_2 < 20; i_2 += 1) 
    {
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) ((((/* implicit */_Bool) 2944877783U)) ? (((/* implicit */long long int) (+(1350089503U)))) : ((+((-(arr_0 [(unsigned short)5]))))))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_5 = 0; i_5 < 21; i_5 += 1) 
                    {
                        var_23 += ((/* implicit */unsigned short) ((short) arr_3 [9U] [9U]));
                        var_24 = var_14;
                    }
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) 1350089506U))));
    var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_5)) : (var_9)))))) ? (((((/* implicit */_Bool) (unsigned short)9345)) ? (((((/* implicit */long long int) 2552481693U)) - (var_15))) : (((/* implicit */long long int) var_18)))) : (min((var_2), (((/* implicit */long long int) (_Bool)0))))));
}
