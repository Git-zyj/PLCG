/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116914
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    arr_8 [i_2] [i_0] [i_0] [(unsigned char)21] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)33900))));
                    arr_9 [i_0] [i_0] [i_2] = ((/* implicit */unsigned int) (signed char)-102);
                }
            } 
        } 
    } 
    var_19 = ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) (-(67108863)))) : ((-(((((/* implicit */_Bool) (unsigned short)0)) ? (3748070737U) : (((/* implicit */unsigned int) ((/* implicit */int) var_17))))))));
    var_20 = ((/* implicit */unsigned short) var_10);
    var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((5742126905364979053ULL), (0ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : ((-(var_18)))))) == (var_0))))));
}
