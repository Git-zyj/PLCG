/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184895
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
    var_13 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_2))));
    var_14 &= ((/* implicit */short) ((((((/* implicit */unsigned long long int) ((var_5) % (var_4)))) - (((((/* implicit */unsigned long long int) var_3)) & (18446744073709551603ULL))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) var_0))))) <= (((var_5) % (((/* implicit */int) (unsigned char)109))))))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) (((+(((arr_1 [i_0]) / (arr_1 [i_0]))))) / (((/* implicit */unsigned long long int) ((var_9) / (((/* implicit */int) var_12)))))));
        var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) var_5)))))))));
        arr_4 [i_0] = ((/* implicit */short) (-((+(var_10)))));
    }
}
