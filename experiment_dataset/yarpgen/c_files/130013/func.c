/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130013
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
    var_15 = ((/* implicit */short) var_10);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_2 = 3; i_2 < 16; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 2; i_3 < 15; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 17; i_4 += 4) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */long long int) max((((/* implicit */unsigned int) (((!(((/* implicit */_Bool) 336755935)))) ? (((/* implicit */int) (unsigned short)1920)) : (((/* implicit */int) (_Bool)1))))), (max((max((arr_7 [i_1] [i_0]), (((/* implicit */unsigned int) var_12)))), (((/* implicit */unsigned int) (short)16383))))));
                                var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((-2047050362), (294612273)))) ? (max((var_3), (var_11))) : (var_5)));
                                arr_15 [i_0] [(_Bool)1] [i_0] [i_0] [(_Bool)1] [i_4] = ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */_Bool) -336755928)) ? (3596022855U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ^ ((-(arr_8 [i_3 + 1] [i_0] [15LL] [i_2 - 1])))));
                            }
                        } 
                    } 
                } 
                var_17 -= ((/* implicit */int) ((((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned char)43)), (-336755927)))) - (((((/* implicit */unsigned long long int) 336755922)) / (arr_6 [(unsigned char)4] [i_0] [i_0] [i_1])))));
            }
        } 
    } 
    var_18 &= ((/* implicit */_Bool) var_11);
}
