/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164251
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
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) ((unsigned char) var_8))) : (((((/* implicit */int) min((((/* implicit */unsigned char) var_11)), (var_9)))) / (((/* implicit */int) min((var_14), (var_14))))))));
    var_20 = min((12032941707960535863ULL), (((/* implicit */unsigned long long int) (unsigned short)31001)));
    var_21 = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */int) var_1)) == ((~(((/* implicit */int) var_9)))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_22 = ((/* implicit */unsigned int) arr_3 [i_0] [i_1]);
                var_23 = ((/* implicit */short) ((((((/* implicit */int) arr_0 [i_1])) / (((/* implicit */int) arr_3 [i_0] [i_0])))) >= (((((/* implicit */_Bool) (unsigned short)34534)) ? (((/* implicit */int) (_Bool)0)) : ((~(((/* implicit */int) (_Bool)1))))))));
            }
        } 
    } 
}
