/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166769
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166769 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166769
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 17; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_3 [i_0] [i_0] [(signed char)0])))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0 - 1] [14LL])))))) : (((arr_2 [i_0] [i_0] [i_0]) ^ (((/* implicit */long long int) ((/* implicit */int) arr_0 [(unsigned char)5])))))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0 - 1]))) : (((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0 - 1]))))) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_3 [i_0] [i_0] [i_1 - 1]))))) : (((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (arr_2 [i_0] [(unsigned short)16] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1] [i_0])))))))));
                var_16 += ((/* implicit */long long int) arr_1 [i_0 - 1] [i_1 - 1]);
                var_17 = ((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */int) min((arr_1 [i_0] [i_1]), (((/* implicit */unsigned short) arr_0 [i_0]))))) >= (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [(signed char)5])) : (((/* implicit */int) arr_1 [i_0] [i_1]))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [(_Bool)1] [i_1])) ? (arr_2 [i_0] [i_1] [i_0 - 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1])))))) ? (min((arr_2 [3LL] [9ULL] [i_0 - 1]), (((/* implicit */long long int) arr_1 [i_0] [16LL])))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0 - 1] [i_1 + 2])) ? (((/* implicit */int) arr_3 [i_0 - 1] [(_Bool)1] [i_1])) : (((/* implicit */int) arr_1 [i_0] [i_1 + 1])))))))));
            }
        } 
    } 
    var_18 += ((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_7)))) : ((-(((/* implicit */int) var_12))))))) % (((min((var_13), (((/* implicit */long long int) var_0)))) + (((/* implicit */long long int) ((/* implicit */int) ((var_4) <= (((/* implicit */long long int) ((/* implicit */int) var_5)))))))))));
}
