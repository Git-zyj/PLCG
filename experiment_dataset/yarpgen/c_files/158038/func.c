/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158038
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
    var_19 = var_17;
    /* LoopNest 3 */
    for (short i_0 = 3; i_0 < 21; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    var_20 = ((/* implicit */long long int) min((((/* implicit */int) ((((/* implicit */unsigned long long int) arr_5 [i_0] [i_0 + 1] [11ULL] [i_0])) < (var_17)))), ((+(-1553061860)))));
                    var_21 = ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned char)45), (arr_6 [i_2] [i_1] [i_1] [i_0]))))) > (18446744073709551615ULL))) ? (((((/* implicit */_Bool) 0)) ? (3975383342586527833ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) (+((-(0LL))))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */signed char) (_Bool)1);
}
