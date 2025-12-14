/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151784
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
    var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) (+(((/* implicit */int) max((max((var_18), (((/* implicit */unsigned short) var_9)))), (((/* implicit */unsigned short) var_17))))))))));
    var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) max((var_15), (var_15))))));
    /* LoopSeq 1 */
    for (int i_0 = 4; i_0 < 20; i_0 += 1) 
    {
        var_21 += ((/* implicit */unsigned int) min((var_15), (var_15)));
        arr_3 [i_0] = min((((/* implicit */unsigned int) var_11)), ((~(min((var_2), (((/* implicit */unsigned int) var_9)))))));
        arr_4 [i_0] = ((/* implicit */short) max((max((min((6ULL), (((/* implicit */unsigned long long int) (unsigned short)11)))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_12))))))), (((/* implicit */unsigned long long int) max(((~(((/* implicit */int) var_7)))), (((/* implicit */int) max((var_4), (var_12)))))))));
        arr_5 [i_0] = ((/* implicit */int) max((((/* implicit */unsigned int) var_12)), (max((var_2), (var_2)))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_1 = 2; i_1 < 21; i_1 += 3) 
        {
            arr_8 [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) var_16))));
            var_22 &= ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_18)))))));
        }
        /* vectorizable */
        for (long long int i_2 = 1; i_2 < 21; i_2 += 4) 
        {
            arr_11 [i_0] [i_0] = ((/* implicit */long long int) (-((-(var_3)))));
            arr_12 [i_0] = ((/* implicit */unsigned int) var_0);
            var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) (-((+(((/* implicit */int) var_17)))))))));
            var_24 = ((/* implicit */unsigned short) var_16);
        }
    }
    var_25 ^= ((/* implicit */unsigned long long int) max((var_8), (((/* implicit */unsigned int) var_11))));
}
