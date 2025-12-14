/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123037
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
    var_18 = ((((/* implicit */_Bool) min(((+(0ULL))), (((/* implicit */unsigned long long int) (signed char)-52))))) ? (((/* implicit */unsigned long long int) min((max((var_16), (((/* implicit */unsigned int) (short)-24704)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)96)) ? (((/* implicit */int) (unsigned char)45)) : (((/* implicit */int) (signed char)-93)))))))) : (max((((/* implicit */unsigned long long int) 0U)), (7947104292399245248ULL))));
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 13; i_0 += 2) 
    {
        for (signed char i_1 = 4; i_1 < 14; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */signed char) min((19U), (1740483517U)));
                var_20 |= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0] [(signed char)7])) ? (((/* implicit */int) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) : (arr_1 [i_0 - 3] [(unsigned short)4]))) < (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)237)))))) : (((((/* implicit */int) ((((/* implicit */int) arr_2 [6U])) == (((/* implicit */int) (unsigned char)7))))) + (((/* implicit */int) max(((signed char)2), ((signed char)-15))))))));
            }
        } 
    } 
}
