/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13953
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
    var_14 -= ((/* implicit */unsigned short) min((-2463034420391309394LL), (((/* implicit */long long int) var_5))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                var_15 |= ((/* implicit */unsigned short) var_11);
                var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1285643164)) || (((/* implicit */_Bool) 1848821072)))))));
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (-(arr_3 [i_0])))), (281474976710655LL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) min((arr_0 [i_1]), (var_3))))))) : (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)20))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_4))))));
                var_17 += -281474976710654LL;
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned int) var_6);
}
