/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154667
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
    var_10 = ((/* implicit */long long int) var_8);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) (short)30319)) ? (-6549110622599334014LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)6)))))));
                var_11 = ((/* implicit */signed char) ((((/* implicit */_Bool) 18391276850824961269ULL)) ? (674940586U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-32767)))));
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned char) var_1);
}
