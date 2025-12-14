/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109507
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
    var_13 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_4))))), ((unsigned char)253)))) ? (var_1) : ((~(max((((/* implicit */int) var_11)), (1214935209)))))));
    var_14 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (~(((var_3) ^ (var_5)))))) | (min((var_4), (((/* implicit */unsigned long long int) var_11))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */signed char) min((var_15), (arr_5 [i_1] [5])));
                var_16 = ((/* implicit */long long int) (-(var_10)));
            }
        } 
    } 
    var_17 = ((/* implicit */short) (-(((((/* implicit */_Bool) ((long long int) var_5))) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_12))))))));
    var_18 *= ((/* implicit */unsigned long long int) var_1);
}
