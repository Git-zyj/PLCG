/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130843
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130843 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130843
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
    var_18 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */int) var_12)) + (2147483647))) << (((((/* implicit */int) (unsigned char)134)) - (134)))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_0))))) && (((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */int) var_9)) > (((/* implicit */int) var_11))))))));
    var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (short)-1))) * (138691673596662279LL)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            {
                var_20 -= ((/* implicit */_Bool) (unsigned char)124);
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_0 [i_0])), (arr_2 [(unsigned char)18])))) ? (((/* implicit */unsigned long long int) ((arr_0 [i_1 - 1]) + (((/* implicit */int) ((short) arr_5 [i_0] [i_0])))))) : (min((((arr_2 [i_0]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))), (((/* implicit */unsigned long long int) ((unsigned char) 138691673596662279LL)))))));
            }
        } 
    } 
}
