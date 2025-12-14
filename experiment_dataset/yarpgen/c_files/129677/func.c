/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129677
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129677 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129677
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
    var_16 = ((/* implicit */_Bool) (~(max((((/* implicit */int) (unsigned char)21)), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (_Bool)1))))))));
    var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) (+(max((((/* implicit */long long int) (_Bool)1)), (-6084407912116592016LL)))))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((var_6) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (signed char)120))))) : (min((var_12), (((/* implicit */unsigned long long int) var_6))))))));
    var_18 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_10))));
    /* LoopSeq 2 */
    for (signed char i_0 = 3; i_0 < 8; i_0 += 1) 
    {
        arr_4 [i_0] [(unsigned char)7] = ((/* implicit */long long int) ((signed char) (_Bool)1));
        var_19 *= var_8;
        arr_5 [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0])))))));
        var_20 *= ((/* implicit */unsigned int) max((((long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0])))))), (((/* implicit */long long int) var_9))));
    }
    for (unsigned short i_1 = 1; i_1 < 22; i_1 += 1) 
    {
        arr_8 [i_1 + 2] = ((/* implicit */signed char) (~((-(((((/* implicit */_Bool) arr_7 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (arr_6 [i_1])))))));
        /* LoopSeq 1 */
        for (signed char i_2 = 1; i_2 < 21; i_2 += 1) 
        {
            arr_12 [i_1] [i_2] [i_2] = ((/* implicit */unsigned short) (-(((/* implicit */int) (_Bool)1))));
            var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) (~(((arr_6 [i_2 + 1]) / (((/* implicit */long long int) var_1)))))))));
        }
    }
}
