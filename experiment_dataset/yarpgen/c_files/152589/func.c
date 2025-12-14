/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152589
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
    var_18 = ((/* implicit */unsigned char) ((((((min(((-2147483647 - 1)), (((/* implicit */int) (_Bool)0)))) + (2147483647))) + (2147483647))) >> (min((var_8), (((/* implicit */unsigned int) min((var_1), (((/* implicit */int) var_5)))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_7 [i_0] |= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) -6)) & (11629659947893910299ULL)));
                arr_8 [i_1] = ((((/* implicit */int) max((((((/* implicit */int) (unsigned short)40806)) <= (((/* implicit */int) (signed char)-1)))), (((((/* implicit */int) var_16)) == (((/* implicit */int) var_12))))))) + (((/* implicit */int) ((((((/* implicit */_Bool) arr_6 [i_1])) ? (var_17) : (var_17))) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0])))))));
                var_19 = ((/* implicit */short) ((((/* implicit */_Bool) max((var_16), (((/* implicit */short) arr_5 [i_1] [i_1]))))) || (((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) var_9)) : (1129056640))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_5 [i_0] [i_1])) : (((/* implicit */int) var_5)))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */short) min((((/* implicit */unsigned long long int) var_0)), (min((((/* implicit */unsigned long long int) (_Bool)1)), (0ULL)))));
}
