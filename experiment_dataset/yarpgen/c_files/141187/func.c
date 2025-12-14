/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141187
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141187 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141187
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
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                {
                    arr_7 [i_1] [i_1] [i_0] [i_1] |= ((/* implicit */signed char) min((arr_6 [i_0] [i_0]), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-2)))))));
                    arr_8 [i_2] [i_1] [i_1] [i_1] |= ((/* implicit */unsigned int) (unsigned short)54358);
                    var_16 = ((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)52879)) ? (((/* implicit */long long int) var_14)) : (var_9)))) || ((!(((/* implicit */_Bool) (unsigned short)52879))))));
                    var_17 = ((/* implicit */signed char) (unsigned short)12656);
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned short) var_9);
    var_19 = ((/* implicit */unsigned char) var_6);
}
