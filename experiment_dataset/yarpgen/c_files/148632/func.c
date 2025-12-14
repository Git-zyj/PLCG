/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148632
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148632 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148632
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
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) (+(((/* implicit */int) (unsigned short)12880)))))));
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned short) var_13);
                var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_5 [i_0] [9] [i_1])) ? (((/* implicit */int) arr_3 [i_1] [i_0] [i_0])) : (((/* implicit */int) ((short) (short)-20227))))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? ((+(((/* implicit */int) var_13)))) : (((/* implicit */int) (unsigned char)122))));
    var_19 = var_13;
}
