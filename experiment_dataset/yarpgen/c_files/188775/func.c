/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188775
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
    var_13 += ((/* implicit */unsigned char) var_11);
    var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) (+((-(((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) var_11)) : (var_3))))))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0LL)) ? (-3530361800214464565LL) : (3530361800214464557LL)))) ? (((/* implicit */unsigned long long int) 9223372036854775800LL)) : (((((/* implicit */_Bool) -4276346688436950815LL)) ? (11987623711359394947ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))))) ? (-4276346688436950845LL) : (((/* implicit */long long int) ((((((/* implicit */int) (unsigned short)5498)) <= (((/* implicit */int) var_2)))) ? (((/* implicit */int) (unsigned short)20023)) : (((/* implicit */int) (_Bool)1)))))));
        var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), (var_6))))) ^ (((unsigned long long int) var_9))))) ? (min((((/* implicit */unsigned long long int) (signed char)0)), (((((/* implicit */_Bool) var_0)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)128))))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((12211716387620973190ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))))));
    }
}
