/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103537
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
    var_14 = ((/* implicit */signed char) var_7);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (signed char i_2 = 1; i_2 < 10; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        var_15 += ((/* implicit */signed char) arr_4 [6U]);
                        var_16 = (!((!(((/* implicit */_Bool) (short)32)))));
                    }
                    var_17 |= ((/* implicit */signed char) ((((/* implicit */int) var_5)) + (-635847177)));
                    var_18 = ((/* implicit */unsigned short) arr_8 [i_2] [i_0] [i_0] [i_0]);
                    var_19 += ((/* implicit */signed char) 2457824115U);
                    var_20 *= ((/* implicit */unsigned short) (short)24267);
                }
            } 
        } 
    } 
}
