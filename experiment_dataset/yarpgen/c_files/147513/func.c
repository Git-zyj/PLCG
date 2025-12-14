/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147513
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147513 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147513
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
    for (unsigned long long int i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        var_13 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) 999520113621707706LL)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (short)-8816)))), ((~(((/* implicit */int) var_6))))));
        arr_4 [i_0] = ((/* implicit */unsigned int) min((max((((/* implicit */unsigned long long int) arr_1 [i_0 - 1])), (((((/* implicit */unsigned long long int) -9223372036854775795LL)) & (16ULL))))), (((((/* implicit */_Bool) arr_2 [i_0 + 4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (31ULL)))));
    }
    /* LoopNest 2 */
    for (long long int i_1 = 0; i_1 < 13; i_1 += 3) 
    {
        for (long long int i_2 = 3; i_2 < 12; i_2 += 2) 
        {
            {
                var_14 = ((/* implicit */unsigned int) min((18446744073709551606ULL), (8ULL)));
                var_15 = max(((+(((((/* implicit */_Bool) 9ULL)) ? (var_4) : (661206766454956876LL))))), (((/* implicit */long long int) max((arr_8 [i_1] [i_2 - 2] [i_2]), (((/* implicit */unsigned int) (signed char)-102))))));
                arr_9 [i_1] [i_1] [i_2 + 1] = ((/* implicit */long long int) (~((((_Bool)1) ? (264241152U) : (3718434711U)))));
            }
        } 
    } 
    var_16 = ((/* implicit */signed char) var_5);
}
