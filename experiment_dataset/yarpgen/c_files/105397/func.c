/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105397
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 33124462U)) ? (((/* implicit */int) (_Bool)1)) : (-2097196506)))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (signed char)0))))) || (((/* implicit */_Bool) min(((+(((/* implicit */int) var_15)))), ((+(((/* implicit */int) arr_4 [6U] [i_0] [i_2] [6U])))))))));
                    arr_7 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [12U])) ? (((/* implicit */long long int) ((min((((/* implicit */unsigned int) (_Bool)1)), (1124715532U))) % (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)164)))))))) : (((((/* implicit */_Bool) (+(var_11)))) ? (((/* implicit */long long int) min((1421582051U), (((/* implicit */unsigned int) var_5))))) : (min((((/* implicit */long long int) (_Bool)1)), (var_4)))))));
                    arr_8 [1ULL] [i_0] [11ULL] = ((/* implicit */long long int) ((unsigned short) min((((/* implicit */long long int) min((((/* implicit */short) var_15)), (var_3)))), (9223372036854775807LL))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned int) -1708250178);
}
