/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159046
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_1])) ? (arr_4 [i_0] [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_12)))))) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)6042)) || (((/* implicit */_Bool) (unsigned char)46)))))));
                arr_7 [i_0] = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_12))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0]))) : (((((/* implicit */_Bool) (short)22442)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-22443))) : (var_3))))) | (var_6)));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (int i_3 = 0; i_3 < 10; i_3 += 1) 
        {
            {
                var_16 = arr_2 [i_2];
                arr_12 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_2] [i_2])) ? ((+(4294967295U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 2306767365631010738LL)) || (((/* implicit */_Bool) (unsigned short)6042))))))))) || (((/* implicit */_Bool) max((((/* implicit */long long int) arr_3 [i_2])), (((arr_0 [i_2]) ? (arr_1 [i_2] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)96))))))))));
                var_17 = ((/* implicit */unsigned char) arr_10 [i_2] [i_3]);
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned short) min((((unsigned long long int) (-(var_5)))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((short) var_12))))))));
    var_19 = ((/* implicit */signed char) max((((/* implicit */short) (_Bool)1)), ((short)32749)));
}
