/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164354
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164354 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164354
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
    var_11 += ((/* implicit */signed char) (+(((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) 17127462878137589454ULL)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_10))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)251)) ? (((/* implicit */int) (unsigned char)128)) : (((/* implicit */int) (short)6334)))))))));
    var_12 = ((/* implicit */short) var_7);
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_4))))) ? (((/* implicit */int) min(((short)-24275), (((/* implicit */short) (unsigned char)253))))) : (((/* implicit */int) var_6))))) : (min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_0 [i_0])), (arr_1 [i_0])))), (min((((/* implicit */unsigned long long int) var_0)), (var_7)))))));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) var_2))));
                    var_14 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (!(arr_3 [i_0] [i_1] [i_2])))), ((((+(15486986118973841257ULL))) / (((var_1) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))))));
                    arr_9 [i_0] [i_1] [i_2] [i_2] = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)0))))) | (min((var_7), (((/* implicit */unsigned long long int) var_2))))))) || (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) min((((/* implicit */short) var_8)), (var_4)))), ((~(arr_6 [i_1])))))));
                    var_15 = ((/* implicit */signed char) (short)16384);
                }
            } 
        } 
    }
}
