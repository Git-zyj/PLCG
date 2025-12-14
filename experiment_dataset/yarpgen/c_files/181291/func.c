/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181291
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
    var_17 = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */long long int) ((/* implicit */int) var_8))) ^ (max((5449745250846652230LL), (-5449745250846652238LL))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (unsigned short i_2 = 1; i_2 < 15; i_2 += 2) 
            {
                {
                    arr_7 [i_2] [i_1] [i_2] [12] = ((/* implicit */unsigned char) (-(max(((-(-5449745250846652226LL))), (((/* implicit */long long int) ((((/* implicit */int) var_8)) + (arr_5 [i_2] [i_1]))))))));
                    var_18 -= ((/* implicit */int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (((~(2726501953227000438ULL))) > (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))))))) : ((~(7940274134393434581ULL)))));
                    var_19 = ((/* implicit */signed char) max((min((((/* implicit */unsigned long long int) (unsigned char)131)), (3439793938383265975ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) 5449745250846652233LL)) != (18446744073709551584ULL))))));
                }
            } 
        } 
    } 
    var_20 *= ((unsigned long long int) (unsigned char)131);
}
