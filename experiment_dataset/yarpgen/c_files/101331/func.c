/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101331
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101331 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101331
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
    var_19 = ((/* implicit */unsigned short) ((min((min((8191ULL), (18446744073709543395ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2147483647)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_11)))))))) << (((((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_18))))) : (((((/* implicit */unsigned long long int) -7795069732372505744LL)) * (var_13))))) - (18446744073709551530ULL)))));
    /* LoopNest 3 */
    for (signed char i_0 = 3; i_0 < 17; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            for (long long int i_2 = 2; i_2 < 15; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_1 + 2] [i_2 + 3] [i_2] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_1 [i_2 + 1]))));
                    var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) (+(((((/* implicit */_Bool) min((arr_1 [i_0]), (arr_1 [i_0])))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_3 [i_0] [i_1] [i_0]) : (var_5))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1 + 2] [(unsigned short)5] [i_1 + 2]))))))))));
                }
            } 
        } 
    } 
}
