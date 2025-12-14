/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161022
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161022 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161022
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
    var_17 = ((/* implicit */unsigned int) max((min((max((var_16), (((/* implicit */int) var_9)))), (min((383110277), (((/* implicit */int) var_14)))))), (min((min((((/* implicit */int) var_14)), (383110277))), (min((var_10), (((/* implicit */int) (unsigned short)64091))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 16; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */short) min((((/* implicit */unsigned int) min((min((1339209660), (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) max((arr_0 [1LL] [i_0]), (((/* implicit */unsigned short) (short)22782)))))))), (max((min((var_5), (((/* implicit */unsigned int) 1397899601)))), (min((var_5), (((/* implicit */unsigned int) (_Bool)1))))))));
                var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) max((((/* implicit */unsigned long long int) min((max(((unsigned char)216), ((unsigned char)231))), ((unsigned char)31)))), (max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) (unsigned char)217)), (var_3)))), (min((((/* implicit */unsigned long long int) arr_2 [i_1 - 1] [i_0])), (var_8))))))))));
            }
        } 
    } 
}
