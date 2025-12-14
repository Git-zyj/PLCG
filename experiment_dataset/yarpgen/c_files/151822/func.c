/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151822
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
    var_12 = ((/* implicit */short) max((((/* implicit */unsigned char) ((((/* implicit */int) max((((/* implicit */short) var_11)), (var_6)))) == (((/* implicit */int) var_7))))), (max((((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) && (var_7)))), (max((var_11), (((/* implicit */unsigned char) var_7))))))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) ((18014398509481983LL) / (4762301471096935480LL))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 3; i_2 < 19; i_2 += 3) 
            {
                {
                    var_14 = ((/* implicit */short) (~(((/* implicit */int) ((short) (_Bool)0)))));
                    arr_8 [i_0] [(short)20] [(unsigned char)8] &= ((/* implicit */unsigned long long int) (short)-13178);
                }
            } 
        } 
        var_15 = ((/* implicit */unsigned int) var_1);
    }
}
