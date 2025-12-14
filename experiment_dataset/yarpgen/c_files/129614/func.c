/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129614
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
    for (short i_0 = 2; i_0 < 14; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */signed char) (((-(((var_14) / (((/* implicit */unsigned int) ((/* implicit */int) (short)-1))))))) ^ (((/* implicit */unsigned int) min((((/* implicit */int) arr_2 [i_1] [i_0 + 1])), (((((/* implicit */_Bool) (short)2149)) ? (((/* implicit */int) arr_6 [i_0] [i_1])) : (((/* implicit */int) (unsigned char)33)))))))));
                var_21 &= ((/* implicit */_Bool) ((int) (_Bool)1));
                var_22 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_3 [i_0 + 1]) - (arr_3 [i_0 - 2])))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -8478813571659164678LL)))))) : (min((72057594037919744LL), (-9223372036854775791LL)))));
                arr_7 [i_0 + 1] = ((/* implicit */int) min((((((/* implicit */long long int) (-(((/* implicit */int) (short)-1))))) >= (((((/* implicit */_Bool) arr_6 [i_0] [4])) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (arr_1 [i_0 - 2] [i_0 - 2]))))), ((!(((/* implicit */_Bool) ((var_17) % (-8478813571659164690LL))))))));
            }
        } 
    } 
    var_23 -= ((/* implicit */short) -5994623743869893236LL);
}
