/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167826
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167826 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167826
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
    var_19 += ((/* implicit */_Bool) min((((/* implicit */unsigned short) var_9)), (var_6)));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                var_20 += ((/* implicit */long long int) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_1]))))), (((unsigned short) arr_3 [i_0] [i_0] [i_0]))));
                var_21 *= arr_4 [i_0] [i_0] [i_0];
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 23; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 2; i_3 < 20; i_3 += 3) 
                    {
                        {
                            var_22 += ((/* implicit */signed char) (+(((/* implicit */int) ((arr_7 [i_3 + 2] [i_3 + 2] [i_3 - 2] [i_3]) == (arr_7 [i_3 + 2] [i_3] [i_3 - 2] [i_3]))))));
                            var_23 -= ((/* implicit */signed char) min((((9223372036854775807LL) / (-7186566075043363135LL))), (((arr_8 [i_3 - 1]) & (arr_8 [i_3 - 2])))));
                            arr_10 [i_3] [i_1] [i_2] [(short)0] [i_1] [i_0] |= ((/* implicit */signed char) max((((/* implicit */long long int) max((((/* implicit */unsigned short) arr_2 [5U])), ((unsigned short)53186)))), (((((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)11028)), (arr_0 [i_0])))) ? (((((/* implicit */_Bool) arr_2 [i_1])) ? (-9223372036854775796LL) : (((/* implicit */long long int) 1213196224)))) : (min((9223372036854775806LL), (((/* implicit */long long int) (short)32746))))))));
                        }
                    } 
                } 
                var_24 = ((/* implicit */long long int) arr_3 [i_0] [i_0] [i_0]);
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 23; i_4 += 4) 
                {
                    for (long long int i_5 = 0; i_5 < 23; i_5 += 3) 
                    {
                        {
                            arr_18 [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_13 [14ULL])) || (((/* implicit */_Bool) arr_13 [i_0]))));
                            arr_19 [i_5] [i_4] [i_0] [(_Bool)1] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_16 [(_Bool)1] [i_1] [i_1] [i_4] [i_5]))));
                            arr_20 [i_0] [i_1] [(signed char)22] [i_1] [i_5] &= ((/* implicit */long long int) arr_2 [(signed char)22]);
                            arr_21 [i_0] [i_1] = ((/* implicit */unsigned short) arr_12 [i_0] [i_1] [i_4] [i_4]);
                            var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_15 [i_0] [i_1])) : (((/* implicit */int) arr_15 [i_0] [i_5])))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_26 += ((/* implicit */long long int) max((var_17), (((/* implicit */int) var_13))));
    /* LoopSeq 1 */
    for (long long int i_6 = 0; i_6 < 21; i_6 += 3) 
    {
        arr_25 [13U] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4861900039548100589ULL)) ? (((/* implicit */int) (short)29674)) : (((/* implicit */int) arr_22 [i_6]))))) ? (arr_14 [i_6] [i_6] [i_6]) : (min((((/* implicit */unsigned int) arr_12 [i_6] [i_6] [i_6] [i_6])), (arr_14 [i_6] [i_6] [(short)11])))));
        arr_26 [i_6] &= ((/* implicit */unsigned short) ((min((((/* implicit */int) (short)22136)), (((((/* implicit */int) arr_24 [i_6])) / (((/* implicit */int) arr_2 [i_6])))))) * (((/* implicit */int) arr_12 [i_6] [i_6] [i_6] [i_6]))));
        var_27 ^= ((/* implicit */short) (unsigned char)255);
    }
}
