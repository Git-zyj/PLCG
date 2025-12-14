/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174830
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174830 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174830
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
    for (short i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 23; i_2 += 3) 
            {
                {
                    var_18 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((long long int) arr_4 [i_0] [i_1] [i_2] [i_2 + 1]))) ? (((unsigned int) 112U)) : (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))))))), (((/* implicit */unsigned int) (_Bool)1))));
                    var_19 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) (-(2347069214U)))) ? (((/* implicit */int) max((((/* implicit */unsigned short) arr_5 [i_0] [i_0])), (var_6)))) : (((/* implicit */int) arr_2 [i_0] [i_2 + 1] [i_2]))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned char) var_6);
    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)8190)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (112U)));
}
