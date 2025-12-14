/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15985
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15985 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15985
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
    var_15 = ((/* implicit */unsigned int) ((unsigned char) (-((+(27LL))))));
    var_16 = ((/* implicit */unsigned short) (_Bool)0);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (unsigned short i_1 = 2; i_1 < 13; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_1 + 1] [i_0] [1U] = ((/* implicit */unsigned long long int) (((+(((/* implicit */int) min((((/* implicit */unsigned short) var_1)), ((unsigned short)65535)))))) * (((/* implicit */int) (((~(arr_5 [(unsigned char)7] [(short)0] [i_1]))) >= (4294967295U))))));
                    arr_9 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */unsigned short) ((unsigned int) ((long long int) min((16231497379293794831ULL), (((/* implicit */unsigned long long int) (unsigned char)56))))));
                    arr_10 [i_0] [0U] |= ((/* implicit */unsigned short) arr_2 [i_2]);
                    var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) ((((/* implicit */_Bool) (-((~(((/* implicit */int) arr_0 [i_0]))))))) ? (330458049U) : (((((/* implicit */_Bool) arr_4 [i_1 - 1] [i_1] [i_1])) ? (arr_5 [i_1] [i_1 - 1] [i_1 + 1]) : ((-(arr_5 [i_0] [i_1] [i_2]))))))))));
                }
            } 
        } 
    } 
    var_18 -= ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (~(((/* implicit */int) var_3))))))) ? (((/* implicit */unsigned long long int) min(((((_Bool)1) ? (var_10) : (((/* implicit */int) var_7)))), (((/* implicit */int) (unsigned short)28123))))) : ((+(max((var_13), (((/* implicit */unsigned long long int) 2454386289U))))))));
}
