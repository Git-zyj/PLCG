/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121150
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121150 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121150
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
    for (int i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                arr_4 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)65525)) ? (((/* implicit */int) max(((unsigned short)43104), ((unsigned short)22416)))) : (((/* implicit */int) (signed char)127))));
                arr_5 [8] [i_1] [8] = -1970327505899108686LL;
            }
        } 
    } 
    var_11 = ((/* implicit */unsigned int) var_9);
}
