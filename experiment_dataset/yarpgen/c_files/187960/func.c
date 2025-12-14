/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187960
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187960 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187960
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
    var_18 = ((/* implicit */unsigned short) var_8);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 4) 
                {
                    for (unsigned int i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        {
                            arr_11 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */unsigned char) ((((((/* implicit */int) var_8)) >> (((((/* implicit */int) arr_5 [i_2] [i_0])) - (117))))) ^ (((/* implicit */int) max((arr_5 [i_2] [i_0]), (arr_5 [i_2] [i_1]))))));
                            var_19 = ((/* implicit */int) min((((/* implicit */unsigned long long int) max((arr_1 [i_3] [i_0]), (((/* implicit */long long int) (+(-1231397407))))))), ((-(0ULL)))));
                            var_20 = ((/* implicit */unsigned short) (~(2058246285)));
                        }
                    } 
                } 
                var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) arr_8 [i_1] [i_0] [i_0] [i_0] [i_0]))));
                var_22 += (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((0ULL), (((/* implicit */unsigned long long int) -1242018196987166057LL))))) ? (var_13) : (((/* implicit */unsigned long long int) arr_4 [(unsigned short)8] [(unsigned short)8] [i_1]))))));
                var_23 = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((((/* implicit */_Bool) ((var_12) & (((/* implicit */unsigned long long int) arr_8 [i_0] [i_1] [i_1] [i_1] [i_1]))))) ? ((-(var_14))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_17)) | (((/* implicit */int) var_6)))))))), (min((min((((/* implicit */long long int) arr_4 [i_1] [i_0] [i_0])), (arr_1 [i_1] [i_1]))), (((/* implicit */long long int) ((var_5) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_1] [i_1] [i_1] [i_1] [i_0]))))))))));
            }
        } 
    } 
}
