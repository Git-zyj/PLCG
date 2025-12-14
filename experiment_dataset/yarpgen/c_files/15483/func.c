/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15483
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15483 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15483
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
    var_16 = var_1;
    var_17 = ((unsigned char) ((2567734959072813851ULL) ^ (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_4)))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    var_18 = ((/* implicit */_Bool) (((((-(((/* implicit */int) var_8)))) + (2147483647))) >> (((/* implicit */int) ((((/* implicit */_Bool) max((var_5), (var_6)))) || (((/* implicit */_Bool) ((int) var_10))))))));
                    var_19 = ((/* implicit */int) max((3693282370U), (((/* implicit */unsigned int) (signed char)-122))));
                    arr_7 [i_2] = ((/* implicit */signed char) var_11);
                    var_20 = ((/* implicit */unsigned int) max((((/* implicit */int) ((short) max((601684925U), (((/* implicit */unsigned int) var_13)))))), (((int) ((var_6) % (var_5))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned char) var_5);
    var_22 = ((/* implicit */unsigned char) ((var_11) / (2147483647)));
}
