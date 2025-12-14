/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12420
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 3; i_0 < 19; i_0 += 3) 
    {
        arr_4 [20U] = ((/* implicit */unsigned long long int) -5686629740283972235LL);
        var_18 = ((/* implicit */_Bool) min((var_18), ((!(((/* implicit */_Bool) ((((((/* implicit */int) arr_1 [i_0])) + (2147483647))) >> (((((/* implicit */int) arr_1 [i_0])) + (18254))))))))));
    }
    var_19 = ((/* implicit */signed char) max((var_5), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)60)) > (((/* implicit */int) (_Bool)0)))))) < (max((var_17), (((/* implicit */long long int) var_14)))))))));
    var_20 = ((/* implicit */short) (_Bool)0);
    var_21 = ((/* implicit */int) var_11);
}
