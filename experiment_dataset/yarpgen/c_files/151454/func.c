/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151454
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
    var_18 = (-(((/* implicit */int) var_4)));
    var_19 = ((/* implicit */int) ((((/* implicit */_Bool) 0)) ? (((/* implicit */long long int) max((((/* implicit */int) ((signed char) (signed char)(-127 - 1)))), ((~(((/* implicit */int) var_0))))))) : (((((((/* implicit */long long int) ((/* implicit */int) var_17))) | (var_13))) | (((/* implicit */long long int) ((/* implicit */int) var_11)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned int i_1 = 2; i_1 < 18; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */unsigned int) ((min((((((/* implicit */long long int) arr_3 [i_0] [i_0])) == (9223372036854775796LL))), ((!(((/* implicit */_Bool) arr_0 [i_0])))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1]))) : ((-(-9223372036854775796LL)))));
                var_21 = ((/* implicit */int) max((((/* implicit */long long int) arr_0 [i_1 + 2])), ((-(var_13)))));
                /* LoopNest 2 */
                for (long long int i_2 = 1; i_2 < 20; i_2 += 2) 
                {
                    for (unsigned short i_3 = 1; i_3 < 19; i_3 += 1) 
                    {
                        {
                            var_22 |= (-(((unsigned int) ((((/* implicit */int) var_1)) - (((/* implicit */int) var_14))))));
                            arr_8 [(signed char)14] [i_1] [i_1] [(signed char)14] [i_3] = ((/* implicit */short) var_9);
                        }
                    } 
                } 
            }
        } 
    } 
}
