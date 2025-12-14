/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134828
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
    var_16 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) ((0U) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)13)))))) > (((/* implicit */int) var_3)))))) + ((~(((((/* implicit */unsigned int) ((/* implicit */int) var_14))) + (var_1)))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    var_17 = ((((/* implicit */_Bool) (unsigned char)0)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))));
                    var_18 = (unsigned short)0;
                    arr_8 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) (unsigned char)255);
                    var_19 = ((/* implicit */_Bool) ((unsigned char) var_9));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)0))));
}
