/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172895
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
    var_12 |= ((((/* implicit */_Bool) (+((-(((/* implicit */int) (short)-22458))))))) ? (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_4)))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (short)32599)) : (var_7)))))) : (var_11));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        for (long long int i_1 = 2; i_1 < 22; i_1 += 1) 
        {
            for (unsigned int i_2 = 1; i_2 < 21; i_2 += 3) 
            {
                {
                    var_13 |= ((/* implicit */unsigned short) (+(4611650834055299072LL)));
                    var_14 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) var_10)) ? (min((arr_7 [(signed char)12] [i_0]), (((/* implicit */unsigned long long int) (short)32580)))) : (((/* implicit */unsigned long long int) ((arr_1 [i_0]) / (var_5))))))));
                    arr_10 [i_0 - 1] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1 + 1] [(unsigned short)17]))) : (arr_6 [i_1 - 1] [4U])))));
                    var_15 -= ((/* implicit */short) min((((/* implicit */int) arr_9 [i_0 + 3] [i_0 + 1])), ((~(((/* implicit */int) arr_9 [i_0 + 3] [i_2]))))));
                }
            } 
        } 
    } 
    var_16 -= ((/* implicit */short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) var_7)) : (((((/* implicit */_Bool) (short)-32581)) ? (((((/* implicit */long long int) ((/* implicit */int) var_1))) / (var_0))) : (((/* implicit */long long int) ((/* implicit */int) min((var_1), (var_1)))))))));
    var_17 |= ((/* implicit */_Bool) ((unsigned int) var_6));
    var_18 = max((var_11), ((~(14841175380801453172ULL))));
}
