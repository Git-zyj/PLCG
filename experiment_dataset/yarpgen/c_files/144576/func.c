/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144576
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144576 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144576
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
    var_11 = ((((/* implicit */_Bool) ((unsigned int) var_7))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) * ((-(((/* implicit */int) var_5))))))) : (var_7));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 14; i_2 += 3) 
                {
                    for (unsigned short i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 14; i_4 += 1) 
                        {
                            {
                                arr_12 [i_0] [i_0] [i_0] [i_3] [i_0] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */int) var_0)) - (((/* implicit */int) var_5))))) > (max((-1LL), (((/* implicit */long long int) 2134781269))))))), (((((/* implicit */_Bool) 1972925326U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1)))) : (8645150215583626223ULL)))));
                                arr_13 [i_0] [i_0] [i_1] [i_0] [i_0] = ((min((((/* implicit */unsigned int) var_3)), (arr_3 [i_1]))) < ((+(arr_3 [i_3]))));
                                var_12 = ((/* implicit */unsigned int) (-(((((/* implicit */unsigned long long int) ((long long int) var_5))) * (max((var_7), (((/* implicit */unsigned long long int) var_5))))))));
                            }
                        } 
                    } 
                } 
                var_13 = ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_8))))), (max((((/* implicit */unsigned long long int) arr_4 [i_0] [i_1])), (var_7)))))) ? (((/* implicit */int) max(((short)-16027), (((/* implicit */short) (_Bool)0))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) ((long long int) var_7)))))));
            }
        } 
    } 
}
