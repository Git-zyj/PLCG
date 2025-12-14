/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158383
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
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        var_13 ^= ((/* implicit */short) (signed char)98);
        var_14 = arr_1 [i_0];
        var_15 = ((/* implicit */signed char) ((_Bool) (+(arr_1 [i_0]))));
    }
    /* LoopSeq 2 */
    for (unsigned char i_1 = 2; i_1 < 10; i_1 += 3) 
    {
        var_16 = ((/* implicit */unsigned char) min((min((((var_6) / (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1]))))), (0LL))), (((/* implicit */long long int) var_2))));
        arr_5 [i_1] = ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) * (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)0)) / (var_12)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min(((_Bool)1), (var_4))))) : ((+(arr_1 [i_1]))))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_17 = ((/* implicit */unsigned short) ((unsigned char) (!(((/* implicit */_Bool) arr_2 [i_2])))));
        var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) (+((+(((arr_0 [i_2]) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)2047))))))))))));
    }
    var_19 = ((/* implicit */unsigned short) (+(var_5)));
    var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((short) var_10)))));
}
