/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158017
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
    var_16 |= ((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) ^ (((/* implicit */int) var_11))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 17; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                arr_5 [i_1] [(_Bool)1] = var_6;
                var_17 *= ((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_0 + 1] [i_0 - 2])) <= (((/* implicit */int) var_12))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned char i_3 = 2; i_3 < 17; i_3 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */signed char) arr_7 [i_0]);
                            arr_13 [i_1] = ((/* implicit */_Bool) (+(((/* implicit */int) var_10))));
                        }
                    } 
                } 
                var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)119)) && (((/* implicit */_Bool) (short)18050)))) && (((/* implicit */_Bool) var_5))))) | (((/* implicit */int) var_10))));
            }
        } 
    } 
}
