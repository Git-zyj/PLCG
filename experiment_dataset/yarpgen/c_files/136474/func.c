/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136474
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
    var_15 &= ((/* implicit */short) var_6);
    var_16 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)25497))) % (var_6))) != (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))) == (2147483647)));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */unsigned long long int) (((-(((/* implicit */int) arr_4 [i_0] [i_1] [i_1])))) - (((/* implicit */int) ((max((9803430737291646180ULL), (((/* implicit */unsigned long long int) var_13)))) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))));
                var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) min((((unsigned short) (+(1005496225U)))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) -2066685086238027707LL))))))))));
                arr_7 [i_0] [i_1] = min((((/* implicit */unsigned long long int) ((8643313336417905436ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_0 [i_0]) <= (((/* implicit */unsigned long long int) 550468283U))))))))), ((+(var_4))));
            }
        } 
    } 
}
