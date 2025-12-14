/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139469
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
    for (long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        var_17 = ((/* implicit */unsigned long long int) var_13);
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 3; i_1 < 21; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    var_18 = ((/* implicit */signed char) ((((((/* implicit */_Bool) 1620980747884924002ULL)) ? (((/* implicit */unsigned long long int) 7082194415461522033LL)) : (15305237357594317081ULL))) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 2; i_3 < 24; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 3; i_4 < 24; i_4 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */short) ((long long int) var_0));
                                var_20 -= ((/* implicit */signed char) (~(((int) 1380015114U))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_21 = ((/* implicit */unsigned int) var_9);
}
