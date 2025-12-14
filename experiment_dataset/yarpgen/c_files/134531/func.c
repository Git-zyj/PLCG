/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134531
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134531 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134531
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
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */unsigned short) 129355579U);
                arr_5 [i_1] [2] [2] |= ((/* implicit */unsigned int) (((+(0ULL))) % (((/* implicit */unsigned long long int) var_10))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_2 = 0; i_2 < 17; i_2 += 2) 
    {
        for (unsigned int i_3 = 0; i_3 < 17; i_3 += 1) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 2) 
            {
                {
                    arr_13 [i_2] [i_2] [i_4] |= ((/* implicit */signed char) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 1224880753)), (arr_7 [i_2] [i_3]))))));
                    var_15 = ((/* implicit */signed char) (+((((~(16764672724356679421ULL))) ^ (((unsigned long long int) arr_1 [i_2]))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) (_Bool)1))));
    var_17 = ((/* implicit */int) ((((/* implicit */_Bool) ((long long int) var_11))) ? ((~(((((/* implicit */_Bool) var_2)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)115))))))) : (((/* implicit */long long int) 1224880735))));
    var_18 = ((/* implicit */unsigned long long int) 9U);
}
