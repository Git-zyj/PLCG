/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169777
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169777 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169777
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
    var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) var_12))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) arr_0 [i_0]);
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(min((-2074135035265886294LL), (((/* implicit */long long int) arr_1 [i_0]))))))) && ((_Bool)1)));
    }
    for (long long int i_1 = 3; i_1 < 15; i_1 += 1) 
    {
        arr_8 [i_1] = (-(min((((/* implicit */unsigned long long int) max((arr_5 [i_1] [i_1]), (((/* implicit */long long int) var_11))))), (min((((/* implicit */unsigned long long int) arr_5 [i_1 + 1] [i_1 - 1])), (arr_7 [i_1 - 1] [i_1 - 3]))))));
        arr_9 [i_1 + 1] = ((/* implicit */unsigned long long int) (unsigned short)64827);
    }
    var_19 = ((((((/* implicit */int) var_0)) | (min((((/* implicit */int) var_0)), (16711680))))) < (((((/* implicit */_Bool) max(((unsigned short)65535), (((/* implicit */unsigned short) var_0))))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_14)))));
}
