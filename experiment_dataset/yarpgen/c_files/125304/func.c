/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125304
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
    var_13 += ((/* implicit */unsigned int) max((min((((((/* implicit */int) var_10)) << (((((/* implicit */int) var_2)) - (21470))))), (((/* implicit */int) ((((/* implicit */int) var_5)) != (var_4)))))), (min((((/* implicit */int) min((var_7), (var_7)))), (min((((/* implicit */int) var_10)), (var_9)))))));
    var_14 |= ((/* implicit */short) min((((/* implicit */int) (!(((/* implicit */_Bool) (~(var_9))))))), ((+(((/* implicit */int) var_7))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_15 |= ((/* implicit */_Bool) (+(((((/* implicit */int) var_0)) ^ (var_4)))));
                    arr_8 [(unsigned short)3] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) 287299293U))))), (var_12)))) ^ ((~(((/* implicit */int) min((var_2), (var_7))))))));
                    var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) (!((((~(((/* implicit */int) var_5)))) <= (((/* implicit */int) var_8)))))))));
                }
            } 
        } 
    } 
}
