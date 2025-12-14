/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126234
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
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */unsigned short) min((var_11), (((/* implicit */unsigned short) arr_1 [i_0]))));
                arr_4 [i_0] [i_0] = ((/* implicit */_Bool) arr_3 [i_0]);
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 15; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        {
                            var_12 = ((/* implicit */short) arr_2 [i_1] [2ULL] [i_3]);
                            var_13 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_7 [i_3] [13LL] [i_1] [i_0])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((7216244822471294571ULL), (((/* implicit */unsigned long long int) 27396320))))) ? (((/* implicit */int) arr_2 [11] [i_1] [i_2])) : (((/* implicit */int) (unsigned char)184))))) : (max((((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [0ULL] [i_1] [i_2]))) & (var_5))), (((/* implicit */unsigned int) (unsigned char)72))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_14 = ((/* implicit */int) max((((((/* implicit */_Bool) ((var_5) >> (((var_8) + (794832208)))))) ? (((((/* implicit */_Bool) var_2)) ? (var_5) : (((/* implicit */unsigned int) var_1)))) : (min((((/* implicit */unsigned int) var_10)), (var_7))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)198)) >> (((((/* implicit */int) var_4)) - (74)))))) ? ((-(((/* implicit */int) var_10)))) : (var_8))))));
    var_15 = ((/* implicit */unsigned short) 754024513U);
}
