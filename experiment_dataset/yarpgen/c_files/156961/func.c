/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156961
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156961 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156961
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
    for (short i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 13; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */short) arr_2 [i_0]);
                var_14 = ((/* implicit */unsigned char) max((min((((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_11))))), (((((/* implicit */long long int) 819816733)) / (arr_3 [i_0]))))), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned short)63649)) : (((/* implicit */int) arr_0 [11LL] [i_1 + 2]))))) * (((((/* implicit */unsigned int) ((/* implicit */int) var_11))) / (var_6))))))));
            }
        } 
    } 
    var_15 = ((/* implicit */_Bool) var_0);
    var_16 *= ((/* implicit */short) ((var_0) << ((((((-(((/* implicit */int) (unsigned short)63657)))) + (63679))) - (21)))));
}
