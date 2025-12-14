/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102187
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102187 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102187
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
    for (int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (unsigned short i_2 = 2; i_2 < 21; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 24; i_4 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) max(((_Bool)1), ((_Bool)1)))), (min((arr_4 [i_2 - 2]), (arr_4 [i_2 + 1])))));
                                var_18 = ((/* implicit */long long int) min((min((arr_0 [i_2 + 2]), (arr_0 [i_2 + 3]))), (min((((/* implicit */unsigned long long int) (_Bool)1)), (arr_0 [i_2 - 1])))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_2 - 2] [i_2 - 2] [i_2 + 1]))) : (4294967275U))));
                    var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((min((arr_7 [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))))) >> ((((-(((/* implicit */int) arr_1 [i_0])))) + (26646))))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */signed char) ((long long int) ((((/* implicit */int) ((((/* implicit */_Bool) var_12)) && ((_Bool)1)))) ^ (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))));
}
