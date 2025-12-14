/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17117
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
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 2; i_3 < 15; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((long long int) 9222809086901354496ULL)))));
                                var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)253)) >> (((9223934986808197125ULL) - (9223934986808197099ULL))))))));
                            }
                        } 
                    } 
                    var_21 ^= ((/* implicit */unsigned long long int) arr_4 [i_0] [i_0]);
                    var_22 = ((/* implicit */signed char) (-(((/* implicit */int) arr_11 [i_1] [i_1] [i_2]))));
                }
            } 
        } 
    } 
    var_23 = max((((/* implicit */long long int) (unsigned short)65533)), (var_17));
}
