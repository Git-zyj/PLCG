/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152955
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152955 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152955
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
        for (long long int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 4; i_3 < 20; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 21; i_4 += 3) 
                        {
                            {
                                var_15 = ((/* implicit */_Bool) ((min((((/* implicit */long long int) var_8)), (arr_9 [i_0] [i_3 - 3] [i_3] [(unsigned char)8]))) & (max((9223372036854775807LL), (((/* implicit */long long int) (+(((/* implicit */int) var_12)))))))));
                                arr_14 [i_0] [i_1] [i_2] [i_2] [i_0] [i_4] = ((/* implicit */unsigned char) (-9223372036854775807LL - 1LL));
                                var_16 = arr_5 [i_0] [i_0];
                            }
                        } 
                    } 
                    arr_15 [i_0] = ((/* implicit */signed char) arr_9 [i_0] [i_1] [(_Bool)1] [i_0]);
                }
            } 
        } 
    } 
    var_17 = (-(0U));
    var_18 = ((/* implicit */int) max((((/* implicit */long long int) min((((/* implicit */unsigned int) var_11)), (((((/* implicit */_Bool) -1206186462)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)177))) : (1959676900U)))))), ((+(((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)178))) : (var_3)))))));
    var_19 = ((/* implicit */_Bool) var_11);
}
