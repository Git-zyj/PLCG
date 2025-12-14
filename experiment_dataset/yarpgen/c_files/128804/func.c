/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128804
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
    var_10 = ((/* implicit */signed char) var_1);
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    arr_7 [(unsigned short)8] [i_1] [(unsigned short)8] = min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((5373882365740300663ULL) - (1555997123033934558ULL)))) ? (((/* implicit */int) var_3)) : ((~(((/* implicit */int) (short)-12032))))))), (var_0));
                    var_11 = ((/* implicit */short) (-(((((var_8) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_1]))))) ? (((((/* implicit */_Bool) (signed char)45)) ? (arr_5 [i_0] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) : (min((((/* implicit */unsigned long long int) (signed char)57)), (var_0)))))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned int i_3 = 0; i_3 < 24; i_3 += 1) 
    {
        var_12 = ((/* implicit */unsigned int) (unsigned short)33174);
        arr_10 [i_3] [i_3] = ((/* implicit */signed char) ((((((/* implicit */int) var_9)) ^ (((/* implicit */int) var_4)))) <= (((/* implicit */int) var_4))));
    }
}
