/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116647
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            {
                var_12 = ((/* implicit */short) max((((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)9588)))))))), (((((/* implicit */_Bool) max((arr_4 [i_0] [i_1]), (((/* implicit */unsigned char) (_Bool)0))))) ? (((/* implicit */int) min(((unsigned short)55931), (((/* implicit */unsigned short) arr_5 [i_1]))))) : (((/* implicit */int) (unsigned short)9598))))));
                var_13 = (+(((long long int) max((-61165138528269207LL), (((/* implicit */long long int) arr_1 [i_1 + 3]))))));
                var_14 = ((/* implicit */long long int) (_Bool)1);
            }
        } 
    } 
    var_15 = ((/* implicit */_Bool) (short)29759);
    var_16 += ((/* implicit */unsigned char) max((((/* implicit */long long int) var_6)), (max((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)228))) & (6052095962177965833LL))), (((/* implicit */long long int) ((var_4) <= (6052095962177965859LL))))))));
}
