/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10321
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
    var_15 = ((/* implicit */short) ((signed char) (-(var_10))));
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -8176452589576885449LL)) ? (((/* implicit */long long int) (-(((/* implicit */int) ((signed char) var_3)))))) : (((((/* implicit */long long int) ((/* implicit */int) (signed char)127))) ^ (((((/* implicit */_Bool) var_5)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)235)))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 13; i_1 += 1) 
        {
            {
                arr_5 [i_0] = ((/* implicit */signed char) (unsigned short)17359);
                arr_6 [i_0] [i_0] [i_1] = ((/* implicit */short) ((unsigned int) (~(((15024856839704574128ULL) - (((/* implicit */unsigned long long int) var_8)))))));
            }
        } 
    } 
}
