/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180191
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180191 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180191
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
    var_19 ^= ((/* implicit */int) max((((/* implicit */unsigned int) (_Bool)1)), (max((((/* implicit */unsigned int) var_12)), (min((4294967295U), (4294967287U)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 1; i_1 < 21; i_1 += 1) 
        {
            for (unsigned char i_2 = 2; i_2 < 18; i_2 += 3) 
            {
                {
                    var_20 = ((/* implicit */_Bool) ((((/* implicit */int) var_2)) - (((/* implicit */int) var_6))));
                    var_21 = ((/* implicit */unsigned int) ((29U) <= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                    var_22 |= ((/* implicit */_Bool) var_2);
                }
            } 
        } 
        var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) 4294967295U))));
        var_24 = ((/* implicit */_Bool) var_9);
    }
    var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) max((((((/* implicit */int) min((var_18), (var_2)))) + (((/* implicit */int) var_1)))), (((/* implicit */int) (_Bool)1)))))));
    /* LoopNest 2 */
    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
    {
        for (short i_4 = 1; i_4 < 14; i_4 += 4) 
        {
            {
                var_26 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */int) var_17)) << (((((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), (var_7)))) - (54246)))))), (((((/* implicit */unsigned int) ((((/* implicit */int) var_7)) / (((/* implicit */int) (unsigned short)47339))))) * (4294967282U)))));
                /* LoopSeq 1 */
                for (short i_5 = 3; i_5 < 13; i_5 += 1) 
                {
                    var_27 = ((/* implicit */_Bool) max((max((min((((/* implicit */unsigned int) var_17)), (4294967288U))), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)50508)) / (((/* implicit */int) var_1))))))), (((/* implicit */unsigned int) var_7))));
                    var_28 = ((/* implicit */signed char) max((((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) var_11)))), (((((/* implicit */int) var_18)) - (((/* implicit */int) (unsigned short)15025))))));
                }
            }
        } 
    } 
}
