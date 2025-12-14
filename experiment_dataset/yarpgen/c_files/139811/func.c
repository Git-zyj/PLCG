/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139811
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139811 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139811
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
    var_18 = ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 2047)), (((((/* implicit */_Bool) -2048)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_3)))))) ? (((/* implicit */unsigned long long int) ((-8034153954772274654LL) & (((/* implicit */long long int) ((/* implicit */int) var_2)))))) : ((((!(((/* implicit */_Bool) var_17)))) ? ((~(var_5))) : (((/* implicit */unsigned long long int) 2047)))));
    var_19 *= ((/* implicit */unsigned long long int) var_17);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) ((signed char) (((+(0U))) & (((/* implicit */unsigned int) ((/* implicit */int) max((arr_0 [i_0] [i_1]), (arr_0 [i_0] [i_0])))))))))));
                    arr_6 [i_0] = ((/* implicit */short) ((((((/* implicit */int) (unsigned char)85)) >> (((((/* implicit */int) max((((/* implicit */unsigned char) arr_2 [i_0])), (arr_0 [i_0] [i_1 - 1])))) - (245))))) > (((/* implicit */int) (_Bool)0))));
                    var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) var_0))));
                    var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1)))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_3 = 0; i_3 < 16; i_3 += 2) 
    {
        for (long long int i_4 = 1; i_4 < 14; i_4 += 1) 
        {
            {
                var_23 = ((/* implicit */signed char) (unsigned char)186);
                var_24 *= ((/* implicit */unsigned char) max(((+(arr_10 [i_4 - 1]))), (((/* implicit */unsigned long long int) ((arr_7 [i_4 - 1] [i_4 + 2]) * (((/* implicit */unsigned int) ((/* implicit */int) (short)29225))))))));
            }
        } 
    } 
}
