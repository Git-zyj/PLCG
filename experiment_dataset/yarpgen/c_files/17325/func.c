/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17325
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
    var_11 &= ((/* implicit */short) min((min((((/* implicit */long long int) 1633351553U)), (var_5))), (((/* implicit */long long int) min((var_4), (((int) 5264579879440606707LL)))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 2; i_0 < 14; i_0 += 1) 
    {
        arr_2 [i_0] = ((((/* implicit */_Bool) min((min((-1LL), (((/* implicit */long long int) (signed char)15)))), (((/* implicit */long long int) (short)2))))) ? (((/* implicit */int) (signed char)13)) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)23))))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_12 *= ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (-(1688520086)))), (min((((7329438309212045794LL) + (-5264579879440606707LL))), (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */long long int) 1424288452U)) : (-5608453595709940117LL)))))));
                    var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) (((~(arr_4 [i_0] [i_1]))) ^ (((/* implicit */int) arr_1 [i_1]))))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 + 1]))) | (10LL))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-29)))));
                }
            } 
        } 
        var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(arr_5 [(signed char)8] [i_0])))) ? (((/* implicit */int) (signed char)13)) : (((((/* implicit */_Bool) (unsigned short)65535)) ? ((~(((/* implicit */int) arr_1 [i_0])))) : (((/* implicit */int) arr_1 [i_0]))))));
    }
}
