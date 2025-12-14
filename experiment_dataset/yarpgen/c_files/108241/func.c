/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108241
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108241 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108241
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
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    arr_10 [i_0] [i_1] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)65531)) ? (7582363286940580341ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))));
                    var_17 = ((/* implicit */int) min((var_17), ((-(var_6)))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) 7582363286940580341ULL)) ? (-149548226) : (736358963))) : (((((/* implicit */int) var_10)) >> (((min((-149548218), (((/* implicit */int) var_0)))) + (149548227)))))));
    var_19 += ((/* implicit */unsigned int) var_6);
}
