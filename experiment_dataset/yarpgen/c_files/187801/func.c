/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187801
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187801 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187801
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
    var_19 = ((/* implicit */long long int) var_0);
    var_20 = ((/* implicit */int) ((min((((/* implicit */unsigned int) (+(((/* implicit */int) var_16))))), (max((var_3), (((/* implicit */unsigned int) var_9)))))) == (((((/* implicit */_Bool) (-(((/* implicit */int) var_11))))) ? (var_5) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 578899960U)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) var_11)))))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    var_21 += ((/* implicit */_Bool) (unsigned char)44);
                    arr_8 [i_2] [i_1] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((-7354528033794884035LL) + (9223372036854775807LL))) << (((578899960U) - (578899960U))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_3 = 0; i_3 < 24; i_3 += 3) 
    {
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            {
                arr_14 [i_4] [i_4] [i_4] = ((/* implicit */unsigned long long int) (((+(((2817074868750098921ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_3]))))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
                var_22 += ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)8)) << (((var_8) - (267815113578313154ULL)))))) | (max((35958428274786304LL), (((/* implicit */long long int) var_0)))))));
            }
        } 
    } 
    var_23 = ((/* implicit */short) min((((/* implicit */unsigned long long int) (unsigned char)53)), (((((/* implicit */_Bool) var_8)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))));
}
