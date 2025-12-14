/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188195
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
    var_18 = ((/* implicit */_Bool) (unsigned short)15);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 2; i_2 < 22; i_2 += 2) 
                {
                    for (long long int i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */long long int) (((-(0ULL))) | (((/* implicit */unsigned long long int) (-(arr_1 [i_1 + 1] [i_0]))))));
                                arr_13 [i_0] [i_0] [i_2 - 2] [i_0] [i_2 - 2] = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned short)65490)), (arr_2 [i_1 + 1])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_2 - 1] [i_3] [i_4])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)15))) : (arr_7 [21ULL])))) : (max((arr_0 [i_0] [i_3]), (((/* implicit */unsigned long long int) (unsigned short)65520)))))))));
                                var_20 = ((/* implicit */unsigned long long int) (short)-6977);
                                var_21 *= ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)65520))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)15))))) : (min((1001376987494885297ULL), (200522676107218449ULL))));
                            }
                        } 
                    } 
                } 
                arr_14 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)15)) ? (-7129856802105013939LL) : (-3546742839056697748LL)));
            }
        } 
    } 
}
