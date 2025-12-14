/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122359
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
    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) 1714490575)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) var_2)))), (((/* implicit */long long int) var_10))))) ? (min((5268023085401194654LL), (((/* implicit */long long int) (_Bool)1)))) : (((/* implicit */long long int) var_4))));
    var_15 = ((/* implicit */int) min((max((((/* implicit */unsigned long long int) var_7)), (var_1))), (((((/* implicit */_Bool) max((var_5), (((/* implicit */unsigned int) var_12))))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) var_2)) : (15600028511188132642ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)65520)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_0))))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (short i_1 = 2; i_1 < 15; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_2 [i_1 - 2])) ? (arr_2 [i_0]) : (arr_2 [i_0]))), (((/* implicit */int) min(((unsigned short)9), ((unsigned short)22909))))))) * (((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)9))) : (15ULL))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 876740857U)) ? (arr_3 [i_0]) : (var_7))))))));
                var_17 = ((/* implicit */unsigned char) ((_Bool) 576460752302374912LL));
            }
        } 
    } 
}
