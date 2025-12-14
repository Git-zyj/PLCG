/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138258
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138258 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138258
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
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 2837344241U)) ? (((/* implicit */int) (unsigned char)223)) : (((/* implicit */int) (short)-6709))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 10; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 2; i_3 < 8; i_3 += 4) 
                    {
                        {
                            var_15 -= ((arr_7 [i_0 - 1] [i_3 + 1]) > ((+(((((/* implicit */_Bool) arr_5 [i_0] [8U] [i_2] [8U])) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))));
                            var_16 = (((!(((/* implicit */_Bool) var_0)))) ? (((/* implicit */int) arr_9 [i_0 - 1] [i_1] [i_2] [i_3] [i_0] [i_0 - 1])) : (((((/* implicit */int) arr_6 [i_0] [i_1] [i_2])) >> (((((unsigned int) var_11)) - (1926680075U))))));
                            var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (((/* implicit */int) (_Bool)0)) : (max(((-(((/* implicit */int) (short)-6709)))), (((/* implicit */int) (_Bool)1))))));
                        }
                    } 
                } 
                arr_11 [i_0] [i_1] = ((/* implicit */unsigned char) (short)-6709);
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned int) var_5);
}
