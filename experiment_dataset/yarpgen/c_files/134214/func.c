/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134214
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
    var_11 *= ((/* implicit */unsigned short) (short)(-32767 - 1));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (int i_1 = 3; i_1 < 20; i_1 += 2) 
        {
            {
                arr_7 [8ULL] [(signed char)13] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) 1721241860)), (((1886362426U) + (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1 - 3])))))));
                var_12 ^= var_8;
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 23; i_2 += 3) 
                {
                    for (unsigned char i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        {
                            arr_14 [i_0] [i_0] [(unsigned char)2] [i_3] = ((/* implicit */short) min((((((/* implicit */_Bool) 30U)) ? ((-(1861930018U))) : (((/* implicit */unsigned int) ((arr_9 [17LL] [17LL] [i_2] [1ULL]) / (((/* implicit */int) (unsigned short)38561))))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_2) << (((((/* implicit */int) var_10)) - (41565)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_1])) && (((/* implicit */_Bool) var_0))))) : (((/* implicit */int) min((((/* implicit */unsigned short) var_4)), (arr_1 [i_1])))))))));
                            var_13 ^= ((/* implicit */long long int) 2408604870U);
                        }
                    } 
                } 
                var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (((((arr_9 [i_0] [i_0] [i_1 - 2] [(short)15]) << (((((/* implicit */int) var_10)) - (41592))))) | ((~(((/* implicit */int) var_5)))))) : (((/* implicit */int) ((max((4294967295U), (((/* implicit */unsigned int) arr_13 [i_0])))) < (((((/* implicit */_Bool) arr_5 [15] [2U] [15])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1]))) : (1886362443U)))))))))));
            }
        } 
    } 
}
