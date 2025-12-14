/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120556
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120556 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120556
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
    for (int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 10; i_1 += 3) 
        {
            {
                arr_6 [i_1] [i_0] = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */int) arr_4 [(_Bool)1] [i_1 - 1] [i_1 + 1])) + (((/* implicit */int) arr_4 [i_1 + 1] [i_1 + 1] [i_1 - 1])))));
                var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (var_5) : (var_1)))) ? (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) > (((/* implicit */int) arr_4 [i_0] [4LL] [i_1]))))) : (((/* implicit */int) ((signed char) arr_1 [i_1] [i_0])))))) || (((/* implicit */_Bool) ((13205035131763039658ULL) % (((/* implicit */unsigned long long int) var_8)))))));
                var_15 = ((/* implicit */_Bool) ((((((((/* implicit */long long int) ((/* implicit */int) var_6))) | (var_3))) ^ (((/* implicit */long long int) (~(arr_3 [i_1 + 1])))))) ^ (max((((long long int) 2147483647)), (((/* implicit */long long int) var_11))))));
                arr_7 [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) (~(var_10))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_1 + 1])) ? (((/* implicit */int) arr_4 [i_1 + 1] [i_1 + 1] [i_1 + 1])) : (((/* implicit */int) (unsigned short)538))))) : (((arr_1 [i_1 - 1] [i_1 + 1]) - (arr_1 [i_1 - 1] [i_1 - 1])))));
            }
        } 
    } 
    var_16 = ((/* implicit */long long int) max((max((((/* implicit */unsigned int) var_12)), (var_5))), (((/* implicit */unsigned int) ((((((/* implicit */unsigned int) var_8)) | (var_1))) < (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_11)))))))));
    var_17 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) ((((/* implicit */int) var_11)) < (((/* implicit */int) var_0))))))) < (max((max((var_5), (((/* implicit */unsigned int) var_6)))), (var_1)))));
    var_18 -= ((((/* implicit */_Bool) var_4)) ? (max((((/* implicit */long long int) (~(((/* implicit */int) var_6))))), (var_3))) : (((/* implicit */long long int) 9)));
    var_19 = ((/* implicit */unsigned int) ((((((/* implicit */long long int) var_13)) >= (((9223372036854775805LL) | (((/* implicit */long long int) ((/* implicit */int) var_11))))))) ? (((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) var_12)) ? (var_13) : (((/* implicit */int) (short)-26424)))) : (((var_10) - (((/* implicit */int) var_4)))))) : (max((((((/* implicit */_Bool) var_8)) ? (var_8) : (var_13))), (((/* implicit */int) ((var_12) > (((/* implicit */int) (_Bool)1)))))))));
}
