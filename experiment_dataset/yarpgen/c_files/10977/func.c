/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10977
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10977 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10977
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
    var_13 = ((/* implicit */unsigned short) min((((/* implicit */long long int) (!(((/* implicit */_Bool) max((16077155112861535456ULL), (((/* implicit */unsigned long long int) (_Bool)1)))))))), (max((((/* implicit */long long int) var_1)), ((-(var_10)))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 1; i_0 < 22; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) max((((/* implicit */int) var_6)), (((((/* implicit */_Bool) min((((/* implicit */long long int) arr_1 [i_0])), (var_4)))) ? (((((/* implicit */int) arr_1 [i_0])) * (((/* implicit */int) var_9)))) : (((/* implicit */int) max((var_6), (arr_1 [i_0]))))))));
        var_14 += ((/* implicit */unsigned short) min((((/* implicit */int) arr_1 [18LL])), (((((/* implicit */_Bool) min((var_8), (((/* implicit */unsigned char) arr_1 [8LL]))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))))));
    }
    var_15 = ((((/* implicit */_Bool) max((((/* implicit */long long int) min((var_9), (((/* implicit */unsigned short) var_3))))), (min((var_2), (var_10)))))) ? (max((((/* implicit */long long int) (~(((/* implicit */int) var_6))))), ((+(var_10))))) : (((((/* implicit */long long int) ((((/* implicit */int) var_6)) - (((/* implicit */int) var_0))))) & (((var_10) | (((/* implicit */long long int) ((/* implicit */int) var_11))))))));
}
