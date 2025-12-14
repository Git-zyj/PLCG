/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175733
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175733 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175733
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
    var_15 -= ((/* implicit */int) max((9220290685099138849ULL), (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (unsigned short)42078)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (_Bool)1)))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    arr_8 [(signed char)1] = ((/* implicit */signed char) (-(((/* implicit */int) (signed char)-80))));
                    arr_9 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_2 [i_2])) ? (((/* implicit */int) (unsigned short)42078)) : (((/* implicit */int) arr_7 [i_0])))), (((/* implicit */int) var_13))))), (((((/* implicit */unsigned long long int) 4294967295U)) ^ (11701280807488259334ULL)))));
                    arr_10 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned short)13)) : (((/* implicit */int) (signed char)42))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (signed char)119)) : (((/* implicit */int) (signed char)76))))) : (min((((/* implicit */unsigned long long int) (short)6147)), (15002791810814666636ULL)))))) ? (((/* implicit */int) (signed char)6)) : (max(((~(((/* implicit */int) (unsigned short)65535)))), (((((/* implicit */_Bool) -274612011)) ? (((/* implicit */int) (unsigned short)39272)) : (((/* implicit */int) (signed char)37))))))));
                    var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_1 [i_0] [i_1]), (((/* implicit */unsigned short) (signed char)127))))) ? (((/* implicit */unsigned long long int) ((arr_6 [i_2] [i_2] [i_2]) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_5 [i_0] [i_1])))) : (((((/* implicit */_Bool) -274612011)) ? (6745463266221292281ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned short) max((var_0), (((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-39))))) / (((/* implicit */int) var_13)))))));
    var_18 = ((/* implicit */unsigned char) min((((/* implicit */long long int) var_7)), (max((((/* implicit */long long int) var_6)), (var_14)))));
}
