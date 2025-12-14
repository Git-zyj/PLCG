/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149537
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
    for (short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned int i_2 = 0; i_2 < 16; i_2 += 4) 
                {
                    var_16 *= ((/* implicit */unsigned long long int) min((var_11), ((((~(var_10))) | (((/* implicit */long long int) arr_3 [i_0] [i_0]))))));
                    var_17 = ((/* implicit */unsigned int) max((18446708889337462784ULL), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_7 [i_2] [i_1] [(signed char)6])))) + (max((((/* implicit */unsigned int) 360254524)), (120922048U))))))));
                    var_18 = ((/* implicit */long long int) ((unsigned int) 4174045232U));
                }
                var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) 67108863LL)))))) ? (var_10) : (((/* implicit */long long int) 120922064U))));
            }
        } 
    } 
    var_20 = ((/* implicit */signed char) max((((((unsigned long long int) var_3)) & (((/* implicit */unsigned long long int) -1982679481)))), (((/* implicit */unsigned long long int) ((long long int) 4174045225U)))));
}
