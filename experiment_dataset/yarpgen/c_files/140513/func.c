/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140513
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140513 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140513
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
    var_19 ^= ((/* implicit */short) min((((/* implicit */long long int) var_16)), (var_1)));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_20 -= min((((((/* implicit */long long int) arr_0 [i_0])) + (9194060404567919914LL))), (((/* implicit */long long int) ((arr_1 [i_0] [i_0]) || (((/* implicit */_Bool) (unsigned char)6))))));
        var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((long long int) (((!(((/* implicit */_Bool) var_15)))) ? (((/* implicit */unsigned int) var_4)) : ((~(arr_0 [i_0])))))))));
    }
    /* LoopNest 2 */
    for (long long int i_1 = 1; i_1 < 23; i_1 += 3) 
    {
        for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 3) 
        {
            {
                arr_6 [i_2] = max((((var_5) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_2] [(unsigned char)21]))))), (((/* implicit */unsigned long long int) arr_3 [i_1] [i_1])));
                /* LoopNest 2 */
                for (unsigned char i_3 = 0; i_3 < 25; i_3 += 2) 
                {
                    for (long long int i_4 = 4; i_4 < 22; i_4 += 2) 
                    {
                        {
                            arr_13 [i_2] [16ULL] [i_2] = ((/* implicit */unsigned int) (-(((((/* implicit */int) arr_12 [i_4] [i_4 + 1] [i_4 - 1] [i_4] [i_4 + 2] [i_4 - 2])) & (((/* implicit */int) (_Bool)0))))));
                            var_22 = ((/* implicit */int) min((((var_1) >= (((/* implicit */long long int) arr_10 [i_1])))), (((_Bool) arr_10 [i_1]))));
                            var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) (-((+(((/* implicit */int) arr_4 [i_1 - 1])))))))));
                            var_24 = ((/* implicit */unsigned long long int) ((((max((((/* implicit */long long int) arr_3 [(short)11] [(short)11])), (9223372036854775807LL))) | (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) var_10)))))))) ^ (((/* implicit */long long int) ((/* implicit */int) (((-(var_1))) < (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)122)))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned long long int) var_3);
    /* LoopNest 2 */
    for (unsigned char i_5 = 1; i_5 < 23; i_5 += 2) 
    {
        for (unsigned long long int i_6 = 1; i_6 < 21; i_6 += 1) 
        {
            {
                var_26 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) -3301675850663347200LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)62))))));
                var_27 += (!(((/* implicit */_Bool) (~(arr_10 [i_6 + 4])))));
            }
        } 
    } 
}
