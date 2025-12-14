/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155292
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155292 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155292
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
    var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_0) | (var_0)))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned char)118))));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 11; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 12; i_2 += 4) 
                {
                    for (unsigned char i_3 = 3; i_3 < 11; i_3 += 3) 
                    {
                        {
                            var_12 = ((/* implicit */signed char) arr_7 [(signed char)7] [i_1] [i_1] [i_3]);
                            var_13 = ((/* implicit */unsigned char) (unsigned short)3188);
                            var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_6 [i_0] [(signed char)5] [i_0 - 1] [(unsigned char)7])) ? (((/* implicit */int) (signed char)82)) : (((/* implicit */int) arr_7 [i_0] [i_0] [(short)11] [i_3 - 1]))))))) ? (max((arr_6 [i_0 - 2] [i_3 - 2] [i_3 - 2] [i_3]), (((/* implicit */long long int) (unsigned char)255)))) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0])))));
                            var_15 += ((/* implicit */unsigned short) arr_2 [i_1]);
                            var_16 *= ((/* implicit */short) ((_Bool) arr_2 [i_2]));
                        }
                    } 
                } 
                var_17 = ((/* implicit */int) ((((((/* implicit */_Bool) max((arr_2 [i_0 - 2]), (((/* implicit */long long int) arr_4 [i_0]))))) ? (arr_3 [i_0] [10ULL]) : (min((-7944017460246968894LL), (((/* implicit */long long int) (unsigned char)0)))))) > (((arr_6 [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_1]) % (arr_6 [i_1] [i_0 - 1] [i_1] [i_1])))));
                var_18 -= ((/* implicit */_Bool) (+((+((-(((/* implicit */int) (unsigned char)246))))))));
            }
        } 
    } 
}
