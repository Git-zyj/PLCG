/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10007
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10007 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10007
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                var_12 -= ((/* implicit */int) ((min((15154746549695966059ULL), (((/* implicit */unsigned long long int) arr_4 [i_0] [i_1] [i_1])))) > (((/* implicit */unsigned long long int) (+(((/* implicit */int) min((var_6), (((/* implicit */unsigned short) (unsigned char)35))))))))));
                var_13 = ((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */int) var_8)) - (((/* implicit */int) (signed char)-114)))) : (((/* implicit */int) max((arr_0 [i_1]), (((/* implicit */short) (unsigned char)233)))))))), (max((((/* implicit */long long int) var_10)), (arr_1 [i_1] [i_0])))));
                var_14 = ((/* implicit */short) 18446744073709551600ULL);
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned char) ((long long int) var_6));
}
