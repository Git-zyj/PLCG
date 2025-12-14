/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161852
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161852 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161852
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
    for (short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                var_11 = ((/* implicit */unsigned short) min((((/* implicit */int) ((unsigned short) (~(((/* implicit */int) (unsigned short)4701)))))), (((((/* implicit */_Bool) (unsigned short)31)) ? (((/* implicit */int) (short)-20189)) : (((/* implicit */int) (signed char)-95))))));
                var_12 = ((/* implicit */unsigned long long int) (~((-(arr_4 [i_0])))));
                var_13 &= ((/* implicit */signed char) ((int) -1524003446));
            }
        } 
    } 
    var_14 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) 2001525903)))))) ^ (2704761625456557280ULL))))));
    var_15 |= ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_9)), (((((/* implicit */unsigned long long int) var_6)) & (max((((/* implicit */unsigned long long int) var_8)), (var_10)))))));
}
