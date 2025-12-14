/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118845
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
    for (unsigned int i_0 = 2; i_0 < 15; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */long long int) (+(((/* implicit */int) arr_0 [i_1]))))), (arr_4 [(signed char)14] [(signed char)14] [i_0 - 2])))) ? (((((/* implicit */_Bool) max((4239865936380862674ULL), (((/* implicit */unsigned long long int) var_6))))) ? (((((/* implicit */_Bool) arr_0 [i_0 - 2])) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-49))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0 - 1])) ? (-7135285282892058453LL) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [(unsigned short)13] [i_1])))))))) : (((18446744073709551606ULL) - (6290803148678569562ULL)))));
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 16; i_2 += 3) 
                {
                    for (int i_3 = 2; i_3 < 15; i_3 += 4) 
                    {
                        for (long long int i_4 = 0; i_4 < 16; i_4 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((unsigned char) var_2)))));
                                var_20 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_17))));
                                var_21 = ((/* implicit */unsigned int) (+(max((arr_6 [i_0]), (arr_6 [i_0 + 1])))));
                                var_22 -= ((/* implicit */_Bool) ((long long int) max((((/* implicit */unsigned long long int) arr_1 [i_0 + 1] [i_0])), (max((((/* implicit */unsigned long long int) arr_11 [i_0] [i_1] [i_2] [i_2] [(signed char)6])), (arr_3 [i_0]))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) var_4))));
}
