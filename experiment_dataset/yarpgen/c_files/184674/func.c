/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184674
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184674 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184674
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
    var_11 = ((/* implicit */unsigned long long int) (_Bool)1);
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                var_12 = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_1 [i_0])), (var_8)))) ? (min((-2025804299), (((/* implicit */int) var_4)))) : (((/* implicit */int) var_2)))) + (2147483647))) >> (((((((/* implicit */_Bool) -2025804318)) ? (arr_4 [i_0 + 2]) : (arr_4 [i_0 + 1]))) - (4769553760240235547LL)))));
                var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) min((arr_3 [i_0 - 1] [i_1]), (((((/* implicit */_Bool) (~(((/* implicit */int) var_4))))) ? ((~(arr_0 [i_1] [i_0]))) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) ^ (var_5)))))))))));
            }
        } 
    } 
    var_14 = var_8;
    var_15 *= ((((/* implicit */_Bool) -3001174734588674274LL)) ? (3274004895804763930ULL) : (((/* implicit */unsigned long long int) 0LL)));
}
