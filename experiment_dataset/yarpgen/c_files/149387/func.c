/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149387
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
    var_15 = ((/* implicit */short) var_12);
    var_16 += ((/* implicit */short) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_9))))), (((((/* implicit */_Bool) ((((/* implicit */int) var_9)) >> (((var_3) - (1759837445)))))) ? (min((((/* implicit */unsigned long long int) var_3)), (var_0))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_7))))))))));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_17 = ((/* implicit */unsigned long long int) ((unsigned char) (-(((/* implicit */int) max(((signed char)-11), (((/* implicit */signed char) (_Bool)0))))))));
        arr_3 [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0])) | (((/* implicit */int) var_10))))))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 19; i_1 += 1) /* same iter space */
    {
        var_18 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_1])) * (((/* implicit */int) arr_1 [i_1]))))) ? (((var_12) ? (((/* implicit */int) arr_7 [i_1])) : (((/* implicit */int) var_8)))) : (arr_5 [i_1] [i_1])));
        var_19 = ((/* implicit */short) var_7);
        var_20 += ((/* implicit */int) ((arr_2 [i_1]) != (((/* implicit */long long int) (~(((/* implicit */int) var_14)))))));
    }
    for (int i_2 = 0; i_2 < 19; i_2 += 1) /* same iter space */
    {
        var_21 |= ((/* implicit */unsigned char) ((((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)175)))) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_2] [i_2])))))));
        var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) max((((/* implicit */long long int) (~(((int) (_Bool)1))))), (max((arr_2 [i_2]), (((/* implicit */long long int) arr_0 [i_2] [i_2])))))))));
        arr_11 [i_2] [i_2] = ((/* implicit */short) (+(max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)0))))), (max((((/* implicit */unsigned long long int) (_Bool)0)), (15224124086718117991ULL)))))));
    }
}
