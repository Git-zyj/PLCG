/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122860
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
    var_17 = ((/* implicit */unsigned int) min((18148797842302353798ULL), (297946231407197818ULL)));
    var_18 = ((/* implicit */short) var_0);
    var_19 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((var_16) / (((((/* implicit */int) var_8)) + (((/* implicit */int) (short)437))))))), (var_15)));
    var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) 1247453600U))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) ((signed char) ((unsigned short) ((297946231407197817ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))))));
                    var_22 ^= ((short) ((((var_4) << (((var_14) - (8934036895452247712ULL))))) >> (((((/* implicit */int) ((unsigned char) var_16))) - (43)))));
                }
            } 
        } 
    } 
}
