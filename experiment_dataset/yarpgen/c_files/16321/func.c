/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16321
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
    var_13 = ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) var_4)), (var_7)))) ? (var_12) : ((-(734321221147099243LL))))));
    var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) min((min((min((var_2), (((/* implicit */unsigned long long int) var_6)))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) (short)8173)), (var_6)))))), (((((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_11)))) ? (var_2) : (var_11))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 23; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                {
                    var_15 = ((/* implicit */_Bool) arr_2 [(unsigned char)5] [(unsigned char)5]);
                    var_16 = ((/* implicit */long long int) arr_6 [i_0] [i_0]);
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))) * (((((/* implicit */_Bool) var_7)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))));
}
