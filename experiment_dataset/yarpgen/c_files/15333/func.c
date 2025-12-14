/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15333
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15333 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15333
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
        for (long long int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_0] = 1426346;
                var_17 |= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 10078907986674648188ULL)) ? (1772088754) : (((/* implicit */int) arr_1 [i_1]))))) ? (((((/* implicit */_Bool) (unsigned char)106)) ? (((/* implicit */int) (signed char)-91)) : (1776182265))) : (((/* implicit */int) arr_3 [i_1] [i_1]))))) | (((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (arr_5 [i_0] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) ((2316204642U) >= (((/* implicit */unsigned int) -470478852))))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((7367103561241584355LL) << (((((/* implicit */int) var_10)) - (46))))) <= (((/* implicit */long long int) (~(var_11)))))))) == (var_11))))));
}
