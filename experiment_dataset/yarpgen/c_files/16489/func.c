/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16489
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16489 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16489
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) (~(((/* implicit */int) arr_0 [(short)21])))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24; i_2 += 3) 
                {
                    for (unsigned int i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        {
                            var_20 |= ((/* implicit */unsigned long long int) 2173596403U);
                            var_21 |= ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_16)) ? (2121370874U) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))) - (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2173596416U)) ? (((/* implicit */int) arr_11 [(unsigned char)16] [i_3])) : (arr_6 [i_0]))))))), (var_13)));
                            var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(var_10)))) || (((/* implicit */_Bool) arr_1 [i_0] [i_0 - 1]))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned char) var_0);
    /* LoopNest 2 */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 3) 
        {
            {
                var_24 &= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((var_18) + (2147483647))) >> (((var_6) - (1917365948)))))) < (2121370893U)));
                var_25 = ((/* implicit */long long int) ((((/* implicit */int) ((short) ((var_17) < (((/* implicit */unsigned long long int) 2173596416U)))))) >> (((2121370864U) - (2121370847U)))));
            }
        } 
    } 
}
