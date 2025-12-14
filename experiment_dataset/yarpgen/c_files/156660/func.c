/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156660
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
    /* LoopNest 3 */
    for (signed char i_0 = 2; i_0 < 13; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 12; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 15; i_4 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) arr_3 [i_0 - 2] [i_0 + 1]))));
                                var_21 = ((((/* implicit */int) (short)2771)) & ((-(((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))));
                                var_22 *= ((/* implicit */signed char) var_4);
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) arr_5 [i_0 + 2] [i_0 + 1] [i_0 + 1] [i_2 + 1]))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((((/* implicit */int) var_7)) / (-1780263826)))) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (((long long int) var_1)))), (((/* implicit */long long int) var_0))));
    var_25 = ((/* implicit */int) max((var_25), ((~(((((((/* implicit */int) var_14)) - (((/* implicit */int) var_16)))) ^ (((int) var_15))))))));
}
