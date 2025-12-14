/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126713
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
    var_15 = var_0;
    var_16 = ((/* implicit */short) ((max((var_3), (((((/* implicit */_Bool) 511295726U)) ? (511295726U) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))) <= (((/* implicit */unsigned int) ((/* implicit */int) var_7)))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 13; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                var_17 *= ((/* implicit */int) min(((+(max((arr_0 [(signed char)6]), (8U))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_0 [4LL])))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 3) 
                {
                    arr_12 [10LL] [i_0] [i_2] = ((/* implicit */unsigned char) arr_0 [i_0]);
                    arr_13 [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -1941340050)) ? (((/* implicit */long long int) 1941340053)) : (arr_5 [(signed char)16] [i_0 + 4])));
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 2; i_3 < 14; i_3 += 3) /* same iter space */
                    {
                        var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_10 [i_0 + 1] [i_0 + 4] [i_0 + 1] [i_0 - 1])))))));
                        var_19 -= ((/* implicit */signed char) ((((unsigned int) arr_14 [i_0] [2LL] [i_0 - 1] [16U] [i_0])) * (((unsigned int) 115086269U))));
                        var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) arr_4 [i_0 + 2] [i_3 - 1] [12LL]))));
                        var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) ((arr_4 [(_Bool)1] [i_3 + 1] [(_Bool)1]) ? (((/* implicit */int) (signed char)-14)) : (((/* implicit */int) arr_4 [4ULL] [i_3 + 3] [4ULL])))))));
                    }
                    for (unsigned int i_4 = 2; i_4 < 14; i_4 += 3) /* same iter space */
                    {
                        arr_20 [i_0] [i_2] [i_2] [i_1] [i_0] = ((/* implicit */int) ((_Bool) ((int) arr_17 [i_1] [i_0] [i_4])));
                        var_22 *= ((/* implicit */short) ((arr_9 [0LL]) >> (((arr_9 [(_Bool)1]) - (2392982267U)))));
                        var_23 -= ((/* implicit */int) (unsigned char)218);
                    }
                }
            }
        } 
    } 
}
