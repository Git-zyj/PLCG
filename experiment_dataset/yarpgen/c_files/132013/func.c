/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132013
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
    for (signed char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                var_10 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */long long int) (signed char)-1)), (1073741696LL)))) ? (((((/* implicit */_Bool) -1073741697LL)) ? (((/* implicit */unsigned long long int) min((2140511600632915929LL), (((/* implicit */long long int) (signed char)80))))) : (((((/* implicit */_Bool) var_9)) ? (arr_6 [i_0] [i_1] [i_0]) : (arr_2 [i_0] [i_1]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((signed char) (unsigned short)65280)))))));
                /* LoopSeq 1 */
                for (long long int i_2 = 1; i_2 < 16; i_2 += 3) 
                {
                    var_11 = ((/* implicit */signed char) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_2 + 1])) ? (arr_3 [i_2 - 1]) : (arr_3 [i_2 + 1])))), (max((((/* implicit */unsigned int) arr_3 [i_2 + 1])), (var_6)))));
                    var_12 = ((/* implicit */int) min((var_12), (((/* implicit */int) ((((/* implicit */_Bool) arr_8 [9ULL] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) arr_2 [i_1] [(signed char)9])))))))) : (((long long int) (~(2140511600632915923LL)))))))));
                }
            }
        } 
    } 
    var_13 *= ((/* implicit */unsigned short) max((var_3), (((/* implicit */signed char) ((_Bool) min(((unsigned short)9808), (((/* implicit */unsigned short) var_4))))))));
    var_14 = ((/* implicit */unsigned long long int) (~((~(var_8)))));
}
