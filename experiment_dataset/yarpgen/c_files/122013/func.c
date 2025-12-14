/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122013
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
    var_11 += ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) (signed char)-10)) ? (((/* implicit */int) (unsigned char)160)) : (((/* implicit */int) (unsigned short)51238)))))) ? (((/* implicit */int) var_5)) : ((-((-(((/* implicit */int) var_0))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 17; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_1 [4] [4]))));
                arr_4 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) ((long long int) ((((/* implicit */long long int) (+(((/* implicit */int) var_3))))) < ((+(-6993742958630905455LL))))));
            }
        } 
    } 
}
