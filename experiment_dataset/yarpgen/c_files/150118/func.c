/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150118
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150118 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150118
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
    var_14 = ((/* implicit */int) var_5);
    var_15 += ((/* implicit */unsigned char) var_12);
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 8; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 11; i_1 += 4) 
        {
            {
                var_16 = ((short) max((1776334159U), (2518633136U)));
                var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_7)))) ? (((/* implicit */int) min((var_10), (((/* implicit */unsigned char) var_3))))) : (((/* implicit */int) ((signed char) var_10))))))));
            }
        } 
    } 
    var_18 -= ((/* implicit */short) max((min((((((/* implicit */_Bool) (unsigned short)16139)) ? (((/* implicit */int) (unsigned char)193)) : (((/* implicit */int) (signed char)-94)))), (((/* implicit */int) var_3)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) -590959132)) : (3627216063246882174LL)))) ? (((/* implicit */int) var_1)) : (((((/* implicit */_Bool) 3627216063246882174LL)) ? (((/* implicit */int) (unsigned short)21579)) : (((/* implicit */int) (unsigned short)22732))))))));
}
