/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180050
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
    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)253))))) ? (((/* implicit */int) (unsigned short)31378)) : (var_14)));
    var_18 = ((/* implicit */unsigned char) 9578634148708548235ULL);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                var_19 -= ((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned char)227)) ? (((/* implicit */int) (signed char)22)) : (((int) (unsigned char)8)))) << (((arr_3 [i_1] [i_1] [i_0]) - (1133171208)))));
                var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) (((~(((/* implicit */int) arr_1 [i_0])))) / ((~(((/* implicit */int) arr_1 [i_0])))))))));
                arr_6 [i_0] = min((((((/* implicit */_Bool) ((signed char) arr_0 [i_0]))) ? (((((/* implicit */_Bool) 6375594764043222589ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (8868109925001003386ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), (var_12))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [(unsigned short)1])) ? (((var_14) - (((/* implicit */int) arr_1 [i_0])))) : (((/* implicit */int) (signed char)-54))))));
                var_21 *= ((/* implicit */unsigned int) ((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned short)16128)) : (1567766105)))), ((~(12440924258470054871ULL))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)106)))));
                var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) (short)-7299))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) min((var_2), (((/* implicit */unsigned long long int) arr_5 [10ULL] [10ULL] [i_1]))))) ? (arr_3 [i_1] [i_1] [i_0]) : (((/* implicit */int) max(((short)-19384), ((short)-30615))))))) : (((1044480LL) | (1044465LL))))))));
            }
        } 
    } 
}
