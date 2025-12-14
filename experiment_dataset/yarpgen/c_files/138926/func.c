/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138926
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138926 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138926
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
    var_19 = ((/* implicit */unsigned char) (~(((/* implicit */int) (signed char)-8))));
    var_20 ^= ((/* implicit */unsigned char) 506323465U);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            {
                var_21 *= ((/* implicit */unsigned short) arr_3 [i_0] [i_1]);
                var_22 += ((2288053090640114765LL) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)38403))));
                var_23 = max((((/* implicit */signed char) ((arr_0 [i_0]) == (arr_0 [i_0])))), (arr_4 [i_1 - 1]));
                var_24 = ((/* implicit */long long int) min((((unsigned int) ((arr_2 [i_1]) | (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0])))))), (((/* implicit */unsigned int) (-(arr_5 [i_1 + 1] [i_1]))))));
                var_25 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (~(min((arr_0 [i_0]), (((/* implicit */unsigned int) (signed char)98))))))), (((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) arr_4 [i_0])), (var_13))))) : (min((var_4), (((/* implicit */unsigned long long int) 3788643830U))))))));
            }
        } 
    } 
}
