/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172135
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172135 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172135
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
    for (int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */unsigned int) (((~(min((((/* implicit */unsigned long long int) var_4)), (var_11))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_13), (max((((/* implicit */unsigned short) var_6)), (var_4)))))))));
                /* LoopSeq 1 */
                for (int i_2 = 0; i_2 < 13; i_2 += 2) 
                {
                    var_15 = ((/* implicit */_Bool) min((((/* implicit */long long int) var_8)), (min((((/* implicit */long long int) var_8)), (max((var_7), (((/* implicit */long long int) var_8))))))));
                    var_16 = ((/* implicit */int) min((min((min((((/* implicit */long long int) var_2)), (var_0))), (((/* implicit */long long int) min((var_5), (((/* implicit */int) var_10))))))), (((/* implicit */long long int) max((min((((/* implicit */unsigned short) var_1)), (var_4))), (max((var_4), (((/* implicit */unsigned short) var_1)))))))));
                    var_17 = ((((/* implicit */_Bool) min((((/* implicit */unsigned short) min((var_6), (((/* implicit */short) var_1))))), (var_13)))) ? (min((((/* implicit */long long int) -1765225083)), (-6399527279708606095LL))) : (((((/* implicit */_Bool) var_3)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_8))))));
                    var_18 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (~(var_9)))), (min((((/* implicit */unsigned long long int) max((((/* implicit */short) var_1)), (var_2)))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) var_0)) : (var_11)))))));
                    var_19 = max((((/* implicit */long long int) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_10))))), (min((((/* implicit */unsigned short) var_3)), (var_13)))))), (((((/* implicit */_Bool) var_5)) ? (max((((/* implicit */long long int) var_10)), (var_7))) : (var_12))));
                }
            }
        } 
    } 
    var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) var_2))) + (min((((((/* implicit */_Bool) var_5)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_1))))), (max((((/* implicit */long long int) var_3)), (var_9))))))))));
    var_21 = ((/* implicit */unsigned short) var_6);
}
