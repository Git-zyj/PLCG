/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152950
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
    var_18 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_9))));
    var_19 = ((/* implicit */int) ((unsigned short) var_4));
    /* LoopSeq 2 */
    for (long long int i_0 = 3; i_0 < 16; i_0 += 1) 
    {
        arr_2 [i_0 + 3] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0 + 1]))))) - (((/* implicit */int) ((-7000992415790989238LL) > (((/* implicit */long long int) ((/* implicit */int) (unsigned short)28583))))))));
        arr_3 [(unsigned char)7] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) 18018684651773190486ULL)))))))), (min((((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)36953))))), (arr_0 [i_0 - 3])))));
    }
    for (long long int i_1 = 1; i_1 < 11; i_1 += 2) 
    {
        var_20 &= ((/* implicit */unsigned long long int) ((short) 0LL));
        var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)23)) ? (-4080877230759661818LL) : (((/* implicit */long long int) 2043165120U))));
        var_22 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(var_2))))));
        arr_6 [i_1] [i_1 + 1] = ((/* implicit */long long int) var_16);
        arr_7 [i_1 - 1] = ((/* implicit */short) (!(((/* implicit */_Bool) -1LL))));
    }
}
