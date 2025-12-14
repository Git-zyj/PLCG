/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147847
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
    for (unsigned char i_0 = 3; i_0 < 14; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                arr_4 [i_0 - 3] [i_1] [i_0] = (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */int) (short)112)) : (((/* implicit */int) (signed char)7))))) ? (((/* implicit */int) ((signed char) (short)1))) : (((/* implicit */int) (short)-31915)))));
                arr_5 [i_1] = ((/* implicit */short) (((~(((/* implicit */int) var_10)))) >= (((/* implicit */int) ((5681612722993852509ULL) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 364029656)) ? (((/* implicit */int) (unsigned char)38)) : (((/* implicit */int) (signed char)-8))))))))));
                var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) arr_1 [i_0] [i_0])), (arr_2 [i_1] [i_0] [i_0]))))))) >= (((((/* implicit */int) min((((/* implicit */short) (unsigned char)45)), ((short)-32752)))) | (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_7)) : (var_5)))))));
            }
        } 
    } 
    var_12 ^= ((/* implicit */long long int) var_0);
    /* LoopSeq 1 */
    for (unsigned int i_2 = 1; i_2 < 13; i_2 += 2) 
    {
        var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) (-(264241152U))))));
        arr_10 [i_2] [(unsigned char)8] = ((/* implicit */_Bool) ((unsigned char) var_3));
    }
}
