/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167458
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167458 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167458
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
    var_17 = ((/* implicit */unsigned short) var_8);
    var_18 -= ((/* implicit */_Bool) (~(((((var_3) - (((/* implicit */int) var_6)))) | (((/* implicit */int) var_7))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 3; i_0 < 6; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 6; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */short) var_11);
                    var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) var_15))));
                    arr_10 [(short)5] [i_1] = ((/* implicit */signed char) var_7);
                    var_21 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) | (1879048192U)));
                    var_22 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((var_15) == (((/* implicit */int) var_6)))))) ^ (max((var_12), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_14)))))))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */short) var_9);
}
