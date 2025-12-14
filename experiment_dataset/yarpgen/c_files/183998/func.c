/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183998
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) (-(((var_13) | (((/* implicit */unsigned long long int) ((((/* implicit */int) var_14)) >> (((((/* implicit */int) var_14)) - (63809)))))))))))));
                    var_20 = ((/* implicit */unsigned char) (-(((18446744073709551607ULL) >> (((/* implicit */int) (_Bool)1))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned short) var_9);
    var_22 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((max((var_8), (((/* implicit */int) var_2)))) + ((+(var_8)))))), (((((var_11) + (((/* implicit */unsigned long long int) var_4)))) * (((/* implicit */unsigned long long int) var_4))))));
}
