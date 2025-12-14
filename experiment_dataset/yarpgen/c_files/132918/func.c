/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132918
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132918 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132918
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
    var_20 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) (short)-32380)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) min((var_17), (((/* implicit */short) var_12)))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 11; i_1 += 3) 
        {
            {
                var_21 &= ((/* implicit */int) ((signed char) ((14950946147628165360ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)34991))))));
                var_22 = ((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) arr_5 [i_1] [i_1 + 3] [i_1 + 1])))));
                var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_1]))) : (544497681192804568ULL)))) ? (((int) var_10)) : (((/* implicit */int) var_16))))))));
            }
        } 
    } 
}
