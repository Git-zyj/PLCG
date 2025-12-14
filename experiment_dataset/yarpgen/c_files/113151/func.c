/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113151
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113151 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113151
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
    var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((unsigned long long int) var_1))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) 2286154107U)) ? (((/* implicit */unsigned long long int) -7119787867162330976LL)) : (var_11))) == (((unsigned long long int) var_16))))) : ((+(((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (signed char)47)) : (((/* implicit */int) (unsigned short)46408))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (short i_2 = 1; i_2 < 14; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */unsigned int) min(((!(((/* implicit */_Bool) arr_4 [i_0] [i_0])))), (max((arr_0 [i_0] [i_0]), ((!(((/* implicit */_Bool) arr_2 [i_0]))))))));
                    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(max((((/* implicit */unsigned long long int) var_6)), (15558694910421452100ULL)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) 36985754)))) : (((((2808103019298317184LL) >= (((/* implicit */long long int) ((/* implicit */int) var_9))))) ? (((((/* implicit */_Bool) 3720766547U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127))) : (var_2))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) != (arr_8 [i_0] [12LL] [i_1])))))))));
                    var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_4 [(_Bool)1] [i_2 + 1]))))), (min((arr_1 [i_2] [i_2 + 1]), (((/* implicit */unsigned int) arr_4 [(unsigned short)0] [i_2 + 2])))))))));
                    var_21 = ((/* implicit */short) (~(min((((/* implicit */unsigned long long int) arr_1 [i_1] [i_2 + 1])), (((((/* implicit */_Bool) (unsigned short)65535)) ? (arr_8 [i_0] [i_1] [i_2 + 2]) : (((/* implicit */unsigned long long int) arr_1 [i_2] [i_2]))))))));
                }
            } 
        } 
    } 
}
