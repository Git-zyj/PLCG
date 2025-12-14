/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11614
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
    var_19 = ((/* implicit */int) ((((/* implicit */long long int) (-((-(((/* implicit */int) (signed char)-30))))))) != (var_0)));
    var_20 = ((/* implicit */unsigned long long int) (signed char)-41);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    var_21 ^= ((/* implicit */unsigned int) -8307565937860968750LL);
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 3; i_4 < 16; i_4 += 1) 
                        {
                            {
                                arr_12 [i_0] [(signed char)5] [2ULL] [i_3] [i_4] |= ((/* implicit */unsigned char) min(((unsigned short)46874), (((/* implicit */unsigned short) (signed char)41))));
                                var_22 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) 8307565937860968749LL)) ? (-1) : (((/* implicit */int) (unsigned short)63317))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
