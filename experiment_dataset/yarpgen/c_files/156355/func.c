/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156355
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
    var_18 &= (+((+((-(((/* implicit */int) var_8)))))));
    var_19 = (!(((/* implicit */_Bool) (+((~(var_9)))))));
    var_20 = ((/* implicit */_Bool) (+((-((+(-1184511127)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                arr_8 [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (+(arr_5 [i_0] [i_0] [(unsigned char)11])))))))));
                arr_9 [i_0] |= ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_0]))))))))));
                arr_10 [i_1] = (-((-((-(var_11))))));
                arr_11 [i_1] = ((/* implicit */short) (-((+((~(((/* implicit */int) (unsigned char)0))))))));
            }
        } 
    } 
    var_21 ^= ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (!((_Bool)1)))))))));
}
