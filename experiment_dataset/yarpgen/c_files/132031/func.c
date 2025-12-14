/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132031
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
    var_13 = ((/* implicit */long long int) max(((-(((unsigned long long int) (unsigned char)168)))), (((/* implicit */unsigned long long int) max((1620278895), ((~(((/* implicit */int) (signed char)-60)))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_7 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) arr_4 [i_0 + 1] [i_0 - 1])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_4 [i_0] [i_0 + 2])))) + (2147483647))) >> (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0 + 3])) && ((_Bool)1))))));
                var_14 ^= ((/* implicit */_Bool) max(((~((((-9223372036854775807LL - 1LL)) | (((/* implicit */long long int) ((/* implicit */int) var_9))))))), (9223372036854775784LL)));
                arr_8 [i_0] [i_0] = ((/* implicit */short) min((min((((/* implicit */long long int) (-(((/* implicit */int) var_5))))), ((~(var_8))))), (((/* implicit */long long int) max((min((arr_1 [i_0]), (((/* implicit */unsigned int) arr_3 [i_0])))), (((arr_1 [i_1]) << (((-7130630248360553656LL) + (7130630248360553658LL))))))))));
            }
        } 
    } 
}
