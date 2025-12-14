/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172182
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172182 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172182
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
    var_11 = ((((/* implicit */unsigned long long int) var_1)) == (((((/* implicit */unsigned long long int) max((((/* implicit */long long int) (unsigned char)33)), (var_8)))) ^ ((~(0ULL))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 18; i_0 += 2) 
    {
        for (unsigned short i_1 = 2; i_1 < 18; i_1 += 3) 
        {
            {
                var_12 += ((/* implicit */long long int) (-2147483647 - 1));
                arr_5 [i_0 + 1] = ((/* implicit */unsigned long long int) ((arr_2 [18ULL]) >= (var_4)));
                var_13 = ((/* implicit */signed char) min((((unsigned long long int) ((((/* implicit */int) (unsigned char)104)) == (2023186144)))), (((/* implicit */unsigned long long int) (((-9223372036854775807LL - 1LL)) >= (((/* implicit */long long int) 931499275)))))));
            }
        } 
    } 
}
