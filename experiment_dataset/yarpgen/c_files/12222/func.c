/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12222
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
    var_13 |= ((long long int) (short)-30633);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 14; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    var_14 ^= ((/* implicit */_Bool) 492008143);
                    var_15 = ((/* implicit */unsigned long long int) min(((((!(((/* implicit */_Bool) arr_0 [i_0] [i_1])))) || (((/* implicit */_Bool) arr_3 [i_1 + 2] [i_1])))), (((((/* implicit */_Bool) max((1024LL), (((/* implicit */long long int) var_11))))) && (((/* implicit */_Bool) -5156379305173415804LL))))));
                    var_16 = ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (unsigned short)52629)) ? (((/* implicit */int) (unsigned short)64343)) : (((/* implicit */int) (short)10242)))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */short) 1664405783U);
}
