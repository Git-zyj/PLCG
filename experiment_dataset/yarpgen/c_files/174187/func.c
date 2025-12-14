/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174187
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174187 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174187
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
        for (short i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_14)) + (((/* implicit */int) var_2))))) || (((/* implicit */_Bool) var_5))))), ((-(max((((/* implicit */unsigned int) (short)32767)), (var_3)))))));
                var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_0]))))) ? (((((/* implicit */int) arr_2 [i_1])) * (((/* implicit */int) arr_2 [i_0])))) : (((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) var_12))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (signed char i_3 = 0; i_3 < 22; i_3 += 2) 
        {
            for (unsigned char i_4 = 0; i_4 < 22; i_4 += 3) 
            {
                {
                    var_16 -= ((/* implicit */long long int) (~((+(((/* implicit */int) (_Bool)1))))));
                    var_17 = ((/* implicit */signed char) ((_Bool) var_11));
                    var_18 = ((/* implicit */unsigned int) arr_7 [i_2]);
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) (~(8172514404248552166LL))))));
    var_20 |= ((/* implicit */short) (_Bool)1);
}
