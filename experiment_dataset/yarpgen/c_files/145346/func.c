/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145346
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
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */signed char) (-(arr_6 [i_2 + 1] [i_1] [i_2 + 1])));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 16; i_4 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned long long int) max((var_15), (max((((/* implicit */unsigned long long int) (signed char)122)), (9726523325491646058ULL)))));
                                var_16 -= ((/* implicit */_Bool) (+(((((/* implicit */_Bool) (~(var_10)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_5)))) : (((((/* implicit */_Bool) var_0)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))))));
                                var_17 = ((/* implicit */int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) arr_2 [i_0])) : (((long long int) arr_12 [i_4 + 1] [i_4 - 1] [i_3] [i_3] [i_3] [i_2 + 1] [i_0]))));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */_Bool) var_10);
                    var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(arr_3 [i_0] [i_1] [i_2 + 1])))) ? ((~(-2147483625))) : (((((/* implicit */_Bool) (+(((/* implicit */int) arr_12 [i_0] [i_0] [i_1] [i_1] [i_1] [i_1] [i_2 + 1]))))) ? (arr_3 [i_0] [i_0] [i_0]) : ((~(1325971449))))))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned int) min((var_10), (((/* implicit */int) ((signed char) (-(((/* implicit */int) (signed char)-1))))))));
}
