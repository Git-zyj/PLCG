/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14292
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14292 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14292
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
    var_16 = ((/* implicit */int) ((((/* implicit */_Bool) max((var_4), (((/* implicit */unsigned char) ((_Bool) var_4)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) 10061903171643734253ULL)))) : (((((/* implicit */_Bool) var_13)) ? (var_15) : (((var_15) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))))))));
    var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) min((min((var_1), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_2))))), (max((((/* implicit */long long int) ((signed char) var_9))), (max((((/* implicit */long long int) var_6)), (var_2))))))))));
    var_18 = ((/* implicit */signed char) var_5);
    var_19 = ((/* implicit */long long int) ((unsigned long long int) -4711541207975211026LL));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_20 -= ((((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_6))) <= (var_1))))) > (var_1))) ? (((/* implicit */int) min((((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_10))))), (var_7)))) : (((/* implicit */int) max((((var_2) != (((/* implicit */long long int) ((/* implicit */int) var_3))))), (((var_2) >= (((/* implicit */long long int) ((/* implicit */int) var_9)))))))));
                var_21 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)7931)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)43671))))) ? (max((((/* implicit */long long int) var_6)), (((((/* implicit */_Bool) 8384840902065817362ULL)) ? (16LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))) : (((/* implicit */long long int) ((/* implicit */int) max((var_5), (((/* implicit */short) var_8))))))));
            }
        } 
    } 
}
