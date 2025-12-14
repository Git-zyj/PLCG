/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144452
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
    var_17 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)207)) >= ((+(((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_15)) : (-338270037)))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_1] [i_0] &= ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_2 [i_0] [i_0] [i_0])) : (((/* implicit */int) ((((/* implicit */int) arr_3 [(signed char)11] [i_1] [i_1])) == (-338270049))))))));
                arr_5 [i_0] [i_0] [i_0] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_0 [i_0] [i_1]), (arr_0 [1U] [i_1])))) ? (((/* implicit */int) arr_2 [i_0] [i_0] [i_1])) : ((~(((/* implicit */int) (signed char)24))))));
            }
        } 
    } 
}
