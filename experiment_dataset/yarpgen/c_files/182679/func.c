/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182679
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182679 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182679
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
    for (short i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (unsigned char i_2 = 3; i_2 < 18; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */unsigned int) arr_7 [i_0] [i_0] [i_0] [i_0]);
                    var_13 ^= ((/* implicit */unsigned int) (unsigned char)21);
                }
            } 
        } 
    } 
    var_14 -= ((/* implicit */long long int) min((max((((/* implicit */int) (short)28163)), ((~(((/* implicit */int) var_6)))))), (((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))));
    var_15 = ((/* implicit */short) max(((((!(((/* implicit */_Bool) (unsigned short)45913)))) ? (((/* implicit */long long int) 2021975109U)) : (((((/* implicit */_Bool) var_9)) ? (4823981689332622667LL) : (((/* implicit */long long int) ((/* implicit */int) var_7))))))), (((/* implicit */long long int) (!((_Bool)0))))));
}
