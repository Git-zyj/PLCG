/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137848
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
    var_14 = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((-7126661805941114698LL), (((/* implicit */long long int) (unsigned short)65535)))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (signed char i_1 = 2; i_1 < 7; i_1 += 3) 
        {
            for (signed char i_2 = 1; i_2 < 8; i_2 += 4) 
            {
                {
                    arr_6 [i_1] [i_1] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) var_10))))) ? (((((1152921504606844928LL) - (((/* implicit */long long int) arr_5 [i_0] [i_1 + 3] [i_0])))) - (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_2]))))) : (min((((/* implicit */long long int) 2013247033U)), (((((/* implicit */long long int) arr_5 [i_0] [i_1] [i_2])) - (var_2)))))));
                    var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)15647)) ? (((/* implicit */int) arr_0 [i_0])) : (-752963398)))), (-203874493918431963LL)))) ? (((/* implicit */int) ((short) min((((/* implicit */unsigned int) (unsigned short)65535)), (var_6))))) : (((((/* implicit */_Bool) arr_5 [i_2 + 2] [i_1 + 1] [i_2])) ? (((arr_0 [i_1]) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_2 [i_0])))) : (((/* implicit */int) (!(((/* implicit */_Bool) -1269040545)))))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 2; i_3 < 7; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 9; i_4 += 1) 
                        {
                            {
                                arr_13 [i_1] [i_3 + 3] [i_1 + 1] [i_1 + 1] [i_1] = var_11;
                                var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_13)))))));
                            }
                        } 
                    } 
                    var_17 |= (-((-(((/* implicit */int) var_1)))));
                }
            } 
        } 
    } 
    var_18 = (~(max((var_11), (min((-656706329), (((/* implicit */int) var_3)))))));
    var_19 = ((/* implicit */long long int) (-(max((((unsigned int) -203874493918431963LL)), (((/* implicit */unsigned int) min((var_0), (((/* implicit */int) var_10)))))))));
}
