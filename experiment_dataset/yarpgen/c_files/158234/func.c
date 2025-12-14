/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158234
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
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    var_15 += ((/* implicit */long long int) max(((+(((/* implicit */int) max(((unsigned char)255), ((unsigned char)255)))))), ((+(((((/* implicit */int) (unsigned char)1)) << (((((/* implicit */int) (unsigned char)79)) - (60)))))))));
                    var_16 = ((unsigned int) 8294897071333288388LL);
                    arr_8 [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(3271643373U)))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)220))))) : (min((((/* implicit */unsigned int) (unsigned char)254)), (((unsigned int) 4070430001U))))));
                }
            } 
        } 
    } 
    var_17 = ((unsigned char) 9223372036854775807LL);
}
