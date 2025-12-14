/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14492
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 3; i_0 < 20; i_0 += 3) 
    {
        var_14 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_0 + 2] [i_0 + 2])) ? (arr_2 [i_0 - 2] [i_0 + 1]) : (arr_2 [i_0 + 2] [i_0 + 3])));
        var_15 = ((/* implicit */long long int) ((unsigned long long int) var_11));
    }
    var_16 = ((/* implicit */unsigned int) var_0);
    /* LoopNest 3 */
    for (unsigned int i_1 = 3; i_1 < 15; i_1 += 2) 
    {
        for (unsigned short i_2 = 1; i_2 < 15; i_2 += 2) 
        {
            for (short i_3 = 0; i_3 < 16; i_3 += 2) 
            {
                {
                    var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) max((((/* implicit */long long int) ((8589934591LL) == (((/* implicit */long long int) ((/* implicit */int) var_3)))))), (min((arr_4 [i_1 - 2]), (0LL))))))));
                    var_18 += ((/* implicit */signed char) ((((/* implicit */_Bool) 288195191779622912ULL)) ? (-7LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)127)))));
                }
            } 
        } 
    } 
}
