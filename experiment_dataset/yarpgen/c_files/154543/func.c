/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154543
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154543 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154543
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
    var_18 = ((/* implicit */unsigned short) ((min((((/* implicit */unsigned int) min(((unsigned short)0), (((/* implicit */unsigned short) (_Bool)1))))), (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)50))) & (var_1))))) <= (((/* implicit */unsigned int) ((((((/* implicit */int) var_4)) + (((/* implicit */int) var_5)))) - ((-(((/* implicit */int) var_5)))))))));
    var_19 = ((/* implicit */short) min((((/* implicit */unsigned int) var_6)), (max((((/* implicit */unsigned int) max((var_16), (var_4)))), ((+(var_13)))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_20 *= ((/* implicit */long long int) ((unsigned long long int) var_9));
                    var_21 = ((/* implicit */unsigned short) var_13);
                }
            } 
        } 
    } 
}
