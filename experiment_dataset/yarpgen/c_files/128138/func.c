/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128138
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
    var_20 = ((((((/* implicit */_Bool) 0ULL)) ? (-7410120256054962582LL) : (((/* implicit */long long int) ((/* implicit */int) (short)32767))))) ^ (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) 9223372036854775807LL)) == (0ULL))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 16; i_1 += 1) 
        {
            {
                var_21 = ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((5319286690494756797ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1)))))))))) + ((~(((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */unsigned long long int) (-2147483647 - 1))) : (arr_1 [i_0]))))));
                arr_8 [i_1 - 1] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (short)19582)) && (((/* implicit */_Bool) 18446744073709551615ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)10869))) : (arr_6 [i_0 + 2] [i_1 + 1])))));
            }
        } 
    } 
    var_22 = (+(((((/* implicit */_Bool) 2147483647)) ? (0ULL) : (17303379988450954221ULL))));
}
