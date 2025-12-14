/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157295
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
    for (unsigned long long int i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        for (unsigned int i_1 = 3; i_1 < 8; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((_Bool) 8388592)))));
                var_14 *= ((/* implicit */_Bool) max((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) 57928784U)) : (0ULL))), (((/* implicit */unsigned long long int) ((unsigned int) var_1)))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((var_0) + (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (min((18082511643947797099ULL), (((/* implicit */unsigned long long int) (_Bool)1)))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) - (1125899906834432ULL))))) % (((/* implicit */unsigned long long int) var_0)))))));
    /* LoopSeq 1 */
    for (unsigned int i_2 = 0; i_2 < 12; i_2 += 1) 
    {
        var_16 = ((/* implicit */int) 5088670956676953203ULL);
        var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) var_3))));
        arr_8 [i_2] [i_2] = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_2)))) % (((13358073117032598413ULL) % (5088670956676953203ULL))));
        var_18 -= ((/* implicit */unsigned short) (_Bool)1);
        arr_9 [(unsigned short)5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */int) var_7)) / (((/* implicit */int) var_10))))) / (var_0)))) || ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_4))))))));
    }
    var_19 = ((/* implicit */unsigned long long int) var_12);
}
