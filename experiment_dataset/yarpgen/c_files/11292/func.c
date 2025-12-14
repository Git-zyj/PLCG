/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11292
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11292 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11292
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
    for (int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 12495632265210239224ULL)) ? (arr_3 [i_0] [i_1]) : ((~(1125899906842623ULL)))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1] [4ULL] [i_0]))) : (((arr_0 [9] [i_1]) << (((arr_0 [i_1] [i_0]) - (7270129812982528899LL)))))));
                var_19 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) min((((/* implicit */int) (signed char)56)), (122264317)))), (((unsigned long long int) (signed char)27))));
                /* LoopNest 3 */
                for (signed char i_2 = 3; i_2 < 10; i_2 += 2) 
                {
                    for (signed char i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 11; i_4 += 3) 
                        {
                            {
                                var_20 = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_4] [i_3] [i_2])) ? (-702634926) : (122264320)))) || (((/* implicit */_Bool) arr_4 [i_0] [i_4])))) ? (var_10) : (((/* implicit */unsigned long long int) max((2064384), (-1918858452)))));
                                var_21 = ((/* implicit */unsigned char) min((((/* implicit */long long int) arr_4 [i_0] [i_1])), (((((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_2] [i_1]))) ^ (5067320204415283848LL))) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)72)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_1 [i_0] [i_0])))))))));
                                var_22 = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) arr_4 [i_1] [(_Bool)1])) && (((/* implicit */_Bool) arr_4 [i_0] [i_1])))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_23 &= max((((unsigned long long int) min((1ULL), (var_2)))), (((/* implicit */unsigned long long int) var_15)));
}
