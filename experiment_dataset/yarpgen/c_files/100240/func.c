/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100240
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
    for (unsigned short i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 1) 
                        {
                            {
                                arr_12 [i_0] [i_0] [i_2] [i_3] [i_4] [i_3] [i_0] = ((/* implicit */_Bool) max((((/* implicit */unsigned char) ((var_5) < (((/* implicit */long long int) arr_3 [i_0 - 1] [i_0 + 1]))))), (min((arr_1 [i_0] [i_0 + 2]), (arr_1 [i_1] [i_0 + 2])))));
                                var_16 = ((/* implicit */int) ((((/* implicit */_Bool) ((363635242969547935ULL) >> (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1] [i_1])))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_2] [i_3] [i_3] [i_4]))) : (var_12)));
                                var_17 *= ((/* implicit */unsigned short) arr_9 [i_0] [i_0 + 2] [i_4] [i_0 + 2] [i_0] [i_0] [i_1]);
                                var_18 = ((/* implicit */short) (+((+(((/* implicit */int) arr_11 [i_0] [i_0 + 1] [i_0] [i_0] [i_0 - 1]))))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */unsigned long long int) (((-(min((4108675122U), (((/* implicit */unsigned int) (signed char)-8)))))) + (((/* implicit */unsigned int) (-((-(arr_3 [i_2] [i_1]))))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned short) var_0);
    var_21 = ((/* implicit */unsigned long long int) max((4213974894774675066LL), (((/* implicit */long long int) (short)511))));
    var_22 = ((/* implicit */unsigned short) var_1);
}
