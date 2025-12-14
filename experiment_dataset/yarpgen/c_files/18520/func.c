/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18520
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18520 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18520
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
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_10))))) ? (((/* implicit */int) min((var_3), (var_14)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))))) >= (((long long int) var_14))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_0 [i_0] [i_1]), ((unsigned char)2)))) ? (((((/* implicit */int) var_8)) / (((/* implicit */int) var_10)))) : (((/* implicit */int) ((unsigned char) arr_1 [i_1])))))) && (((/* implicit */_Bool) (~(((long long int) (unsigned char)139)))))));
                var_17 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((arr_3 [i_0] [i_0] [i_0]) % (((((/* implicit */_Bool) var_11)) ? (-4310971711240452232LL) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned char) ((long long int) ((min((4310971711240452226LL), (((/* implicit */long long int) var_1)))) - (((/* implicit */long long int) ((/* implicit */int) ((var_5) < (((/* implicit */long long int) ((/* implicit */int) var_10))))))))));
    var_19 = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) min((var_13), (var_8))))))));
}
