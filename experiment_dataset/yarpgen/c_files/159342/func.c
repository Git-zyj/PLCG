/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159342
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159342 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159342
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
    var_17 = ((min((((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned int) var_15))))), (((var_13) ? (6934040520754389025ULL) : (((/* implicit */unsigned long long int) 6229534989375350061LL)))))) < (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((short) (unsigned short)59833)))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    arr_10 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-11093))) + (var_4)))) > ((~(var_1))))))) + ((~(arr_2 [(_Bool)1])))));
                    var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) min((((/* implicit */unsigned long long int) max((((unsigned int) (unsigned char)101)), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) > (var_4))))))), (max((((var_8) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)5702))))), (((/* implicit */unsigned long long int) ((var_1) == (((/* implicit */long long int) 2174575928U))))))))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) ((min((((((/* implicit */_Bool) (unsigned char)101)) && (((/* implicit */_Bool) (short)13492)))), ((_Bool)0))) ? (max((((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)131))))), (((((/* implicit */_Bool) var_3)) ? (var_0) : (((/* implicit */long long int) var_4)))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_3))))))));
    var_20 = ((/* implicit */long long int) var_11);
}
