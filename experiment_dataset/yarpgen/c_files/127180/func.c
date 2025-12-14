/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127180
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
    var_13 = ((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) 36028797018963967LL)) ? (((/* implicit */int) (unsigned short)6902)) : (((/* implicit */int) var_11))))), (max((1761658581U), (((/* implicit */unsigned int) (unsigned short)6902))))));
    var_14 = ((/* implicit */short) 17592185520128ULL);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */int) 2184440619808271596LL);
                var_16 = ((/* implicit */short) (~((((~(arr_2 [i_1]))) ^ (((/* implicit */unsigned long long int) arr_5 [i_1] [(unsigned char)6] [6ULL]))))));
                var_17 += ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1]))) * (max((((/* implicit */unsigned long long int) arr_0 [(unsigned short)11] [(unsigned short)11])), (arr_2 [i_0]))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)0)) == (((/* implicit */int) (unsigned char)16))));
}
