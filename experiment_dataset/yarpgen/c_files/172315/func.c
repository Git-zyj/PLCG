/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172315
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
    var_14 = (-((((+(((/* implicit */int) (unsigned char)67)))) / (((/* implicit */int) var_4)))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) var_4))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 16; i_2 += 4) 
                {
                    for (unsigned char i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        {
                            arr_9 [i_0] [i_0] [i_2] [5LL] = ((/* implicit */short) var_0);
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (long long int i_4 = 2; i_4 < 14; i_4 += 4) 
                            {
                                var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) (+(((/* implicit */int) arr_1 [i_4 - 1])))))));
                                var_16 ^= ((/* implicit */long long int) (((~(((/* implicit */int) arr_0 [i_2] [i_2])))) << (((/* implicit */int) ((9223372036854775807LL) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)67))))))));
                            }
                            var_17 ^= ((/* implicit */unsigned short) arr_8 [i_2] [i_1]);
                            var_18 -= ((/* implicit */_Bool) (~(((var_5) ^ (((((/* implicit */int) (unsigned char)46)) << (((((/* implicit */int) var_11)) - (232)))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_19 = ((/* implicit */_Bool) var_12);
    var_20 ^= (+((+(((((/* implicit */_Bool) 4866676197061768210LL)) ? ((-9223372036854775807LL - 1LL)) : (206639846363408920LL))))));
}
