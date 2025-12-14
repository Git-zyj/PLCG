/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173715
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
    var_14 = ((/* implicit */signed char) max((var_7), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max(((short)-13526), (((/* implicit */short) var_6))))))))));
    var_15 *= (!(((/* implicit */_Bool) ((((/* implicit */int) (short)-30944)) * (((((/* implicit */int) (short)-30894)) ^ (((/* implicit */int) (short)30943))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    var_16 += ((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) max(((short)30926), (((/* implicit */short) (signed char)-60)))))) >= ((~(-1LL))))) ? (-1LL) : (((((/* implicit */_Bool) 10810724235167319841ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (6466963409435263887LL)))));
                    arr_7 [i_2] [i_1] [i_0] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_6 [i_0] [i_0] [(signed char)9])) : (((/* implicit */int) var_2))))));
                    arr_8 [20ULL] [i_2] [i_2] = ((/* implicit */long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967293U)) ? (var_11) : (((/* implicit */int) (_Bool)0)))))))), ((~(min((503347338), (var_13)))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (unsigned short)6144)) : (((/* implicit */int) (short)30904))))) ? (((/* implicit */int) (signed char)1)) : (((/* implicit */int) ((unsigned short) 0ULL)))));
}
