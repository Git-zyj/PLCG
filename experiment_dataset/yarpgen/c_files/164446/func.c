/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164446
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164446 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164446
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
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 13; i_4 += 4) 
                        {
                            {
                                arr_13 [i_0] [i_0] [i_0] [i_1] [i_2] [i_3] = ((/* implicit */_Bool) ((max((((/* implicit */unsigned long long int) max((arr_12 [i_0] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */long long int) arr_4 [i_1] [i_1] [i_1]))))), (18446744073709551615ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_11 [i_4] [i_1] [i_1] [i_0] [i_0 + 2]))))));
                                var_19 = ((/* implicit */signed char) min((max((((/* implicit */unsigned long long int) var_13)), (arr_7 [i_0] [i_0] [i_0] [i_0]))), (((/* implicit */unsigned long long int) max((arr_6 [i_0 - 1] [i_0 - 1] [i_1] [i_0]), (arr_6 [7] [7] [i_1] [i_4]))))));
                                var_20 = ((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 13; i_5 += 1) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 13; i_6 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */long long int) arr_0 [i_0]);
                                arr_18 [i_0] [0U] [i_2] [i_0] [i_1] [0U] [i_0] = 1617618127U;
                                var_22 = ((/* implicit */int) (!(((/* implicit */_Bool) max((arr_12 [i_0 + 1] [i_1] [i_2] [i_5] [i_6]), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [6LL] [i_1] [(signed char)9] [i_1] [i_1])) && (((/* implicit */_Bool) (-9223372036854775807LL - 1LL)))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_23 = var_17;
    var_24 = ((/* implicit */int) 1ULL);
    var_25 = ((/* implicit */unsigned char) var_15);
    var_26 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)23)) ? (((/* implicit */int) (_Bool)1)) : (var_16))) > (((/* implicit */int) min(((unsigned short)34691), ((unsigned short)27581))))))) > (((int) var_7))));
}
