/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106320
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106320 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106320
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
    var_17 &= ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)179))));
    var_18 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((_Bool) var_16)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 16088872017421038089ULL)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (signed char)50))))) : (var_1))))));
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 12; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 4; i_2 < 13; i_2 += 1) 
                {
                    for (long long int i_3 = 1; i_3 < 11; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 15; i_4 += 2) 
                        {
                            {
                                arr_12 [i_4] [i_4] [(unsigned short)8] [(unsigned short)8] |= min((((((_Bool) var_2)) ? (((((/* implicit */_Bool) 0ULL)) ? (var_4) : (var_4))) : (16088872017421038089ULL))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 16088872017421038091ULL)) ? (2357872056288513524ULL) : (16088872017421038083ULL)))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)10))))) : (16088872017421038089ULL))));
                                var_19 |= ((/* implicit */signed char) ((int) (!(((/* implicit */_Bool) -8336281072952552760LL)))));
                                arr_13 [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(16088872017421038089ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_1 [i_0])))) : (((((8336281072952552759LL) < (((/* implicit */long long int) ((/* implicit */int) (unsigned char)10))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_4] [1LL] [1LL] [i_1] [i_0]))) : (16088872017421038096ULL)))));
                            }
                        } 
                    } 
                } 
                var_20 ^= ((/* implicit */long long int) ((16088872017421038096ULL) - (min((16088872017421038087ULL), (9153505157576139469ULL)))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) ((long long int) ((unsigned long long int) ((unsigned long long int) 2357872056288513533ULL)))))));
}
