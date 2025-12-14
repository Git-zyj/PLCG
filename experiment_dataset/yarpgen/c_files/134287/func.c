/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134287
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
    var_12 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (short)25640)) : (((/* implicit */int) var_9))))))) ? (max((max((((/* implicit */long long int) var_5)), (var_0))), (((/* implicit */long long int) var_11)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)25613)) ? (((/* implicit */int) var_4)) : (var_7)))) ? (((/* implicit */int) (short)18873)) : ((+(((/* implicit */int) (unsigned short)22679)))))))));
    var_13 = ((/* implicit */unsigned short) var_5);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (unsigned char i_2 = 2; i_2 < 9; i_2 += 3) 
            {
                {
                    var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) arr_4 [i_0]))));
                    var_15 &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_3))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned int) var_3);
}
