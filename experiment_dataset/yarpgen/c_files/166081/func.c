/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166081
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
    var_16 &= var_14;
    var_17 = ((/* implicit */int) var_15);
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        var_18 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((((/* implicit */_Bool) arr_0 [i_0] [(signed char)8])) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) (short)-19127)))) : (((((/* implicit */long long int) arr_3 [(unsigned short)12])) % (arr_2 [i_0]))))) : (((var_11) >> (((/* implicit */int) min(((unsigned char)22), (var_8))))))));
        var_19 = ((/* implicit */signed char) ((short) arr_2 [i_0]));
        var_20 = ((/* implicit */short) arr_2 [i_0]);
    }
    for (short i_1 = 1; i_1 < 17; i_1 += 3) 
    {
        var_21 = ((/* implicit */short) max((((((/* implicit */_Bool) arr_4 [i_1 + 1])) ? (((/* implicit */long long int) ((int) var_13))) : (arr_2 [i_1]))), (((/* implicit */long long int) ((_Bool) max((arr_3 [14ULL]), (((/* implicit */int) var_0))))))));
        arr_7 [i_1 - 1] = ((/* implicit */int) arr_2 [i_1 - 1]);
    }
    var_22 = ((/* implicit */unsigned short) ((((unsigned int) (unsigned short)65531)) - (((/* implicit */unsigned int) ((/* implicit */int) (!(((((/* implicit */int) var_5)) < (((/* implicit */int) var_0))))))))));
    var_23 &= ((/* implicit */int) ((((long long int) (!(((/* implicit */_Bool) 3960751188U))))) ^ (((/* implicit */long long int) (~((~(((/* implicit */int) var_4)))))))));
}
