/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13107
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13107 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13107
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
    var_17 *= ((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((/* implicit */int) var_3))) * (((var_15) / (((/* implicit */long long int) 33550336U)))))) < (((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((_Bool) var_14)))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (long long int i_1 = 4; i_1 < 9; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 2; i_3 < 9; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 7; i_4 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */_Bool) min((5830098519734357424LL), (-3955694294840634485LL)));
                                var_19 = ((/* implicit */unsigned char) arr_6 [i_0] [(_Bool)1] [6LL]);
                                var_20 ^= ((/* implicit */_Bool) ((short) arr_6 [i_4 + 2] [(unsigned short)0] [i_1]));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 10; i_5 += 1) 
                    {
                        for (long long int i_6 = 0; i_6 < 10; i_6 += 1) 
                        {
                            {
                                arr_16 [i_0] [i_5] [6U] [i_5] [i_5] [i_6] = ((long long int) (~(((unsigned int) 5897663189775381190ULL))));
                                var_21 = ((/* implicit */unsigned char) ((((/* implicit */int) var_12)) >= (max((((/* implicit */int) ((((/* implicit */_Bool) arr_12 [(signed char)2] [(unsigned char)7] [i_5])) && (((/* implicit */_Bool) var_6))))), ((~(((/* implicit */int) (signed char)25))))))));
                                var_22 = ((/* implicit */unsigned short) (-(2190433320960LL)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) max((var_11), (((/* implicit */short) var_10)))))))) <= (((((/* implicit */_Bool) ((var_1) << (((((/* implicit */int) var_10)) - (24)))))) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-22)))))));
    var_24 = ((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */_Bool) (~(var_15)))) ? (((((/* implicit */_Bool) 2160592302453615189LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-22))) : (4294967295U))) : (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-16)) ^ (((/* implicit */int) var_10)))))))), (-1LL)));
}
