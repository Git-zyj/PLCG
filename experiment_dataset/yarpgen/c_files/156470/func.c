/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156470
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156470 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156470
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
    var_11 = ((/* implicit */unsigned long long int) var_1);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (int i_1 = 4; i_1 < 20; i_1 += 2) 
        {
            {
                var_12 = ((/* implicit */short) ((((/* implicit */_Bool) (short)30484)) ? (63ULL) : (((/* implicit */unsigned long long int) 2233866141U))));
                arr_4 [(unsigned char)9] [i_0] [i_0] = ((/* implicit */unsigned short) min((var_6), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) min((148228939U), (var_8)))))))));
                var_13 = ((/* implicit */long long int) (((~(((/* implicit */int) var_9)))) <= ((+(((/* implicit */int) var_1))))));
            }
        } 
    } 
    var_14 = ((/* implicit */_Bool) min((var_7), (((/* implicit */short) var_9))));
    var_15 |= ((/* implicit */unsigned short) var_8);
}
