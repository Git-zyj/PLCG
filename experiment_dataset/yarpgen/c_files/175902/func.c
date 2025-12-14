/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175902
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175902 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175902
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
    var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) ((((((/* implicit */int) var_7)) ^ (var_9))) | (max((((/* implicit */int) ((unsigned char) var_5))), (((((/* implicit */int) var_1)) % (((/* implicit */int) var_1)))))))))));
    var_18 = var_14;
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                var_19 *= ((/* implicit */unsigned short) ((((((/* implicit */int) arr_2 [i_1])) ^ (((/* implicit */int) arr_2 [i_1])))) / (((/* implicit */int) max((((-400205081) == (-400205081))), (((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) -7972401142999324262LL)))))))));
                var_20 |= (unsigned short)41496;
                var_21 = arr_4 [10ULL];
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned char) min((400205083), (((((/* implicit */_Bool) 400205076)) ? (-1685301598) : (((/* implicit */int) (unsigned short)3674))))));
    var_23 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned short)29417)) : (((/* implicit */int) var_14))))) ? (((/* implicit */unsigned long long int) min((var_0), (((/* implicit */long long int) var_11))))) : (((var_4) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)29414))))))), (((/* implicit */unsigned long long int) var_14))));
}
