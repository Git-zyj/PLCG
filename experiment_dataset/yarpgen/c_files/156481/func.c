/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156481
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
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (unsigned char)151)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (var_5))))) ^ (((/* implicit */int) ((_Bool) 0ULL)))));
    var_17 |= ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((unsigned int) var_13))) : ((~(var_15))))) : (((/* implicit */long long int) ((/* implicit */int) var_3))));
    var_18 = ((/* implicit */unsigned short) var_15);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 20; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 20; i_4 += 4) 
                        {
                            {
                                var_19 -= ((/* implicit */long long int) var_9);
                                var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) min((((/* implicit */int) min((var_9), (((/* implicit */unsigned short) arr_2 [(_Bool)1] [i_1]))))), (((int) ((((/* implicit */_Bool) (signed char)-32)) ? (3499898393U) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))))))));
                            }
                        } 
                    } 
                } 
                var_21 *= ((/* implicit */unsigned int) 0ULL);
            }
        } 
    } 
    var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) (unsigned char)151))));
}
