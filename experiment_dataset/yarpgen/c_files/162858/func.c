/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162858
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
    var_12 -= ((/* implicit */int) ((min((((/* implicit */unsigned long long int) (_Bool)1)), (16716438955298616757ULL))) != (min((((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))))), (max((var_4), (((/* implicit */unsigned long long int) (_Bool)1))))))));
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) var_9)) : (16716438955298616731ULL))) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))) ? ((-(0U))) : (((/* implicit */unsigned int) (+(min((((/* implicit */int) (_Bool)0)), (-1895929835))))))));
    var_14 = (+(((/* implicit */int) (_Bool)1)));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */int) arr_2 [0LL]);
                /* LoopNest 2 */
                for (signed char i_2 = 1; i_2 < 17; i_2 += 2) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_16 = ((/* implicit */int) (-(((18446744073709551606ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0)))))));
                            var_17 -= ((/* implicit */signed char) ((min((min((10247505815925107229ULL), (((/* implicit */unsigned long long int) (_Bool)1)))), (((unsigned long long int) (unsigned short)65535)))) != (((/* implicit */unsigned long long int) ((int) min((1730305118410934882ULL), (16716438955298616732ULL)))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
