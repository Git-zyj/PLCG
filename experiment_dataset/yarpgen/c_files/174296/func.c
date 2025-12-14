/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174296
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
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        var_11 -= ((/* implicit */_Bool) (~(((int) 3680223817U))));
        arr_2 [i_0] = ((/* implicit */unsigned long long int) (-(614743479U)));
        var_12 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) ((_Bool) (_Bool)1)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned short)11186))))))))) : (((long long int) ((((/* implicit */_Bool) (signed char)92)) && (((/* implicit */_Bool) arr_0 [i_0])))))));
        arr_3 [(signed char)15] [11U] = ((/* implicit */short) min((((((/* implicit */_Bool) 1067944770)) ? (var_3) : (((/* implicit */long long int) ((((/* implicit */_Bool) 5024518484479885775ULL)) ? (var_7) : (((/* implicit */int) var_0))))))), (((/* implicit */long long int) (+(arr_0 [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 22; i_1 += 2) 
    {
        arr_8 [i_1] = ((/* implicit */unsigned long long int) min((((((/* implicit */long long int) (~(4216834710U)))) - (min((((/* implicit */long long int) 4216834710U)), (var_3))))), (((/* implicit */long long int) var_9))));
        var_13 = ((/* implicit */unsigned long long int) 3680223825U);
        arr_9 [i_1] = ((/* implicit */unsigned long long int) max((-7895929551817876200LL), (((/* implicit */long long int) (_Bool)1))));
        arr_10 [i_1] = ((/* implicit */int) 2927808974U);
    }
    var_14 = (((_Bool)1) ? (4216834710U) : (2927808977U));
}
