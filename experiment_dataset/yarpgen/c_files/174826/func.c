/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174826
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174826 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174826
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
    var_10 = (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_2))) - (((18446744073709551615ULL) - (((/* implicit */unsigned long long int) var_3))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                var_11 = ((/* implicit */long long int) min((var_11), (((/* implicit */long long int) max(((+(((((/* implicit */_Bool) (unsigned char)154)) ? (((/* implicit */int) (unsigned char)101)) : (arr_4 [i_1] [i_1]))))), (((((((/* implicit */int) arr_5 [i_0] [i_0] [i_0])) + (2147483647))) >> (((var_1) - (2559615342264691995ULL))))))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    arr_10 [i_0] = ((/* implicit */long long int) (-(18446744073709551615ULL)));
                    var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (unsigned char)149)) ? (((/* implicit */int) (unsigned char)82)) : (((/* implicit */int) (unsigned char)173)))))))));
                    arr_11 [(unsigned char)2] [i_0] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (unsigned char)130)))) && (((/* implicit */_Bool) ((arr_0 [i_0]) + (((/* implicit */long long int) arr_3 [i_0] [i_0])))))));
                    var_13 = ((/* implicit */unsigned int) var_5);
                }
            }
        } 
    } 
    var_14 *= ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)102))));
    var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) var_4))));
}
