/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141547
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
    var_20 = ((/* implicit */int) max((max((1125899906809856ULL), (((/* implicit */unsigned long long int) ((var_1) < (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1)))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_6), (((/* implicit */long long int) var_3))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (short)24914)) && (((/* implicit */_Bool) (unsigned short)0))))) : (-501956180))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                var_21 &= ((/* implicit */short) arr_3 [i_0] [i_1] [i_1]);
                var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) ((((unsigned long long int) 18446744073709551610ULL)) == (((/* implicit */unsigned long long int) (+(1517082297)))))))));
            }
        } 
    } 
}
