/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187542
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187542 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187542
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
    var_15 = ((/* implicit */long long int) var_14);
    var_16 = ((/* implicit */_Bool) (~(8953530052642538472ULL)));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 14; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */_Bool) max((var_17), (((((/* implicit */_Bool) (unsigned short)25996)) || (((/* implicit */_Bool) (signed char)(-127 - 1)))))));
                var_18 *= ((/* implicit */_Bool) (-((-((-(12023674435205031864ULL)))))));
                arr_6 [i_0] [i_0] = ((/* implicit */short) arr_2 [i_0]);
                /* LoopSeq 2 */
                for (unsigned int i_2 = 1; i_2 < 16; i_2 += 3) /* same iter space */
                {
                    var_19 ^= ((/* implicit */signed char) (((-(12023674435205031861ULL))) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_2 + 2] [i_2 + 1] [i_1 - 2])))));
                    var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) arr_5 [i_2]))));
                    var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) var_0))));
                    arr_10 [i_0] [i_1 + 1] [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) (signed char)(-127 - 1)))));
                }
                /* vectorizable */
                for (unsigned int i_3 = 1; i_3 < 16; i_3 += 3) /* same iter space */
                {
                    arr_13 [i_3 + 1] [i_0] [i_0] = ((/* implicit */unsigned long long int) (~(321761118U)));
                    var_22 = ((((/* implicit */_Bool) 12023674435205031861ULL)) && (((/* implicit */_Bool) (unsigned short)26012)));
                    arr_14 [i_3] [i_0] [i_0] = ((/* implicit */unsigned int) arr_1 [i_0] [i_0]);
                }
            }
        } 
    } 
    var_23 |= ((/* implicit */_Bool) var_5);
}
