/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123561
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123561 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123561
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 7; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                var_10 = ((/* implicit */unsigned int) var_9);
                var_11 *= ((/* implicit */unsigned int) (~(((((/* implicit */int) (signed char)73)) - (2038660592)))));
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_3)))));
    var_13 -= ((((2038660592) <= (((/* implicit */int) (unsigned short)45381)))) ? (((/* implicit */int) ((((((/* implicit */_Bool) (signed char)-67)) ? (2038660592) : (-2038660592))) > (((/* implicit */int) ((-2038660621) == (-1342097692))))))) : (2038660595));
}
