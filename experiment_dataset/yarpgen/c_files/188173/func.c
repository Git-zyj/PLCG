/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188173
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
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 23; i_1 += 3) 
        {
            {
                var_10 = ((/* implicit */int) ((((/* implicit */_Bool) min(((unsigned char)224), ((unsigned char)247)))) ? (min((arr_1 [i_1 + 1] [i_1 + 1]), (arr_1 [i_1 - 1] [i_1 - 1]))) : ((+(-6571986350939539577LL)))));
                var_11 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) > (((-2714463955500047892LL) ^ (4749042723404291343LL)))));
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((max((2714463955500047891LL), (2714463955500047891LL))), (((((/* implicit */_Bool) (unsigned short)0)) ? (-2714463955500047887LL) : (-2714463955500047892LL)))))) ? (((/* implicit */int) min((((/* implicit */unsigned char) var_5)), ((unsigned char)90)))) : (((/* implicit */int) (short)-24905))));
    var_13 = ((/* implicit */_Bool) var_1);
    var_14 = ((/* implicit */int) var_2);
}
