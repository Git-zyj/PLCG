/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116079
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116079 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116079
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
    var_10 &= ((/* implicit */unsigned char) max((var_7), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((var_6) == (((/* implicit */long long int) ((/* implicit */int) var_4)))))) < (((/* implicit */int) ((var_2) && (((/* implicit */_Bool) var_8))))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_11 = (((~((~(3362725708495282374ULL))))) ^ (((/* implicit */unsigned long long int) ((2319818751U) ^ (2319818750U)))));
                arr_5 [i_0] &= ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((_Bool) 3725343483601371766ULL)))));
                var_12 = ((/* implicit */signed char) (+(min(((~(2319818732U))), (((/* implicit */unsigned int) ((((/* implicit */int) var_4)) > (((/* implicit */int) (short)-21660)))))))));
                var_13 *= min((((/* implicit */unsigned long long int) 2319818759U)), (8307562668205823866ULL));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned long long int) ((short) (+(((/* implicit */int) var_4)))));
}
