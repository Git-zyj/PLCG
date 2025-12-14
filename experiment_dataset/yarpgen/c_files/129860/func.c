/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129860
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
    for (int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 17; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */_Bool) min((((/* implicit */int) ((signed char) (+(((/* implicit */int) (signed char)108)))))), (((((/* implicit */int) var_5)) << (((((/* implicit */int) (unsigned short)54386)) - (54386)))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19; i_2 += 2) 
                {
                    for (unsigned char i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        {
                            arr_13 [i_3] [i_1] [i_1] [i_0] = ((/* implicit */int) (!((!(((/* implicit */_Bool) (short)-5244))))));
                            var_14 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) ((int) 25071299))) ? (17437778381370679998ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)3)))))));
                        }
                    } 
                } 
                var_15 = ((/* implicit */int) min((var_15), (max((((((arr_10 [i_1 + 2] [i_1]) + (2147483647))) << (((((/* implicit */_Bool) arr_12 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [2] [i_0] [i_1 + 2] [i_1]))) : (20ULL))))), ((+(((/* implicit */int) (_Bool)1))))))));
            }
        } 
    } 
    var_16 = ((/* implicit */short) max((((/* implicit */int) (((-(((/* implicit */int) (unsigned char)125)))) < (((var_12) | (((/* implicit */int) (signed char)-124))))))), (var_10)));
    var_17 = ((/* implicit */signed char) (+((~(var_2)))));
    var_18 = ((/* implicit */unsigned short) max((((/* implicit */long long int) (!(((/* implicit */_Bool) var_12))))), (((((/* implicit */long long int) ((/* implicit */int) var_11))) ^ (((((/* implicit */long long int) -633782420)) & (9223372036854775807LL)))))));
}
