/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107702
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107702 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107702
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
    var_13 = (unsigned short)30291;
    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((var_1) & (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) min((var_7), (var_11))))))) : ((+(((/* implicit */int) min((var_9), (var_9))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 17; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) min((var_5), (((/* implicit */unsigned char) var_8)))))))) ? (max((((/* implicit */long long int) max((var_8), ((_Bool)1)))), (((var_2) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_10))))))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                    arr_10 [i_0] [(unsigned char)12] [i_0] [i_2] = ((/* implicit */signed char) min((12122988663155436497ULL), (((/* implicit */unsigned long long int) (signed char)-1))));
                }
            } 
        } 
    } 
}
