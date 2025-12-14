/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130822
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
    var_14 = ((/* implicit */unsigned short) (((-(((int) var_12)))) - (((/* implicit */int) var_13))));
    var_15 = ((/* implicit */signed char) var_2);
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 7; i_2 += 2) 
            {
                {
                    var_16 = ((/* implicit */_Bool) (~(min((((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) arr_2 [i_1])))), ((~(((/* implicit */int) (_Bool)1))))))));
                    var_17 = ((/* implicit */int) min(((~((+(4294967295U))))), (((/* implicit */unsigned int) (unsigned short)65520))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) var_11);
    var_19 = ((/* implicit */short) var_11);
}
