/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150497
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150497 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150497
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
    for (unsigned char i_0 = 2; i_0 < 14; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 16; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */signed char) min(((-(((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_4 [i_0] [15U] [15U])) : (((/* implicit */int) arr_3 [i_1])))))), ((~(((/* implicit */int) (_Bool)1))))));
                var_15 &= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [(unsigned char)1] [(unsigned char)1] [(unsigned char)1]))) + ((+(((((/* implicit */_Bool) (short)-30537)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)248)))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_2 = 0; i_2 < 21; i_2 += 1) 
    {
        for (unsigned char i_3 = 1; i_3 < 20; i_3 += 4) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (short i_5 = 2; i_5 < 20; i_5 += 4) 
                    {
                        for (int i_6 = 0; i_6 < 21; i_6 += 2) 
                        {
                            {
                                var_16 += ((/* implicit */unsigned long long int) ((_Bool) (+((~(((/* implicit */int) (signed char)-8)))))));
                                var_17 &= ((/* implicit */unsigned int) arr_12 [i_4] [i_4]);
                                var_18 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (4ULL)))) ? (((/* implicit */int) (unsigned char)93)) : (((/* implicit */int) (signed char)67))))));
                            }
                        } 
                    } 
                } 
                var_19 += ((/* implicit */signed char) ((9ULL) >> (((((/* implicit */int) (signed char)98)) - (95)))));
                var_20 = ((/* implicit */signed char) (-((-(((/* implicit */int) (unsigned char)240))))));
            }
        } 
    } 
}
