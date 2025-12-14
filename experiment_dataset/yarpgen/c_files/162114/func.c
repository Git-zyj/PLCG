/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162114
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162114 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162114
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
    var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) min(((+(((/* implicit */int) (!(((/* implicit */_Bool) var_10))))))), (((/* implicit */int) var_4)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 4; i_0 < 20; i_0 += 4) 
    {
        var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)32768)) ? ((+(0ULL))) : (((/* implicit */unsigned long long int) arr_1 [i_0 - 4] [i_0 - 3])))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 2; i_2 < 22; i_2 += 4) 
            {
                {
                    var_15 = (!(((/* implicit */_Bool) arr_2 [i_1] [i_0 - 4])));
                    var_16 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_2)))) * (((arr_4 [i_2 - 1]) / (((/* implicit */long long int) arr_1 [14LL] [i_1]))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 4; i_3 < 22; i_3 += 4) 
                    {
                        for (int i_4 = 1; i_4 < 20; i_4 += 2) 
                        {
                            {
                                arr_13 [i_4 + 1] [0LL] [i_2] [5U] = ((/* implicit */short) arr_4 [i_3 + 1]);
                                var_17 ^= ((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_2 - 2] [i_0] [i_0 + 1])) % (var_9)));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */unsigned int) arr_0 [i_0 - 1] [i_0 - 1]);
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 1) 
                    {
                        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */short) var_3);
                                arr_18 [(unsigned char)1] [i_5] [22] [i_1] [i_0 - 4] = ((/* implicit */unsigned long long int) ((short) arr_17 [i_6] [i_2 - 1] [i_0 + 1] [(short)12] [i_0]));
                                var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((((/* implicit */int) (short)-29712)) * (((/* implicit */int) (unsigned char)36)))))));
                                var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 217288858)) ? (arr_9 [i_2 - 2] [i_2 - 2] [i_0 + 3] [i_0] [i_0]) : (((arr_17 [i_6] [(short)3] [i_2 - 2] [19] [(short)3]) / (((/* implicit */long long int) var_11))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_19 [i_0 - 4] [i_0] = ((/* implicit */unsigned long long int) 9223372036854775807LL);
    }
    var_22 = ((/* implicit */short) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) max((((/* implicit */unsigned short) var_2)), (var_4))))))) / ((+(((var_5) / (((/* implicit */unsigned long long int) var_12))))))));
    var_23 = ((/* implicit */unsigned int) var_11);
}
