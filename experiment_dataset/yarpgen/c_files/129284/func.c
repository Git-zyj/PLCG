/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129284
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129284 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129284
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
    var_16 = ((/* implicit */_Bool) (-((-(((/* implicit */int) var_8))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) (((+(((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))) % ((-(((/* implicit */int) var_6)))))))));
                    var_18 -= ((/* implicit */short) (unsigned short)10053);
                    arr_7 [(short)8] [(short)8] = ((/* implicit */_Bool) ((574225798U) + (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11))))))));
                    arr_8 [i_0] = ((/* implicit */unsigned char) ((3720741496U) | (3720741512U)));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */signed char) (short)-22821);
    var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_10)))))));
}
