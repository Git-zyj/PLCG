/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134029
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
    var_12 = ((/* implicit */signed char) -400220909);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) -400220915)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) arr_0 [i_0]))))))) ? ((-(((/* implicit */int) arr_2 [i_0] [i_1] [i_1])))) : (((/* implicit */int) var_4))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 20; i_2 += 3) 
                {
                    for (long long int i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        {
                            arr_8 [i_0] [i_1] [i_1] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) min((arr_0 [i_1]), (arr_0 [i_0]))))) : (arr_5 [i_0] [i_0] [i_0] [i_0])));
                            var_14 = ((/* implicit */unsigned long long int) ((min((1291915666444188966ULL), (((/* implicit */unsigned long long int) min((((/* implicit */signed char) (_Bool)0)), (var_8)))))) > (((/* implicit */unsigned long long int) min((((((/* implicit */int) arr_4 [i_3] [i_1] [i_0])) >> (((4294967295U) - (4294967271U))))), ((-(((/* implicit */int) arr_1 [i_0] [i_0])))))))));
                        }
                    } 
                } 
                arr_9 [i_1] = ((/* implicit */signed char) (-(((/* implicit */int) max((((((/* implicit */_Bool) arr_0 [i_1])) || (arr_4 [i_1] [i_0] [i_0]))), (arr_4 [i_0] [i_0] [i_1]))))));
                arr_10 [i_0] [i_1] = ((/* implicit */unsigned short) arr_6 [i_1] [i_1]);
            }
        } 
    } 
}
