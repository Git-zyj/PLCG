/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111685
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111685 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111685
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
    for (int i_0 = 3; i_0 < 11; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (signed char i_3 = 3; i_3 < 14; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 15; i_4 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */short) max((min((0ULL), (((/* implicit */unsigned long long int) var_13)))), (((/* implicit */unsigned long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) 6539767762679176750ULL))))), (var_17))))));
                                var_21 ^= max((((/* implicit */int) min((arr_7 [i_3 - 2] [i_1] [i_3 - 1] [i_0 + 4] [i_4] [i_3 - 2]), (arr_7 [i_0] [i_3] [i_3 - 1] [i_0 + 4] [i_3 - 1] [i_3 - 1])))), (max((((/* implicit */int) arr_5 [i_0 - 3] [(_Bool)1] [2LL] [i_3 - 3])), (arr_1 [i_0 - 1] [12ULL]))));
                            }
                        } 
                    } 
                } 
                var_22 = ((/* implicit */unsigned long long int) (!((_Bool)1)));
            }
        } 
    } 
    var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) max((var_2), (((/* implicit */signed char) (!(((/* implicit */_Bool) min((((/* implicit */short) (_Bool)1)), ((short)4637))))))))))));
}
