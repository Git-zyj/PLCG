/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133700
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
    var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((247882848346725260ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_8))) >= (max((8677021167021781611LL), (((/* implicit */long long int) (unsigned short)63530)))))))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */unsigned char) ((int) (unsigned short)65525));
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 25; i_2 += 4) 
                {
                    for (signed char i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 25; i_4 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */int) 13111738911352379847ULL);
                                arr_16 [i_3] [1U] [i_2] [i_3] [i_3] = ((/* implicit */unsigned int) -8677021167021781616LL);
                                var_22 = ((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 0U)) ? (arr_10 [i_0] [i_1] [i_3] [i_1]) : (((/* implicit */unsigned int) arr_7 [i_4] [(unsigned short)23])))), (((/* implicit */unsigned int) ((signed char) (unsigned short)49356)))))) ? (((long long int) (unsigned short)14440)) : (((((/* implicit */long long int) arr_11 [i_0] [(signed char)9] [i_2] [i_2] [(unsigned short)16] [i_4])) + (min((((/* implicit */long long int) arr_5 [i_0] [i_1])), (8446154044968001140LL)))))));
                                arr_17 [i_0] [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */int) (!(((((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) != ((-(-6499189718279671836LL)))))));
                                var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+((+(((/* implicit */int) var_3))))))) ? (arr_2 [i_0] [i_2]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (((/* implicit */int) ((_Bool) 2147483647))) : (((/* implicit */int) arr_4 [i_0] [i_1])))))));
                            }
                        } 
                    } 
                } 
                var_24 = ((/* implicit */long long int) 4160749568U);
                var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) var_11))) ? (((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (arr_2 [(short)9] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)17372))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_16)))));
            }
        } 
    } 
}
