/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113008
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
    var_15 = ((/* implicit */int) ((((/* implicit */_Bool) var_1)) ? (((((((/* implicit */_Bool) 6666167064162025650ULL)) ? (var_7) : (((/* implicit */unsigned long long int) 1151709075)))) << (((var_14) + (420907334))))) : (var_5)));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        var_16 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((6484290970710556300ULL) == (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_1 [i_0])))))))), (((unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_1 [i_0])))))));
        arr_2 [i_0] = arr_1 [i_0];
    }
    /* LoopNest 2 */
    for (unsigned char i_1 = 0; i_1 < 15; i_1 += 1) 
    {
        for (long long int i_2 = 4; i_2 < 13; i_2 += 2) 
        {
            {
                var_17 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (arr_5 [i_2 - 4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_0 [i_1])) >= (((/* implicit */int) var_0)))))))))));
                var_18 ^= (+(arr_6 [i_1] [i_2 - 3]));
            }
        } 
    } 
    var_19 = ((/* implicit */_Bool) var_14);
}
