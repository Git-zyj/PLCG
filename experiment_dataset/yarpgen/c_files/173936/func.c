/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173936
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0])) + (((/* implicit */int) (short)29294)))))));
        var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)7834)) << (((((/* implicit */int) arr_1 [i_0])) - (2306))))))));
    }
    for (long long int i_1 = 0; i_1 < 20; i_1 += 1) 
    {
        arr_6 [i_1] = ((/* implicit */short) min((((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_1 [i_1])), ((unsigned short)7849)))) ? (min((arr_4 [i_1] [2]), (((/* implicit */unsigned int) (unsigned short)36446)))) : (min((((/* implicit */unsigned int) var_9)), (arr_4 [i_1] [i_1]))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_1])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)32755)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-14614))) : (2650556397U)))))))));
        var_14 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((764868750399524189LL) - (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1]))))), (((/* implicit */long long int) var_2)))))));
    }
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((((/* implicit */int) (short)-1)) + (2147483647))) << (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)36443))) == (11657333210942848592ULL))))))) - (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)22561))) + (4294967295U)))));
}
