/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101176
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101176 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101176
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
    var_17 = ((/* implicit */unsigned long long int) max((var_17), (var_0)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 3; i_0 < 16; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                arr_4 [i_1] = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 4385001458376271762ULL)) ? (12755087911472001879ULL) : (18446744073709551598ULL)))) ? (598392841121809566ULL) : ((+(4385001458376271746ULL))))) * ((~(((unsigned long long int) arr_1 [i_0])))));
                var_18 = ((/* implicit */unsigned long long int) max((var_18), (max((((var_8) * (0ULL))), ((~((-(var_6)))))))));
                arr_5 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 17848351232587742050ULL)) ? (var_3) : (arr_3 [i_0 + 2] [i_0 - 1])))) ? ((~(arr_3 [i_0 - 3] [i_0 + 1]))) : (((((/* implicit */_Bool) arr_3 [i_0 + 1] [i_0 - 1])) ? (arr_3 [i_0 + 1] [i_0 + 3]) : (arr_3 [i_0 + 2] [i_0 - 2]))));
            }
        } 
    } 
}
