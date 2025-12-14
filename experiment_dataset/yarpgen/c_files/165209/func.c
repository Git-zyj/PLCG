/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165209
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
    var_14 = ((/* implicit */int) ((long long int) ((var_13) << ((((~(var_3))) + (4019694254353850416LL))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    arr_7 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1] [i_0 - 1] [i_0 - 1] [i_0 - 1])) ? (332416963661959623ULL) : (((/* implicit */unsigned long long int) arr_6 [i_0] [i_0] [i_0 - 1] [i_0])))))));
                    var_15 = ((/* implicit */_Bool) arr_0 [i_0 - 1]);
                    var_16 += ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (signed char)-36)) : (((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) 1374648264875333470LL)))))))) ? (min((((((/* implicit */long long int) 2147483619)) & (-9046028691762501219LL))), (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))))) : (((/* implicit */long long int) (+(max((var_2), (((/* implicit */int) var_11)))))))));
                }
            } 
        } 
    } 
}
