/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126457
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
    var_17 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_9))) % ((-(var_10)))));
    var_18 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) var_4))) != (-9223372036854775798LL)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) arr_3 [7LL] [9ULL] [i_0])) : (var_12))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_1]))))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((var_15) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1]))))))))));
                arr_4 [10LL] [i_1] [10LL] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((6743355659252278478ULL), (((((/* implicit */_Bool) (short)32742)) ? (10512801164273832699ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)30106)))))))) ? (((((/* implicit */unsigned long long int) ((((/* implicit */long long int) arr_3 [12] [(unsigned char)9] [(unsigned char)9])) & (9223372036854775791LL)))) ^ (((unsigned long long int) arr_3 [(unsigned short)9] [i_0] [i_1])))) : (((/* implicit */unsigned long long int) ((((int) arr_2 [i_1])) ^ ((~(arr_3 [i_0] [(unsigned short)15] [i_1]))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned int) var_2);
    var_21 = ((/* implicit */short) ((((/* implicit */int) var_3)) != (((/* implicit */int) var_2))));
}
