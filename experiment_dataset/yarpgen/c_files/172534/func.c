/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172534
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
    var_10 *= ((/* implicit */short) max((754947695U), (2157176527U)));
    var_11 = ((/* implicit */unsigned char) 2758984444204591955ULL);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                var_12 += (~(((((/* implicit */_Bool) 3888110219U)) ? (((/* implicit */int) (short)-28369)) : (((/* implicit */int) (short)(-32767 - 1))))));
                var_13 -= ((/* implicit */short) max((((((/* implicit */_Bool) (-(((/* implicit */int) var_7))))) ? (((/* implicit */int) ((unsigned char) var_5))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))), (((/* implicit */int) (!(var_5))))));
                var_14 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(((unsigned long long int) 15628128926049420558ULL)))))));
            }
        } 
    } 
    var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) (_Bool)1))));
}
