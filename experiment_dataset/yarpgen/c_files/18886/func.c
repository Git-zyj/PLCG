/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18886
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
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */unsigned short) ((long long int) (!(((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_2)))))));
                arr_6 [i_1] [i_1] [1ULL] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) (_Bool)1)))) % (4294967295U)))), (min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) var_9)), ((unsigned char)189)))), (min((((/* implicit */unsigned long long int) arr_2 [i_1])), (arr_1 [(signed char)3])))))));
            }
        } 
    } 
    var_19 += ((/* implicit */unsigned char) min((((/* implicit */long long int) var_10)), ((~((~(var_3)))))));
    var_20 ^= ((/* implicit */unsigned char) max(((-((-(4770826651043791799ULL))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((unsigned char) 2080253969))))))));
}
