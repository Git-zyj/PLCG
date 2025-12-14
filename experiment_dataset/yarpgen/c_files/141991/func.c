/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141991
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141991 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141991
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
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 18; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 20; i_2 += 1) 
                {
                    for (long long int i_3 = 1; i_3 < 18; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 19; i_4 += 3) 
                        {
                            {
                                var_18 -= ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) 2610113702U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)1))) : (2863201910U)))) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)255))))), (((/* implicit */unsigned long long int) var_0))));
                                var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) arr_0 [(unsigned char)4]))));
                            }
                        } 
                    } 
                } 
                var_20 = ((/* implicit */unsigned char) min((((int) arr_4 [i_0] [i_0] [i_0])), (((((/* implicit */_Bool) arr_4 [i_1 + 1] [i_0] [i_0])) ? (((/* implicit */int) arr_4 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_4 [i_0] [i_1 - 2] [i_1 - 2]))))));
            }
        } 
    } 
    var_21 -= ((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */unsigned int) var_16)) - (var_10)))) ? (((/* implicit */unsigned long long int) ((348737251) - (((/* implicit */int) (unsigned char)67))))) : (var_13))), (((/* implicit */unsigned long long int) var_17))));
}
