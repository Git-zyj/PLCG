/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159055
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159055 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159055
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
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_0] [i_1] |= ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)87)) << (((((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) (unsigned char)41)) : (((/* implicit */int) arr_3 [i_1])))) & ((+(((/* implicit */int) (short)(-32767 - 1)))))))));
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 18; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned long long int) (signed char)127);
                            /* LoopSeq 1 */
                            for (int i_4 = 0; i_4 < 18; i_4 += 4) 
                            {
                                arr_14 [14] [14] [i_2] [(unsigned char)11] [i_2] = ((/* implicit */short) (-(((((/* implicit */_Bool) (-(arr_10 [i_0] [i_3] [i_2] [i_4] [(unsigned short)15])))) ? (min((var_0), (((/* implicit */long long int) var_11)))) : (((/* implicit */long long int) ((var_10) + (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))))));
                                var_18 = 3184992664U;
                                var_19 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) var_14))) < (((((((/* implicit */long long int) var_2)) / (var_0))) / (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)55)) * (((/* implicit */int) (_Bool)1)))))))));
                                arr_15 [6LL] [15U] [i_2] [i_3] [i_4] = ((/* implicit */unsigned char) arr_0 [8U]);
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    var_20 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((min((((/* implicit */long long int) 1628043775U)), (var_3))) - (((/* implicit */long long int) ((/* implicit */int) var_9)))))) ? ((~(var_10))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)3072)))));
    var_21 = ((/* implicit */long long int) (-(((/* implicit */int) (signed char)-64))));
}
