/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102096
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102096 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102096
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
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned char i_1 = 2; i_1 < 19; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */unsigned short) 3841485832U);
                arr_5 [i_0] = ((/* implicit */short) 17592186044415ULL);
                var_15 ^= ((/* implicit */unsigned int) min((((unsigned long long int) ((unsigned long long int) 18446726481523507200ULL))), (((/* implicit */unsigned long long int) ((unsigned int) (-(((/* implicit */int) (signed char)(-127 - 1)))))))));
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (((~(((18446726481523507193ULL) - (((/* implicit */unsigned long long int) 9223372036854775807LL)))))) & (min((((((/* implicit */_Bool) (signed char)-1)) ? (17592186044415ULL) : (18446726481523507201ULL))), (12233617366035376792ULL)))));
            }
        } 
    } 
    var_16 -= ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) (signed char)-3)) ? (18446726481523507200ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)2)))))))) ? (((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) 1099511627775LL)))) : (((/* implicit */unsigned long long int) max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) 2510008868U))))))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) -1099511627776LL)), (17182385569661304180ULL)))) ? (min((((/* implicit */unsigned long long int) 1290952535170796493LL)), (17592186044425ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 17592186044415ULL)) || (((/* implicit */_Bool) 4817988786486264014LL)))))))));
}
