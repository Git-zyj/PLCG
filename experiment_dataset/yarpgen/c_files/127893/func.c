/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127893
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
    var_11 |= ((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) ((((/* implicit */_Bool) 1266681058U)) && (((/* implicit */_Bool) (unsigned char)12)))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 19; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    var_12 = ((/* implicit */int) (short)(-32767 - 1));
                    var_13 = ((/* implicit */signed char) ((((/* implicit */int) var_4)) ^ (((/* implicit */int) ((((/* implicit */int) var_4)) < (((((/* implicit */_Bool) arr_6 [i_0] [3U] [i_2] [i_0])) ? (((/* implicit */int) arr_5 [(_Bool)1] [i_1] [19] [19])) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_0])))))))));
                    var_14 = ((/* implicit */long long int) (unsigned short)7168);
                }
            } 
        } 
    } 
}
