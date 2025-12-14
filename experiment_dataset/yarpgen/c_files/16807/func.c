/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16807
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
    var_20 = ((/* implicit */signed char) (+(((((/* implicit */int) var_2)) - (((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) var_5)))))))));
    var_21 = ((/* implicit */unsigned char) min((max((min((((/* implicit */unsigned long long int) var_16)), (var_17))), (var_15))), (((/* implicit */unsigned long long int) max((var_11), (max((var_6), (var_19))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 21; i_0 += 2) 
    {
        for (signed char i_1 = 3; i_1 < 20; i_1 += 4) 
        {
            {
                arr_6 [i_0] [(unsigned char)13] = ((/* implicit */signed char) max((max((max((((/* implicit */unsigned long long int) var_2)), (arr_1 [i_1] [i_1 - 1]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [(_Bool)1])) ? (((/* implicit */int) arr_3 [i_0] [i_1])) : (((/* implicit */int) var_18))))))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) arr_4 [i_0 - 2])), ((unsigned char)159))))));
                arr_7 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [2LL] [2LL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_4 [i_0]), (arr_3 [i_0] [(_Bool)1]))))) : (((((/* implicit */_Bool) arr_5 [i_0] [i_0 - 2] [3LL])) ? (var_4) : (((/* implicit */unsigned long long int) var_1))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)104))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [14] [i_1] [i_1 - 1])))))) + (arr_1 [i_0] [i_1 - 1])))));
                var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) arr_5 [i_0] [i_0] [i_0 + 1]))));
            }
        } 
    } 
    var_23 = min((((/* implicit */long long int) var_10)), (max((((/* implicit */long long int) (unsigned char)16)), (var_0))));
    var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) ((var_9) ? (min((((/* implicit */int) var_6)), (((((/* implicit */_Bool) 1155079467)) ? (((/* implicit */int) (signed char)105)) : (((/* implicit */int) (unsigned char)111)))))) : (((/* implicit */int) ((var_15) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_18)))))))))));
}
