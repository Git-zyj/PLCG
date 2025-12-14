/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104767
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104767 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104767
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
    var_18 = ((/* implicit */unsigned int) ((((var_14) && (((/* implicit */_Bool) (~(((/* implicit */int) var_13))))))) ? (((/* implicit */unsigned long long int) ((-427374999391608065LL) + (((/* implicit */long long int) ((/* implicit */int) ((var_12) < (((/* implicit */long long int) ((/* implicit */int) var_13)))))))))) : (var_16)));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            var_19 = ((/* implicit */short) min((((6647970712132873643LL) ^ (min((-1892274813391819180LL), (((/* implicit */long long int) (signed char)6)))))), (var_3)));
            var_20 *= ((min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_17)) <= (var_10)))), ((+(18432498677987809992ULL))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (+(16880289085912063141ULL)))) && (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) - (var_16)))))))));
        }
        arr_6 [i_0] [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) 7791682160511242280ULL)))))));
    }
}
